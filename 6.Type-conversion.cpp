#include <iostream>
using std::cout;

int main(){

    //double x = (int) 3.14;

    //char x = 100; //ASCII
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions *100;

    cout << score << "%";

    return 0;
}
