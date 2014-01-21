#include <iostream>

using namespace std;

#define LENGTH 10

int * Countsort(int A[],int length)£»
void Print_array(int A[],int length);

void main(){

	int A[LENGTH]={23,4,3,14,,34,1,234,13,34,132};

	int* p=Countsort(A,LENGTH);

	Print_array(p,LENGTH);

}

int * Countsort(int A[],int length){
	
	int C[LENGTH+1];
	int B[LENGTH+1];
	for(int i=0;i<=LENGTH;i++){
		
		C[i]=0;
	}

	for(i=0;i<=LENGTH;i++){
		
		C[A[i]]+=1;

	}

	for(i=0;i<=LENGTH;i++){
	
		B[C[i]]=A[i];
	}

	return B[];
}

void Prin_array(int A[],int length){
		
	for(int i=0;i<=length+1;i++)
	cout<<A[i]
}