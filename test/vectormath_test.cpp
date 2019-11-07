#include <iostream>
#include <vector>

#include "../include/vectormath.h"

int main(void){
    std::vector<double> vecD;
    std::vector<int> vecI;
    std::vector<float> vecF;
    std::vector<char> vecC;

    for(double i = 1; i < 7; ++i){
        vecD.push_back(i);
        vecI.push_back(i);
        vecF.push_back(i);
    }
    vecC.push_back('a');
    vecC.push_back('b');
    vecC.push_back('c');
    vecC.push_back('d');
    vecC.push_back('e');
    vecC.push_back('f');

    for(size_t i = 0; i < vecD.size(); ++i){
        std::cout << vecD.at(i) << std::endl;
        std::cout << vecI.at(i) << std::endl;
        std::cout << vecF.at(i) << std::endl;
        std::cout << vecC.at(i) << std::endl;
        std::cout << std::endl;
    }

    std::cout << vectormath::mean(vecD.cbegin(), vecD.cend(), static_cast<double>(0.0)) << std::endl;
    std::cout << vectormath::mean(vecI.cbegin(), vecI.cend(), 0) << std::endl;
    std::cout << vectormath::mean(vecF.cbegin(), vecF.cend(), static_cast<float>(0.0)) << std::endl;
    std::cout << vectormath::mean(vecC.cbegin(), vecC.cend(), 'c') << std::endl;

    return 0;
}
