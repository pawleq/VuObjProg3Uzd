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
#include "header.h"

using namespace std;

void Validation (int &input, string text, int from, int to)
{
    while (cin.fail() || (input < from || input > to))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout <<text;
        cin >>input;
    }
}
vector <Studentas> getStudentsFromFile()
{
    vector <Studentas> Student;
    ifstream in ("Kursiokai.txt");
    if (!in)
    {
        cout <<"Duomenu failas neatsidaro. "<<endl;
    }
    else
    {
        string input;
        int hwAmount = 0;
        in >> input;
        in >> input;
        in >> input;
        while (input[0] == 'N' && input[1] == 'D')
        {
            in >> input;
            hwAmount++;
        }
        while (!in.eof())
        {
            Studentas A;
            in >> A.vardas;
            in >> A.pavarde;
            for (int i = 0; i < hwAmount; i++)
            {
                int result;
                in >> result;
                A.b.push_back(result);
            }
            in >> A.egz;
            A.n = hwAmount;
            A.finalGr = A.finalGrade();
            A.finalMed = A.finalMedian();
            Student.push_back(A);
        }
        in.close();
    }
    return Student;
}
