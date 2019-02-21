/*
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *
 *
*/

import java.io.*;
import java.math.*;

public class Main {

  public static void main(String args[]){

    long largest = 0L;
    long number = 600851475143L;

    for (long i = 4L; i < number/2; i++){
      if (number%i == 0 && isPrime(i)) {
        //largest = i;
        largest = i;
        System.out.println(largest);
      }
    }
    System.out.println(largest);
  }

  public static boolean isPrime(long n){
    for (long i = 3L; i < n; i += 2){
      if (n%i == 0)
        return false;
    }
    return true;
  }
}
