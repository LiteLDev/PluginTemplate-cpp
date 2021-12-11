#pragma once
#include "../Global.h"
#include <vector>
#include <string>

// std::string -> std::wstring
LIAPI std::wstring str2wstr(std::string str);

// std::wstring -> std::string
LIAPI std::string wstr2str(std::wstring wstr);

// "2021-03-24"  ->  ["2021", "03", "24"]  (use '-' as split pattern)
LIAPI std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern);

// StartsWith("helloworld", "hello") == true
LIAPI bool StartsWith(const std::string& str, const std::string& start);

// EndsWith("helloworld","world") == true
LIAPI bool EndsWith(const std::string& str, const std::string& end);