#include <iostream>
using namespace std;

int main(){
    int userInput;

    while(true){
    cout << "enter an integer between 5 and 6";
    cin >> userInput;

        if(cin.fail() || userInput < 5 || userInput > 10){
            cin.clear(); // clears the error flag
            cin.ignore(10000, '\n'); //discard invalid input
            cout << "you entered ( " << userInput << " ) enter a number between 5 and 10";
        }else{
            break;
        }

    }
     cout << "your number(" << userInput << ") has beesn accepted" << endl;
}