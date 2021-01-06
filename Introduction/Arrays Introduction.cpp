#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{    
    int i,n,arr[1000],j;
    cin>>n;
    for(i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    for(j=n-1;j>=0;j--)
    { 
        cout<<arr[j]<<" ";
    }  
    return 0;
}
