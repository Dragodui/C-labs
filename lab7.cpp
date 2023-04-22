#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


struct trojkat
{
    int a;
    int b;
    int c;
};
struct point
{
    int x;
    int y;
    int z;
};
struct punktn
{
    int x;
    int y;
    int z;
    int num;
};
struct zespolone
{
    double re;
    double im;
};
struct student 
{
    string imie;
    string nazw;
    string adres;
    string pesel;
    string kierunek;
    string num_leg;
};
struct punktn
{
    int x;
    int y;
    int z;
    int a;
    int b;
    int num = 5;
};
int func_zad1(struct trojkat t) {
    int obwod = t.a + t.b + t.c;
    return obwod;
}
void func_zad2(struct trojkat troj1, struct trojkat* troj2) {
    troj2->a = troj1.a;
    troj2->b = troj1.b;
    troj2->c = troj1.c;
}
void func_zad3(point tab[], int size) {
    float s1 = sqrt((tab[0].x - tab[1].x) * (tab[0].x - tab[1].x) + (tab[0].y - tab[1].y) * (tab[0].y - tab[1].y) + (tab[0].z - tab[1].z) * (tab[0].z - tab[1].z));
    float s2 = sqrt((tab[1].x - tab[2].x) * (tab[1].x - tab[2].x) + (tab[1].y - tab[2].y) * (tab[1].y - tab[2].y) + (tab[1].z - tab[2].z) * (tab[1].z - tab[2].z));
    float s3 = sqrt((tab[0].x - tab[2].x) * (tab[0].x - tab[2].x) + (tab[0].y - tab[2].y) * (tab[0].y - tab[2].y) + (tab[0].z - tab[2].z) * (tab[0].z - tab[2].z));
    cout << s1 << " " << s2 << " " << s3 << endl;
    if (s2 <= s3) {
        if (s2 <= s1) {
            cout << "2 i 3: " << s2 << endl;
        }
        else {
            cout << "1 i 2: " << s1 << endl;
        }
    }
    else if (s3 <= s2) {
        if (s3 <= s1) {
            cout << "1 i 3: " << s3 << endl;
        }
        else {
            cout << "1 i 2: " << s1 << endl;
        }
    }
}
void func_zad4(point tab1[], point tab2[], int size) {
    for (int i = 0; i < size; i++) {
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < size; i++) {
        cout << tab2[i].x << endl;
        cout << tab2[i].y << endl;
        cout << tab2[i].z << endl;
        cout << endl;
    }
}
void func_zad5(punktn tab1[], punktn tab2[], int size) {
    for (int i = 0; i < size; i++) {
        tab2[i] = tab1[i];
    }
    for (int i = 0; i < size; i++) {
        cout << tab2[i].x << " ";
        cout << tab2[i].y << " ";
        cout << tab2[i].z << " ";
        cout << tab2[i].a << " ";
        cout << tab2[i].b << " ";
        cout << tab2[i].num << " ";
        cout << endl;
    }
}
zespolone func_zad6(zespolone num1, zespolone num2) {
    struct zespolone res = {};
    res.im = num1.im + num2.im;
    res.re = num1.re + num2.re;
    return res;
}
void func_zad7(struct student* stud) {
    string imie, nazw, adres, pesel, kierunek, num_leg;
    cout << "Podaj imie: ";
    cin >> imie;
    stud->imie = imie;
    cout << "Podaj nazwisko: ";
    cin >> nazw;
    stud->nazw = nazw;
    cout << "Podaj adres: ";
    cin >> adres;
    stud->adres = adres;
    cout << "Podaj pesel: ";
    cin >> pesel;
    stud->pesel = pesel;
    cout << "Podaj kierunek: ";
    cin >> kierunek;
    stud->kierunek = kierunek;
    cout << "Podaj numer legitymacji: ";
    cin >> num_leg;
    stud->num_leg = num_leg;
}
int main()
{
    //zad1
    cout << "Zadanie 1" << endl;
    struct trojkat t1 = { 6,7,8 };
    cout << "obwod: " << func_zad1(t1) << endl;
    //zad2
    cout << "Zadanie 2" << endl;
    struct trojkat t11 = { 6,7,8 };
    struct trojkat* t2 = new trojkat;
    func_zad2(t11, t2);
    cout << t2->a << " " << t2->b << " " << t2->c << endl;
    free(t2);
    //zad3
    cout << "Zadanie 3" << endl;
    struct point p1 = { 4,3,6 };
    struct point p2 = {0,24,2};
    struct point p3 = { 15,2,2 };
    point tab[] = { p1,p2,p3 };
    func_zad3(tab, 3);
    //zad4
    cout << "Zadanie 4" << endl;
    struct point p0 = { 0,0,0 };
    point tab2[] = { p0,p0,p0 };
    func_zad4(tab, tab2,3);
    //zad5
    cout << "Zadanie 5" << endl;
    struct punktn punktn0_1 = { 0,0,0,0,0 };
    struct punktn punktn1 = { 1,5,3,2,5 };
    struct punktn punktn2 = { 1,52,3,2,3 };
    struct punktn punktn3 = { 1,5,3,32,5 };
    struct punktn punktn4 = { 1,52,3,23,11 };
    struct punktn punktn5 = { 11,5,3,2,66 };
    punktn tab1_5[] = { punktn1, punktn2, punktn3, punktn4, punktn5 };
    punktn tab2_5[] = { punktn0_1,punktn0_1,punktn0_1,punktn0_1,punktn0_1 };
    func_zad5(tab1_5, tab2_5, 5);
    //zad6
    cout << "Zadanie 6" << endl;
    struct zespolone num1 = { 2.5,6 };
    struct zespolone num2 = { 3,7.56 };
    struct zespolone res = func_zad6(num1, num2);
    cout << res.re << "+" << res.im << "i" << endl;
    //zad7
    cout << "Zadanie 7" << endl;
    struct student* stud1 = new student;
    func_zad7(stud1);
}
