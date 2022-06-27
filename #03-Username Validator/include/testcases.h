#ifndef TESTCASES_H
#define TESTCASES_H

#include <string>
#include <iostream>
#include <regex>

bool lengthTest(std::string username);
bool noSpecialCharsTest(std::string username);
bool noSpaceTest(std::string username);
bool firstCharTest(std::string username);
bool lastCharTest(std::string username);
bool upperCaseTest(std::string username);
bool lowerCaseTest(std::string username);
bool numericTest(std::string username);

#endif