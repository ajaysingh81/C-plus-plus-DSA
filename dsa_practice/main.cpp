#include <iostream>

using namespace std;

int main()
{
    // searching :-

    // linear  search
    // binary search

    // linear search:-

    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // for(int i =1; i<=size; i++)
    // {
    //     if(arr[i]==5)
    //     {
    //         cout<<"yes"<<endl;
    //     }
    // }


//     int n ; 
//     cin>> n ;
     
//     int arr[n];
// // take value in array
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
// // serching value in array
    
//     int value ;
//     cin>>value;

//     int  flag= 0;
//     int mid;

// //search in array
//     int s = 0; 
//     int e = n-1;
//     while(s<=e)
//     {
//         mid = (s+e)/2;
        
//         if(value == arr[mid])
//         {
//             cout<<"value found "<<endl;
//             int flag = flag + 1;
//             break;
            
//         }
//         else if(value < arr[mid])
//         {
//             e = mid - 1; 
//         }
//         else {
//             s = mid + 1;
//         }
        
        
//     if(flag == 0){
//          cout<<"value not found"<<endl;
//     }

//     }
    
   






// Sorting in array;

// Buble sort:


//     int arr[12] = {1, 6, 3, 78, 65, 5, 7, 89, 67, 76, 767, 78};
//     // size of array
//     int size = sizeof(arr);

//     cout << "array size is    :- " << size << endl;

//     // print the array
//     cout << "unsorted array is :-  " << endl;

//     for (int i = 0; i <= 11; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     // sort the array
//     for (int i = 0; i <= 11; i++)
//     {
//         for (int j = 0; j <= 11 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // sorted array print;
//     cout << "sorted array is" << endl;
//     for (int i = 0; i <= 11; i++)
//     {
//         cout << arr[i] << " ";
//     }



// Selection sort;
    // int n;
    // cin>>n;
    
    // int arr[n];

    // for(int i =0; i<n;i++)
    // {
    //     cin>>arr[i];

    // }
    // cout<<endl;



    // for(int i = 0; i<n-1; i++)
    // {
    //     for(int j= i+1; j<n;j++)
    //     {
    //         if(arr[i]>arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i]= arr[j];
    //             arr[j] = temp;

    //         }
    //     }
    
    // }
   

    // for(int i =0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";


    // }


    // int n;
    // cin>>n;
     char name[] = "ajay singh rathor";
   
     int size = sizeof(name)/sizeof(name[0]);
    // for(int i = 0 ;i<size; i++){
    //     cin>>name[i];
    // }
     int count = 0;
     for( int i=0;i<size; i++){
         count = count +1;
     }

     cout<<"length is :"<<count<<endl;


//     char name[20];
//     cin>>name;

//     int count = 0;
//     for( int i=1;name[i] !="\0"; i++){
//         count = count +1;
//     }

//     cout<<"length is :"<<<<endl;



      return 0;
}






