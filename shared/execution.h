#ifndef EXECUTION_H
#define EXECUTION_H

#include <functional>
#include <map>
#include <vector>
#include "./testcase.h"

class Execution{
public:
  Execution();

  static void run(std::function<int(const std::string&, const std::map<std::string, int>&)> lvl1, const std::map<std::string, int>& lvl1Parameters,
    std::function<int(const std::string&, const std::map<std::string, int>&)> lvl2, const std::map<std::string, int>& lvl2Parameters,
    const std::vector<Testcase>& testcases);

private:
  static void handle_error(const int& index, const std::string& message, const int& expected, const int& actual);
  static bool run_testcases(std::function<int(const std::string&, const std::map<std::string, int>&)> lvl1, const std::map<std::string, int>& lvl1Parameters,
    std::function<int(const std::string&, const std::map<std::string, int>&)> lvl2, const std::map<std::string, int>& lvl2Parameters,
    const std::vector<Testcase>& testcases);
};

#endif /* EXECUTION_H */
