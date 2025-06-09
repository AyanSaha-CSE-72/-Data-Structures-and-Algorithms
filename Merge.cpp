#include<bits/stdc++.h>
#define ll long long
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL)
#define N ((int) 1e6 + 9)
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
}

void marge_sort(int arr[],int l,int r){
    if(l==r)
        return;

    int mid=(l+r)/2;
    marge_sort(arr,l,mid);
    marge_sort(arr,mid+1,r);

    int i=l, j=mid+1;
    vector<int> vect;
    while(i<=mid && j<=r){
        if(arr[i]<arr[j]){
            vect.push_back(arr[i]);
            i++;
        }else{
            vect.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        vect.push_back(arr[i]);
        i++;
    }
    while(j<=r){
        vect.push_back(arr[j]);
        j++;
    }

    for(int i=l;i<=r;i++){
        arr[i]=vect[i-l];
    }
}
bool cmp(int a,int b){
    if(a>b)
        return true;
    else
        return false;
}
int main(){
//    fastio;
    int arr[]={3,2,4,1,5,9,7,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
//    selection_sort(arr,n);

//    marge_sort(arr,0,(n-1)); //Complexity O(nlogn)

    //Quick sort Implemented in CPP  //Complexity O(nlogn)
//    sort(arr,arr+n);
    //Quick sort Implemented in CPP using custom compare //Complexity O(nlogn)
    sort(arr,arr+n,cmp);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

