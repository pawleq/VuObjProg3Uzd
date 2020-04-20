#include "listheader.h"
bool compare_by_word(const studentas& lhs, const studentas& rhs) {
	return lhs.pavarde < rhs.pavarde;
}
bool compare_by_name(const studentas& lhs, const studentas& rhs) {
	return lhs.vardas < rhs.vardas;
}
bool compare_by_grades(studentas& lhs, studentas& rhs) {
	return lhs.galutinis < rhs.galutinis;
}

void FindLongest(list<studentas> &input, unsigned int &Vilgis, unsigned int &Pilgis)
{
	for (list<studentas>::iterator it = input.begin(); it != input.end(); ++it)
	{
		if (Vilgis < (*it).vardas.length())
			Vilgis = (*it).vardas.length();
		if (Pilgis < (*it).pavarde.length())
			Pilgis = (*it).pavarde.length();
	}
}

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
void FileRead(list<studentas> &studentai, ifstream &file)
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
void VectorSplit(list <studentas> &studentai, int &b, unsigned int& Vilgis,unsigned int& Pilgis)
{
	for (list<studentas>::iterator it = studentai.begin(); it != studentai.end(); ++it)
	{

		(*it).GetAverage();
		(*it).getMedian();
	}
	list<studentas> kietekas;
	list<studentas> vargsiukas;
	int n = 0;
	if (b == 1) {
		for (list<studentas>::iterator it = studentai.begin(); it != studentai.end(); ++it)
		{
			if ((*it).galutinis < 5)
				vargsiukas.push_back(*it);
			else
				kietekas.push_back(*it);
		}
	}
	else {
		for (list<studentas>::iterator it = studentai.begin(); it != studentai.end(); ++it)
		{
			if ((*it).galutmed < 5)
				vargsiukas.push_back(*it);
			else
				kietekas.push_back(*it);
		}
	}

	kietekas.sort(compare_by_word);
	vargsiukas.sort(compare_by_word);
	std::ofstream failas("vargsiukai.txt");
	failas << setw(Pilgis + 6) << std::left << setfill(' ') << "Pavarde "<< setw(Vilgis + 6) << std::left << setfill(' ') << "Vardas "<< setw(16) << std::left << setfill(' ') << "Galutinis vid. "<< setw(16) << std::left << setfill(' ') << "Galutinis med. " << endl;
	string eilute(Pilgis + Vilgis + 40, '-');
	failas << eilute << endl;
	for (list<studentas>::iterator it = vargsiukas.begin(); it != vargsiukas.end(); ++it) {
		failas << setw(Pilgis + 6) << std::left << setfill(' ') << (*it).pavarde<< setw(Vilgis + 6) << std::left << setfill(' ') << (*it).vardas<< setw(16) << std::left << setfill(' ') << std::setprecision(2) << std::fixed << (*it).galutinis << (*it).galutmed << endl;
	}
	std::ofstream failas1("kietekai.txt");
	failas1 << setw(Pilgis + 6) << std::left << setfill(' ') << "Pavarde "<< setw(Vilgis + 6) << std::left << setfill(' ') << "Vardas "<< setw(16) << std::left << setfill(' ') << "Galutinis vid. "<< setw(16) << std::left << setfill(' ') << "Galutinis med. " << endl;
	string eilute1(Pilgis + Vilgis + 40, '-');
	failas1 << eilute1 << endl;
	for (list<studentas>::iterator it = kietekas.begin(); it != kietekas.end(); ++it)
	{
		failas1 << setw(Pilgis + 6) << std::left << setfill(' ') << (*it).pavarde<< setw(Vilgis + 6) << std::left << setfill(' ') << (*it).vardas<< setw(16) << std::left << setfill(' ') << std::setprecision(2) << std::fixed << (*it).galutinis << (*it).galutmed << endl;
	}
}
void SpartosAnalize(list<studentas> &studentai)
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
	VectorSplit(studentai, b, Vilgis, Pilgis);
	std::chrono::steady_clock::time_point endSplit =
    std::chrono::steady_clock::now();
    std::cout << "Skaitymo laikas: "<< (double)std::chrono::duration_cast<std::chrono::milliseconds>(endRead - beginRead).count() / 1000<< "s" << std::endl;
    std::cout << "Dalinimo ir irasymo laikas: "<< (double)std::chrono::duration_cast<std::chrono::milliseconds>(endSplit - beginSplit).count() / 1000<< "s" << std::endl;
}
