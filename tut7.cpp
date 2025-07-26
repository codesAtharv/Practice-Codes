//If, Else, Else if Program
//Program to get into 18 Plus party
#include<iostream>
using namespace std;
 int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>18){
        cout<<"you are allowed in Party"<<endl;
    }
    else if(age==18){
        cout<<"you are just 18 you are allowed but under a Mature responsibility"<<endl;
    }
    else{
        cout<<"You are under age you cant enter party!!"<<endl;
    }
     
 // now to convert it into membership operator of && and ||
 //lets take a age of negative numberif(age>18){
//     if((age<18)&&(age>0)){    
//         cout<<"you are allowed in Party"<<endl;
//     }
//     else if(age==18){
//         cout<<"you are just 18 you are allowed but under a Mature responsibility"<<endl;
//     }
//     else if(age<=0){
//         cout<<"you are not even born yet"<<endl;
//     }
//     else{
//         cout<<"You are under age you cant enter party!!"<<endl;
//     }
    
//  }
 // making it using CASES AND SWITCH FUNCTION
    // switch (age)
    // {
    // case 18:
    //     cout<<"You are allowed";
    //     break;
    // case 19:
    //     cout<<"you are allowed";
    // case 20:
    //     cout<<"you are not allowed";
    // default:
    //     cout<<"you are not allowed either exceed the age limit or under age";
    //     break;
    // }
 }
