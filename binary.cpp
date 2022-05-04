#include <iostream>
using namespace std;

int binaryS(int arr[],int n,int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start + (end-start)/2 ;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;  
        }
        else{
            end = mid-1;
        }

    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements : ";
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element : ";
    cin>>key;

    cout<<binaryS(arr,n,key)<<endl;
}