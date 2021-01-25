TAG := problems
SUBDIRS := $(sort $(dir $(wildcard euler/*/)))
LANGUAGES := cpp java golang python javascript

.PHONY: solve docker euler

solve: docker
	@for i in $(LANGUAGES); do \
		docker run $(TAG):$$i make euler lang=$$i; done

problem: docker
	@for i in $(LANGUAGES); do \
		docker run $(TAG):$$i make -C euler/problem$(problem)/$$i; done

docker:
	@for i in $(LANGUAGES); do \
		docker build -t $(TAG):$$i -f docker/$$i/Dockerfile .; done

euler:
	@for i in $(SUBDIRS); do \
		(cd $$i/$(lang); make); done

clean:
	@for i in $(SUBDIRS); do \
		(cd $$i/$(lang); make clean); done
