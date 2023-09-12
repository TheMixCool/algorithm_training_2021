#include <iostream>
#include <vector>

int main(){
	int counter = 0;
	std::vector<int> vct;
	int tmp = 0;
	while(std::cin >> tmp){
		vct.push_back(tmp);
	}
	if(vct.size() <= 2){
		std::cout << 0 << std::endl;
		return 0;
	}
	for(int i = 1; i != vct.size() - 1; ++i){
		if(vct.at(i) > vct.at(i-1) && vct.at(i) > vct.at(i+1)){
			counter++;
		}
	}
	std::cout << counter << std::endl;
	return 0;
}