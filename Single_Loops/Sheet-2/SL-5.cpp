//max in arr
#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++)
        cin>>arr[i];
    int max=INT_MIN;
    for(int i=0;i<size;i=i+2){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}