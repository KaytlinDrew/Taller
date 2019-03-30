#include <stdio.h>
#include <stdlib.h>

int main(){
	for(int i=1;i<101;i++){
		if(((i%5)==0)&&((i%3)==0))
			printf("FizzBuzz ");
		else
			if((i%5)==0)
				printf("Buzz ");
			else
				if((i%3)==0)
					printf("Fizz ");
				else 
					printf("%d ",i);
	}
	return 0;
}