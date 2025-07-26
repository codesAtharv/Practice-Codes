#include<iostream>
using namespace std;
class CHW{
    protected:
    string title;
    float rating;
    public:
    CHW(string s,float r){
        title =s;
        rating =r;
    }
    //void display(){
    virtual void display(){
        cout<<"NOT this time"<<endl;
    }
};
class CHWVideo:public CHW{
    float videolength;
    public:
    CHWVideo(string s,float r,float vl):CHW(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"This is amazing video having title: "<<title<<endl;
        
        cout<<"This video have rating out of 5 is of:"<<rating<<endl;
        
        cout<<"The length of this video is :"<<videolength<<endl;
    }
};
class CWHText: public CHW
{
    int words;
    public:
        CWHText(string s, float r, int wc): CHW(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    //for video
    title="C++ tutorial";
    vlen=22.45;
    rating=4.6;
    CHWVideo vid(title,rating,vlen);

    //for text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText text(title, rating, words);

    CHW* tuts[2];//creating it using pointer

    tuts[0] = &vid;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();

//both run since we have virtual on line 12
//If virtual is removed than only CHW display will run only base class run
    return 0;
}