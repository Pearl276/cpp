#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the number of rows of the array: ";
    cin>>m;
    cout << "Enter the number of columns of the array: ";
    cin>>n;
    int arr[m][n], Arr[m][n];
    cout <<"Enter the elements of the first array: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Enter the elements of the second array: "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
        {
            cin >> Arr[i][j];
        }
    }
    int sum[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            sum[i][j]= arr[i][j]+Arr[i][j];
        }
    }
    cout << "Sum of the two arrays is: " << endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}