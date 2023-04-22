#include <iostream>


using namespace std;

int func_zad1(int *a, int *b) {
	if (*a >= *b) {
		return *b;
	}
	else {
		return *a;
	}
}
int* func_zad2(int* a, int* b) {
	if (a >= b) {
		return b;	
	}
	else {
		return a;
	}
}
void func_zad3(int* a, int* b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int* func_zad4() {
	int* wsk;
	wsk = (int*)malloc(sizeof(int));
	return wsk;
}
double* func_zad5() {
	double* wsk;
	wsk = (double*)malloc(sizeof(double));
	return wsk;
}
int* func_zad6(int n) {
	int* wsk;
	wsk = (int*)malloc(sizeof(int) * n);
	return wsk;
}
double* func_zad7(int n) {
	double* wsk;
	wsk = (double*)malloc(sizeof(double)*n);
	return wsk;
}
int* func_zad8(int n) {
	int* wsk;
	wsk = (int*)malloc(sizeof(int*) * n);
	return wsk;
}
void func_zad9(int* n, int* m, int a) {
	int c;
	for (int i = 0; i < a; i++) {
		c = n[i];
		n[i] = m[i];
		m[i] = c;
	}
}
int** func_zad11(int n, int m) {
	int** c = new int* [n];
	for (int i = 0; i < n; i++) {
		c[i] = new int[m];	
	}
	return c;
}
void func_zad12(int(*tab)[2],int n, int m) {
	for (int i = 0; i < n; i++) {
		free(tab[i]);
	}
	free(tab);
}
int*** func_zad13_1(int n, int m, int k) {
	int*** c = new int** [n];
	for (int i = 0; i < n; i++) {
		c[i] = new int*[m];
		for (int j = 0; j < m; j++) {
			c[i][j] = new int[k];
		}
	}
	return c;
}
void func_zad13_2(int(*tab)[2][2], int n, int m, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			free(tab[i][j]);
		}
		free(tab[i]);
	}
	free(tab);
}
void func_zad14(int **c, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			c[i][j] == 0;
		}
	}
}
int func_zad15(int** c, int a, int b) {
	int sum = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			sum+=c[i][j];
		}
	}
	return sum;
}
int func_zad16(int(*c)[2], int a, int b) {
	int sum = 0;
	int sum1 = 0;
	int row = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			sum1 += c[i][j];
		}
		if (sum1 > sum) {
			sum = sum1;
			row = i;
		}
		sum1 = 0;
	}
	return row;
}

int main(void){
	////zad1
	//cout << "Zadanie 1" << endl;
	//cout << "Wpisz 2 liczby a i b: ";
	//int a1, b1;
	//cin >> a1 >> b1;
	//cout << func_zad1(&a1, &b1) << endl;
	////zad2
	//cout << "Zadanie 2" << endl;
	//cout << "Wpisz 2 liczby a i b: ";
	//int a2, b2;
	//cin >> a2 >> b2;
	//int* wsk1;
	//int* wsk2;
	//wsk1 = &a2;
	//wsk2 = &b2;
	//cout << func_zad2(wsk1, wsk2) << endl;
	////zad3
	//cout << "Zadanie 3" << endl;
	//cout << "Wpisz 2 liczby a i b: ";
	//int a3, b3;
	//cin >> a3 >> b3;
	//func_zad3(&a3, &b3);
	//cout << a3 << " " << b3 << endl;
	////zad4
	//cout << "Zadanie 4" << endl;
	//int* a4 = func_zad4();
	//cout << a4 << endl;
	//free(a4);
	////zad5
	//cout << "Zadanie 5" << endl;
	//int* a5 = func_zad4();
	//cout << a5 << endl;
	//free(a5);
	////zad6
	//cout << "Zadanie 6" << endl;
	//int* a6 = func_zad6(5);
	//cout << a6 << endl;
	//free(a6);
	////zad7
	//cout << "Zadanie 7" << endl;
	//double* a7 = func_zad7(5);
	//cout << a7 << endl;
	//free(a7);
	////zad8
	//cout << "Zadanie 8" << endl;
	//int* a8 = func_zad8(5);
	//cout << a8 << endl;
	//free(a8);
	////zad9
	//cout << "Zadanie 9" << endl;
	//int n9[5] = {1, 2, 3, 4, 5};
	//int m9[5] = {6, 7, 8, 9, 10};
	//cout << "1 tablica: ";
	//cout << "[ ";
	//for (int i = 0; i < 5; i++) {
	//	cout << n9[i] << " ";
	//}
	//cout << "]" << endl;
	//cout << "2 tablica: ";
	//cout << "[ ";
	//for (int i = 0; i < 5; i++) {
	//	cout << m9[i] << " ";
	//}
	//cout << "]" << endl;
	//func_zad9(n9, m9,5);
	//cout << "1 tablica: ";
	//cout << "[ ";
	//for (int i = 0; i < 5; i++) {
	//	cout << n9[i] << " ";
	//}
	//cout << "]" << endl;
	//cout << "2 tablica: ";
	//cout << "[ ";
	//for (int i = 0; i < 5; i++) {
	//	cout << m9[i] << " ";
	//}
	//cout << "]" << endl;
	////zad11
	//cout << "Zadanie 11" << endl;
	//func_zad11(10, 10);
	//zad12
	cout << "Zadanie 12" << endl;
	int c12[3][2] = { {1, 2},{2, 4},{23, 45} };
	func_zad12(c12, 3, 2);
	//zad13
	cout << "Zadanie 13" << endl;
	int c13[3][2][2] = { {{2,3}, {23,2}},{{33,55}, {22,3}}, {{22,323}, {23, 45}}};
	func_zad13_1(10, 10, 10);
	func_zad13_2(c13, 3, 2,2);
	
	//zad16
	cout << "Zadanie 16" << endl;
	int c16[4][2] = { {21232, 2},{2, 4},{23, 45}, {2323,22} };
	cout << func_zad16(c16,4,2) << endl;
}