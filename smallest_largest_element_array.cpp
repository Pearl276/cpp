#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout <<"Enter the elements of an array:";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int smallest= arr[0];
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << "Smallest element in the array is : "<<smallest<<endl;
    cout << "Largest element in the array is : "<<largest<<endl;
    return 0;

}