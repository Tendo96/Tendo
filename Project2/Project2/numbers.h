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
	if (number/10==2)
	{
	int a=number%10;
	if (a==0)
		answer="двадцать";
	else answer="двадцать "+string_from_int(a);
	}
	else
		if (number/10==3)
	{
	int a=number%10;
	if (a==0)
		answer="тридцать";
	else answer="тридцать "+string_from_int(a);
	}
	else
		if (number/10==4)
	{
	int a=number%10;
	if (a==0)
		answer="сорок";
	else answer="сорок "+string_from_int(a);
	}
	else
		if (number/10==5)
	{
	int a=number%10;
	if (a==0)
		answer="пятьдесят";
	else answer="пятьдесят "+string_from_int(a);
	}
	else
		if (number/10==6)
	{
	int a=number%10;
	if (a==0)
		answer="шестьдесят";
	else answer="шестьдесят "+string_from_int(a);
	}
	else
		if (number/10==7)
	{
	int a=number%10;
	if (a==0)
		answer="семьдесят";
	else answer="семьдесят "+string_from_int(a);
	}
	else
		if (number/10==8)
	{
	int a=number%10;
	if (a==0)
		answer="восемьдесят";
	else answer="восемьдесят "+string_from_int(a);
	}
	else
		if (number/10==9)
	{
	int a=number%10;
	if (a==0)
		answer="девяносто";
	else answer="девяносто "+string_from_int(a);
	}
	return answer;
}
#endif