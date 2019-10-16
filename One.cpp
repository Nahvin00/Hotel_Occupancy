#include <iostream>
using namespace std;

int main() {
int flo,i,room,oroom,t_unroom; //declaration of variables
double perc,t_room=0,t_oroom=0; //certain variables are declared as double because decimal point is needed in the final result
cout<<"Enter the number of floor in the hotel: "<<endl; //prompt user to input
cin>>flo;
for(i=1;i<=flo;i++){ //for loop to enter the number of rooms in each floor as well as to sum it up
    cout<<"Enter number of rooms in floor "<<i<<":"<<endl;
    cin>>room;
    cout<<"Enter number of occupied rooms in floor "<<i<<":"<<endl;
    cin>>oroom;
    t_room+=room; //increament of the total number of room
    t_oroom+=oroom;} //increament of the total number of occupied room
t_unroom=t_room-t_oroom; //to find the total of unoccupied room
perc=(t_oroom)/(t_room)*100;  // formulae to calculate the percentage of occupied room   
cout<<"The total number of rooms in the hotel is "<<t_room<<endl; //output of the results
cout<<"The total number of occupied rooms in the hotel is "<<t_oroom<<endl;
cout<<"The total number of unoccupied rooms in the hotel is "<<t_unroom<<endl;
cout<<"The percentage of occupied room is "<<perc<<"%"<<endl;
cout<<"End of Program.";

    return 0; //return value of zero
}
