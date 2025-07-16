#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>


std::string RandomWord( std::string RandomArray[] ,int size){
 int getRandom = rand()%size;
 return RandomArray[getRandom];
}

int main(){
 std::cout<<"welcome to my hangman game"<<std::endl;
 std::cout<<"youre going to try to guess a word , given three chances"<<std::endl;
 
 const std::string RandomArray[]={"mom","friday","hello","monday","birthday","phone","head","wow"};



 return 0;



}