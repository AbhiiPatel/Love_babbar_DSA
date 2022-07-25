#include <iostream>

using namespace std;

int firstOcc(int arr[],int size,int key){
    
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        
        int mid=start + (end-start)/2;
        
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<=key){                 //right side
            start=mid+1;
        }else{                                  //left side
            end=mid-1;
        }
        
    }
    return ans;
}

int lastOcc(int arr[],int size,int key){
    
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        
        int mid=start + (end-start)/2;
        
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<=key){                 //right side
            start=mid+1;
        }else{                                  //left side
            end=mid-1;
        }
        
    }
    return ans;
}
int main()
{
    
    int odd[5]={1,2,3,3,5};
    
    
    cout<<"First occurrence of element at index "<<firstOcc(odd,5,3)<<endl;
    cout<<"Last occurrence of element at index "<<lastOcc(odd,5,3)<<endl;
    return 0;
}
