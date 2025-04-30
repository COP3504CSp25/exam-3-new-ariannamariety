#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    //implement your function here
    float max = 0.0;
    
    for (auto iter = data.begin(); iter != data.end(); ++iter) {
        std::vector<float> current = data.at(search_term);
        max = current.at(0);
        for (size_t i = 0; i < current.size(); i++) {
            if (current.at(i) > max) {
                max = current.at(i);
            }
        }
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    std::map<std::string, float> returnMap;
    for (auto iter = in_map.begin(); iter != in_map.end(); ++iter) {
        returnMap[iter->first] = consultMax(iter->first, in_map);
    }

    return returnMap;
    
}