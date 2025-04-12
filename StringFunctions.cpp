#include <iostream>
#include <cstring>

using namespace std;

int main(){

char str1[10] = "hello";
char str2[10] = "world";
char str3[10];
int len;

strcpy(str3, str1); // copy str1 into str3
cout << "strcpy(str3, str1) : " << str3 << endl;

strcat (str1, str2); // concatenates str1 and str2
cout << "strcat(str1, str2) : " << str1 << endl;

len = strlen(str1); // total length after concatenation
cout << "strlen(str1) : " << len << endl;

return 0;

}