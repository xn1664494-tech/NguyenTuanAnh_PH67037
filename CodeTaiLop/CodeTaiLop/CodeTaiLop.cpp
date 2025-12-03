// CodeTaiLop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<math.h>
void mangHaichieu() {
	int array[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("mang[%d][%d]:", i, j);
			scanf_s("%d", &array[i][j]);
			
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d, ", array[i][j]);
			
		}
		printf("\n");
	}
}
void demoString() {
	char tenSinhVien[10] = { 'A','n', 'h' };// 2 cách viết "anh"

	// get(tenSinhVien); > fgets();
	while (getchar() != '\n');
	// xuất dữ liệu = for + printf
	printf("Nhap ten sinh vien: ");
	// gets(name); > fgets();
	fgets(tenSinhVien, sizeof(tenSinhVien), stdin);

	//  Xuất dữ liệu = for + printf
	printf("%s", tenSinhVien);
	for (int i = 0; i < 3; i++) {
		printf("%c", tenSinhVien[i]);
	}
	printf("\n");
	// pút(tenSinhVien

}

int main()
{
	
	demoString();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
