#include <iostream>
using std::cout;

int main(){

    int students = 20;

    students = students + 2;
    cout << students << '\n';

    students = students - 2;
    cout << students << '\n';

    students = students * 2;
    cout << students << '\n';

    students = students / 2;
    cout << students << '\n';

    students = students / 3;
    cout << students << '\n';

    students = 20;

    double remainder = students % 3;

    cout << remainder << '\n';

    return 0;
}