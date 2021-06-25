#include <iostream>
#include <vector>
#include <algorithm>

void print(const int& i)
{
    std::cout << i << std::endl; 
}

int main()
{
    std::vector<int> v1;
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(9);
    v1.push_back(10);

    std::vector<int> v2 {9, 2, 3, 1, 2};
    
//    auto print = [] (const int& i) { std::cout << i << " ";};
    for_each(v1.cbegin(), v1.cend(), print);
    std::cout << std::endl;

    v1.insert(v1.end(), v2.begin() + 1, v2.end() - 2);
    for (auto elem : v1){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
