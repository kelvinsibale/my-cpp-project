#include <iostream>
namespace one{
    int exampleVariable;
        void HelloWorld();
}
    
int main(){
 one::exampleVariable = 20;

 one::HelloWorld();

 return 0;
 }
 void one::HelloWorld(){
    
    std::cout << "hello world";
    std::cout << exampleVariable;
 }
 