
// PART A: CREATE AN ARRAY and PART B: DISPLAY AN ARRAY
 # include <iostream>
 using namespace std;
 int main (){
 int arr[]= {1,2,3,4,5};
 int n= sizeof(arr)/ sizeof(int);
 for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
 }
 return 0;
 }
