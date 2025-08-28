// Implement the logic to (PART A: reverse the elements of an array)
# include <iostream>
using namespace std; 

void reverse (int A[], int size){
for(int i=0, j=size-1; j>i; i++, j--){
int temp = A[i];
A[i]= A[j];
A[j]= temp;
}
}

int main (){
int arr[]= {2,3,4,5,6};
int n= sizeof(arr)/ sizeof(int);
reverse (arr,n);
for(int i=0; i<n; i++){
cout <<arr[i]<<" ";
}
return 0;
}
