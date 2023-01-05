#include<bits/stdc++.h>
// vector 
using namespace std;

template <class T>
void display(vector<T> &v)
    {
        for(int i = 0 ;i<v.size();i++){
            cout<<v[i]<< " ";
           // cout<< v.at(i)<< " ";
        }
        cout<<endl;
    }

int main(){

    //initialize a vecctor of int type   
    vector<int> v1 = {1 ,234,23,234,234,23};   // v1 is a object of vector
    // usig iterator print the vector 
    vector<int> :: iterator it;
    //it = v1.begin();
    for(it = v1.begin() ; it != v1.end(); it++ ){
        cout<< *it<<" ";
    }
    cout<<endl;

    // print the vector 
    // usig auto pointer
    for(auto i = v1.begin(); i != v1.end() ; i++)
    {
        cout<< *i<< " ";
    } 
    cout << endl;

    // int size = v1.size();
    // without using iterator
    // for(int i = 0; i< size ; i++){
    //     cout<< v1[i] << " ";
    // }
    
    // *******************************  vector *********************
    // vector
    // zero length vector
    // vector<int>v;
    // int element;
    // int size; 
    // cout<< "Enter a size of vector: -"<<" ";
    // cin>> size;

    // for(int i = 0 ; i < size ; i++){
    //     cout<<"Enter a element for push"<<" ";
    //     cin>>element;
    //     v.push_back(element);
    // } 
    // // v.pop_back();

    // display(v);

    // vector<int> :: iterator iter = v.begin();
    // // v.insert(iter+1,344);    // insert one element position 2

    // // v.insert(iter+1,200,399); // 200 times 399 print in screen

    // // display(v);

// other way to declare the vector 

//     vector <int> vec1(5); // 5 lenght vector
//     vec1.push_back(4);
//     vec1.push_back(45);
//    // display(vec1);

//     vector <int> vec2(vec1);
//     display(vec2);

//     vector <char> vec3;
//     vec3.push_back('d');
//     display(vec3);
//     cout<<vec3.size()<<endl;

//     vector <int> vec4(4,13);
//     display(vec4);   // output ; 13 13 13 13 
//     cout<<vec4.size(); // size of vec4

   










    
    


    
    return 0; 
}