#include <iostream> 
using namespace std;
main(){
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d; // (30 * 15 ) /5
    cout << "value of e is: " << e << endl;

    e = ((a + b)*c) /d;
    cout << "value of e is: " <<  e << endl;

    e = (a + b) * (c / d);
    cout << "value of e is: " << e <<  endl;

    e = a + (b * c) / d;
    cout << "value of e is: " << e << endl;

    return 0;
}