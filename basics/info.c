//Take your name & age from user and print them
#include<stdio.h>
int main(){
	char name[50];
	int age;
	
	printf("Enter your name :");
	//scanf("%s",&name);
	fgets(name,sizeof(name),stdin);
	
	printf("\nEnter your age :");
	scanf("%d",&age);
	
	printf("\nName : %s ",name);
	printf("\n Age : %d",age);
	return 0;
}
