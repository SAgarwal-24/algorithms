#pragma once

#include <vector>
#include <unordered_map>

int fib(int N);
std::vector<int> twoSum(std::vector<int>& nums, int target);
int coinChange(std::vector<int>& coins, int amount);
int minPathSum(std::vector<std::vector<int>>& grid);
int minPathSumSpaceOptimal(std::vector<std::vector<int>>& grid);
int robRecursive(std::vector<int>& nums);
int minCostClimbingStairs(std::vector<int>& cost);
int climbStairs(int n);
int uniquePaths(int m, int n);
int numDecodings(std::string s);