#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int target=rand()%100+1;
    int guess;
    const int maxattempts = 10;
    cout<<"This is number guessing Game"<<endl;
    cout<<"Guess a number between 1 to 100:"<<endl;
    cout<<"cheating your ans is :"<<target<<endl;
    cout<<"you have "<<maxattempts<<" attempts for gussing number"<<endl;
    for(int attempt=1;attempt<=maxattempts;attempt++){
        cout<<"\n Attempt"<<attempt<<"-Enter you guess:";
        cin>>guess;
    
        
        if(guess==target){
            cout<<"congratulations! you guessed the number in "<<attempt<<" attempts"<<endl;
            return 0;
        }
        else if(target-10<guess && guess<target+10){
            cout<<"Too Close";
        }
        else{
            cout<<"You miss number by a huge "<<endl;
            
        }
    }
    cout<<"\n sorry you have used all your attempts"<<endl;
    cout<<"The correct number was: "<<target<<endl;
    return 0;
}