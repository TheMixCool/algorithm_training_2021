#include <iostream>
#include <vector>

int main() {
	
	std::vector<long long> v;
	long long temp = 0, min1 = 0, min2 = 0, max1 = 0, max2 = 0;   
	while(std::cin >> temp){
		v.push_back(temp);
	}

	if (v.size() == 2) {
		if (v.at(0) >= v.at(1)) {
			std::cout << v.at(1) << ' ' << v.at(0);
			return 0;
		}
		else {
			std::cout << v.at(0) << ' ' << v.at(1);
			return 0;
		}
	}

	for (auto ch : v) {
		if (ch < min1 && ch < min2) {
			min2 = min1;
			min1 = ch;
		}
		else if (ch < min2 && ch >= min1) {
			min2 = ch;
		}
		else if (ch > max1 && ch > max2) {
			max2 = max1;
			max1 = ch;
		}
		else if (ch > max2 && ch <= max1) {
			max2 = ch;
		}
	}
    
	if (static_cast<unsigned long long>(max1 * max2) >= static_cast<unsigned long long>(min1 * min2)) {
		std::cout  << max2 << ' ' << max1 << std::endl;
	}
	else {
		std::cout <<  min1 << ' ' << min2 << std::endl;
	}

	return 0;
}