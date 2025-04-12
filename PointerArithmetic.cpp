#include <iostream>
using namespace std;

int main(){
    int* pointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of the first element to pointer
    pointer = numbersArray;

    //output the address of the first element
    cout << "address at pPointer: " << pointer << endl;
    cout << "address of numbersArray[0]: " << numbersArray << endl;

    //output the value of the first element using the pointer and indirection
    cout << "value at pPointer: " << *pointer << endl;

    //this outputs the value of the second element
    cout << "value at ++pointer: " << *(++pointer) << endl;

    

    //this output the value of the first element
    cout << "value at pPOinter++: " << *(pointer++) << endl;
    return 0;
}