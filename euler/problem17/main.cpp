/*
 * 
 * If the numbers 1 to 5 are written out in words: one, two, three, four, five, then 
 * there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
 *
 * If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
 * how many letters would be used?
 *
 *
 *
*/
#include<iostream>
#include<string> 
#include<cmath>
#include<math.h>
#include<stdlib.h>
using namespace std;


int main(){

  int total = 0;
  string numString = "";
  string numWord = "";
  for (unsigned int i = 1; i < 1001; i++){
    numWord = "";
    numString = to_string(i);
    if (i < 10){
      switch(numString[0]){
        case '1': numWord += "one"; break;
        case '2': numWord += "two"; break;
        case '3': numWord += "three"; break;
        case '4': numWord += "four"; break;
        case '5': numWord += "five"; break;
        case '6': numWord += "six"; break;
        case '7': numWord += "seven"; break;
        case '8': numWord += "eight"; break;
        case '9': numWord += "nine"; break;
      }
    }
    if (i >= 10 && i < 20){
      if (numString == "10") numWord += "ten";
      if (numString == "11") numWord += "eleven";
      if (numString == "12") numWord += "twelve";
      if (numString == "13") numWord += "thirteen";
      if (numString == "14") numWord += "fourteen";
      if (numString == "15") numWord += "fifteen";
      if (numString == "16") numWord += "sixteen";
      if (numString == "17") numWord += "seventeen";
      if (numString == "18") numWord += "eighteen";
      if (numString == "19") numWord += "nineteen";
    }
    if (i > 19 && i < 100){
      switch(numString[0]){
        case '2': numWord += "twenty"; break;
        case '3': numWord += "thirty"; break;
        case '4': numWord += "forty"; break;
        case '5': numWord += "fifty"; break;
        case '6': numWord += "sixty"; break;
        case '7': numWord += "seventy"; break;
        case '8': numWord += "eighty"; break;
        case '9': numWord += "ninety"; break;
      }
      switch(numString[1]){
        case '1': numWord += "one"; break;
        case '2': numWord += "two"; break;
        case '3': numWord += "three"; break;
        case '4': numWord += "four"; break;
        case '5': numWord += "five"; break;
        case '6': numWord += "six"; break;
        case '7': numWord += "seven"; break;
        case '8': numWord += "eight"; break;
        case '9': numWord += "nine"; break;
      }
    }
    if (i >= 100 && i < 1000){
      if (i == 100) numWord = "onehundred";
      else if (i == 200) numWord += "twohundred";
      else if (i == 300) numWord += "threehundred";
      else if (i == 400) numWord += "fourhundred";
      else if (i == 500) numWord += "fivehundred";
      else if (i == 600) numWord += "sixhundred";
      else if (i == 700) numWord += "sevenhundred";
      else if (i == 800) numWord += "eighthundred";
      else if (i == 900) numWord += "ninehundred";
      else {
        switch(numString[0]){
          case '1': numWord += "one"; break;
          case '2': numWord += "two"; break;
          case '3': numWord += "three"; break;
          case '4': numWord += "four"; break;
          case '5': numWord += "five"; break;
          case '6': numWord += "six"; break;
          case '7': numWord += "seven"; break;
          case '8': numWord += "eight"; break;
          case '9': numWord += "nine"; break;
        }
        numWord += "hundredand";
        switch(numString[1]){
          case '0':
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '1':
            if (numString[2] == '0') numWord += "ten";
            else {
              switch(numString[2]){
                case '1': numWord += "eleven"; break;
                case '2': numWord += "twelve"; break;
                case '3': numWord += "thirteen"; break;
                case '4': numWord += "fourteen"; break;
                case '5': numWord += "fifteen"; break;
                case '6': numWord += "sixteen"; break;
                case '7': numWord += "seventeen"; break;
                case '8': numWord += "eighteen"; break;
                case '9': numWord += "nineteen"; break;
              }
            } break;
          case '2':
            numWord += "twenty"; 
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '3':
            numWord += "thirty";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '4':
            numWord += "forty";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '5':
            numWord += "fifty";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '6':
            numWord += "sixty";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '7':
            numWord += "seventy";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '8':
            numWord += "eighty";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
          case '9':
            numWord += "ninety";
            switch(numString[2]){
              case '1': numWord += "one"; break;
              case '2': numWord += "two"; break;
              case '3': numWord += "three"; break;
              case '4': numWord += "four"; break;
              case '5': numWord += "five"; break;
              case '6': numWord += "six"; break;
              case '7': numWord += "seven"; break;
              case '8': numWord += "eight"; break;
              case '9': numWord += "nine"; break;
            } break;
        }
      }
    }
    total += numWord.length();
    //cout << numWord << endl;
  }
  numWord = "onethousand";
  total += numWord.length();
  cout << total << endl;

  return 0;
}

