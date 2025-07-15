#include <iostream>



class Person{
    public:
    std::string name;
    std::string LoggedIn;
    int age;

   Person(int age,std::string name){
   name=name;
   age=age;
  };

  void email(){
    std::string emailAddress;
    std::cout<<"enter your email"<<std::endl;
    std::cin>>emailAddress;
    

  }

};





int main(){
    return 0;
}