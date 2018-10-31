
#include <iostream>
using namespace std;
int main ()
{ 
int scores;
    cout << "please enter your score\n ";
    cin>> scores;
    if (scores>=86)
    {
        cout <<"congrats you got grade A";
    }
    else if  (scores>=72)
    {
        cout <<"very good you got B as your grade";
    
    }
    else if (scores>=60)
    {
        cout <<"good you got grade C";
    
    }
    else if (scores>=50)
    {
        cout <<"you got grade D";
    }
    else if (scores<50)
    {
        cout <<"Oops you got F";
    }
    return 0;
} 