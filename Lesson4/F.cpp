#include <iostream>
#include <map>
#include <string>

std::string GetKey(std::string &str){
    std::string res;

    for(int i = 0; i != str.size(); ++i){
        if(str.at(i) == ' ')
            break;
        res += str.at(i);
    }

    return res;
}

std::string GetPosition(std::string &str){
    std::string res;

    for(int i = 0; i != str.size(); ++i){
        if(str.at(i) == ' '){
            do{
                res +=str.at(++i);
            }while (str.at(i) != ' ');
        }
    }
    return res;
}

long long GetCount(std::string &str){
    std::string res;
    for(int i = 0; i != str.size(); ++i){
        if(isdigit(str.at(i)))
            res += str.at(i);
    }

    return std::stoi(res);
}

int main(){
    
    std::map<std::string, std::map<std::string,long long>> mp;
    std::string temp = " ";
    
    while (getline(std::cin, temp))
    {
        mp[GetKey(temp)][GetPosition(temp)]+= GetCount(temp);
    }
    
    for(auto & [f,m] : mp){
        std::cout << f << ':' << std::endl;
        for(auto& [p,c] : m){
            std::cout << p << ' ' << c << std::endl;
        }
    }
    return 0;
} 