#include <iostream>
#include <cmath>

int main() {
	int a = 0, b = 0, c = 0;
	std::cin >> a >> b >> c;
	if (c < 0) {
		std::cout << "NO SOLUTION" << std::endl;
		return 0;
	}
    if(a == 0){
        if(b >= 0 && c*c == b){
            std::cout << "MANY SOLUTIONS" << std::endl;
		    return 0;
        }
        if(b >= 0 && c*c != b || b <= 0 && c != 0){
            std::cout << "NO SOLUTION" << std::endl;
		    return 0;
        }
    }
	int res = (c * c - b) / a;
    
    if (std::sqrt(a * res + b) != c) {
		std::cout << "NO SOLUTION" << std::endl;
		return 0;
	}
	std::cout << res;
    return 0;
}