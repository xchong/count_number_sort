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
	//�������飬��A��i����Ϊ����������±꣬��¼��A��i���ĸ���
	int C[10]={0};
	//һ����ʱ���鴢��������
	int B[10]={0};
		
	//��Ϊ0
	for( i=0;i<=10;i++){
		
		C[i]=0;
	}

	
	for( i=0;i<=5;i++){
		
		C[A[i]]+=1;
		
	}

	

	for(i=1;i<=10;i++){
		//ѭ��ִ����֮��C�����еĵ�ֵ����A��i������B�����е��±�
		
		C[i]=C[i-1]+C[i];
		
	}


	for( i=length;i>=1;i--){
		
		//����������
		B[C[A[i]]]=A[i];
		//ͬ������ֵ��ǰŲһλ
		C[A[i]]=C[A[i]]-1;
		
	}

	
	for( i=1;i<10;i++)
	cout<<B[i]<<"  ";


}

