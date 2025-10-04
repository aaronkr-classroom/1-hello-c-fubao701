//date.c
#include<stdio.h>

int main(void) {
	//2025년 12월 31일을 3개이 정수 변수에 나누어서 대입함
	int year = 2025,
		mth = 12,
		day = 31;
	//일을 하루 증가시키면 day가 31에서 32가 됨
    day++;
    //일이 31일을 초과하면 1일로 바뀌고 월을 증가시킴
		 if (day >= 30) {
			 mth++; //월을 증가시키면 mth가 12에서 13이 됨
				 day = 1; //월이 증가되었으니 해당 월의 처음인 1일로 변경함
				 //월이12월을 초과하면 1월로 바귀고 연도를 증가시킴
				 if (mth >= 12) {
					 year++;
					 mth = 1;
				 }
         }

		 printf("Date:%d년 %d월 %d일", year, mth, day);
	return 0;
}