#include<iostream>
using namespace std;
class bankdepo{
    int Principle;
    int year;
    float returnvalue;
    float intrestrate;
public:
    bankdepo(){}//**********default constructure this is require to make int main work as constructure
    bankdepo(int p,float r, int y);
    bankdepo(int p, int R, int y);
    void show();
};
bankdepo :: bankdepo(int p,float r, int y){
    Principle=p;
    year =y;
    intrestrate=r;//here r in float //In 0.04 format
    returnvalue=Principle;
    for (int i=0;i<y;i++){
        returnvalue=returnvalue*(1+intrestrate);
    }
}
bankdepo :: bankdepo(int p,int R, int y){
    Principle=p;
    year =y;
    intrestrate=(float(R)/100);//*******here R in int and 100 also in int so divinsion in int so give 0 to avoid it we use float function
     //here R in percent hence divided by 100 to get in 0.04 format
    returnvalue=Principle;
    for (int i=0;i<y;i++){
        returnvalue=returnvalue*(1+intrestrate);
    }
}
void bankdepo::show(){
    cout<<endl<<"your Principle amount was :"<<Principle<<endl
        <<" no of Year of deposit was :"<<year<<endl
        <<" The final ammout you got with intrest is:"<<returnvalue<<endl;
}

int main(){
    bankdepo b1,b2;
    int p,y,R;
    float r;
    cout<<"Enter p,y,r :"<<endl;
    cin>>p>>y>>r;
    b1=bankdepo(p,r,y);
    
    b1.show();
    cout<<"Enter p,y,R :"<<endl;
    cin>>p>>y>>R;

    b2=bankdepo(p,R,y);
    b2.show();




    return 0;
}