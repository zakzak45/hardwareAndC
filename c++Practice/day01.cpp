//write a program to calculate the circumfernce in c++
#include <iostream>

#define PI 3.1416f


int circumference(const float radius){
if(radius<0){
    std::cout<<"please the radius must be above zero"<<std::endl;
    exit(-1);
}

//the circumference
double cirf = 2 * PI * (radius);
}

int main(){
  float radius;
  std::cout<<"Enter the radius of the circle;"<<std::endl;
  std::cin>> radius;


  if(std::cin.fail()){
    std::cout<<"please enter a valid number"<<std::endl;
    exit(-3);
  };

  double cirf = circumference(radius);
  std::cout<<"The circumference of the circle is: "<< cirf <<std::endl;

 return 0;
}