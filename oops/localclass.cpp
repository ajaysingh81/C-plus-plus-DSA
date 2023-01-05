#include<iostream>

using namespace std;

void student(){

    class dateofbirth{           // local class of student
        private:
        int dd,mm,yyyy;
        public:
        dateofbirth(int d,int m,int yy){
            dd = d;
            mm = m;
            yyyy = yy;
        }
        void display(){
            cout<<"Date of Birth :- "<< dd << "-"<<mm<<"-"<<yyyy<<endl;
        }

    };
    dateofbirth date(12,12,2022);   // object creation of local class 
    date.display();                 // fuction calling
    
}

int main(){
    student();
    return 0;
}