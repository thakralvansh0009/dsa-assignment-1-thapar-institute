//Write a program to find sum of every row and every column in a 2-D array 
#include <iostream>
using namespace std;

int sumofrow(int A[2][3] ,int row){
int sum=0,i=row-1;
for(int j=0; j<3;j++){
sum= sum+ A[i][j];
}
return sum;
}

int sumofcol(int A[2][3] ,int col){
int add=0,i=col-1;
for(int j=0; j<2;j++){
add= add+ A[j][i];
}
return add;
}

int main (){
int arr[2][3] = { {1,2,3}, {4,5,6}};
for(int i=0; i<2; i++){
for(int j=0; j<3; j++){
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
int r,c;
cout<<"Enter the no. of row of which you want to find the sum: ";
cin>>r;
cout<<"Enter the no. of col of which you want to find the sum: ";
cin>>c;
int ans= sumofrow(arr,r);
int total= sumofcol(arr,c);
cout<<"The sum of the row is: "<<ans;
cout<<"\nThe sum of the col is: "<<total;
return 0;
}
