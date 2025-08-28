/*Design the logic to remove the duplicate elements from an Array and after the 
deletion the array should contain the unique elements. */

# include <iostream>
using namespace std; 

void bubblesort (int A[], int size){
for(int i= 0; i<size-1; i++){
for(int j= 0; j< size-1; j++){
if(A[j] > A[j+1]){
int temp= A[j];
A[j]= A[j+1];
A[j+1]= temp;
}}}
}

void duplicate (int A[], int size){
for(int i=0; i<size; i++){
for(int j=0; j<size; j++){
if(A[j]== A[j+1]){
for(int k=j; k<size; k++){
A[k]= A[k+1];
}
size--;
}}}
for(int i=0; i<size; i++){
cout<<A[i]<<" ";
}
}

int main () {
int arr[] = {1,5,2,3,6,5,2,8,6};
int n= sizeof(arr)/ sizeof(int);
bubblesort(arr,n);
duplicate (arr,n);
return 0;
}
