// #include<iostream>
// #include<cmath>
// using namespace std;

// class point{
//     int x, y;
//     friend point dist;
//     public:
//          point(int a, int b){
//             x=a;
//             y=b;
//         }        
//         void displaypoint(){
//             cout<<"your point 1 is at :("<<x<<","<<y<<')'<<endl;
//         }

// };
// void dist(void){
//     int a,b,c,d;
//     cout<<"Enter x cordinate of 1st point a:"<<endl;
//     cin>>a;
//     cout<<"Enter y cordinate of 1st point a:"<<endl;
//     cin>>b;
//     cout<<"Enter x cordinate of 2nd point c:"<<endl;
//     cin>>c;
//     cout<<"Enter y cordinate of 2nd point d:"<<endl;
//     cin>>d;

//     return sqrt((c-a)*(c-a)+(d-b)*(d-b));
// }
// int main(){
//     int a,b,c,d;
    
//     point p1(a,b) , p2(c,d);
//     p1.displaypoint();
//     p2.displaypoint();


//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;

class point{
    int x, y;
    public:
         point(int a, int b){
            x=a;
            y=b;
        }        
        void displaypoint(){
            cout<<"your point 1 is at :("<<x<<","<<y<<')'<<endl;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }

};
float dist(point p1, point p2){
    float xdiff=p2.getX()-p1.getX();
    float ydiff=p2.getY()-p1.getY();
    

    return sqrt(xdiff*xdiff+ydiff*ydiff);
}
int main(){
    int a,b,c,d;
    cout<<"Enter point 1:"<<endl;
    cin>>a>>b;
    cout<<"Enter point 2:"<<endl;
    cin>>c>>d;
    

    point p1(a,b), p2(c,d);
    p1.displaypoint();
    p2.displaypoint();
    float distance;
    distance=dist(p1,p2);
    cout<<"The distance between point p1 and p2 is:"<<distance<<endl;


    return 0;
}