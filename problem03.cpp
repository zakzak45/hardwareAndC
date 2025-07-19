//Calculating the number of minutes in a year


#include <iostream>

int secondsInAYear();
int main(){
    secondsInAYear();
    return 0;
}




int secondsInAYear(){

const int numberOfDays=365;
const int hours =24;
const int numberOfMinutes=60;
const int numberOfSeconds=60;



int seconds=numberOfDays*hours*numberOfMinutes*numberOfSeconds;

    std::cout<<seconds<<std::endl;
    return seconds;
}