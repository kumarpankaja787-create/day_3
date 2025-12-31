#include<iostream>
using namespace std;
bool isFound(int arr[],int key,int s,int e){
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==key) return true;
    if(arr[mid]> key){
        e=mid-1;
        return isFound(arr,key,s,e);
    }
    if(arr[mid]< key){
        s=mid+1;
        return isFound(arr,key,s,e);
    }
}
int main(){
    int k;
    cout << "Enter size:";
    cin >> k;
    int arr[k];
    cout << "Enter values:";
    for(int i=0;i<k;i++){
        cin >> arr[i];
    }
    
    cout << "Enter target:";
    int target;
    cin >> target;
    if(isFound(arr,target,0,k-1)){
        cout << "target found"<< "\n";
    }
    else cout << "target not found"<< "\n";
}
