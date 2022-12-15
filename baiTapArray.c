#include<stdio.h>
//khai bao Array
int main(){
	int marks[10];//Cap phat 40byte (n*sizeof(int) )
	printf("\nNhap diem 10 sinh vien : ");
	
	int i, sum;
	float avg;

	
	for(i=0;i<10;i++){
		scanf("%d",&marks[i]);
	}
	for(i=0;i<10;i++){
		sum = sum + marks[i];
	}
	avg = (float)sum/10;
	printf("%f",avg);
}
