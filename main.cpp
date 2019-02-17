#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    srand ( time(NULL) );
    int input;

    int number = rand() % 10 + 1;
    cout <<" Enter 0 if you think the number is between 1 and 5 , enter 1 if tyou think the number is between 6 and 10." << endl;
    cin >> input;
    if(input == 0){
    if (number <= 5 && number >= 1){
    cout <<"You guessed right !" ;
    }
    else if (number <=6 && number >=10){
    cout << " You guessed wrong !" ;
    }
    }
    else if(input == 1){
    if(number <= 5 && number >=1){
    cout <<"you guessed wrong!" ;
    }
    else if( number<=10 && number <=6){
    cout << "You guessed right !" ;
    }
    }
    return 0;
}
