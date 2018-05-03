#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define MAX_CLASS 5      //class�� ��
#define MAX_NUMBER 20   //�� class�� �л� ��

//���� ������ ���� �Լ� ����
// printGrade();   �� �ݺ��� ������ ����ϱ� ���� �Լ�
// updateGrade();   �� ��ȣ�� �Է¹޾� ������ �����ϱ� ���� �Լ�
// averageGrade();   �� �ݺ��� ��������� ����ϱ� ���� �Լ�

//�л����� ������ ������ ����Ʈ(�迭) ����
int list[MAX_CLASS][MAX_NUMBER] = {
	{ 30,16,21,43,89,16,48,55,30,74,61,100,70,17,95,45,69,38,43,81 },
	{ 90,29,13,47,46,68,30,37,3, 74,67, 33,86,72,60,15,83,29,95,25 },
	{ 39,36,8, 57,56,86,28,7, 72,30,88,12, 11,27,9, 49,21,38,58,75 },
	{ 30,3, 26,72,8, 72,17,70,29,69,44,47, 6, 77,80,59,8, 77,95,22 },
	{ 80,98,20,44,54,93,32,86,69,91,38,17, 83,13,92,74,77,11,90,44 } 
};

int printGrade(int list[MAX_CLASS][MAX_NUMBER]) {
	int a, b;

	system("cls");
	printf("1~5���� ������, 6�� ��ü���\n������ ����ϰ� ���� ���� �Է��ϼ���:");
	scanf("%d", &a);
	if (a < 6) {
		for (b = 0; b < MAX_NUMBER; b++)
		{
			printf("%d�� %d�� : %d��\n", a, b + 1, list[a - 1][b]);
		}
		printf("\n");
	}
	else if (a == 6) {
		for (a = 0; a < MAX_CLASS; a++) {
			for (b = 0; b < MAX_NUMBER; b++) {
				printf("%d�� %d�� : %d��\n", a + 1, b + 1, list[a][b]);
			}
			printf("\n");
		}
	}
	else {
		printf("�߸��� �� �Է��Դϴ�.\n");
	}

	main();
}

int updateGrade(int list[MAX_CLASS][MAX_NUMBER]) {
	int a, b, c;
	system("cls");
	printf("������ �л��� �� ��ȣ ������ �Է��ϼ���:");
	scanf("%d %d %d", &a, &b, &c);

	if ((a > 5 || a < 0) || (b > 20 || b < 0) || (c > 100 || c < 0)) {
		printf("�߸��� �Է��Դϴ�.\n");

	}
	else {
		printf("���� �� %d�� %d�� : %d��\n", a, b, list[a - 1][b - 1]);
		list[a - 1][b - 1] = c;
		printf("���� �� %d�� %d�� : %d��\n", a, b, list[a - 1][b - 1]);

	}
	main();
}

int averageGrade(int list[MAX_CLASS][MAX_NUMBER]) {
	int a, i, sum = 0, avg[5],gam;
	system("cls");
	printf("1~5���� ������,6�� ��ü ���\n��� ������ ����� ���� �Է��ϼ��� : ");
	scanf("%d", &a);
	switch (a) {
	case 1:
		for (i = 0; i < MAX_NUMBER; i++) {
			sum += list[a - 1][i];
			avg[0] = sum / MAX_NUMBER;
		}
		printf("\n%d�� ��� ���� : %d��\n\n", a, avg[0]);
		main();
		break;

	case 2:
		for (i = 0; i < MAX_NUMBER; i++) {
			sum += list[a - 1][i];
			avg[1] = sum / MAX_NUMBER;
		}
		printf("\n%d�� ��� ���� : %d��\n\n", a, avg[1]);
		main();
		break;
	case 3:
		for (i = 0; i < MAX_NUMBER; i++) {
			sum += list[a - 1][i];
			avg[2] = sum / MAX_NUMBER;
		}
		printf("\n%d�� ��� ���� : %d��\n\n", a, avg[2]);
		main();
		break;
	case 4:
		for (i = 0; i < MAX_NUMBER; i++) {
			sum += list[a - 1][i];
			avg[3] = sum / MAX_NUMBER;
		}
		printf("\n%d�� ��� ���� : %d��\n\n", a, avg[3]);
		main();
		break;
	case 5:
		for (i = 0; i < MAX_NUMBER; i++) {
			sum += list[a - 1][i];
			avg[4] = sum / MAX_NUMBER;
		}
		printf("\n%d�� ��� ���� : %d��\n\n", a, avg[4]);
		main();
		break;
	case 6:
		for (a = 0;a<MAX_CLASS;a++) {
			for (i = 0; i < MAX_NUMBER; i++) {
				sum += list[a][i];
				gam = sum / MAX_NUMBER;
			}
			printf("\n%d�� ��� ���� : %d��", a+1, gam);
			
			sum = 0;
		}
		
		main();
		return 0;
		break;
	default:
		main();
		return 0;

	}
}


int bub(int list[MAX_CLASS][MAX_NUMBER]) {
	int i, k, x;
	system("cls");
	printf("���� �� �� �Է� : ");
	scanf("%d", &x);

	HDC hdc = GetWindowDC(GetForegroundWindow());

	if (x <= 5)
	{
		for (k = 0;k < MAX_NUMBER;k++) {
			Rectangle(hdc, 0, 0, 1000, 1000);
			for (i = 0;i < MAX_NUMBER - 1;i++) {
				if (list[x - 1][i] > list[x - 1][i + 1]) {
					int tmp = list[x - 1][i];
					list[x - 1][i] = list[x - 1][i + 1];
					list[x - 1][i + 1] = tmp;
				}
			}

		}
		for (i = 0;i < MAX_NUMBER;i++) {
			Rectangle(hdc, 200 + i * 30, 200, 230 + i * 30, 200 - list[x - 1][i]);
		}
	}
	else
		printf("\n�߸��� �Է��Դϴ�.\n");

	main();
	return 0;

}



int main(void) {
	int menu;

	while (1) {
		printf("\n1 : �������/ 2 : ��������/ 3 : ����������/ 4 : ������ �׷��� / 5 : ����\n�޴��� �Է��ϼ��� : ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			printGrade(list);
			break;
		case 2:
			updateGrade(list);
			break;
		case 3:
			averageGrade(list);
			break;
		case 4:
			bub(list);
			break;
		case 5:
			printf("\n���α׷��� �����մϴ�\n\n");
			return 0;
			break;
		default:
			printf("\n�߸��� �Է��Դϴ�\n\n");
			continue;
		}

		return 0;
	}
}