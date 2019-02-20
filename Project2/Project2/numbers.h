#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>

using namespace std;

string string_from_int(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer="Ноль";
			break;
	case 1:
		answer="один";
			break;
	case 2:
		answer="два";
			break;
	case 3:
		answer="три";
			break;
	case 4:
		answer="четыре";
			break;
	case 5:
		answer="пять";
			break;
	case 6:
		answer="шесть";
			break;
	case 7:
		answer="семь";
			break;
	case 8:
		answer="восемь";
			break;
	case 9:
		answer="девять";
			break;
	case 10:
		answer="десять";
			break;
	case 11:
		answer="одиннадцать";
			break;
	case 12:
		answer="двенадцать";
			break;
	case 13:
		answer="тринадцать";
			break;
	case 14:
		answer="четырнадцать";
			break;
	case 15:
		answer="пятнадцать";
			break;
	case 16:
		answer="шестнадцать";
			break;
	case 17:
		answer="семнадцать";
			break;
	case 18:
		answer="восемнадцать";
			break;
	case 19:
		answer="девятнадцать";
			break;
	}
}
#endif