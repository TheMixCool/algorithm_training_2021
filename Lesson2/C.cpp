#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){
    int count = 0;
    std::cin >> count;
    std::vector<int> vct;
    for(int i = 0; i != count; ++i){
        int temp = 0;
        std::cin >> temp;
        vct.push_back(temp);
    }

    int var = 0;
    std::cin >> var;

    int minDiff = std::max(vct.at(0), vct.at(vct.size()-1));

    for(auto &val : vct){
        if(val == var){
            std::cout << var << std::endl;
            return 0;
        }
        if(std::abs(var - val) < std::abs(var - minDiff)){
            minDiff = val;
        }
    }
    std::cout << minDiff << std::endl;
    return 0;
}