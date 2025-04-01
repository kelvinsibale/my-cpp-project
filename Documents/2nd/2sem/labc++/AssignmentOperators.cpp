#include <iostream>
using namespace std;

main(){
    int a =21;
    int c;

    c = a;
    cout << "c is: " << c << endl;

    c += a;
    cout << "c is: " << c << endl;

    c -= a;
    cout << "c is: " << c << endl;

    c *= a;
    cout << "c is: " << c << endl;

    c /= a;
    cout << "c is: " << c << endl;

    c = 200;
    c %= a;
    cout << "c is: " << c << endl;

    c <<= 2;
    cout << "c is: " << c << endl;

    c >>= 2;
    cout << "c is: " << c << endl;

    c &= 2;
    cout << "c is: " << c << endl;

    c ^= 2;
    cout << "c is: " << c << endl;

    c |= 2;
    cout << "c is: " << c << endl;
    
    return 0;
    cout << &c;
}