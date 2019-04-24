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