#include<iostream>
#include<vector>
using namespace std;
//https://cplusplus.com/reference/vector/vector/?kw=vector 
//use this website check all member functions of vector
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    vector<int> vec1;
    int element;
    int size;
    cout<<"Enter size of vector: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();//this will remove last entrie 
    
    //To add at any point iterators
    vector<int>:: iterator iter=vec1.begin();//this will add 123 to begin //iterator is like pointers or indexing
    // vec1.insert(iter,123);
//for second posotion
// vec1.insert(iter+1,124);//on 2nd position
vec1.insert(iter+1,3,100);//we want to enter 100 3times at 4th position 

    
    
    display(vec1);


    return 0;
}