#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vct;
        map<string, vector<string>> mp;

        for (auto& str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(str);
        }
        
        for (auto& [k, v] : mp) {
            vct.push_back(v);
        }

        return vct;
    }
};


int main() {
    vector<string> str = { "eat","tea","tan","ate","nat","bat" };
    
    Solution a;

    vector<vector<string>> v = a.groupAnagrams(str);

    for (auto& ch : v) {
        for (auto& ch2 : ch) {
            std::cout << ch2 << ' ';
        }
        std::cout << std::endl;
    }

}