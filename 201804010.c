#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#define SIZE 10


int ex1() {
	FILE *fp;
	char str[100];

	fp = fopen("file.txt", "w");
	if (fp == NULL) {
		fprintf(stderr, "파일 file.txt를 열 수 없습니다. \n");
		exit(0);
	}
	do {
		gets(str);
		fputs(str, fp);

	} while (strlen(str) != 0);

	fclose(fp);

	return 0;
}

int ex2() {
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	printf("원본 파일 이름:");
	scanf("%s", file1);

	printf("복사 파일 이름:");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "복사 파일 %s을 열 수 없습니다\n",file2);
		exit(1);
	}

	int c;
	while ((c = fgetc(fp1) != EOF))
		fputc(c, fp2);

	fclose(fp1);
	fclose(fp2);

}

int ex3() {

	FILE *fp;
	fp = fopen("sales.txt", "w");
	fprintf(fp, "2017.3.1 매출 : %d \n", 300000);

	fclose(fp);
	return 0;
}

int ex4() {

	FILE *fp;
	int number;
	char name[30];
	int score;
	char ch;
	fp = fopen("scores.txt", "w");
	if (fp == NULL) {
		printf("성적파일을 열수 없음ㅁㅁㄴㅇㄻ");
		exit(0);
	}
	do {
		printf("\n학번 : ");
		scanf("%d", &number);

		printf("이름 : ");
		scanf("%s", name);

		printf("성적 : ");
		scanf("%f", &score);

		fprintf(fp, "%d %s %d", number, name, score);
		printf("데이터 추가를 계속? (y/n) : ");
		ch = getche();
	} while (ch != 'n');

	fclose(fp);
}

int ex5() {

	int buffer[SIZE];
	FILE *fp = NULL;
	int i;
	fp = fopen("binary.bin", "rb");
	if (fp == NULL) {
		fprintf(stderr, "binary.bin 파일을 열 수 없습니다.");
		return 1;
	}
	fread(buffer, sizeof(int), SIZE, fp);
	for (i = 0; i < SIZE; fp)
		printf("%d", buffer[i]);
	fclose(fp);
	return 0;
}

int ex6() {

	HDC hdc = GetWindowDC(GetForegroundWindow());

	FILE *fp = fopen("D:\\sbr.jpg", "rb");
	if (fp == NULL) {
		printf("sbr.jpg 파일을 열 수 없습니다.");
		exit(1);
	}
	char image[1280][824];
	fread(image, 1, 1280 *824, fp);
	fclose(fp);

	int r, c;
	for (r = 0; r < 1280; r++) {
		for (c = 0; c < 824; c++) {
			int red = image[r][c];
			int green = image[r][c];
			int blue = image[r][c];
			SetPixel(hdc, c, r, RGB(red, green, blue));

		}
	}


}

int ex7() {
	FILE *fp;
	fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("파일 못찾음 ㅅㄱ");
		exit(1);
	}
	fputs("This is an house", fp);
	fseek(fp, 11, SEEK_SET);
	fputs("apple", fp);
	fclose(fp);
	return 0;

}

int ex8() {
	char *pc;
	pc = (char *)malloc(1 * sizeof(char));
	if (pc == NULL) {
		printf("메모리 할당 오류");
		exit(1);
	}

	*pc = 'a';
	printf("%c\n", *pc);
	free(pc);

}
int ex9() {
	int *pi;
	pi = (int *)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("메모리 할당오류");
		exit(1);
	}
	*pi = 1;
	*(pi + 1) = 2;
	*(pi + 2) = 3;
	*(pi + 3) = 4;
	*(pi + 4) = 5;

	free(pi);
	return 0;

}

int ex10() {
	int *p;
	int i, items;

	printf("항목의 개수는 몇개입니까?");
	scanf("%d", &items);
	p = (int *)malloc(sizeof(int)*items);

	for (i = 0; i < items; i++) {
		printf("항목(정수를 입력): ");
		scanf("%d", &p[i]);
	}

	printf("\n입력된 값은 다음과 같다:\n");
	for (i = 0; i < items; i++)
		printf("%d", p[i]);
	printf("\n");
	free(p);


}
void main() {

	ex10();


}