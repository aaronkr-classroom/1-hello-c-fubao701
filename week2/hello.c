# include<stdio.h>

int main(void) {
	int age = 45;
	char grade = 'A';
	char name[] = "Aaron"; //['A', 'a', 'r', 'o', 'n']


	printf("Hello World!~~\n");
	printf("My name is %s.\n", name); //\n = 줄바꾸기
	printf("I'm %d years old.\n", age); //\t = 들여쓰기
	printf("I want a %c grade.\n", grade);
	return 0;
}