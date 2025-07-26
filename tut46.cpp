//pointers in class *****************************
//**************VERY IMPORTANT************************** */
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){

//     Complex c1;
//     Complex *ptr= &c1;

      //******or******* */

    Complex *ptr = new Complex;//we can use this or above both are same



    (*ptr).setData(1, 54); //is exactly same as
    (*ptr).getData();// is as good as 

                //   *******OR*******
    ptr->setData(2,3);//This is arrow 
    ptr->getData();

    Complex *ptr2 = new Complex[3]; 
    ptr2->setData(1, 4); 
    ptr2->getData();
    //Using array

    return 0;
}
