#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main(){
	if(fork()==0){
		printf("I am a child.\n");
		
	}
	else{
		printf("I am the parent.\n");
		
	}
	printf("Hello!\n");
	return 0;
	
}
