#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	// zad1
	cout << "ZADANIE 1" << endl;
	int n;
	cout << "wpisz n: ";
	cin >> n;
	if (n < 0) {
		cout << n * -1 << endl;
	}
	else {
		cout << n << endl;
	}
	// zad2
	cout << "ZADANIE 2" << endl;
	int a, b;
	cout << "wpisz a i b: ";
	cin >> a >> b;
	if (a > b) {
		cout << "a wiecej niz b" << endl;
	}
	else if (a < b) {
		cout << "b wiecej niz a" << endl;
	}
	else {
		cout << "a i b sa rowne" << endl;
	}
	// zad3
	cout << "ZADANIE 3" << endl;
	int z, x, c;
	cout << "wpisz z, x, c: ";
	cin >> z >> x >> c;
	if (z >= c || z >= x) {
		cout << "z jest najwieksza";
	}
	else if (c >= x || c >= z) {
		cout << "c jest najwieksza";
	}
	else if (x >= c || x >= z) {
		cout << "x jest najwieksza";
	}
	else {
		cout << "wszystkie liczby sa rowne" << endl;
	}
	// zad4 
	cout << "ZADANIE 4" << endl;
	int k, l;
	cout << "wpisz k i l: ";
	cin >> k >> l;
	if (abs(k) > abs(l)) {
		cout << "wartosc biezwzgledna k wiecej niz l";
	}
	else if (abs(k) < abs(l)) {
		cout << "wartosc biezwzgledna l wiecej niz k";
	}
	else {
		cout << "wartosci biezwzgedne k i l sa rowne";
	}
	// zad5
	cout << "ZADANIE 5" << endl;
	int choice;
	cout << "przez dlugocs podstawy i wysokosci(1) lub wszystkich bokow trojkata(2)?: ";
	cin >> choice;
	if (choice == 1) {
		int h, v;
		cout << "napisz wysokosc trojkata i jego podstawe: ";
		cin >> h >> v;
		cout << "pole trojkata: " << 0.5 * h * v;
	}
	else if (choice == 2) {
		float h, v, p;
		cout << "napisz wszystkie boki trojkata: ";
		cin >> h >> v >> p;
		float p1 = (h + v + p) / 2;
		float S = sqrt(p1 * (p1 - h) * (p1 - v) * (p1 - p));
		if (isnan(S)) {
			cout << "nie istnieje takiego trojkata" << endl;
		}
		else {
			cout << "pole trojkata: " << S << endl;
		}
	}
	else {
		cout << "wybierz 1 czy 2" << endl;
	}
	// zad 6
	cout << "ZADANIE 6" << endl;
	float a1, b1, c1;
	cout << "napisz a,b,c dla pierwszego: ";
	cin >> a1 >> b1 >> c1;
	float a2, b2, c2;
	cout << "napisz a,b,c drugiego: ";
	cin >> a2 >> b2 >> c2;
	float A = a1 * b2 - a2 * b1;
	float Ax = c1 * b2 - c2 * b1;
	float Ay = a1 * c2 - a2 * c1;
	if (A != 0) {
		float x, y;
		x = Ax / A;
		y = Ay / A;
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;
	}
	else {
		if (Ax == Ay == 0) {
			cout << "nieskonczone liczbe rozwiazan";
		}
		else {
			cout << "nie ma rozwiazan";
		}
	}
	// zad7
	cout << "ZADANIE 7" << endl;
	float a2, b2, c2;
	cout << "wpisz wspolczyniki rownania kwadratowego a, b, c: ";
	cin >> a2 >> b2 >> c2;
	float D = pow(b2, 2) - 4 * a2 * c2;
	if (D > 0) {
		D = sqrt(D);
		float x1, x2;
		x1 = (-1 * b2 + D) / (2 * a2);
		x2 = (-1 * b2 - D) / (2 * a2);
		cout << "rozwiazania: " << x1 << x2 << endl;
	}
	else if (D == 0) {
		float x1;
		x1 = (-1 * b2) / (2 * a2);
		cout << "rozwiazanie: " << x1 << endl;
	}
	else {
		cout << "D<0, rozwiazania sa liczbe zespolone" << endl;
	}
	// zad8
	cout << "ZADANIE 8" << endl;
	int choice1;
	cout << "wybierz: kwardrat(1), prosotfat(2), trojkat(3)" << endl;
	cin >> choice1;
	if (choice1 == 1) {
		int a3;
		cout << "napisz dlugosc strone kwadratu: ";
		cin >> a3;
		cout << "pole kwadrata: " << a3 * a3 << endl;
	}
	else if (choice1 == 2) {
		int a3, b3;
		cout << "napisz dlugosc stron prostokata: ";
		cin >> a3 >> b3;
		cout << "pole prostokata: " << a3 * b3 << endl;
	}
	else if (choice1 == 3) {
		int a3, b3, c3;
		cout << "napisz dlugosc stron trojkata";
		cin >> a3 >> b3 >> c3;
		float p2 = (a3 + b3 + c3) / 2;
		float S1 = sqrt(p2 * (p2 - a3) * (p2 - b3) * (p2 - c3));
		if (isnan(S1)) {
			cout << "nie istnieje takiego trojkata: " << endl;
		}
		else {
			cout << "pole trojkata: " << S1 << endl;
		}
	}
	// zad9
	cout << "ZADANIE 9" << endl;
	string op;
	float a4, b4;
	cout << "napisz pierwsze liczbe: ";
	cin >> a4;
	cout << "wybierz operacje(+, -, *, /): ";
	cin >> op;
	cout << "napisz druga liczbe: ";
	cin >> b4;
	if (op == "+") {
		cout << a4 + b4 << endl;
	}
	else if (op == "-") {
		cout << a4 - b4 << endl;
	}
	else if (op == "/") {
		cout << a4 / b4 << endl;
	}
	else if (op == "*") {
		cout << a4 * b4 << endl;
	}
	else {
		cout << "wybierz korektna operacje" << endl;
	}
}

