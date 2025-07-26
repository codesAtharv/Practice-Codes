#include<iostream>
using namespace std;
int volume(int l,int b, int h){
    return l*b*h;
}
int volume(int r,int h){
    int vo=3.14*r*r*h;
    return vo;
}
int volume(int r){
    int vol=(4/3)*3.14*r*r*r;
    return vol;
}
int main(){
    cout<< "The volume of cube is:"<<volume(4,5,3)<<endl;
    cout<< "The volume of cuboid is:"<<volume(2,6,3)<<endl;
    cout<< "The volume of cylinder is:"<<volume(7,1)<<endl;
    cout<< "The volume of sphere is:"<<volume(3)<<endl;
    
    return 0;//It automatically take whatever volume is needed as per requirement

}
 