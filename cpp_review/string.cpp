#include<iostream>

using namespace std;

// void display(string);
void display1(char *);
int main(){
    char str1[100];
    cout<< "Enter your name :"<<endl;

    // 1st way:
    //cin>> str;  // cin: ajay singh  output : ajay because cout display the string before " ";

// 2nd way :
    cin.get(str1,100);  // get display the entire line because this take termination new line \n ;
    cout<< "Enter your name :"<<endl;
    display1(str1);

//3rd way :
    // string str;   // declaration using string keyword;
    // cout<< "Enter your name :"<<endl;
    // getline(cin,str);
    
    // //cout<<"Your Enter name is ;"<<str<<endl;
    // display(str);
    return 0;
}

// void display(string str){
//     cout<<"String is:"<<str<<endl;

// }
void display1(char *str1){
    cout<<"Characture array is :"<<str1<<endl;
}