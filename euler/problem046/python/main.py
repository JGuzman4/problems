#
# It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.
#
# It turns out that the conjecture was false.
#
# What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?
#
#
#
def is_prime(num):
    for i in range(3,int(num/2)):
        if num % i == 0:
            return False
    return True

num = 3
while(num < 1000): 
    num = num + 2 
    if is_prime(num):
        print("%d is prime!" % num)
