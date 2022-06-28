#include<stdio.h>
#include<string.h>
int main(){

	char words[5][20], t[20];
	int i;
	int j;

	for(i=0; i<5; i++){
		printf("\nWrite %d. word: ", i + 1);
		scanf("%s", words[i]);
	}
	for(i=0; i<4; i++){

		for(j=i+1; j<5; j++){

			if(strcmp(words[i], words[j]) == 1){
				strcpy(t, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], t);
			}
		}
	}
	printf("\nWords sorted from a to z: ");

	for(i=0; i<5; i++){
		printf("\n %s", words[i]);
	}

	return 0;
}
