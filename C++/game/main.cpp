#include <iostream>

using namespace std;

int main()

{
    int screatnumber =0;
    int guess;
    int guesscount=0;
    int guesslimit=5;
    bool outofguess= false;
    while(screatnumber != guess && !outofguess)
    {
      if (guesscount<guesslimit)
        {
            cout<<"Enter your guess:  ";
            cin>>guess;
        }

    else
    {
        outofguess= true;
    }
    }
    if(outofguess)
    {
      cout <<"You Loss"<<endl;
    }
    else

    {
       cout << "You Win!" << endl;
    }
    return 0;
}
