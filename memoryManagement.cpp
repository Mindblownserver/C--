#include <iostream>
using namespace std;
int main(){
    int* pSize =new int;
    cout<<"Input the array size: ";cin>>*pSize;
    int* pArr;
    pArr = new int[*pSize];
    for(int i=0;i<*pSize;i++){
        cout<<"\nEnter element "<<i+1<<": ";cin>>pArr[i];
    } 
    for(int i=0;i<*pSize;i++){
        cout<<"\nElement "<<i+1<<": "<<pArr[i];
    }
    delete pSize;
    delete[] pArr;
    return 0;
}