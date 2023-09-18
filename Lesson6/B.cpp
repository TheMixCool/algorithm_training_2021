#include <iostream>
#include <vector>

void BinFind(std::vector<long long> &v, long long  k){
    long long  left = 0;
    long long  right = v.size() - 1;
    long long  middle = (left + right)/2;

    while(left < right && v.at(middle) != k){
        if(v.at(middle) < k){
            left = middle + 1;
            middle = (left + right)/2;
        }else{
            right = middle;
            middle = (left + right)/2;
        }
    }
    if(v.at(middle) == k) {
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
    
}

int main(){
    int n = 0, k = 0;
    std::cin >> n >> k;

    std::vector<long long> v1;
    for(int i = 0; i != n; ++i){
        int temp;
        std::cin >> temp;  
        v1.push_back(temp);
    }

    std::vector<long long> v2;
    for(int i = 0; i != k; ++i){
        int temp;
        std::cin >> temp;  
        v2.push_back(temp);
    }

    for(auto & c : v2){
        BinFind(v1, c);
    }
    return 0;
}