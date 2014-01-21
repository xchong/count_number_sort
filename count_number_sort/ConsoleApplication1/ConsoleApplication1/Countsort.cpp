#include <iostream>

using namespace std;

#define LENGTH 5

void Countsort(int A[],int length);




int  main(){

	int A[LENGTH+1]={0,2,7,1,6,4};
	
	Countsort(A,LENGTH);

	return 0;

}

void Countsort(int A[],int length){
	
	int i=0;
	//伴随数组，将A【i】作为伴随数组的下标，记录下A【i】的个数
	int C[10]={0};
	//一个临时数组储存排序结果
	int B[10]={0};
		
	//置为0
	for( i=0;i<=10;i++){
		
		C[i]=0;
	}

	
	for( i=0;i<=5;i++){
		
		C[A[i]]+=1;
		
	}

	

	for(i=1;i<=10;i++){
		//循环执行完之后，C数组中的的值就是A【i】的在B【】中的下标
		
		C[i]=C[i-1]+C[i];
		
	}


	for( i=length;i>=1;i--){
		
		//将数组填入
		B[C[A[i]]]=A[i];
		//同样的数值往前挪一位
		C[A[i]]=C[A[i]]-1;
		
	}

	
	for( i=1;i<10;i++)
	cout<<B[i]<<"  ";


}

