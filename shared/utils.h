#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <string>
#include <sstream>

std::vector<int> split_ints(const std::string& puzzle) {
        std::vector<int> res;
            std::string line;
                std::stringstream ss{puzzle};
                    while (std::getline(ss, line)) {
                                if (line == "\n") continue;
                                        if (line == "") continue;
                                                res.push_back(std::stoi(line));
                                                    }

                        return res;
}

std::vector<std::string> split(const std::string& puzzle) {
        std::vector<std::string> res;
            std::string line;
                std::stringstream ss{puzzle};
                    while (std::getline(ss, line)) {
                                if (line == "\n") continue;
                                        if (line == "") continue;
                                                res.push_back(line);
                                                    }

                        return res;
}

#endif /*UTILS_H*/
