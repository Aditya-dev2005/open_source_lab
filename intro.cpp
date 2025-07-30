#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array : "<<endl;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int res = (double)(sum/n);
    cout<<"The result is : "<<res<<endl;
}
