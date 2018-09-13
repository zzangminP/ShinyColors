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
		fprintf(stderr, "���� file.txt�� �� �� �����ϴ�. \n");
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

	printf("���� ���� �̸�:");
	scanf("%s", file1);

	printf("���� ���� �̸�:");
	scanf("%s", file2);

	if ((fp1 = fopen(file1, "r")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", file1);
		exit(1);
	}

	if ((fp2 = fopen(file2, "w")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�\n",file2);
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
	fprintf(fp, "2017.3.1 ���� : %d \n", 300000);

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
		printf("���������� ���� ��������������");
		exit(0);
	}
	do {
		printf("\n�й� : ");
		scanf("%d", &number);

		printf("�̸� : ");
		scanf("%s", name);

		printf("���� : ");
		scanf("%f", &score);

		fprintf(fp, "%d %s %d", number, name, score);
		printf("������ �߰��� ���? (y/n) : ");
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
		fprintf(stderr, "binary.bin ������ �� �� �����ϴ�.");
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
		printf("sbr.jpg ������ �� �� �����ϴ�.");
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
		printf("���� ��ã�� ����");
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
		printf("�޸� �Ҵ� ����");
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
		printf("�޸� �Ҵ����");
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

	printf("�׸��� ������ ��Դϱ�?");
	scanf("%d", &items);
	p = (int *)malloc(sizeof(int)*items);

	for (i = 0; i < items; i++) {
		printf("�׸�(������ �Է�): ");
		scanf("%d", &p[i]);
	}

	printf("\n�Էµ� ���� ������ ����:\n");
	for (i = 0; i < items; i++)
		printf("%d", p[i]);
	printf("\n");
	free(p);


}
void main() {

	ex10();


}