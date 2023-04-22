#include <iostream>


using namespace std;

void func_zad1_a(int n, int* tab) {
	cout << "a: ";
	for (int i = 0; i < n; i++) {
		tab[i] = 0;
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad1_b(int n, int* tab) {
	cout << "b: ";
	for (int i = 0; i < n; i++) {
		tab[i] = i;
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad1_c(int n, int* tab) {
	cout << "c: ";
	for (int i = 0; i < n; i++) {
		tab[i] *= 2;
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad1_d(int n, int* tab) {
	cout << "d: ";
	for (int i = 0; i < n; i++) {
		if (tab[i] < 0) {
			tab[i] *= -1;
		}
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad2_a(int n, int* tab) {
	cout << "a: ";
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	cout << "Srednia aryfmityczna: " << sum / n << endl;
}
void func_zad2_b(int n, int* tab) {
	cout << "b: ";
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	cout << "Suma: " << sum << endl;
}
void func_zad2_c(int n, int* tab) {
	cout << "c: ";
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i]*tab[i];
	}
	cout << "Suma kwadratow: " << sum << endl;
}
void func_zad3(int n, const int* tab) {
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += tab[i];
	}
	cout << "Srednia arefmityczna: " << sum / n << endl;
}
void func_zad4_a(int n, int* tab1, int* tab2) {
	cout << "a: ";
	for (int i = 0; i < n; i++) {
		tab2[i] = tab1[i];
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab2[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad4_b(int n, int* tab1, int* tab2, int o = 0) {
	cout << "b: ";
	for (int i = n - 1; i >= 0; i--) {
		tab2[o] = tab1[i];
		o++;
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab2[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad5_a(int n, int* tab1, int* tab2, int* tab3) {
	cout << "a: ";
	for (int i = 0; i < n; i++) {
		tab3[i] = tab2[i] + tab1[i];
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad5_b(int n, int* tab1, int* tab2, int* tab3) {
	cout << "b: ";
	for (int i = 0; i < n; i++) {
		if (tab1[i] >= tab2[i]) {
			tab3[i] = tab1[i];
		}
		else {
			tab3[i] = tab2[i];
		}
	}
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad5_c(int n, int* tab1, int* tab2, int* tab3) {
	cout << "c: ";
	int* tab = tab1;
	for (int i = 0; i < n; i++) {
		tab1[i] = tab3[i];
	}
	for (int i = 0; i < n; i++) {
		tab3[i] = tab2[i];
	}
	for (int i = 0; i < n; i++) {
		tab2[i] = tab[i];
	}
	cout << "tablica 1: ";
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab1[i] << " ";
	}
	cout << "]" << endl;

	cout << "tablica 2: ";
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab2[i] << " ";
	}
	cout << "]" << endl;
	cout << "tablica 3: ";
	cout << "[ ";
	for (int i = 0; i < n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad6_a(int n, int* tab1, int* tab2, int* tab3) {
	cout << "a: ";
	for (int i = 0; i < n; i++) {
		tab3[i] = tab1[i];
	}
	for (int i = n; i < 2 * n; i++) {
		tab3[i] = tab2[i - n];
	}
	cout << "[ ";
	for (int i = 0; i < 2 * n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad6_b(int n, int* tab1, int* tab2, int* tab3) {
	cout << "b: ";
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			tab3[i] = tab2[i / 2];
		}
		else {
			tab3[i] = tab1[i / 2];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		if (i % 2 == 1) {
			tab3[i] = tab2[i / 2];
		}
		else {
			tab3[i] = tab1[i / 2];
		}
	}
	cout << "[ ";
	for (int i = 0; i < 2 * n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad7_1(int n, int* tab1, int* tab2, int* tab3) {
	cout << "1: ";
	for (int i = 0; i < n; i++) {
		if (tab2[i] >= tab1[i] && tab2[i] >= tab3[i]) {
			tab1[i] = tab2[i];
		}
		else if (tab3[i] >= tab1[i] && tab3[i] >= tab2[i]) {
			tab1[i] = tab3[i];
		}
		else {
			continue;
		}
	}
	cout << "[ ";
	for (int i = 0; i < 2 * n; i++) {
		cout << tab1[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad7_2(int n, int* tab1, int* tab2, int* tab3) {
	cout << "2: ";
	for (int i = 0; i < n; i++) {
		if (tab1[i] >= tab2[i] && tab1[i] <= tab3[i]) {
			tab2[i] = tab1[i];
		}
		else if (tab3[i] >= tab2[i] && tab1[i] >= tab3[i]) {
			tab2[i] = tab3[i];
		}
		else if (tab1[i] <= tab2[i] && tab1[i] >= tab3[i]) {
			tab2[i] = tab1[i];
		}
		else if (tab3[i] <= tab2[i] && tab1[i] <= tab3[i]) {
			tab2[i] = tab3[i];
		}
		else {
			continue;
		}
	}
	cout << "[ ";
	for (int i = 0; i < 2 * n; i++) {
		cout << tab2[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad7_3(int n, int* tab1, int* tab2, int* tab3) {
	cout << "3: ";
	for (int i = 0; i < n; i++) {
		if (tab2[i] >= tab1[i] && tab3[i] >= tab1[i]) {
			tab3[i] = tab1[i];
		}
		else if (tab3[i] >= tab2[i] && tab1[i] >= tab2[i]) {
			tab3[i] = tab2[i];
		}
		else {
			continue;
		}
	}
	cout << "[ ";
	for (int i = 0; i < 2 * n; i++) {
		cout << tab3[i] << " ";
	}
	cout << "]" << endl;
}
void func_zad8_a_c(int n, int* tab) {
	cout << "a: ";
	int max = tab[0], max_index = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i] > max) {
			max = tab[i];
			max_index = i;
		}
	}
	cout << "Max: " << max << endl;
	cout << "Jego index: " << max_index << endl;
}
void func_zad8_b_d(int n, int* tab) {
	cout << "b: ";
	int min = tab[0], min_index = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
			min_index = i;
		}
	}
	cout << "Min: " << min << endl;
	cout << "Jego index: " << min_index << endl;
}
void func_zad8_e_f(int n, int* tab) {
	cout << "e: ";
	for (int i = 0; i < n; i++) {
		if (tab[i] < 0) {
			tab[i] *= -1;
		}
	}
	int max = tab[0], max_index = 0;
	for (int i = 0; i < n; i++) {
		if (tab[i] > max) {
			max = tab[i];
			max_index = i;
		}
	}
	cout << "Max: " << max << endl;
	cout << "Jego index: " << max_index << endl;
}
void func_zad9(int n, double* tab1, double* tab2) {
	double m = 0;
	for (int i = 0; i < n; i++) {
		m += tab1[i] * tab2[i];
	}
	cout << "Suma: " << m << endl;
}
int main(void){
	//zad1
	cout << "Zadanie 1" << endl;
	int n1;
	cout << "napisz n: ";
	cin >> n1;
	int *tab1 = new int[n1];
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n1; i++) {
		int p4;
		cin >> p4;
		tab1[i] = p4;
	}
	func_zad1_a(n1, tab1);
	func_zad1_b(n1, tab1);
	func_zad1_c(n1, tab1);
	func_zad1_d(n1, tab1);
	//zad2
	cout << "Zadanie 2" << endl;
	int n2;
	cout << "napisz n: ";
	cin >> n2;
	int* tab2 = new int[n2];
	cout << "Zapisz elementy tablicy: ";
	for (int i = 0; i < n2; i++) {
		int p4;
		cin >> p4;
		tab2[i] = p4;
	}
	func_zad2_a(n2, tab2);
	func_zad2_b(n2, tab2);
	func_zad2_c(n2, tab2);
	//zad3
	cout << "Zadanie 3" << endl;
	int n3;
	cout << "napisz n: ";
	cin >> n3;
	int* tab3 = new int[n1];
	cout << "Zapisz elementy tablicy: ";
	for (int i = 0; i < n1; i++) {
		int p4;
		cin >> p4;
		tab3[i] = p4;
	}
	func_zad3(n3, tab3);
	//zad4
	cout << "Zadanie 4" << endl;
	int n4;
	cout << "napisz n: ";
	cin >> n4;
	int* tab4_1 = new int[n4];
	int* tab4_2 = new int[n4];
	cout << "Zapisz elementy pierwszej tablicy: ";
	for (int i = 0; i < n4; i++) {
		int p4;
		cin >> p4;
		tab4_1[i] = p4;
	}
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n4; i++) {
		int p4;
		cin >> p4;
		tab4_2[i] = p4;
	}
	func_zad4_a(n4, tab4_1, tab4_2);
	func_zad4_b(n4, tab4_1, tab4_2);
	//zad5
	cout << "Zadanie 5" << endl;
	int n5;
	cout << "napisz n: ";
	cin >> n5;
	int* tab5_1 = new int[n5];
	int* tab5_2 = new int[n5];
	int* tab5_3 = new int[n5];
	cout << "Zapisz elementy pierwszej tablicy: ";
	for (int i = 0; i < n5; i++) {
		int p4;
		cin >> p4;
		tab5_1[i] = p4;
	}
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n5; i++) {
		int p4;
		cin >> p4;
		tab5_2[i] = p4;
	}
	func_zad5_a(n5, tab5_1, tab5_2, tab5_3);
	func_zad5_b(n5, tab5_1, tab5_2, tab5_3);
	func_zad5_c(n5, tab5_1, tab5_2, tab5_3);
	//zad6
	cout << "Zadanie 6" << endl;
	int n6;
	cout << "napisz n: ";
	cin >> n6;
	int* tab6_1 = new int[n6];
	int* tab6_2 = new int[n6];
	int* tab6_3 = new int[2*n6];
	cout << "Zapisz elementy pierwszej tablicy: ";
	for (int i = 0; i < n6; i++) {
		int p4;
		cin >> p4;
		tab6_1[i] = p4;
	}
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n6; i++) {
		int p4;
		cin >> p4;
		tab6_2[i] = p4;
	}
	func_zad6_a(n6, tab6_1, tab6_2, tab6_3);
	func_zad6_b(n6, tab6_1, tab6_2, tab6_3);
	//zad7
	cout << "Zadanie 7" << endl;
	int n7;
	cout << "napisz n: ";
	cin >> n7;
	int* tab7_1 = new int[n7];
	int* tab7_2 = new int[n7];
	int* tab7_3 = new int[n7];
	cout << "Zapisz elementy pierwszej tablicy: ";
	for (int i = 0; i < n7; i++) {
		int p4;
		cin >> p4;
		tab7_1[i] = p4;
	}
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n7; i++) {
		int p4;
		cin >> p4;
		tab7_2[i] = p4;
	}
	cout << "Zapisz elementy trzeciej tablicy: ";
	for (int i = 0; i < n7; i++) {
		int p4;
		cin >> p4;
		tab7_3[i] = p4;
	}
	func_zad7_1(n7, tab7_1, tab7_2, tab7_3);
	func_zad7_2(n7, tab7_1, tab7_2, tab7_3);
	func_zad7_3(n7, tab7_1, tab7_2, tab7_3);
	//zad8
	cout << "Zadanie 8" << endl;
	int n8;
	cout << "napisz n: ";
	cin >> n8;
	int* tab8 = new int[n8];
	cout << "Zapisz elementy tablicy: ";
	for (int i = 0; i < n8; i++) {
		int p4;
		cin >> p4;
		tab8[i] = p4;
	}
	func_zad8_a_c(n8, tab8);
	func_zad8_b_d(n8, tab8);
	func_zad8_e_f(n8, tab8);
	//zad9
	int n9;
	cout << "Zadanie 9" << endl;
	cout << "napisz n: ";
	cin >> n9;
	double* tab9_1 = new double[n9];
	double* tab9_2 = new double[n9];
	cout << "Zapisz elementy pierwszej tablicy: ";
	for (int i = 0; i < n9; i++) {
		int p4;
		cin >> p4;
		tab9_1[i] = p4;
	}
	cout << "Zapisz elementy drugiej tablicy: ";
	for (int i = 0; i < n9; i++) {
		int p4;
		cin >> p4;
		tab9_2[i] = p4;
	}
	func_zad9(n9, tab9_1, tab9_2);
}