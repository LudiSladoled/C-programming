#include<stdio.h>

void prime(float *pok);
int main(){

	float num[5], *pok;
	int i;

	pok = &num[0];

	for(i = 0; i < 5; i++){
		printf("\nEnter %d. real number: ", i + 1);
		scanf("%f", pok+i);
	}
	prime(pok);

	return 0;
}
void prime(float *pok){

	int wholenum, i, j, k;

	for(i=0; i<5; i++){
		wholenum = (int)*(pok+i);
		
		for(k=2; k <= wholenum / 2; k++){
			
			if(wholenum % k == 0){
				k = wholenum + 1;
				j = 0;
			}
			else{
				j = 1;
			}
		}
		if(wholenum == 2 || wholenum == 3){
			j = 1;
		}
		if(j == 1){
			printf("\nThe whole part (%d) of the %d. number IS prime number.\n", wholenum, i+1);
		}
		else{
			printf("\nThe whole part (%d) of the %d. number IS NOT prime number.\n", wholenum, i+1);
		}
	}

	return;
}
