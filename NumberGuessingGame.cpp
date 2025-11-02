#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int randomNumberGenerator(int start, int end)
{ srand(time(0));
    int randValue =( rand()% end) +1;
    if(start<= randValue && end >= randValue)
{
    return randValue;}
    else
    {
        randValue *= start;
        return( randValue % end);

    }
} 
void NumberGuessingGame()
{
   int attemps =5;
   int start = 1;
   int end =100;
   int guessingnumber;
   int randomNumber =randomNumberGenerator(start,end);
   cout<<"welcome to number guessing game"<<endl;
   cout<<"------------------------"<<endl;
   cout<<"you have no of attemps"<< attemps<<endl;
   cout<<"range is"<<start<<"to"<<end<<endl;

   while (attemps)
   { cout<<"Enter a guessing number:";
    cin>> guessingnumber;
    if(guessingnumber == randomNumber){
        cout<<"------------------------"<<endl;
    cout<<"correct"<<endl;
    break;}
    else if(guessingnumber > randomNumber){
        cout<<"------------------------"<<endl;
        cout<<"too high,!try lower"<<endl;
    }else{
        cout<<"------------------------"<<endl;
        cout<<"too low,!try higher"<<endl;
    }
    attemps--;
 }
if(attemps)
{   cout<<"------------------------"<<endl;
    cout<<"You win the game"<<endl;
    cout<<"------------------------"<<endl;
}else{
    cout<<"------------------------"<<endl;
    cout<<"Oops!,you loss the game "<<endl;
    cout<<"------------------------"<<endl;
}

}
int main()
{
 NumberGuessingGame();
 cout<<endl;
 return 0;

}
