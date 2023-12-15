#include <stdio.h>
// This program is a basic arithmetic calculator written in C
int main() {
  printf("***** ***** ***** *     *****  ***  *     *****\n*     *   * *   * *     *     *   * *     *\n*     *   * *   * *     *     *   * *     *\n*     *   * *   * *     *     ***** *     *\n*     *   * *   * *     *     *   * *     *\n***** ***** ***** ***** ***** *   * ***** *****\n");
  printf ("           By LameCo, inc. (C) 2023  \n");
  printf("\n");
  printf("Welcome to CoolCalc, where we only do arithmetic and nothing else\nbecause the programmer is too lazy to make a more fully-featured product.\nWhy should I when the pay is $#!T and you already have a calculator on your phone?\nCrap, the boss is coming by, gotta act like I'm doing something!!!\n");
  char op;
  double first, second;
  printf("\n");
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      printf("Congrats, you performed addition,\na basic human function\nthat everyone can do,\nwith the help of a computer...\nI\'m surprised you managed to get this far.\n");
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
      printf("Just as you subtracted these numbers,\nyour social credit has been subtracted for choosing this program over literally anything else.\n");
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
      printf("If you\'ve used this program for anymore than 30 seconds,\nI really suggest you touch some grass\n");
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
      printf("Lets face it: you\'re only doing division because it\'s mildly more\nuber l33t than the other functions of this program,\nbut deep inside you know you\'ll never be good at any math beyond 4th grade\n");
      break;
    /* This here is a handy-dandy little error message for when the user enters something other than one of the case constant,
    but you probably knew that already */
    default:
      printf("INVALID INPUT: USER IS A TWIT!\n");
  }
  
  return 0;
}
