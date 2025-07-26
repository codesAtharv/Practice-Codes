#include<iostream>
using namespace std;
class shop{
private:
    int itemid[100];
    int itemprice[100];
    int counter;
public:
    void initcounter(void){counter=1;}
    void setprice(void);
    void displayprice(void);
    int totalprice(void);
};
void shop::setprice(void){
    cout<<"Enter ID of your item no"<<counter<<endl;
    cin>>itemid[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice(void){
    for(int i=1;i<counter;i++){
    cout<<"Enter price of item no :"<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}
int shop::totalprice(void){
    int total = 0;
    for(int i = 1;i<counter;i++){//usually initially starting from 0 is better
        total+=itemprice[i];//+= will update to new value
        
    }
    return total;

}
int main(){
    shop dukkan;
    dukkan.initcounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.displayprice();
    int total=dukkan.totalprice();
    cout<<"total price of all items : "<<total<<endl;
}