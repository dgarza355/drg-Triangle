// drg-Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// By: David Garza
// Date: 20200223
// Description: Checking if three values create a right triangle.

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
   // Variables
   int intNumber1 = 0;
   int intNumber2 = 0;
   int intNumber3 = 0;
   bool isRightTriangle = true;

   std::cout << "Please enter three values to see if your triangle is a right triangle!" << std::endl; 
   (isRightTriangle ? true : false);

   // Input
   std::cout << "\nPlease enter the value for A: ";
   std::cin >> intNumber1;
   std::cout << "\nPlease enter the value for B: ";
   std::cin >> intNumber2;
   std::cout << "\nPlease enter the value for C: ";
   std::cin >> intNumber3;

   // Processing
   if ((intNumber3 * intNumber3) == intNumber1 * intNumber1 + intNumber2 * intNumber2)
   {
   isRightTriangle = true;
   std::cout << "\nYour triangle is a right triangle!" << std::endl;
   }
   else 
   {
   isRightTriangle = false;
   std::cout << "\nYour triangle is NOT a right triangle!" << std::endl;
   }
   return 0;
}
