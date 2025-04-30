#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

std::map<std::string, int> loadTrafficData(const std::string& filename) {
  //implement your function here!
  std::ifstream file(filename);
  if (!file.is_open()) {
    std::cout << "-1" << std::endl;
  }
  std::string line;
  
}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) {
    //implement your function here!
}