#include <stdio.h>
//���� : �̸�, ����(��/��), ����, ����, ������ �Է¹޾� �̸�, ����, ��, ��, ��, ��, ���(�Ҽ��� 2�ڸ�����)�� ����Ͻÿ�
int main(void) {
	char name[100], gender[3];
	int kor, eng, mat;
	int sum;
	double avg;

	printf("�̸��� �Է��ϼ��� :");
	scanf_s("%s", name, (unsigned int)sizeof(name));


	printf("������ �Է��ϼ���(��/��) : ");
	scanf_s("%s", gender, (unsigned int)sizeof(gender));

	printf("���� ���� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);
	sum = kor + eng + mat;
	avg = sum / 3.0;

	printf("�̸� : %s\n���� : %s\n", name, gender);
	printf("���� = %d\n", kor);
	printf("���� = %d\n", eng);
	printf("���� = %d\n", mat);
	printf("�հ� = %d\n", sum);
	printf("��� = %.2lf\n", avg);
}