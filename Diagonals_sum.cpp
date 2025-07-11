#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the square matrix : ";
    cin >> n;
    int arr[n][n];
    cout << "Enter the elemnts of the matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int primary_sum =0, sec_sum=0;
    for(int i=0; i<n; i++){
        primary_sum+=arr[i][i];
        sec_sum+=arr[i][n-1-i];
    }
    cout << "The sum of the diagonal elements of the matrix is: " << primary_sum << endl;
    cout << "The sum of the secondary diagonal elements of the matrix is: " << sec_sum << endl;
    return 0;
}
