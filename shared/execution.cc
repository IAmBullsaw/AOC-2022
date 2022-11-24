#include "./execution.h"
#include <iostream>
#include <iterator>
#include <sstream>
#include <functional>

void Execution::run(std::function<int(const std::string&, const std::map<std::string, int>&)> lvl1, const std::map<std::string, int>& lvl1Parameters,
        std::function<int(const std::string&, const std::map<std::string, int>&)> lvl2, const std::map<std::string, int>& lvl2Parameters,
        const std::vector<Testcase>& testcases) {
    if (run_testcases(lvl1, lvl1Parameters, lvl2, lvl2Parameters, testcases)) {

        std::ostringstream std_input;
        std_input  << std::cin.rdbuf();
        std::string puzzle = std_input.str();


        std::cout << "Solving puzzle..." << std::endl;
        auto answerlvl1 = lvl1(puzzle, lvl1Parameters);
        std::cout << "Answer\n" << "    Level 1: " << answerlvl1 << std::endl;
        auto answerlvl2 = lvl2(puzzle, lvl2Parameters);
        std::cout << "    Level 2: " << answerlvl2 << std::endl;

    } else {
        // to be able to automate
        exit(1);
    }
}

bool Execution::run_testcases(std::function<int(const std::string&, const std::map<std::string, int>&)> lvl1, const std::map<std::string, int>& lvl1Parameters,
        std::function<int(const std::string&, const std::map<std::string, int>&)> lvl2, const std::map<std::string, int>& lvl2Parameters,
        const std::vector<Testcase>& testcases) {
    bool all_right{true};
    for (int i = 0; i < testcases.size(); i++) {
        auto testcase = testcases[i];

        int result = lvl1(testcase.puzzle, testcase.parameters);
        if (result != testcase.lvl1solution) {
            handle_error(i, "lvl1", testcase.lvl1solution, result);
            all_right = false;
        }

        result = lvl2(testcase.puzzle, testcase.parameters);
        if (result != testcase.lvl2solution) {
            handle_error(i, "lvl2", testcase.lvl2solution, result);
            all_right = false;
        }
    }
    return all_right;
}

void Execution::handle_error(const int& index, const std::string& message, const int& expected, const int& actual) {
    std::cout << "Testcase " << index+1 << " " << message << " failed. "
        << "Expected: " << expected << " != " << actual << std::endl;

