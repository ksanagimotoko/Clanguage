#include <stdio.h>

int main() {

	int score[10]={10,9,8,7,6,5,4,3,2,1};
	int minIndex;
	
	for(int j=0; j<10; j++){
			int min = 100;
		
		for(int i=j; i<10; i++)
		{
			if(score[i]< min){
				min = score[i];
				minIndex= i;
			}
		}


		int temp = score[j];
		score[j] = score[minIndex];
		score[minIndex] = temp;

	}



	for(int i=0; i<10; i++)
		printf("%d ", score[i]);

	return 0;
}



