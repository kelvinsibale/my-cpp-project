#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];

    int * pPointer = nullptr;

    //assign address to the first element to the pointer
    pPointer = numbersArray;
    *pPointer = 10; // assign value to the first element

    /*increment the pointer using pointer arithmentic to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; // assigns to second element

    pPointer = &numbersArray[2];
    *pPointer = 30; // assigns the third one

    /*assign the address of the third element to the pointer*/
    pPointer = numbersArray + 3;
    *pPointer = 40;

    //assigns the adress to the first element to the pointer
    pPointer = numbersArray;

    /*assign a value to the fifth element using indirection and pointer arithmetic*/
    *(pPointer +4) = 50;

    //iterate and output all the elements in the array
    for(int n = 0; n < 5; n++){
        cout << numbersArray[n] <<","; 
    }
    return 0;


}