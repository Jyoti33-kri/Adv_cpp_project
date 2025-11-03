#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;
int main()
{
    //define variables
    string operation;
    double number1, number2;

    //user input
    cout<<" Enter First Number:";
    cin>>number1;
    cout<<" Enter Operation(+,-,*,/):";
    cin>>operation;
    cout<<" Enter Second Number:";
    cin>>number2;

    if(operation =="+"){
        cout<< number1 + number2;
    }
    else if(operation =="-"){
        cout<< number1 - number2;
    }
    else if(operation =="*"){
        cout<< number1 * number2;
    }
    else if(operation =="/"){
        cout<< number1 / number2;
    } else{
        cout<<"invalid operations";
    }


    return 0;
}