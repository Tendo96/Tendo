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
		answer="����";
			break;
	case 1:
		answer="����";
			break;
	case 2:
		answer="���";
			break;
	case 3:
		answer="���";
			break;
	case 4:
		answer="������";
			break;
	case 5:
		answer="����";
			break;
	case 6:
		answer="�����";
			break;
	case 7:
		answer="����";
			break;
	case 8:
		answer="������";
			break;
	case 9:
		answer="������";
			break;
	case 10:
		answer="������";
			break;
	case 11:
		answer="�����������";
			break;
	case 12:
		answer="����������";
			break;
	case 13:
		answer="����������";
			break;
	case 14:
		answer="������������";
			break;
	case 15:
		answer="����������";
			break;
	case 16:
		answer="�����������";
			break;
	case 17:
		answer="����������";
			break;
	case 18:
		answer="������������";
			break;
	case 19:
		answer="������������";
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
		answer="��������";
	else answer="�������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==3)
	{
	int a=number%10;
	if (a==0)
		answer="��������";
	else answer="�������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==4)
	{
	int a=number%10;
	if (a==0)
		answer="�����";
	else answer="����� "+number_less_20_to_string(a);
	}
	else
		if (number/10==5)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==6)
	{
	int a=number%10;
	if (a==0)
		answer="����������";
	else answer="���������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==7)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==8)
	{
	int a=number%10;
	if (a==0)
		answer="�����������";
	else answer="����������� "+number_less_20_to_string(a);
	}
	else
		if (number/10==9)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_20_to_string(a);
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
		answer="���";
	else answer="��� "+number_less_100_to_string(a);
	}
	else
		if (number/100==2)
	{
	int a=number%100;
	if (a==0)
		answer="������";
	else answer="������ "+number_less_100_to_string(a);
	}
	else
		if (number/100==3)
	{
	int a=number%100;
	if (a==0)
		answer="������";
	else answer="������ "+number_less_100_to_string(a);
	}
	else
		if (number/100==4)
	{
	int a=number%100;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_100_to_string(a);
	}
	else
		if (number/100==5)
	{
	int a=number%100;
	if (a==0)
		answer="�������";
	else answer="������� "+number_less_100_to_string(a);
	}
	else
		if (number/100==6)
	{
	int a=number%100;
	if (a==0)
		answer="��������";
	else answer="�������� "+number_less_100_to_string(a);
	}
	else
		if (number/100==7)
	{
	int a=number%100;
	if (a==0)
		answer="�������";
	else answer="������� "+number_less_100_to_string(a);
	}
	else
		if (number/100==8)
	{
	int a=number%100;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_100_to_string(a);
	}
	else
		if (number/100==9)
	{
	int a=number%100;
	if (a==0)
		answer="���������";
	else answer="��������� "+number_less_100_to_string(a);
	}
	return answer;

}
#endif