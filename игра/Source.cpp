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
			cout << "Шаг вперед" << endl;
		else if (key == 115)
			cout << "Шаг назад" << endl;
		else if (key == 100)
			cout << "Шаг вправо" << endl;
		else if (key == 97)
			cout << "Назад!" << endl;
		else if (key == 32)
			cout << "Прыжок!" << endl;
		else if (key == 13)
			cout << "Огонь!" << endl;

} while (key != 27);
cout << "Конец игры" << endl;
#endif // SHOOTER


}
