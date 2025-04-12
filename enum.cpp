#include <iostream>
#include <string>

using namespace std;
 
enum Months{
   January,
   February,
   March,
   April,
   May
};
int main(){
   string x;
   enum Months First = January;
   enum Months Second = February;
   enum Months Third = April;
   cout << "enter month position";
   cin >> x;
   cout << "month is" << x;
  
}