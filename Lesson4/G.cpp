#include <iostream>
#include <map>
#include <string>

std::string GetChoice(std::string& str) {
    std::string res;

    for (int i = 0; i != str.size(); ++i) {
        if (str.at(i) == ' ')
            break;
        res += str.at(i);
    }

    return res;
}

std::string GetBalanceName(std::string& str) {
    std::string res;
    int i = 1;
    while (str.at(i - 1) != ' ') {
        i++;
    }
    for (i; i != str.size(); ++i) {
        res += str.at(i);
    }

    return res;
}

std::string GetActionName(std::string& str) {
    std::string res;

    for (int i = 0; i != str.size(); ++i) {
        if (str.at(i) == ' ') {
            i++;
            do {
                res += str.at(i++);
            }while (str.at(i) != ' ');
            break;
        }
    }

    return res;
}

std::string GetTransferTarget(std::string& str) {
    std::string res;
    int checkCount = 0;
    for (int i = 0; i != str.size(); ++i) {
        if (checkCount == 2 && str.at(i) != ' ') {
            res += str.at(i);
        }
        if (str.at(i) == ' ') {
            checkCount++;
        }
    }

    return res;
}

void Income(std::map<std::string, long long>& balance, double a) {
    for (auto& [k, v] : balance) {
        if (v > 0)
            v += v * (a/100);
    }
}

long long GetCount(std::string& str) {
    std::string res;
    for (int i = 0; i != str.size(); ++i) {
        if (isdigit(str.at(i)) || str.at(i) == '-')
            res += str.at(i);
    }

    return std::stoi(res);
}

int main() {

    std::map<std::string, long long> balance;

    std::string temp;

    while (getline(std::cin, temp)) {
        std::string choice = GetChoice(temp);

        if (choice == "DEPOSIT") {
           balance[GetActionName(temp)] += GetCount(temp);   
        }

        if (choice == "INCOME") {
            Income(balance, GetCount(temp));
        }
        if (choice == "BALANCE") {
            if (balance.find(GetBalanceName(temp)) != balance.end()) {
                std::cout << balance[GetBalanceName(temp)] << std::endl;
            }
            else {
                std::cout << "ERROR" << std::endl;
            }
        }
        if (choice == "TRANSFER") {
            balance[GetActionName(temp)] -= GetCount(temp);
            balance[GetTransferTarget(temp)] += GetCount(temp);
        }
        if (choice == "WITHDRAW") {
            balance[GetActionName(temp)] -= GetCount(temp);
        }
    }

    return 0;
}