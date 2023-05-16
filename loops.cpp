#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int population=1; int hours=0;

//string name; int counter;
int main()
    {
    //counts increase of bacteria population during the next hours till the population increases 1000000000
        //while (population<=1000000000)
        do
        {
            hours++;
            population=population*2;

            cout<<"hours passed: "<<hours;
            cout<<" bacteria counter: "<<population<<endl;
        } while (population<=1000000000);
//    for (int i = 0; i < 10; ++i) {
//        cout << i << endl;
//    }
//
//    for (int i = 4; i >=-1; --i) {
//        cout<< i;
//    }

//    for (int i = -13; i < 0; i=i-2) {
//        cout << i;
//    }

//    for (int i = 15; i >=0 ; i--) {
//        sleep(1);
//        system("clear");
//        cout << i <<endl;
//
//    }
//    cout<<"EXPLOSION";

//        cout <<"What's your name?:" <<endl;
//        cin >> name;
//        cout <<"Please specyfy positive integer number:"<< endl;
//        cin >> counter;
//
//    for (int i = 1; i <= counter; ++i) {
//        cout <<i<<". "<<name<<endl;
//
//        }

        return 0;
    }

