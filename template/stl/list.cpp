// list:-    it is bidirectional so you can use push_front and push_back

#include<bits/stdc++.h>

using namespace std; 

void display(list<int> &lst){
    cout<<"list is "<< " ";
    //list <int> :: iterator it; // relace the auto keyword
    for(auto it = lst.begin(); it != lst.end() ; it++){
        cout<< *it<< " ";
        
    }
    cout<<endl;
}

int main(){
    list <int> list1;   // 0 length list
    
    // push the value in back list
    list1.push_back(34);
    list1.push_back(24);

    // push the value in front
    list1.push_front(23);

    // sort the list
    list1.sort();
    display(list1);

    // delete the value 
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    // iterator in list
    // list <int> :: iterator it;
    // it = list1.begin();
    // cout<<*it<<" ";
    // it++;
    // cout<<*it<<" ";
    // it++;
    // cout<<*it<<" ";

    list <int> list2(7);   // empty list with lenght is 7

    // list2.push_back(74);
    // list2.push_back(45);
    
    // list2.push_front(76);
    // list2.push_front(487);
    list<int> :: iterator it;
    it = list2.begin();
    *it = 34;
    it++;
    *it = 345;
    it++;
    *it = 3456;

    // list2.remove(*it-1);     // remove from anywhare or middiles
    
    display(list2);

    cout<<"merging :"<< " ";
    list1.merge(list2);
    display(list1);

    list1.sort();
    display(list1);

    return 0;


}