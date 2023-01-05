#include <iostream>
using namespace std;
int main() {
    int num = 10;
    int &cref = num;
    int cv = num;
    cv++;
    cout << "After passing the value, the value of num is " << num << endl;
    cref++;
    cout << "After passing by reference, he value of num is " << num << endl;
    return 0;
}