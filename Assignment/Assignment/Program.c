// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.
#include <stdio.h>
#include<math.h>
void kiemTraSoNguyen()
{
	printf("\nBan da chon Chuc nang 1\n");
	int   x;
	int i, dem = 0;
	printf("Vui long nhap 1 so bat ki: \n");
	scanf("%d", &x);
	if((int)x == x) 
	{
		printf("So %d  la so nguyen\n", x);
		if (x < 2) 
		{
			printf("%d khong phai so nguyen to", x);
		}
		for (i = 2; i < x; i++)
		{
			if ( x % i == 0);
			dem++;
		}
	}
	if (dem == 0)
	{
		printf(" %d la so nguyen to", x);
	}
	else 
	{
		printf(" %d khong phai so nguyen to", x);
	}
	for (i = 1; i < x; i++) 
	{
		if (i * i == x) 
		{
			printf("\n%d la so chinh phuong", x);
			break;
		}
	}
	
}
int ucln(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return ucln(b, a % b);
	}
}
int bcln(int a, int b) {
	return (a * b) / ucln(a, b);
}
void ucln_bcln() {
	printf("\nBan da chon Chuc nang so 2\n");
	int a, b;
	printf("\nNhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("UCLN cua %d va %d la %d", a, b, ucln(a, b));
	printf("\nBCLN cua %d va %d la %d", a, b, bcln(a, b));
}
void kaRaOKe() {
	printf("\nBan sa chon chuc nang 3\n");
	int giobatdau, gioketthuc;
	int thoigianhat, thoigianthem;
	float sotienthem, tongtien;
	printf("Nhap vao gio bat dau:\n");
	scanf("%d", &giobatdau);
	printf("Nhap vao gio ket thuc:\n");
	scanf("%d", &gioketthuc);
	thoigianhat = gioketthuc - giobatdau;
	if (thoigianhat <= 3) {
		tongtien = thoigianhat * 150000;
	}
	else {
		thoigianthem = thoigianhat - 3;
		sotienthem = thoigianthem * 150000 * 0, 7;
		tongtien = 3 * 150000 + sotienthem;
	}
	if (giobatdau >= 14 && giobatdau <= 17) {
		tongtien = tongtien * 0, 9;
	}
	printf("Tong so tien can thanh toan la: %.2f", tongtien);

}
void tinhTiendien() {
	printf("\nBan da chon chuc nang 4\n");
	int sodien;
	float sotien;
	float gia1 = 1.678, gia2 = 1.734, gia3 = 2.014, gia4 = 2.536, gia5 = 2.834, gia6 = 2.927;
	printf("\nNhap so dien (kWh): ");
	scanf("%d", &sodien);
	if (sodien < 50) {
		sotien = sodien * gia1;
	}
	else if (sodien>=50 && sodien<100) {
		sotien = sodien * gia2;
	}
	else if (sodien >=100 && sodien <200) {
		sotien = sodien * gia3;
	}
	else if (sodien >=200 && sodien < 300 ) {
		sotien = sodien * gia4;
	}
	else if (sodien >=300 && sodien < 400) {
		sotien= sodien * gia5;
	}
	else if (sodien >= 400) {
		sotien = sodien * gia6;
	}
	printf("so tien can phai tra la: %.0f VND ", sotien);
	
	
}
void doiTien() {
	printf("\nBan da chon chuc nang so 5:\n");
	int n;
	printf("Moi nhao so tien can doi: ");
	scanf("%d", &n);
	int menhgia[] = { 500, 200,100,50,30,10,5,2,1 };
	while (n <= 0) {
		printf("Vui long nhap so tien hop le >0\n");
		printf("Moi nhap lại so tien:%d\n");
		scanf("%d", &n);
	}
	int sototien;
	int sotien = n;
	for (int i = 0; i < 9; i++) {
		if (n > menhgia[i] || n == 1) {
			sototien = sotien / menhgia[i];
			printf("\nCO %d so to tien %d", sototien, menhgia[i]);
			sotien %= menhgia[i];
		}
	}
}
void vaynganhang() {
	printf("\nBan da chon Chuc nang 6\n");
	int i, kyhan = 12;
	float sotien,  ls;
	float tong = 0.0f;
	float gochangthang, laihangthang, tienhangthang;
	printf("\nBan muon vay bao nhieu: ");
	scanf("%f", &sotien);
	ls = 0.05;
	gochangthang = sotien / kyhan;
	for (i = 1; i <= kyhan; i++) {
		laihangthang = sotien * ls;
		tienhangthang = laihangthang + gochangthang;
		tong += tienhangthang;
		sotien = sotien - gochangthang;
		printf("\n\nSo tien can tra trong thang %d", i);
		printf("\nLai phai tra: %.0f", laihangthang);
		printf("\nGoc phai tra: %.0f", gochangthang);
		printf("\nTien phai tra: %.0f", tienhangthang);
		printf("\nTien con lai: %.0f", sotien);
	}
	printf("\nTong tien ban tra sau 12 thang la: %.0f VND", tong);
}
void vaytienmuaxe() {
	printf("\nBan da chon Chuc nang so 7\n");
	float phanTramVay;
	printf("Nhap phan tram vay (0 -> 1): ");
	scanf("%f", &phanTramVay);

	double phanTramTraTruoc = 1.0 - phanTramVay;
	double sotien = 500000000;
	double laiSuat = 0.072 / 24;
	int kyHan = 24;

	double tienTraTruoc = sotien * phanTramTraTruoc;
	sotien = sotien - tienTraTruoc;
	double gocHangThang = sotien / kyHan;

	printf("\nSo tien tra truoc la: %.0lf VND\n", tienTraTruoc);
	printf("\nSo tien phai tra hang thang:");
	printf("\nKy han\tLai phai tra\tGoc phan tra\tSo tien phai tra\tSo tien con lai");
	for (int i = 1; i <= kyHan; i++) { // Changed 'thoiHan' to 'kyHan'
		double traLai = sotien * laiSuat;
		double tienHangThang = traLai + gocHangThang;
		sotien = sotien - gocHangThang;
		printf("\n  %d\t%.0lf\t\t%.0lf\t%.0lf\t\t%.0lf\n", i, traLai, gocHangThang, tienHangThang, sotien);
	}
}
struct SienVien {
	char hoten[50];
	float tb;
};

void gamelott() {
	printf("\nBan da chon Chuc nang so 9\n");
	int i, so1, so2, count = 0;
	int kq, ketqua[2];
	printf("Nhap so 1: ");
	scanf("%d", &so1);
	printf("Nhap so 2: ");
	scanf("%d", &so2);
	srand(time(0));
	for (i = 0; i < 2; i++) {
		kq = 1 + rand() % 15;
		ketqua[i] = kq;
	}
	for (i = 0; i < 2; i++) {
		if (so1 == ketqua[i]) {
			count++;
		}
		if (so2 == ketqua[i]) {
			count++;
		}
	}
	printf("\nKet qua so xo hom nay la!");
	printf("\nSo 1 = %d", ketqua[0]);
	printf("\nSo 2 = %d", ketqua[1]);
	if (count == 2) {
		printf("\nChuc mung ban da trung giai dac biet!");
		printf("\nGia tri giai thuong: 65 ti VND");
	}
	else if (count == 1) {
		printf("\nChuc mung ban da trung giai nhat!");
		printf("\nGia tri giai thuong: 500 trieu VND");
	}
	else {
		printf("\nCHUC BAN MAY MAN LAN SAU!");
	}
}
struct PhanSo {
	int tu;
	int mau;
};
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

void phanso() {
	printf("\nBan da chon Chuc nang so 10\n");
	struct PhanSo ps1, ps2, tong, hieu, tich, thuong;
	printf("Nhap phan so thu 1 (tu mau): ");
	scanf("%d %d", &ps1.tu, &ps1.mau);
	printf("Nhap phan so thu 2 (tu mau): ");
	scanf("%d %d", &ps2.tu, &ps2.mau);

	
	tong.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	tong.mau = ps1.mau * ps2.mau;

	hieu.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	hieu.mau = ps1.mau * ps2.mau;
	
	tich.tu = ps1.tu * ps2.tu;
	tich.mau = ps1.mau * ps2.mau;
	
	if (ps2.tu != 0) {
		thuong.tu = ps1.tu * ps2.mau;
		thuong.mau = ps1.mau * ps2.tu;
	}
	else {
		printf("\nPhan so thu hai co mau so la 0. Khong the tinh thuong.\n");
		thuong.tu = thuong.mau = 0;
	}

	printf("\nTong 2 phan so: %d/%d", tong.tu, tong.mau);
	printf("\nHieu 2 phan so: %d/%d", hieu.tu, hieu.mau);
	printf("\nTich 2 phan so: %d/%d", tich.tu, tich.mau);
	if (ps2.tu != 0) {
		printf("\nThuong 2 phan so: %d/%d", thuong.tu, thuong.mau);
	}

	printf("\n\nRut gon phan so:");
	if (tong.mau != 0) {
		int rg = gcd(abs(tong.tu), abs(tong.mau));
		printf("\nTong la: %d/%d", tong.tu / rg, tong.mau / rg);
	}
	if (hieu.mau != 0) {
		int rg = gcd(abs(hieu.tu), abs(hieu.mau));
		printf("\nHieu la: %d/%d", hieu.tu / rg, hieu.mau / rg);
	}
	if (tich.mau != 0) {
		int rg = gcd(abs(tich.tu), abs(tich.mau));
		printf("\nTich la: %d/%d", tich.tu / rg, tich.mau / rg);
	}
	if (ps2.tu != 0 && thuong.mau != 0) {
		int rg = gcd(abs(thuong.tu), abs(thuong.mau));
		printf("\nThuong la: %d/%d", thuong.tu / rg, thuong.mau / rg);
	}
}
void hamVongLap(int n)
{
	int luaChon = 1;
	while (luaChon == 1)
	{
		switch (n)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			ucln_bcln();
			break;
		case 3:
			kaRaOKe();
			break;
		case 4:
			tinhTiendien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			vaynganhang();
			break;
		case 7:
			vaytienmuaxe();
			break;
		case 8:
			
			break;
		case 9:
			gamelott();
			break;
		case 10:
			phanso();
			break;
		}
		printf("\nBan co muon tiep tuc khong (1: Co, 0: Khong): ");
		scanf_s("%d", &luaChon);
		printf("----------------------------------------------------\n");
	}
}






int main()
{
	int n;
	do {


		printf("\n     MENU     \n");
		printf("Moi ban chon chuc nang\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim uoc va boi chung cua 2 so\n");
		printf("3. Tinh tien cho quan karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Doi tien\n");
		printf("6. Tinh lai suat vay ngan hang va vay tra\n");
		printf("7. Vay tien mua xe\n");
		printf("8. Sap xep thong tin sinh vien\n");
		printf("9. Xay dung game FPOLY-LOTT\n");
		printf("10. Tinh toan phan so\n");
		printf("11. Thoat chuong trinh\n");
		scanf("%d", &n);
		hamVongLap(n);
	} while (n != 0);
} 


// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Mo "View" > "Solution Explorer"
//          de them/quan ly cac files
//   2. Mo "View" > "Output"
//          de kiem tra "build output" va "cac thong bao khac"
//   3. Mo "View" > "Error List"
//          de xem loi
//   4. Chon Project > "Add" > "New Item"
//          de tao moi file code,
//      hoac Project > "Add" > "Existing Item"
//          de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//          chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//          trong cua so "Solution Explorer"
//          bam chuot phai vao "Solution"
//          chon "Open Folder in File Explorer"

// GV: AnhTT184