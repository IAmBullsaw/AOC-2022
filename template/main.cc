#include <functional>
#include "../shared/execution.h"
#include "./testcases.h"
#include "../shared/utils.h"

int solutionLvl1(const std::string& puzzle, const std::map<std::string, int>& parameters) {

  return 0;
}

int solutionLvl2(const std::string& puzzle, const std::map<std::string,int>& parameters) {

  return 0;
}

std::map<std::string,int> lvl1Parameters;
std::map<std::string,int> lvl2Parameters;

int main() {
   Execution::run(solutionLvl1, lvl1Parameters, solutionLvl2, lvl2Parameters, testcases);

   return 0;
}
