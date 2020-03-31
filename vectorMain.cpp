#include "funkcijos.cpp"
int ErrorFun(int nr);
int CinFail(int e);
int CinDecimal(int e);
void Input(vector<studentas> &studentai);
void Printing(vector<studentas> &studentai, unsigned int &Pilgis, unsigned int &Vilgis);
bool compare_by_word(const studentas& lhs, const studentas& rhs);
bool compare_by_name(const studentas& lhs, const studentas& rhs);
bool compare_by_grades(studentas& lhs, studentas& rhs);
void FindLongest(vector <studentas> &input, unsigned int &Vilgis, unsigned int &Pilgis);
void Generavimas(int r, int e);
void FileRead(vector<studentas> &studentai, ifstream &file);
void Interface(vector<studentas> &studentai);
void SpartosAnalize(vector<studentas> &studentai);
void VectorSplit(vector<studentas> &studentai, int &b, unsigned int &Vilgis, unsigned int &Pilgis);
int main()
{
	int r;
	cout << "Ar norite vykdyti 0.4 (Spartos analize) ar ankstesnes versijas?" << endl;
	cout << "1-spartos analize 0 -ankstesnes " << endl;
	r = CinFail(0);
	vector<studentas> studentai;
	if (r == 1)
	{
		SpartosAnalize(studentai);
	}
	else {
		unsigned int Pilgis = 7;
		unsigned int Vilgis = 6;
		Interface(studentai);
		cout << "Spauskite 1 jei norite rikiuoti pagal vardus, spauskite 0 jei norite rikiuoti pagal pavardes" << endl;
		r = CinFail(0);
		FindLongest(studentai, Vilgis, Pilgis);
		if (r == 0)
			std::sort(studentai.begin(),studentai.end(),compare_by_word);
		else
			std::sort(studentai.begin(),studentai.end(),compare_by_name);
		Printing(studentai, Pilgis, Vilgis);
	}
}
