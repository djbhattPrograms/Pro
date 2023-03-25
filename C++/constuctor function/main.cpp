#include <iostream>

using namespace std;
class moive
{
public:
    string Title;
    string Producer;
    long Networth;
    double Rating;
    moive(string aTitle , string aProducer , long aNetworth , double aRating)//construction function
    {
         Title = aTitle;//first class then constructor
        Producer = aProducer;
        Networth = aNetworth;
        Rating  =  aRating;
    }

};

int main()
{
   moive avenger("THE END GAME","DEBRAJ BHATTACHARJEE",4000,9.99 );


   cout << "THE END GAME"<<avenger.Title<<endl ;
   cout << "Producer:" << avenger. Producer<< endl;
    cout << "Net worth:" << avenger.Networth << endl;
    cout <<"Rating:" << avenger.Rating << endl;


    return 0;
}
