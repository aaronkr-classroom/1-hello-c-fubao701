//ch8_hw.c
// 슬라이드 47
//Q1,Q2,Q3 작성하고 결과가 콘솔에서 표시하세요.
//30분 이내 하세요.
//4시에 반복문 슬라이드를 볼게요.
#include<stdio.h>

void print_stars(int);
void Q1(int); //음성/양성 
int Q2(int,int);
void Q3(int);

int main(void) {
	int result = -5;
	
	print_stars(25);
	printf("CH8_HW:\n");
	print_stars(25);

	Q1(result);
	Q2(result,1);
	Q3(result);

	return 0;
}
void print_stars(int n) {
	for (int i = 0; i < n; i++) {
		printf("*");
	}
	printf("\n");
}


void Q1(int result) {
	if (result < 0) {
		result = result * (-1);
		printf("Q1: result는 음성이었다\n");
	}
	else {
		printf("Q1: result는 양성이었다\n");
	}
}

int Q2(int result, int print) {
	result = result < 0 ? result * -1 : result;
	if(print)
	printf("Q2: result:%d\n", result);

	return result;
}
void Q3(int result) {
	//먼저 양성으로 변경하기
	result = Q2(result,0);
	switch (result) {
	case 6: result = 0; break;
	case 5: result = 1; 
	case 4: result = result * 10; break;

	}
	printf("Q3: result: %d\n", result);
}