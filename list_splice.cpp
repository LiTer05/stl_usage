#include <iostream>

#include <list>
#include <string>

int main()
{
    std::list<std::string> dictionary;
    dictionary.push_back("ananas");
    dictionary.push_back("aparat");
    dictionary.push_back("aqaxax");

    dictionary.push_back("chaman");
    dictionary.push_back("cogol");
    dictionary.push_back("Colak");

    std::list<std::string> bword;
    bword.push_back("banana");
    bword.push_back("blinchik");
    bword.push_back("boxk");

    std::list<std::string>::iterator it;

    int i;
    for (it = dictionary.begin(), i = 0; i < 3; ++it, ++i);
    
    dictionary.splice(it, bword);

    for (auto elem : dictionary) {

        std::cout << elem << std::endl;
    }
    return 0;
}
