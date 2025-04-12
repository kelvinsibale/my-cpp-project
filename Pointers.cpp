#include <iostream>
using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    //assign pointer wiht the address of firstValue
    pPointer = &firstValue;
    *pPointer = 10; //indirection

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';
    return 0;
}