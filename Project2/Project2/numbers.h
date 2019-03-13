#ifndef NUMBERS_H
#define NUMBERS_H
#include <string>

using namespace std;

//string string_from_int(int number)
string number_less_20_to_string(int number)
{
	string answer;
	switch (number)
	{
	case 0:
		answer="ноль";
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
			return answer;
	}
}
	string number_less_100_to_string(int number)
{
	string answer;
	if(number<20)
	{
		answer=number_less_20_to_string(number);
	}
	else
	
	if (number/10==2)
	{
	int a=number%10;
	if (a==0)
		answer="двадцать";
	else answer="двадцать "+number_less_20_to_string(a);
	}
	else
		if (number/10==3)
	{
	int a=number%10;
	if (a==0)
		answer="тридцать";
	else answer="тридцать "+number_less_20_to_string(a);
	}
	else
		if (number/10==4)
	{
	int a=number%10;
	if (a==0)
		answer="сорок";
	else answer="сорок "+number_less_20_to_string(a);
	}
	else
		if (number/10==5)
	{
	int a=number%10;
	if (a==0)
		answer="пятьдесят";
	else answer="пятьдесят "+number_less_20_to_string(a);
	}
	else
		if (number/10==6)
	{
	int a=number%10;
	if (a==0)
		answer="шестьдесят";
	else answer="шестьдесят "+number_less_20_to_string(a);
	}
	else
		if (number/10==7)
	{
	int a=number%10;
	if (a==0)
		answer="семьдесят";
	else answer="семьдесят "+number_less_20_to_string(a);
	}
	else
		if (number/10==8)
	{
	int a=number%10;
	if (a==0)
		answer="восемьдесят";
	else answer="восемьдесят "+number_less_20_to_string(a);
	}
	else
		if (number/10==9)
	{
	int a=number%10;
	if (a==0)
		answer="девяносто";
	else answer="девяносто "+number_less_20_to_string(a);
	}
	
		return answer;
	}
	
	string number_less_1000_to_string(int number)
{
	string answer;
	if(number<100)
	{
		answer=number_less_100_to_string(number);
	}
		if (number/100==1)
	{
	int a=number%100;
	if (a==0)
		answer="сто";
	else answer="сто "+number_less_100_to_string(a);
	}
	else
		if (number/100==2)
	{
	int a=number%100;
	if (a==0)
		answer="двести";
	else answer="двести "+number_less_100_to_string(a);
	}
	else
		if (number/100==3)
	{
	int a=number%100;
	if (a==0)
		answer="триста";
	else answer="триста "+number_less_100_to_string(a);
	}
	else
		if (number/100==4)
	{
	int a=number%100;
	if (a==0)
		answer="четыреста";
	else answer="четыреста "+number_less_100_to_string(a);
	}
	else
		if (number/100==5)
	{
	int a=number%100;
	if (a==0)
		answer="пятьсот";
	else answer="пятьсот "+number_less_100_to_string(a);
	}
	else
		if (number/100==6)
	{
	int a=number%100;
	if (a==0)
		answer="шестьсот";
	else answer="шестьсот "+number_less_100_to_string(a);
	}
	else
		if (number/100==7)
	{
	int a=number%100;
	if (a==0)
		answer="семьсот";
	else answer="семьсот "+number_less_100_to_string(a);
	}
	else
		if (number/100==8)
	{
	int a=number%100;
	if (a==0)
		answer="восемьсот";
	else answer="восемьсот "+number_less_100_to_string(a);
	}
	else
		if (number/100==9)
	{
	int a=number%100;
	if (a==0)
		answer="девятьсот";
	else answer="девятьсот "+number_less_100_to_string(a);
	}
	return answer;

}
#endif