// PART 3: INSERT AN ELEMENT
# include <iostream>
using namespace std; 

void insertarray (int A[], int size , int num, int index){
for(int i= size-1; i>index; i--){
A[i]= A[i-1];
}
A[index]= num;
}


int main (){
int arr[5]= {2,4,8,10};
int n = sizeof(arr)/ sizeof(int);
int ele,pos;
cout<<"Enter the ele which you want to insert: ";
cin>>ele;
cout<<"Enter the pos at which you want to insert the ele: ";
cin>>pos;
int index= pos-1;
insertarray (arr, n, ele, index);
for(int i= 0; i< n; i++){
cout<<arr[i] <<" ";
}
return 0;
}
