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
	}
	if (number/10==2)
	{
	int a=number%10;
	if (a==0)
		answer="��������";
	else answer="�������� "+string_from_int(a);
	}
	else
		if (number/10==3)
	{
	int a=number%10;
	if (a==0)
		answer="��������";
	else answer="�������� "+string_from_int(a);
	}
	else
		if (number/10==4)
	{
	int a=number%10;
	if (a==0)
		answer="�����";
	else answer="����� "+string_from_int(a);
	}
	else
		if (number/10==5)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+string_from_int(a);
	}
	else
		if (number/10==6)
	{
	int a=number%10;
	if (a==0)
		answer="����������";
	else answer="���������� "+string_from_int(a);
	}
	else
		if (number/10==7)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+string_from_int(a);
	}
	else
		if (number/10==8)
	{
	int a=number%10;
	if (a==0)
		answer="�����������";
	else answer="����������� "+string_from_int(a);
	}
	else
		if (number/10==9)
	{
	int a=number%10;
	if (a==0)
		answer="���������";
	else answer="��������� "+string_from_int(a);
	}
	return answer;
}
#endif