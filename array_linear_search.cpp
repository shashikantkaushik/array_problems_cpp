//
//  array_linear_search.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 05/11/22.
//
/*
 Linear Search
 Send Feedback
 You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
  You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.
 'Linear search' is a method for finding an element within an array/list. It sequentially checks each element of the array/list until a match is found or the whole array/list has been searched.
 Input format :
 The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

 First line of each test case or query contains an integer 'N' representing the size of the array/list.

 Second line contains 'N' single space separated integers representing the elements in the array/list.
 */

#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
        
    }
    return -1;
}
int  main(){
    int n,t,x,index;
    cout<<"test case";
    cin>>t;
    while(t>0){
        cout<<"no of element in array";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"item to be searched";
        cin>>x;
        index=linearSearch(arr,n,x);
        cout<<index;
        t--;
    }
}
