#include <iostream>






int main(){

    std::string name;
    std::cout<<"please enter your name"<<std::endl;
    std::cin>>name;
  if(std::cin.fail()){
    std::cerr<<"please enter your name sir!";
     exit(-1);
  }

  std::cout<<"so sir your name is"+name;


 


    std::cout<<"hello world with a" +name<<std::endl;
    return 0;//you can even leave this out 
}


