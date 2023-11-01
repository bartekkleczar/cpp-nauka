#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main(){
    using std::cout;

    text_t firstName = "Bartek";
    number_t age = 16;
    cout << firstName << '\n';
    cout << age << '\n';


    return 0;
}