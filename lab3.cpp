
#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;


int func_zad1(int n) {
	if (n >= 0) {
		return n;
	}
	else {
		return -n;
	}
}
int func_zad2(int n) {
	int sum = 1;
	for (int i = 1; i < n; i++) {
		sum *= i;
		cout << sum << endl;
	}
	return sum;
}
int func_zad3(int k, int n) {
	int max = 0;
	for (int i = 0; i < k; i++) {
		if (i % n == 0 && i > max) {
			max = i;
		}
	}
	return max;
}
float func_zad4_5(int n) {
	return pow(2, n);
}
float func_zad6_7(int n, int m) {
	return pow(n, m);
}
float func_zad8(int n) {
	double i = 0;
	while (i * i < n) {
		i += 0.00001;
	}
	return i;
}
float func_zad9(int n, int m) {
	double i = 1, sum = 1;
	while (sum < n) {
		sum = 1;
		for (int j = 0; j < m; j++) {
			sum *= i;
		}
		i += 0.00001;
	}
	return i;
}
int func_zad10_1(int n) {
	int a, b, sum = 0;
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= n; i++) {
			a = j;
			b = i;
			while (a != 0 && b != 0)
			{
				if (a > b)
				{
					a = a % b;
				}
				else
				{
					b = b % a;
				}

			}
			if (a + b == 1) {
				sum += (j + i);
			}
			else {
				sum += 0;
			}
		}
	}
	return sum;
}
int func_zad10_2(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}
void func_zad11_2(int n, int c, int sum) {
	sum += c;
}
float func_zad11_1(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		float c = sqrt(i);
		func_zad11_2(n, c, sum);
	}
	return sum;
}
void func_zad12_2(int n, int c, int sum) {
	sum += c;
}
float func_zad12_1(int n, int m) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		float c = pow(i, 1 / m);
		func_zad12_2(n, c, sum);
	}
	return sum;
}
void func_zad13_a(int n) {
	int p = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (pow(j, 2) + pow(i, 2) == n) {
				p++;
				cout << j << " " << i << endl;
			}
		}
	}
	if (p == 0) {
		cout << "nie ma takiej sumy kwadratow" << endl;
	}
}
void func_zad13_b(int n) {
	int p = 0;
	vector<int> k = {};
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (pow(j, 2) + pow(i, 2) == n) {
				p++;
				if (count(k.begin(), k.end(), j) || count(k.begin(), k.end(), i)) {
					continue;
				}
				else {
					cout << j << " " << i << endl;
					k.push_back(j);
					k.push_back(i);
				}
			}
		}
	}
	if (p == 0) {
		cout << "nie ma takiej sumy kwadratow" << endl;
	}
}
void func_zad14_a(const int n, vector<int>& v)
{
	for (int i = 1; ; i++)
	{
		int sqr = i * i;
		if (sqr > n) break;

		int r = n - sqr;
		if (r > 0)
		{
			vector<int> v1 = v;
			v1.push_back(sqr);
			func_zad14_a(r, v1);
		}
		else
		{
			int size = v.size();
			for (int j = 0; j < size; ++j)
			{
				cout << sqrt(v[j]) << '+';
			}
			cout << sqrt(sqr) << endl;
		}
	}
}
void func_zad14_b(const int n, vector<int>& v, const int i0 = 1)
{
	for (int i = i0; ; i++)
	{
		int sqr = i * i;
		if (sqr > n) break;

		int r = n - sqr;
		if (r > 0)
		{
			vector<int> v1 = v;
			v1.push_back(sqr);
			func_zad14_b(r, v1, i);
		}
		else
		{
			int size = v.size();
			for (int j = 0; j < size; ++j)
			{
				cout << sqrt(v[j]) << '+';
			}
			cout << sqrt(sqr) << endl;
		}
	}
}
void func_zad15_a(int n, int m) {
	int p = 0;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (pow(j, m) + pow(i, m) == n) {
				p++;
				cout << j << " " << i << endl;
			}
		}
	}
	if (p == 0) {
		cout << "nie ma takiej sumy" << endl;
	}
}
void func_zad15_b(int n, int m) {
	int p = 0;
	vector<int> k = {};
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (pow(j, m) + pow(i, m) == n) {
				p++;
				if (count(k.begin(), k.end(), j) || count(k.begin(), k.end(), i)) {
					continue;
				}
				else {
					cout << j << " " << i << endl;
					k.push_back(j);
					k.push_back(i);
				}
			}
		}
	}
	if (p == 0) {
		cout << "nie ma takiej sumy" << endl;
	}
}
void func_zad16_a(const int n, int m, vector<int>& v)
{
	for (int i = 1; ; i++)
	{
		int sqr = 1;
		for (int i = 0; i < m; i++) {
			sqr *= n;
		}
		for (int i = 0) {
		if (sqr > n) break;
		}
		int r = n - sqr;
		if (r > 0)
		{
			vector<int> v1 = v;
			v1.push_back(sqr);
			func_zad14_a(r, v1);
		}
		else
		{
			int size = v.size();
			for (int j = 0; j < size; ++j)
			{
				cout << sqrt(v[j]) << '+';
			}
			cout << sqrt(sqr) << endl;
		}
	}
}
void func_zad17()
{
	static int j = 0;
	j++;
	cout << "Funkcja byla wywolana: " << j << " razy" << endl;
}
void func_zad18(int n)
{
	srand(time(0));
	double u18 = (double)(rand()) / RAND_MAX;
	for (int i = 0; i < n; i++) {
		cout << "n" << i + 1 << ": " << u18 << endl;
		if (u18 >= 0) {
			u18 = 1 - pow(u18, 2);
		}
		else {
			u18 = 1 - pow(-u18, 2);
		}
	}
}
void func_zad19(int n)
{
	static int m = 0;
	m += n;
	cout << m << endl;
}
int func_zad20(int n)
{
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return n * func_zad20(n - 1);
}
int func_zad21(int n)
{
	if (n == 0) {
		return 1;
	}
	return 2 * func_zad21(n - 1) + 5;
}
int func_zad22(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	return func_zad22(n - 1) + 2 * func_zad22(n - 2) + 3;
}
int func_zad23(int n)
{
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return func_zad23(n - 1) + func_zad23(n - 2);
	}
}
int func_zad24(int n, int m = 0)
{
	if (n == 0 || n == 1) {
		return 1;
	}
	for (int i = 0; i < n; i++) {
		m += func_zad23(i);
	}
	return m;
}
int func_zad25(int n)
{
	if (n == 1 || n == 0) {
		return 1;
	}
	else {
		if (n % 2 == 0) {
			return func_zad25(n - 1) + n;
		}
		else {
			return func_zad25(n - 1) * n;
		}
	}
}
int func_zad26(int n) {
	if (n == 0 || n == 1 || n == 2) {
		return 1;
	}
	if (n % 3 == 0) {
		return(func_zad26(n - 1) + func_zad26(n - 2));
	}
	else if ((n - 1) % 3 == 0) {
		return(5 * func_zad26(n - 1) + 4);
	}
	else if ((n - 2) % 3) {
		return(func_zad26(n - 1));
	}
}
int func_zad27(int n, int m)
{
	if (n == 0) {
		return m;
	}
	else if (m) {
		return n;
	}
	else {
		return func_zad27(n - 1, m) + func_zad27(n, m - 1) + func_zad27(n - 1, m - 1);
	}
}
int func_zad28(int n, int m)
{
	if (n == 0) {
		return m;
	}
	else if (n >= m && m > 0) {
		return n - m + func_zad28(n - 1, m) + func_zad28(n, m - 1);
	}
	else {
		return func_zad28(m, n);
	}
}
int func_zad29(int n, int m)
{
	if (n == 0) return m;
	return func_zad29(m % n, n);
}
int main()
{
	////zad1
	//cout << "Zadanie 1" << endl;
	//cout << "Napisz liczbe n: ";
	//int n1;
	//cin >> n1;
	//cout << func_zad1(n1) << endl;
	////zad2
	//cout << "Zadanie 2" << endl;
	//cout << "Napisz liczbe n: ";
	//int n2;
	//cin >> n2;
	//cout << func_zad2(n2) << endl;
	////zad3
	//cout << "Zadanie 3" << endl;
	//cout << "Napisz liczby k i n: ";
	//int n3, k3;
	//cin >> k3 >> n3;
	//cout << func_zad3(k3,n3) << endl;
	////zad4
	//cout << "Zadanie 4" << endl;
	//cout << "Napisz liczbe n: ";
	//int n4;
	//cin >> n4;
	//cout << func_zad4_5(n4) << endl;
	////zad5
	//cout << "Zadanie 5" << endl;
	//cout << "Napisz liczbe n: ";
	//int n5;
	//cin >> n5;
	//cout << func_zad4_5(n5) << endl;
	////zad6
	//cout << "Zadanie 6" << endl;
	//cout << "Napisz liczbe n i m: ";
	//int n6,m6;
	//cin >> n6 >> m6;
	//cout << func_zad6_7(n6,m6) << endl;
	////zad7
	//cout << "Zadanie 7" << endl;
	//cout << "Napisz liczbe n i m: ";
	//int n7, m7;
	//cin >> n7 >> m7;
	//cout << func_zad6_7(n7, m7) << endl;
	////zad8 
	//cout << "Zadanie 8" << endl;
	//cout << "Napisz liczbe n: ";
	//int n8;
	//cin >> n8;
	//cout << func_zad8(n8) << endl;
	////zad9
	//cout << "Zadanie 9" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n9, m9;
	//cin >> n9 >> m9;
	//cout << func_zad9(n9,m9) << endl;
	//cout << "Zadanie 10" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n10;
	//cin >> n10;
	//cout << func_zad10_2(n10) + func_zad10_1(n10) << endl;
	////zad11
	//cout << "Zadanie 11" << endl;
	//cout << "Napisz liczbe n: ";
	//int n11;
	//cin >> n11;
	//cout << func_zad11_1(n11) << endl;
	////zad12
	//cout << "Zadanie 12" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n12, m12;
	//cin >> n12 >> m12;
	//cout << func_zad12_1(n11,m12) << endl;
	////zad13a
	//cout << "Zadanie 13a" << endl;
	//cout << "Napisz liczby n: ";
	//int n13_a;
	//cin >> n13_a;
	//func_zad13_a(n13_a);
	////zad13b
	//cout << "Zadanie 13b" << endl;
	//cout << "Napisz liczbe n: ";
	//int n13_b;
	//cin >> n13_b;
	//func_zad13_a(n13_b);
	////zad14a
	//cout << "Zadanie 14a" << endl;
	//cout << "Napisz liczbe n: ";
	//int n14_a;
	//cin >> n14_a;
	//vector<int> a_14;
	//func_zad14_a(n14_a, a_14);
	////zad14b
	//cout << "Zadanie 14b" << endl;
	//cout << "Napisz liczbe n: ";
	//int n14_b;
	//cin >> n14_b;
	//vector<int> b_14;
	//func_zad14_b(n14_b, b_14);
	////zad15a
	//cout << "Zadanie 15a" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n15_a, m15_a;
	//cin >> n15_a >> m15_a;
	//func_zad15_a(n15_a, m15_a);
	////zad15b
	//cout << "Zadanie 15b" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n15_b, m15_b;
	//cin >> n15_b >> m15_b;
	//func_zad15_b(n15_b, m15_b);
	//zad16
	cout << "Zadanie 16a" << endl;
	cout << "Napisz liczby n i m: ";
	int n16_a, m16_a;
	vector<int> a_16;
	cin >> n16_a >> m16_a;
	func_zad16_a(n16_a, m16_a, a_16);
	////zad17
	//cout << "Zadanie 17" << endl;
	//for (int i = 0; i < 9; i++) {
	//	func_zad17();
	//}
	////zad18
	//cout << "Zadanie 18" << endl;
	//cout << "Napisz liczbe n: ";
	//int n18;
	//cin >> n18;
	//func_zad18(n18);
	////zad19
	//cout << "Zadanie 19" << endl;
	//for (int i = 0; i < 5; i++) {
	//	cout << "Napisz liczbe n: ";
	//	int n19;
	//	cin >> n19;
	//	func_zad19(n19);
	//}
	////zad20
	//cout << "Zadanie 20" << endl;
	//cout << "Napisz liczbe n: ";
	//int n20;
	//cin >>n20;
	//cout << func_zad20(n20) << endl;
	////zad21
	//cout << "Zadanie 21" << endl;
	//cout << "Napisz liczbe n: ";
	//int n21;
	//cin >> n21;
	//cout << func_zad21(n21) << endl;
	////zad22
	//cout << "Zadanie 22" << endl;
	//cout << "Napisz liczbe n: ";
	//int n22;
	//cin >> n22;
	//cout << func_zad22(n22) << endl;
	////zad23
	//cout << "Zadanie 23" << endl;
	//cout << "Napisz liczbe n: ";
	//int n23;
	//cin >> n23;
	//cout << func_zad23(n23) << endl;
	////zad24
	//cout << "Zadanie 24" << endl;
	//cout << "Napisz liczbe n: ";
	//int n24;
	//cin >> n24;
	//cout << func_zad24(n24) << endl;
	////zad25
	//cout << "Zadanie 25" << endl;
	//cout << "Napisz liczbe n: ";
	//int n25;
	//cin >> n25;
	//cout << func_zad25(n25) << endl;
	////zad27
	//cout << "Zadanie 27" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n27, m27;
	//cin >> n27 >> m27;
	//cout << func_zad27(n27, m27) << endl;
	////zad28
	//cout << "Zadanie 28" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n28, m28;
	//cin >> n28 >> m28;
	//cout << func_zad28(n28, m28) << endl;
	////zad29
	//cout << "Zadanie 29" << endl;
	//cout << "Napisz liczby n i m: ";
	//int n29, m29;
	//cin >> n29 >> m29;
	//cout << func_zad29(n29, m29) << endl;
}

