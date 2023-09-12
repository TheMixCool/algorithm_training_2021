#include <iostream>
#include <vector>

int main(){
	std::vector<int> vct;
	int temp = 0;

	while(temp != -2000000000){
		std::cin >> temp;
		vct.push_back(temp);
	}

	int check = 1;

	for(int i = 0; i != vct.size() - 1; ++i){
		if(vct.at(i) == vct.at(i+1)){
			check++;
		}
	}
	if(check == vct.size()-1){
		std::cout << "CONSTANT" << std::endl;
		return 0;
	}

	check = 1;

	for(int i = 0; i != vct.size() - 1; ++i){
		if(vct.at(i) < vct.at(i+1)){
			check++;
		}
	}
	if(check == vct.size()-1){
		std::cout << "ASCENDING" << std::endl;
		return 0;
	}

	check = 1;

	for(int i = 0; i != vct.size() - 1; ++i){
		if(vct.at(i) <= vct.at(i+1)){
			check++;
		}
	}
	if(check == vct.size()-1){
		std::cout << "WEAKLY ASCENDING " << std::endl;
		return 0;
	}

	check = 1;

	for(int i = 0; i != vct.size() - 1; ++i){
		if(vct.at(i) > vct.at(i+1)){
			check++;
		}
	}
	if(check == vct.size()){
		std::cout << "DESCENDING" << std::endl;
		return 0;
	}

	check = 1;

	for(int i = 0; i != vct.size() - 1; ++i){
		if(vct.at(i) >= vct.at(i+1)){
			check++;
		}
	}

	if(check == vct.size()){
		std::cout << "WEAKLY DESCENDING " << std::endl;
		return 0;
	}

	std::cout << "RANDOM" << std::endl;
	return 0;


}