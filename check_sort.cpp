#include <iostream>
using namespace std;
bool isSort(int arr[],int size){
    if(size ==0 || size==1) return true;
    if(arr[0]>arr[1]) return false;
    else{
        return isSort(arr+1,size-1);
    }


}

int main(){
    int k;
    cin >> k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin >> arr[i];
    }
    if(isSort(arr,k)){
        cout << "Sorted Array"<< "\n";
    }
    else cout << "unsorted Array"<< "\n";
}