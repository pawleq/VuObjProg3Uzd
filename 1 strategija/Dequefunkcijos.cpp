#include "Dequeheader.h"
int ErrorFun(int nr)
{
	if (nr == 0)
	{
		cout << "ivedete ne 1 arba 0, bandykite dar karta" << endl;
		return 0;
	}
	if (nr == 1)
	{
		cout << "Ivedete ne skaiciu (1-10), bandykite dar karta" << endl;
		return 0;
	}
	if (nr == 2) {
		cout << "Duomenys ivesti neteisingai" << endl;
		return 0;
	}
	return 0;
}
int CinFail(int e)
{
	int f;
	cin >> f;
	while (cin.fail() or f != 0 && f != 1)
	{
		cin.clear();
		cin.ignore(100, '\n');
		ErrorFun(e);
		cin >> f;
	}
	cin.clear();
	cin.ignore(100, '\n');
	return f;

}

int CinDecimal(int e)
{
	int f;
	cin >> f;
	while (cin.fail() or f > 10 or f < 0)
	{
		cin.clear();
		cin.ignore(100, '\n');
		ErrorFun(e);
		cin >> f;
	}
	cin.clear();
	cin.ignore(100, '\n');
	return f;

}

bool compare_by_word(const studentas& lhs, const studentas& rhs) {
	return lhs.pavarde < rhs.pavarde;
}
bool compare_by_name(const studentas& lhs, const studentas& rhs) {
	return lhs.vardas < rhs.vardas;
}
bool compare_by_grades(studentas& lhs, studentas& rhs) {
	return lhs.galutinis < rhs.galutinis;
}
void FindLongest(deque<studentas> &input, unsigned int &Vilgis, unsigned int &Pilgis)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		if (Vilgis < input[i].vardas.length())
			Vilgis = input[i].vardas.length();
		if (Pilgis < input[i].pavarde.length())
			Pilgis = input[i].pavarde.length();
	}
}
void FileRead(deque<studentas> &studentai, ifstream &file)
{
	studentas input;
	if (file.eof())
		exit(EXIT_FAILURE);
	string line;
	getline(file, line);
	istringstream fin(line);
	fin >> input.vardas;
	fin >> input.pavarde;
	int k;
	input.v.reserve(10);
	while (fin >> k)
	{
		if (k > 10 or k < 0) {
			cout << "Pazymiai neteisingai ivesti faile" << endl;
			exit(EXIT_FAILURE);

		}
		input.v.push_back(k);

	}

	input.e = input.v.back();
	input.v.pop_back();
	studentai.push_back(input);
}
void dequeSplit(deque <studentas> &studentai, int &b, unsigned int &Vilgis, unsigned int &Pilgis)
{
	for (size_t i = 0; i < studentai.size(); i++)
	{
		studentai[i].GetAverage();
		studentai[i].getMedian();
	}
deque<studentas> kietekas;
deque<studentas> vargsiukas;
	if (b == 1) {
		for (size_t i = 0; i < studentai.size(); i++)
		{
			if (studentai[i].galutinis < 5)
				vargsiukas.push_back(studentai[i]);
		 	else
		 		kietekas.push_back(studentai[i]);
		}
	}
	else {
		for (size_t i = 0; i < studentai.size(); i++)
		{
			if (studentai[i].galutmed < 5)
				vargsiukas.push_back(studentai[i]);
			else
				kietekas.push_back(studentai[i]);
		}
	}
std::sort(kietekas.begin(),kietekas.end(),compare_by_word);

	std::sort(vargsiukas.begin(),vargsiukas.end(),compare_by_word);

	std::ofstream failas("vargsiukai.txt");
	failas << setw(Pilgis + 6) << std::left << setfill(' ') << "Pavarde "<< setw(Vilgis + 6) << std::left << setfill(' ') << "Vardas "<< setw(16) << std::left << setfill(' ') << "Galutinis vid. "<< setw(16) << std::left << setfill(' ') << "Galutinis med. " << endl;
	string eilute(Pilgis + Vilgis + 40, '-');
	failas << eilute << endl;
	for (size_t i = 0; i < vargsiukas.size(); i++) {
		failas << setw(Pilgis + 6) << std::left << setfill(' ') << studentai[i].pavarde<< setw(Vilgis + 6) << std::left << setfill(' ') << studentai[i].vardas << setw(16) << std::left << setfill(' ') << std::setprecision(2) << std::fixed << studentai[i].galutinis << studentai[i].galutmed << endl;
	}
	std::ofstream failas1("kietekai.txt");
	failas1 << setw(Pilgis + 6) << std::left << setfill(' ') << "Pavarde "<< setw(Vilgis + 6) << std::left << setfill(' ') << "Vardas "<< setw(16) << std::left << setfill(' ') << "Galutinis vid. "<< setw(16) << std::left << setfill(' ') << "Galutinis med. " << endl;
	string eilute1(Pilgis + Vilgis + 40, '-');
	failas1 << eilute1 << endl;
	for (size_t i = 0; i < kietekas.size(); i++)
	{
		failas1 << setw(Pilgis + 6) << std::left << setfill(' ') << studentai[i].pavarde<< setw(Vilgis + 6) << std::left << setfill(' ') << studentai[i].vardas<< setw(16) << std::left << setfill(' ') << std::setprecision(2) << std::fixed << studentai[i].galutinis << studentai[i].galutmed << endl;
	}
}
void SpartosAnalize(deque<studentas> &studentai)
{
	unsigned int Pilgis = 7;
	unsigned int Vilgis = 6;
		cout << "Ar norite skaiciuoti pagal medianas ar vidurkius? 1-vidurkis 0-mediana" << endl;
	int b = CinFail(0);
	string pav;
	cout<<"Iveskite studentu failo pavadinima"<<endl;
	cin>>pav;
	cout << "Pradedamas matuoti laikas" << endl;
	 std::chrono::steady_clock::time_point beginRead =
    std::chrono::steady_clock::now();
	ifstream file(pav);
	if(!file)
	{
		cout<<"Pavadinimas ivestas neteisingai"<<endl;
		exit(EXIT_FAILURE);
	}
	while (!file.eof())
	{
		FileRead(studentai, file);
	}
	std::chrono::steady_clock::time_point endRead =
    std::chrono::steady_clock::now();
    FindLongest(studentai, Vilgis, Pilgis);
    std::chrono::steady_clock::time_point beginSplit =
    std::chrono::steady_clock::now();
	dequeSplit(studentai, b, Vilgis, Pilgis);
    std::chrono::steady_clock::time_point endSplit =
    std::chrono::steady_clock::now();
    std::cout << "Skaitymo laikas: "<< (double)std::chrono::duration_cast<std::chrono::milliseconds>(endRead - beginRead).count() / 1000<< "s" << std::endl;
    std::cout << "Dalinimo ir irasymo laikas: "<< (double)std::chrono::duration_cast<std::chrono::milliseconds>(endSplit - beginSplit).count() / 1000<< "s" << std::endl;
}
