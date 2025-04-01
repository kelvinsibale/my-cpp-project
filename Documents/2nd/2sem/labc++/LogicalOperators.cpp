#include <iostream>
using namespace std;
main(){
    int a = 21;
    int b = 10;
    int c;
    if(a && b){
        cout << "line 1 -- condition is true" << endl;
    }
    if (a || b){
        cout << "line 2 -- condition is true" << endl;
    }
    a = 0;
    b = 10;
    
    if(a && b){
        cout << "line 3 -- condition is true" << endl;

    }else{
        cout << "line 4 -- condition is not true" << endl;
    }
    if (!(a && b)){
        cout << "line 5 -- condition is true" << endl;
    }
    return 0;
}