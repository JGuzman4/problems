/*
 * 
 * You are given the following information, but you may prefer to do some research for yourself
 * 
 * 1 Jan 1900 was a Monday.
 * Thirty days has September,
 * April, June and November.
 * All the rest have thirty-one,
 * Saving February alone,
 * Which has twenty-eight, rain or shine.
 * And on leap years, twenty-nine.
 * A leap year occurs on any year evenly divisible by 4,
 * but not on a century unless it is divisible by 400.
 *
 * How many Sundays fell on the first of the month during the 
 * twentieth century (1 Jan 1901 to 31 Dec 2000)?
 *
 *
*/
#include<iostream>
#include<string> 
#include<vector> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;


int main(){
  

  long int total = 0;
  string days[] = {"Mon", "Tues", "Wed", "Thurs", "Fri", "Sat", "Sun"};
  long int day = 7;

  for (unsigned int i = 1901; i < 2001; i++){
    for (unsigned int j = 1; j < 13; j++){
      if (j == 2){
        if (i&4 == 0 && i != 2000){
          for (unsigned int k = 0; k < 29; k++){
            day++;
            if (days[day%7] == "Sun" && k == 0)
              total++;
          }
        }
        else {
          for (unsigned int k = 0; k < 28; k++){
            day++;
            if (days[day%7] == "Sun" && k == 0)
              total++;
          }
        }
      }
      else if (j == 4 || j == 6 || j == 9 || j == 11){
        for (unsigned int k = 0; k < 30; k++){
          day++;
          if (days[day%7] == "Sun" && k == 0)
            total++;
        }
      }
      else {
        for (unsigned int k = 0; k < 31; k++){
          day++;
          if (days[day%7] == "Sun" && k == 0)
            total++;
        }
      }
    }
  }
  cout << total << endl;

  return 0;
}
