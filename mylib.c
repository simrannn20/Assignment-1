#include <stdio.h>
#include <math.h>
#include "mylib.h"

// Function to reverse digits of a number
int reverseDigits(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    return r;
}

// Function to check if number is Armstrong
int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return (sum == num);
}

// Function to check if number is Adams
int isAdams(int num) {
    int sq = num * num;
    int revNum = reverseDigits(num);
    int revSq = revNum * revNum;
    return (reverseDigits(sq) == revSq);
}

// Function to check if number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to check if number is prime and palindrome
int isPrimePalindrome(int num) {
    int rev = reverseDigits(num);
    if (num == rev && isPrime(num))
        return 1;
    return 0;
}
