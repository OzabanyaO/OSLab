#include <stdio.h>
int main(){
	int num = 1, sum = 0;
	float i = 0;
	while(num > 0){
		printf("Enter your number : ");
		scanf("%d",&num);
		if(num > 0){
			sum += num;
			i++;
		}
	}
	printf("Summation = %d\n",sum);
	printf("Average : %f\n",sum/i);
	return 0;
}
