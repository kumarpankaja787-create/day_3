#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==1) return arr[0];
    return arr[0]+sum(arr+1,size-1);
}
int main (){
    int k;
    cout << "Enter size:";
    cin >> k;
    int arr[k];
    cout << "Enter values:";
    for(int i=0;i<k;i++){
        cin >> arr[i];
    }
    int total =sum(arr,k);
    cout << total << "\n";
}