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
	string sch(int number, string s1, string s2, string s3)
{
	string answer;
	if (number==11||number==12||number==13||number==14) 
		answer = number_less_1000_to_string(number)+" "+s3;
	else
	if (number%100==11||number%100==12||number%100==13||number%100==14)
		answer = number_less_1000_to_string(number)+" "+s3;
	else
	if (number%10==1) 
		answer = number_less_1000_to_string(number)+" "+s1;
	else
	if (number%10>1&&number%10<5) 
		answer = number_less_1000_to_string(number)+" "+s2;
	else
		answer = number_less_1000_to_string(number)+" "+s3;
	return answer;
}
string last(int s, string s1, string s2, string s3, int n, string n1, string n2, string n3)
{
	string answer;
	int a=s%100;
	int b=n%100;
	if (a==11||a==12||a==13||a==14) 
		answer = number_less_1000_to_string(s)+" "+s3;
	else
	if (s%10==1) 
		answer = number_less_1000_to_string(s)+" "+s1;
	else
	if (s%10>1&&s%10<5) 
		answer = number_less_1000_to_string(s)+" "+s2;
	else
		answer = number_less_1000_to_string(s)+" "+s3;
	if(n==0)
		answer=answer;
	else
	if (b==11||b==12||b==13||b==14) 
	    answer = answer+", "+number_less_1000_to_string(n)+" "+n3;
	else
	if (n%10==1) 
		answer = answer+", "+number_less_1000_to_string(n)+" "+n1;
	else
	if (n%10>1&&n%10<5) 
		answer = answer+", "+number_less_1000_to_string(n)+" "+n2;
	else
		answer = answer+", "+number_less_1000_to_string(n)+" "+n3;
	return answer;
}

#endif