#pragma once

#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

int orangesRotting(std::vector<std::vector<int>>& grid);
int islandPerimeterBFS(std::vector<std::vector<int>>& grid);
int islandPerimeterMath(std::vector<std::vector<int>>& grid);
int ladderLength(const std::string& beginWord, const std::string& endWord, std::vector<std::string>& wordList);
std::vector<std::vector<int>> updateMatrix(std::vector<std::vector<int>>& matrix);
int maxDistance(std::vector<std::vector<int>>& grid);
int shortestPathBinaryMatrix(std::vector<std::vector<int>>& grid);