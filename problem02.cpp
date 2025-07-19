//calculate the area and perimeter of a rectangle


#include <iostream>

using namespace std;

float perimeter(float length ,float height);
float area(float L,float B);

int main(){
 float length;
 float height;

 cout<<"please enter the height and the length"<<endl;

 cin>>length;
 cout<<endl;//i know its crap
 cin>>height;

 cout<<"the area and the perimeter are "<<perimeter(length,height)<<area(length,height)<<endl;

    return 0;
}

//double check perimeter calculation at at the time i can't
float perimeter(float length ,float heigth){
 float peri =2*length+2*heigth;
 cout<< peri<<endl;
 return peri;
}

float area(float L,float B){
    float area =L*B;
    cout<<area<<endl;
    return area;
}