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
Person person(12,"zayne");
person.age;

std::cout<<person.LoggedIn<<std::endl;
    return 0;
}