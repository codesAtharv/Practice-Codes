//After tut11
//making array using loops

#include<iostream>
using namespace std;
int main(){
    int physics[10];
    int index=0;
        
    for ( int h = 3; h <31 ; h+=3){
        physics[index]=h;
        index++;

    }   
    
    for(int l=0;l<10;l++){
        cout<<physics[l]<<endl;
    }
    
 return 0;
    

}