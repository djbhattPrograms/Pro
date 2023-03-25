#include <iostream>

using namespace std;
string days ( int daynum )
{
   string dayname;
       switch(daynum)
       {
       case 0:
        dayname="sunday";
        break;

       case 1:
       dayname= "monday";
       break;

       case 2:
       dayname= "Tuesday";
        break;

       case 3:
       dayname= "Wednesday";
        break;

       case 4:
        dayname= "Thrusday";
        break;

       case 5:
        dayname= "Friday";
        break;

        case 6:
        dayname= "Saturday";
        break;

        default:
        dayname="invalid day number";

       }

        return dayname;

}




int main()
{
    cout <<  days(00001) << endl;
    return 0;
}
