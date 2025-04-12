#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream MyFile("exampleFile.txt");
    if (MyFile.is_open()){
        MyFile << "this is a line. \n";
        MyFile << "this is another line. \n";
        MyFile.close();
    }
    else{
        cout << "unable to open file";
    }
    return 0;

}