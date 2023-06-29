#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,min,max,n;
	int* arr;
	printf("Enter the number of value in array :\n");
	scanf("%d",&n);
	printf("Enter the array value:\n");
	arr = (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min =0;
	max =0;
	for(i=1;i<n;i++){
	     /*	if(arr[i]<arr[min])
		{
			min = i;
		}
		if(arr[i]>arr[max])
		{
			max = i;
		} */
		arr[i]<arr[min] ? min =i:min; 
		arr[i]>arr[max] ? max =i:max;

	}
	printf("Minimum value in array : %d and index : %d\n",arr[min],min);
	printf("Maximum value in array : %d and index :%d\n",arr[max],max);
	return 0;
}


	
