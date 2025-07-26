#include<iostream>
using namespace std;
int main(){
    // // This End value i=3 is excluded
    // for (int i = 0; i < 10; i++)
    // {
    //     if(i==3){
    //         break;
    //     }  
    //     cout<<i<<endl;
    // }
// //other way
// // The end value 3 is included
//    for (int i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
    
//         if(i==3){
//             break;
//         }  
//     }

// //continued function
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<i<<endl;
//         if(i==3){
//             continue;
//         }
//     }
// if what to print is below
// here 3 is missing remain is same """""CAREFULL""""" 
    for (int i = 0; i < 10; i++)
    {
        if(i==3){
            continue;
        }
        cout<<i<<endl;
    }
    
    
}
