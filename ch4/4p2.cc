#include <iostream>
#include <vector>
#include <thread>
void print_prime(int p);

int main() {
    int a;
    std::cout << "prime printer" << std::endl;
    std::cout << "input : ";
    std::cin >> a;

    std::thread t(print_prime, a);
    t.join();
    return 0;
}

void print_prime(int p) {
    if(p <= 1) {
        std::cout <<"input is in wrong range ";
        return;
    }

    std::vector<int> prime_vec;

    for(int i = 2; i<=p; ++i) {
        bool is_prime = true;
        for(auto &elem:prime_vec) {
            if(i % elem == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            prime_vec.push_back(i);
        }
    }

    for(auto &elem:prime_vec) {
        std::cout << elem << ", ";
    }
    std::cout << std::endl;
}