#include <iostream>
using namespace std;

class DynammicArray{
    private:
    int x;
    int *arr;

    public:

    DynammicArray(int size){
        x=size;
        arr=new int[size];
    }

    void setVal(){
        for (int i=0;i<x;i++){
            cout<<"Enter element= "<<endl;
            cin>>arr[i];
        }
    }

    void getVal(){
        for (int i=0;i<x;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~DynammicArray(){
        delete [] arr;
    }

};

int main(){
    DynammicArray a(5);
    a.setVal();
    a.getVal();
}