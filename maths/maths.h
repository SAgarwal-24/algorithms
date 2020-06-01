#pragma once

#include <vector>
#include <set>
#include <algorithm>
#include <string>
#include <unordered_map>

bool isHappy(int n);
std::vector<int> plusOne(std::vector<int>& digits);
int reverse(int x);
int countPrimes(int n);
bool isUgly(int num);
std::string addBinary(std::string a, std::string b);
int gcd(int a,int b); /// Greatest common divisor.
int lcm(int a,int b); /// Least common multiple.
bool checkStraightLine(std::vector<std::vector<int>>& coordinates);
bool isPerfectSquare(int num);
std::vector<int> sumZero(int n);
int triangleNumber(std::vector<int>& nums);
int countNumbersWithUniqueDigits(int n);
int maxAbsValExpr(std::vector<int>& arr1, std::vector<int>& arr2);
std::vector<std::string> fizzBuzz(int n);
bool isPalindrome(int x);
std::string intToRoman(int num);
int romanToInt(std::string s);
bool isPowerOfThree(int n);
std::string multiply(std::string num1, std::string num2);
std::string numberToWords(int num);
std::vector<int> selfDividingNumbers(int left, int right);
double myPow(double x, int n);
std::string fractionToDecimal(int numerator, int denominator);
std::vector<std::vector<int>> generate(int numRows);