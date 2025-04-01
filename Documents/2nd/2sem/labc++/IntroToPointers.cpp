#include <iostream>
using namespace std;
int main(){
     
    int* pPointer = nullptr;

    int integerVar = 5;
    // assign pointer to address of object
    pPointer = &integerVar;

    //output the value of integerVar
    cout << "integerVar: " << integerVar << endl;
    //outputs the address of inetegrVar
    cout << "Address of integerVar" << &integerVar << endl;

    //outputs the address assigned to pPointer
    cout << "pPointer " << pPointer << endl;

    //outputs the address of pPointer
    cout << "address of pPointer" << &pPointer << endl;

    return 0;
    

}