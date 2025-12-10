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
void thongTinMh() {
	printf("Ban da chon chuc nang 1\n");
	char tenMh[50];
	char maMh[50];
	int soTinChi;
	printf("Nhap ten mon hoc:");
	fgets(tenMh, sizeof(tenMh), stdin);
	//scanf_s("%s", tenMh, sizeof(tenMh));
	printf("Nhap ma mon hoc:");
	//scanf_s("%s", maMh, sizeof(maMh));
	fgets(maMh, sizeof(maMh), stdin);
	printf("Nhap so tin chi: ");
	scanf_s("%d", &soTinChi);
	printf("Mon hoc: %s co ma mon %s co so tin chi %d\n", tenMh, maMh, soTinChi);
	double tinChi = 0;
	tinChi = 500000 * soTinChi;
	printf("Hoc phi mon %s la: %.2lf\n", tenMh, tinChi);
	

}
void tinhTongsole() {
	printf("Ban da chon chuc nang 2\n");
	int n;
	printf("Nhap 1 so nguyen bat ky:\n");
	scanf_s("%d", &n);
	int tong = 0;
	for (int i = 1; i < n; i++) {
		tong = tong + i;
		
	}
	printf(" Tong cac so tu 1 den %d la: %d\n", n, tong);
	if (tong % 2 == 0) {
		printf("So %d la so chan.\n", tong);
	}
	else {
		printf("So %d la so le.\n", tong);
	}



}

	
void hamVongLap(int n) {
	int luachon = 1;
	while (luachon = 1) {
		switch (n) {
		case 1:
			thongTinMh();
			break;
		case 2:
			tinhTongsole();
			break;
		case 3:

			break;
		}
		printf("Ban co muon tiep tuc khong? 1.Co 2.Khong");
		scanf_s("%d", &luachon);
	}

		
}


int main()
{
	int n;
	do {
		printf("-----Menu-----\n");
		printf("Moi ban chon chuc nang:\n");
		printf("CN1: Thong tin mon hoc\n");
		printf("CN2: Tinh tong so le\n");
		printf("CN3: Thong tin diem lab\n");
		printf("CN0: Thoat chuong trinh\n");
		scanf_s("%d", &n);
		hamVongLap(n);
	} while (n != 0);
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
