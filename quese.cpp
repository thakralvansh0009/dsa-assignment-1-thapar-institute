// PART 5: LINEAR SEARCH
# include <iostream>
using namespace std; 

void searcharray (int A[], int size , int num){
int min=A[0];
for (int i=0; i<size; i++){
if(num == A[i]){
cout<<"element found at index: "<<i;
break;
}}
}

int main (){
int arr[]= {1,2,3,4,5};
int n = sizeof(arr)/ sizeof(int);
int ele;
cout<<"Enter the num: ";
cin>>ele;
searcharray (arr, n, ele);
return 0;
}
