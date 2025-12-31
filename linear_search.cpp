#include<iostream>
using namespace std;
bool isFound(int arr[],int size,int key){
    if(size==0) return false;
    if(arr[0]==key) return true;
    else{
        return isFound(arr+1,size-1,key);
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
    if(isFound(arr,k,target)){
        cout << "target found"<< "\n";
    }
    else cout << "target not found"<< "\n";
}
