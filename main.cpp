#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <locale>
#include <math.h>
#include <ctime>
#include <ctype.h>
#include <windows.h>
#include <limits>
#include <bits/stdc++.h>
#include <stdlib.h>
#include "header.cpp"

using namespace std;
int main ()
{
    int studK;
    char read;
    cout <<"Norite skaityti is failo ar ne? (+ : taip, - : ne)"<<endl;
    cin >>read;
    if (read == '-')
    {
        cout << "Iveskite studentu kieki : " ;
        cin >> studK;
        string text = "Klaida. Veskite studentu kieki didesni nei 0. Nenaudokite raidziu.\nIveskite studentu kieki : ";
        Validation(studK, text, 0, INT_MAX);
        Studentas V1[studK];
        for (int i = 0; i < studK; i++)
        {
            V1[i].StudentoInfo();
            V1[i].isPazymiuKiekis();
            V1[i].inPazymiuKiekis();
            V1[i].PazymiuIvedimas();
            V1[i].EgzaminoIvedimas();
        }
        cout << left << setw(25) << "Pavarde"<< setw(25) << "Vardas" <<setw(25)<< "Galutinis (Vid.)"<<setw(25)<<"Galutinis (Med.)"<< endl;
        cout << "--------------------------------------------------------------------------------------------"<<endl;
        for (int i = 0; i < studK; i++)
        {
            cout << left << setw(25) << V1[i].pavarde<< setw(25) << V1[i].vardas << fixed<< setprecision(1) << V1[i].finalGrade() <<fixed<<setprecision(1)<<right<<setw(25)<<V1[i].finalMedian()<<endl;
        }
        cout << "--------------------------------------------------------------------------------------------"<<endl;
    }
    if (read == '+')
    {
        vector <Studentas> V1 = getStudentsFromFile();
        cout << left << setw(25) << "Pavarde"<< setw(25) << "Vardas" <<setw(25)<< "Galutinis (Vid.)"<<setw(25)<<"Galutinis (Med.)"<< endl;
        cout << "--------------------------------------------------------------------------------------------"<<endl;
        for (int i = 0; i < V1.size(); i++)
        {
                cout << left << setw(25) << V1[i].pavarde<< setw(25) << V1[i].vardas << fixed<< setprecision(1) << V1[i].finalGr <<fixed<<setprecision(1)<<right<<setw(25)<<V1[i].finalMed<<endl;
        }
        cout << "--------------------------------------------------------------------------------------------"<<endl;
    }
}
