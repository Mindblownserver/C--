#include <iostream>
using namespace std;

void addition(double num1,double num2){
    cout<< num1+num2<<endl;
}
void multiply(double num1,double num2){
    cout<< num1*num2<<endl;
}
void division(double num1,double num2){
    cout<< num1/num2<<endl;
}
void substitution(double num1,double num2){
    cout<< num1+num2<<endl;
}
int main(){
    string op;
    string res;
    double num1;
    double num2;
    cout<<"Welcome to my first C++ project called 'Calculator' made by Mohamed Yassine Kharrat\n Please choose operator (+,-,*,/) ";
    cin>>op;
    cout<<"Insert your first number ";
    cin>>num1;
    cout<<"Insert your second number ";
    cin>>num2;
    if(op=="+"){
        addition(num1,num2);
    }else if(op=="*"){
        multiply(num1,num2);
    } else if(op=="/"){
        division(num1,num2);
    } else if(op=="-"){
        substitution(num1,num2);
    }
    cout<<"Again? [y/n] ";
    cin>>res;
    if(res=="y"){
        main();
    } else{
        system("pause");
    }
    return 0;
}