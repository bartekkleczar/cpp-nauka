#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main3(){
    using namespace first;
    using std::string;
    using std::cout;
    //using namespace std;

    string name = "Bartek";

    cout << x << second::x << name;

    return 0;
}