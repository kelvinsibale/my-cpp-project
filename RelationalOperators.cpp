#include <iostream>
using namespace std;

main(){
    int a = 21;
    int b = 10;
    int c;

    if(a == b){
        cout << "line 1 --- a and b are equal" << endl;
    }
    else{
        cout << "line 1 --- a NOT EQUAL to b" << endl;
    }
    if(a < b){
        cout<< "line 2 --- a is less than b" << endl;
    }else{
        cout << "line 2 --- a NOT LESS THAN b" << endl;
    }
    if(a > b){
        cout << "line 3 --- a is greater than b" << endl;
    }else{
        cout << "line 3 --- a NOT GREATER THAN b" << endl;
    }
    a = 5;
    b = 20;
     if(a <= b){
        cout << "line 4 --- a is less than or equal to b" << endl;
     }else{
        cout << "line 4 --- a NOT LESS THAN OR EQUAL TO b" << endl;
     }
     if(a >= b){
        cout << "line 5 --- a is greater than or equal to b" << endl;
     }else {
        cout << "line 5 --- a NOT GREATER THAN OR EQUAL TO b" << endl;
     }
     return 0;
}
