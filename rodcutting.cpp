#include<iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n)
{
    
    if (n ==0) {
       return 0;}
  
    int res = 0;
    for (int i=0; i<n; i++) 
       res = max(res, price[i] + cutRod(price, n-i-1));
  
    return res;
}


int main()
{
    int arr[] = { 0, 5, 8, 9, 10, 17, 17, 20 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << cutRod(arr, size);
    return 0;
}


int main(){
    
    return 0;
}