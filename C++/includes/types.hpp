//
// Created by yuant on 1/30/2024.
//

#ifndef CELLUNIVERSE_TYPES_HPP
#define CELLUNIVERSE_TYPES_HPP


#include <string>
#include <opencv2/opencv.hpp>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include <map>
//#include "Sphere.hpp"

enum argKeywords {
    ff = 1,
    lf,
    input,
    output,
    config,
    initial,
    track
};

typedef std::string Path;
typedef cv::Mat Image;
typedef std::vector<cv::Mat> ImageStack;
typedef std::pair<double, std::function<void(bool)>> CostCallbackPair;
typedef std::function<void(bool)> CallBackFunc;
typedef std::unordered_map<std::string, ImageStack> ParamImageMap;
typedef std::unordered_map<std::string, float> ParamValMap;
//typedef std::map<Path, std::vector<Sphere>> CellMap;
typedef double Cost;
typedef std::vector<float> Corner;
typedef std::pair<Corner, Corner> MinBox;
namespace fs = std::filesystem;
typedef std::vector<fs::path> PathVec;

#endif //CELLUNIVERSE_TYPES_HPP
