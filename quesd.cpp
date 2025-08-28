// PART 4: DELETION
# include <iostream>
using namespace std; 

void deletearray (int A[], int size , int num, int index){
for(int i= index; i<size; i++){
A[i]= A[i+1];
}
size--;
for(int i= 0; i< size; i++){
cout<<A[i] <<" ";
}
}


int main (){
int arr[5]= {2,4,5,6,8};
int n = sizeof(arr)/ sizeof(int);
int ele,pos;
cout<<"Enter the ele which you want to remove: ";
cin>>ele;
cout<<"Enter the pos from which you want to remove the ele: ";
cin>>pos;
int index= pos-1;
deletearray (arr, n, ele, index);
return 0;
}
