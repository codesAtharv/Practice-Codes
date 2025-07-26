//Template -> it just let us make data type that can acts as all datatype
//let T be that datatype so for int we use [T nine=9;],[T ninepttwo=9.2;] it can work for both float and integer
#include<iostream>
using namespace std;

template <class T>
class vector{

    public:
    int size;
    T * arr;
        vector(int m){
            size =m;
            arr= new T[size];//This will allow vector to have 3 value [,,] here T is float
        }
        T dotproduct(vector &v){
            T d=0;
            for (int i=0;i<size;i++){
                d+=this->arr[i]*v.arr[i];//this is like arr[i]
            }                              // arr[i]*v.arr[i]  = [a1,a2,a3],[b1,b2,b3]]
                                        //here dotproduct = a1*b1+a2*b2+a3*b3
                                        //they are added because d+= is used
            return d;

        }

};
int main(){
    vector <float> v1(3);
    v1.arr[0]=1.4;
    v1.arr[1]=3.3;
    v1.arr[2]=0.1;
    vector <float>v2(3);
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;
    float a = v1.dotproduct(v2);
    cout<<a<<endl; 

    return 0;
}