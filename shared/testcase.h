#ifndef TESTCASE_H
#define TESTCASE_H

#include <string>
#include <map>

struct Testcase{
  const std::string puzzle;
  const std::map<std::string,int> parameters;
  const int lvl1solution;
  const int lvl2solution;
};

#endif /* TESTCASE_H */
