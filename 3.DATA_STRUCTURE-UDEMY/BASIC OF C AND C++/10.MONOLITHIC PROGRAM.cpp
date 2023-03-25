#include<iostream>
using namespace std;

int main(){
    // Monolithic Program : It is a type of coding format in which all the code are mentioned inside the main function 

    int length=0,breadth=0;
    cout<<"Enter length and Breadth respectively:"<<endl;
    cin>>length>>breadth;
    int Area=length*breadth;
    int Perimeter=2*(length+breadth);
    cout<<"Area: "<<Area<<endl<<"Perimeter: "<<Perimeter<<endl;
    return 0;
}