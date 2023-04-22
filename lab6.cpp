#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>


using namespace std;

FILE* func_zad1(const char* file) {
	FILE* f;
	f = fopen(file, "r");
	return f;
}
void func_zad2(FILE* f) {
	string s;
	char ff[1000];
	while (!feof(f)) {
		fscanf(f, "%s\n", ff);
		printf("%s ", ff);
	}
	printf("\n");
	fclose(f);
}
void func_zad3(const char* file) {
	FILE* f;
	string s;
	char ff[1000];
	f = fopen(file, "r");
	while (!feof(f)) {
		fscanf(f, "%s\n", ff);
		printf("%s", ff);
	}
	printf("\n");
	fclose(f);
}
void func_zad4(const char* file, string c) {
	FILE* f;
	string s;
	int g = 0;
	char ff[1000];
	f = fopen(file, "r");
	while (!feof(f)) {
		fscanf(f, "%c", ff);
		string str1 = ff;
		if (str1 == c) {
			g++;
		}
	}
	if (!g) {
		printf("%d", g);
	}
	else {
		printf("%d", g-1);
	}
	printf("\n");
	fclose(f);
}
void func_zad5(const char* file) {
	FILE* f;
	f = fopen(file, "r");
	int i;
	unsigned Freq[256];
	memset(Freq, 0, 256 * sizeof(unsigned));
	while (!feof(f))
		Freq[fgetc(f)] ++;
	for (i = 0; i < 256; i++) {
		if (Freq[i]) {
			printf("Символ %c : %5u раз\n", i, Freq[i]);
		}
	}
}
int func_zad6(const char* file) {
	FILE* f;
	int sum = 0;
	int ff;
	f = fopen(file, "r");
	while (!feof(f)) {
		fscanf(f, "%d", &ff);
		sum += ff;
	}
	printf("\n");
	fclose(f);
	return sum;
}
int func_zad7(const char* file1, const char* file2) {
	FILE* f1;
	FILE* f2;
	int dif = 0;
	char ff1[1000];
	char ff2[1000];
	f1 = fopen(file1, "r");
	f2 = fopen(file2, "r");
	while (!feof(f1) || !feof(f2)) {
		fscanf(f1, "%s", ff1);
		fscanf(f2, "%s", ff2);
		if (strcmp(ff1, ff2) == 0) {
			continue;
		}
		else {
			dif++;
		}
	}
	fclose(f1);
	fclose(f2);
	if (dif == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
void func_zad8(FILE* f1, FILE* f2) {
	int dif = 0;
	char ff1[1000];
	while (!feof(f1)) {
		fscanf(f1, "%s", ff1);
		fprintf(f2, "%s ", ff1);
	}
	fclose(f1);
	fclose(f2);
}
void func_zad9(FILE* f1, FILE* f2) {
	int dif = 0;
	char ff1[1000];
	while (!feof(f1)) {
		fscanf(f1, "%s", ff1);
		fprintf(f2, "%s ", ff1);
	}
	fclose(f1);
	fclose(f2);
}
void func_zad10(int* tab, int size, const char* file) {
	FILE* f;
	int sum = 0;
	int ff;
	f = fopen(file, "a");
	for (int i = 0; i < size; i++) {
		fprintf(f, "%d\n", tab[i]);
	}
	fclose(f);
}
int main(void) {
	//zad1 
	cout << "Zadanie 1" << endl;
	FILE* file1 = func_zad1("zad1.txt");
	cout << file1 << endl;
	fclose(file1);
	//zad2
	cout << "Zadanie 2" << endl;
	FILE* file2 = fopen("zad.txt", "r");
	func_zad2(file2);
	//zad3
	cout << "Zadanie 3" << endl;
	func_zad3("zad.txt");
	//zad4
	cout << "Zadanie 4" << endl;
	func_zad4("zad.txt", "c");
	//zad5
	cout << "Zadanie 5" << endl;
	func_zad5("zad.txt");
	//zad6
	cout << "Zadanie 6" << endl;
	cout << func_zad6("zad.txt") << endl;
	//zad7
	cout << "Zadanie 7" << endl;
	cout << func_zad7("zad.txt", "zad2.txt") << endl;
	//zad8
	cout << "Zadanie 8" << endl;
	FILE* file8_1 = fopen("zad.txt", "r");
	FILE* file8_2 = fopen("zad2.txt", "w");
	func_zad8(file8_1, file8_2);
	//zad9
	cout << "Zadanie 9" << endl;
	FILE* file9_1 = fopen("zad.txt", "r");
	FILE* file9_2 = fopen("zad2.txt", "a");
	func_zad9(file9_1, file9_2);
	//zad10
	cout << "Zadanie 10" << endl;
	int tab[5] = { 1,4,6,3,1 };
	func_zad10(tab, 5, "zad.txt");
}