//Calculating the circumerence of a circle 

#include <iostream>

using namespace std;

#define PI 3.14

float Cirmference(float radius){
if(radius<0){
    cerr<<"please radius should be possitive"<<endl;
    
}

float circumference= 2*PI*radius;
 cout<<circumference<<endl;
return circumference;
}



int main(){

    float Radius;
    cout<<"please enter the radius"<<endl;
    cin>>Radius;



 Cirmference(Radius);
    return 0;
}