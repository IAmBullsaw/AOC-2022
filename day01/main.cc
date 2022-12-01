#include <functional>
#include <algorithm>
#include <iostream>
#include "../shared/execution.h"
#include "./testcases.h"
#include "../shared/utils.h"

int solutionLvl1(const std::string& puzzle, const std::map<std::string, int>& parameters) {

  std::vector<int> elves{};

  int sum{0};
  std::string line;
  std::stringstream ss{puzzle};
  while (std::getline(ss, line)) {
    if (line == "\n") {
      elves.push_back(sum);
      sum = 0;
    } else {
      sum += stoi(line);
    }
  }

  std::sort(begin(elves), end(elves));

  return elves.at(elves.size()-1);
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
