#include "funkcijos.cpp"
int ErrorFun(int nr);
int CinFail(int e);
int CinDecimal(int e);
bool compare_by_word(const studentas& lhs, const studentas& rhs);
bool compare_by_name(const studentas& lhs, const studentas& rhs);
bool compare_by_grades(studentas& lhs, studentas& rhs);
void FindLongest(vector <studentas> &input, unsigned int &Vilgis, unsigned int &Pilgis);
void FileRead(vector<studentas> &studentai, ifstream &file);
void SpartosAnalize(vector<studentas> &studentai);
void VectorSplit(vector<studentas> &studentai, int &b, unsigned int &Vilgis, unsigned int &Pilgis);
int main()
{	try {
	vector<studentas> studentai;
		SpartosAnalize(studentai);
	}
	catch (const std::exception &exc)
		{

			std::cerr << "ERROR:" << exc.what();
			std::exit(EXIT_FAILURE);
		}
		return 0;
}
