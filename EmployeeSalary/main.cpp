#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Ngay
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Ngay(int, int, int);
	void Nhap();
	void Xuat();
};

Ngay::Ngay(int NGAY, int THANG, int NAM)
{
	ngay = NGAY;
	thang = THANG;
	nam = NAM;
}

void Ngay::Nhap()
{
	cout << "Nhap ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
}

void Ngay::Xuat()
{
	cout << ngay << "/" << thang << "/" << nam << endl;
}

class DoiBong
{
protected:
	string Ma;
	string Ten;
	Ngay NgaySinh;
	int SoAo;
	int ViTri; // 3: Tien dao, 2: Tien Ve, 1: Hau ve, 0: Thu mon 
	Ngay ThoiHanHD;
	int LuongTuan;
	int check{}; // 1: Doi A, 0: Doi B
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int TinhLuong() = 0;
};

void DoiBong::Nhap()
{
	cout << "Nhap ma: ";
	getline(cin, Ma);
	cout << "Nhap ten: ";
	getline(cin, Ten);
	cout << "Nhap ngay sinh: "; NgaySinh.Nhap();
	cout << "Nhap so ao: ";
	cin >> SoAo;
	cout << "Nhap vi tri: ";
	cin >> ViTri;
	cout << "Nhap thoi han hop dong: "; ThoiHanHD.Nhap();
	cout << "Nhap luong tuan: ";
	cin >> LuongTuan;
}

void DoiBong::Xuat()
{
	cout << "Nhap ma: " << Ma << endl;
	cout << "Nhap ten: " << Ten << endl;
	cout << "Nhap ngay sinh: "; NgaySinh.Xuat();
	cout << "Nhap so ao: " << SoAo << endl;
	cout << "Nhap vi tri: " << ViTri << endl;
	cout << "Nhap thoi han hop dong: "; ThoiHanHD.Xuat();
	cout << "Nhap luong tuan: " << LuongTuan << endl;
}

class DoiA :public DoiBong
{
public:
	DoiA();
	void Nhap();
	void Xuat();
	int TinhLuong();
};

void DoiA::Nhap()
{
	DoiBong::Nhap();
}

void DoiA::Xuat()
{
	DoiBong::Xuat();
}

int DoiA::TinhLuong()
{
	return LuongTuan;
}

class DoiB :public DoiBong
{
private:
	int DiemTrienVong;
	int TrangThai; // 1: San sang thi dau, 0: Khong the thi dau
public:
	DoiB();
	void Nhap();
	void Xuat();
	int TinhLuong();
};

void DoiB::Nhap()
{
	DoiBong::Nhap();
	cout << "Nhap diem trien vong: ";
	cin >> DiemTrienVong;
	cout << "Nhap trang thai: ";
	cin >> TrangThai;
}

void DoiB::Xuat()
{
	DoiBong::Xuat();
	cout << "Nhap diem trien vong: " << DiemTrienVong << endl;
	cout << "Nhap trang thai: " << TrangThai << endl;
}

int DoiB::TinhLuong()
{
	return LuongTuan;
}

class DoiHinh
{
private:
	vector<DoiBong*> DS_DoiHinh;
	int dem_DoiA = 0;
	int dem_DoiB = 0;
public:
	void Nhap();
	void Xuat();
	int TinhLuongDS();
	int TinhLuongDoiA();
	int TinhLuongDoiB();
};

void DoiHinh::Nhap()
{
	DoiBong* temp;
	DoiA t1;
	DoiB* t2 = NULL;
	while (true)
	{
		system("cls");
		cout << "So luong cau thu Doi A: " << dem_DoiA << endl;
		cout << "So luong cau thu Doi B: " << dem_DoiB << endl;
		cout << "=================== NHAP THONG TIN CAU THU ===================" << endl;
		cout << "1. Nhap cau thu doi A" << endl;
		cout << "2. Nhap cau thu doi B" << endl;
		cout << "0. Thoat" << endl;
		cout << "Nhap lua chon: ";
		int luachon = 0;
		cin >> luachon;

		if (luachon == 0)
		{
			return;
		}
		else if (luachon == 1)
		{
			cout << "Nhap thong tin cau thu doi A" << endl;
			temp = &t1;
			dem_DoiA++;
		}
		else if (luachon == 2)
		{
			cout << "Nhap thong tin cau thu doi B" << endl;
			temp = t2;
			dem_DoiB++;
		}
		else
		{
			cout << "Nhap loi" << endl;
			system("pause");
			continue;
		}
		temp->Nhap();
		DS_DoiHinh.push_back(temp);
	}
}

void DoiHinh::Xuat()
{
	cout << "\n\tDanh sach cau thu" << endl;
	if (DS_DoiHinh.empty())
		cout << "\tDanh sach rong" << endl;
	else
	{
		for (int i = 0; i < DS_DoiHinh.size(); i++)
		{
			DS_DoiHinh[i]->Xuat();
			cout << endl;
		}
	}
}



int main()
{
	DoiHinh dh;
	dh.Nhap();
	return 0;
}