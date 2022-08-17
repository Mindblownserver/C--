#include <iostream>
#include <fstream>
// #include <filesystem>
using namespace std;

bool login(){
    string username,password,fUsername,fPassword;
    cout<<"Insert your username: ";cin>>username;
    cout<<"Insert your password: ";cin>>password;
    ifstream read(username+".txt");
    getline(read,fUsername);
    getline(read,fPassword);
    if (username==fUsername && password==fPassword)
    {
        return true;
    } else{
        return false;
    }
    

}
int main(){
    int choose;
    cout<<"Register:1\nLogin:2"<<endl;cin>>choose;
    if (choose==2)
    {
        bool stat = login();
        stat?cout<<"Logged in successfully\n":cout<<"Invalid information\n";
        system("pause");
    } else if(choose==1){
        string username,password;
        cout<<"Insert your username: ";cin>>username;
        cout<<"\nInsert your password: ";cin>>password;
        ofstream file;
        file.open(username+".txt");
        file<<username<<endl<<password;
        file.close();
        main();
    }else{
        cout<<"Wrong choice...Try again";
        main();
    }
    
    return 0;
}