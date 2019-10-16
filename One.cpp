#include <iostream>
using namespace std;

int main() {
int flo,i,room,oroom;
double perc,t_room=0,t_oroom=0;
cout<<"Enter the number of floor in the hotel: "<<endl;
cin>>flo;
for(i=1;i<=flo;i++){
    cout<<"Enter number of rooms in floor "<<i<<":"<<endl;
    cin>>room;
    cout<<"Enter number of occupied rooms in floor "<<i<<":"<<endl;
    cin>>oroom;
    t_room+=room;
    t_oroom+=oroom;}
perc=(t_oroom)/(t_room)*100;     
cout<<"The total number of rooms in the hotel is "<<t_room<<endl;
cout<<"The total number of occupied rooms in the hotel is "<<t_oroom<<endl;
cout<<"The percentage of occupied room is "<<perc<<"%"<<endl;
cout<<"End of Program.";

    return 0;
}
