#include<iostream>
#include<conio.h>
using namespace std;
#define SHOOTER
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef SHOOTER
	char key;
	do
	{
		key = _getch();

		if (key == 119)
			cout << "��� ������" << endl;
		else if (key == 115)
			cout << "��� �����" << endl;
		else if (key == 100)
			cout << "��� ������" << endl;
		else if (key == 97)
			cout << "�����!" << endl;
		else if (key == 32)
			cout << "������!" << endl;
		else if (key == 13)
			cout << "�����!" << endl;

} while (key != 27);
cout << "����� ����" << endl;
#endif // SHOOTER


}
