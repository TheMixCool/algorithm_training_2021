#include <iostream>
#include <map>

int main(){
    int count = 0;
    std::cin >> count;
    
    std::map<long long,long long> mp;

    for(int i = 0; i != count; ++i){
        long long w, h;
        std::cin >> w >> h;
        if(mp.find(w) == mp.end()){
            mp[w] = h;
        }else{
            if(mp[w] < h)
                mp[w] = h;
        }
    }

    long long res = 0;
    for(auto & [k,v] : mp)
        res +=v;

    std::cout << res;
    return 0;
}
    