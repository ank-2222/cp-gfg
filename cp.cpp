#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void print(int i, int arr[6], int n){
	for(int j=6; j>i;j=j-1){
	 arr[j]=arr[j-1];
	 }

	arr[i]=n;

	for(int k=0; k<=6; k++){
	 cout << arr[k]<<"\n";
	 }
	return;
}


int main(){
	int n,i;
	cout<< "Enter a number:\n";
	cin>>n;
	cout<<"Enter index:\n";
	cin>>i;
print(i,arr,n);
return 0;

}