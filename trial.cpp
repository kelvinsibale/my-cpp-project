#include <iostream>
#include "base.h"
#include "traingle.h"
#include "square.h"



using namespace std;

int main (){
  int choice;
  Shape* shape = nullptr;
  cout << "enter your choice" << endl;
  cout << "1. Triangle" << endl;
  cout << " 2.Square" << endl;
  cout << "3. exit" << endl;
  cin >> choice;

  switch (choice){
    case 1:
      shape = new Traingle();
      break;

    case 2:
    shape = new Square();
    break;

    default:
    cout<< "enter valid value" << endl;
    return 1;  
}
  if (shape != nullptr){
    shape->getInput();
    shape->calculateArea();
    delete shape;
  }
 
return 0;
}