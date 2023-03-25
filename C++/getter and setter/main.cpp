#include <iostream>

using namespace std;
class moive
{
private:
    int Rating;


public:
    string Title;
    string Producer;
    long Networth;

    moive(string aTitle , string aProducer , long aNetworth ,int aRating)//construction function
    {
         Title = aTitle;//first class then constructor
        Producer = aProducer;
        Networth = aNetworth;
        setRating(aRating)  ;
    }
    void setRating( int aRating)
    {
        Rating = aRating;
    }


};

int main()
{
   moive avenger("THE END GAME","DEBRAJ BHATTACHARJEE",4000,6 );



    avenger.setRating  (7) ;

    cout << avenger.Rating;



    return 0;
}
