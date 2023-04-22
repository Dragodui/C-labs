#include <iostream>
#include<cmath>
#include <vector>
#include <algorithm>

using namespace std;


int fib(int n) {
	if (n == 1 || n == 2) {
		return (n - 1);
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
int factorial(int i) {
	int sum=1;
	for (int j = 1; j <= i; j++) {
		sum *= j;
	}
	return sum;
}
int main() {
	//zad1
	cout << "ZADANIE 1" << endl;
	cout << "napisz 2 liczby n i m: ";
	int n, m;
	cin >> n >> m;
	for (int i = 1; i < m;i++) {
		if (i % n == 0) {
			cout << i << endl;
		}
	}
	//zad2
	cout << "ZADANIE 2" << endl;
	cout << "napisz 2 liczby n i m: ";
	int n1, m1, i = 0;
	cin >> n1 >> m1;
	
		for (int j = 1;; j++) {
			if (j % n1 == 0) {
				cout << j << endl;
				i++;
				if (i == m1) {
					break;
				}
			}
		}
		//zad3
		cout << "ZADANIE 3" << endl;
		cout << "napisz 3 liczby n, m, k: ";
		int n2, m2, k2;
		cin >> n2 >> m2 >> k2;
		m2++;
		for (m2; m2 < k2; m2++) {
			if (m2 % n2 == 0) {
				cout << m2 << endl;
			}
		}
		//zad4
		cout << "ZADANIE 4" << endl;
		cout << "napisz liczbe n: ";
		int n3, s = 1;
		cin >> n3;
		for (int i = 1; i <= n3; i++) {
			s *= i;
		}
		cout << s << endl;
		//zad5
		cout << "ZADANIE 5" << endl;
		cout << "napisz liczbe n: ";
		int n4, s4 = 0;
		cin >> n4;
		for (int i = 1; i <= n4; i++) {
			s4 += pow(i, 2);
		}
		cout << s4 << endl;
		//zad6
		cout << "ZADANIE 6" << endl;
		cout << "napisz liczbe n (n>2): ";
		int n5, s1 = 1;
		cin >> n5;
		for (int i = 1; i <= n5; i++) {
			if (i % 2 == 0) {
				s1 *= i;
			}
		}
		if (n5 % 2 == 0) {
			cout << s1 << endl;
		}
		else {
			cout << s1 * (n5 - 1) << endl;
		}
		//zad7
		cout << "ZADANIE 7" << endl;
		cout << "napisz 2 liczby n i m (m>n): ";
		int n6, m6, s6 = 1;
		cin >> n6 >> m6;
		for (n6; n6 <= m6; n6++) {
			s6 *= n6;
		}
		cout << s6 << endl;
		//zad8
		cout << "ZADANIE 8" << endl;
		cout << "napisz liczbe n: ";
		int n7;
		cin >> n7;
		cout << fib(n7) << endl;
		//zad9
		cout << "ZADANIE 9" << endl;
		cout << "napisz liczby n i m: ";
		int n8, m8;
		cin >> n8 >> m8;
		while (n8 > 0 && m8 > 0) {
			if (n8 > m8)
			{
				n8 %= m8;
			}

			else
			{
				m8 %= n8;
			}
		}
		cout << n8 + m8 << endl;
		//zad10
		cout << "ZADANIE 10" << endl;
		cout << "napisz liczbe n: ";
		double n9, i9 = 0;
		cin >> n9;
		while (i9 * i9 < n9) {
			i9 += 0.001;
		}
		if (int(i9 + 0.5) == int(i9) + 1) {
			cout << int(i9) + 1 << endl;
		}
		else {
			cout << int(i9) << endl;
		}
		//zad11
		cout << "ZADANIE 11 (a)" << endl;
		cout << "napisz liczby a, b, c, d: ";
		double a, b, c, d;
		double x1, x2, x, x_1, x_2, x_a;
		cin >> a >> b >> c >> d;
		double D = pow(b, 2) - 4 * abs(a) * (c - d);
		if (D > 0) {
			x2 = ((-b - sqrt(D)) / (2 * abs(a)));
			x1 = ((-b + sqrt(D)) / (2 * abs(a)));
			if (x1 >= 0 && x2 >= 0) {
				cout << 0 << endl;
			}
			else {
				if (x1 > x2) {
					if (x1 >= 0) {
						cout << ceil(x1) << endl;
					}
					else {
						while (x1 < 0) {
							x1++;
						}
						cout << ceil(x1) << endl;
					}
				}
				else {
					if (x2 >= 0) {
						cout << ceil(x2) << endl;
					}
					else {
						while (x2 < 0) {
							x2++;
						}
						cout << ceil(x2) << endl;
					}
				}
			}
		}
		else if (D == 0) {
			x = -b / 2 * a;
			if (x >= 0) {
				cout << x << endl;
			}
			else {
				while (x < 0) {
					x++;
				}
				cout << int(x) << endl;
			}
		}
		else {
			cout << "delta is mniej niz zero" << endl;
		}
		cout << "ZADANIE 11 (b, c)" << endl;
		double D1 = pow(a, 2) - 4 * 5 * (b - c);
		if (D1 > 0) {
			x_2 = ((-a - sqrt(D1)) / 10);
			x_1 = ((-a + sqrt(D1)) / 10);
			if (x_1 >= 0 && x_2 >= 0) {
				cout << 0 << endl;
			}
			else {
				if (x_1 > x_2) {
					if (x_1 >= 0) {
						cout << floor(x_1) << endl;
					}
					else {
						while (x_1 < 0) {
							x_1++;
						}
						cout << floor(x_1) << endl;
					}
				}
				else {
					if (x_2 >= 0) {
						cout << floor(x_2) << endl;
					}
					else {
						while (x_2 < 0) {
							x_2++;
						}
						cout << floor(x_2) << endl;
					}
				}
			}
		}
		else if (D1 == 0) {
			x_a = -a / 10;
			if (x_a >= 0) {
				cout << floor(x_a) << endl;
			}
			else {
				while (x_a < 0) {
					x_a++;
				}
				cout << floor(x_a) << endl;
			}
		}
		else {
			cout << "delta is mniej niz zero" << endl;
		}
		//zad12
		cout << "ZADANIE 12" << endl;
		cout << "napisz liczbe n: ";
		int n11, s11 = 0;
		cin >> n11;
		for (int i = 0; i <= n11; i++) {
			s11 += i;
		}
		cout << s11 << endl;
		//zad13
		cout << "ZADANIE 13" << endl;
		cout << "napisz liczbe n: ";
		int n12, s12 = 0;
		cin >> n12;
		for (int i = 1; i <= n12; i++) {
			s12 += factorial(i);
		}
		cout << s12 << endl;
		//zad14
		cout << "ZADANIE 14" << endl;
		cout << "napisz liczbe n: ";
		int n13;
		cin >> n13;
		vector<int> k = { 0 };
		for (int a = 1; a <= n13; a++) {
			int a2 = a * a;
			for (int b = 1; b <= n13; b++) {
				int b2 = b * b;
				double c = sqrt(a2 + b2);
				if (c == int(c)) {
					if (count(k.begin(), k.end(), c)) {
						continue;
					}
					else {
						cout << a << " " << b << " " << c << endl;
						k.push_back(c);
					}

				}
			}
		}
}
