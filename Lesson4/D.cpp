#include <iostream>
#include <map>

int main(){
    int count = 0;
    std::cin >> count;
    
    std::map<int,int> mp;

    for(int i = 0; i != count; ++i){
        int temp;
        std::cin >> temp;
        mp[i] = temp;
    }

    int nums;
    std::cin >> nums;

    for(int i = 0; i != nums; ++i){
        int temp;
        std::cin >> temp;
        mp[temp-1]--;
    }

    for(auto & [k,v] : mp){
        if(v < 0)
            std::cout << "YES" << std:: endl;
        else
            std::cout << "NO" << std:: endl;
    }
    return 0;
}