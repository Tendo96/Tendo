#ifdef TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
#include "100.h"
BOOST_AUTO_TEST_SUITE( test_suite1 )
BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(string_from_int(0)==string("ноль"));
	BOOST_TEST(string_from_int(1)==string("один"));
	BOOST_TEST(string_from_int(2)==string("два"));
	BOOST_TEST(string_from_int(3)==string("три"));
	BOOST_TEST(string_from_int(4)==string("четыре"));
	BOOST_TEST(string_from_int(5)==string("пять"));
	BOOST_TEST(string_from_int(6)==string("шесть"));
	BOOST_TEST(string_from_int(7)==string("семь"));
	BOOST_TEST(string_from_int(8)==string("восемь"));
	BOOST_TEST(string_from_int(9)==string("девять"));
	BOOST_TEST(string_from_int(10)==string("десять"));
	BOOST_TEST(string_from_int(11)==string("одиннадцать"));
	BOOST_TEST(string_from_int(12)==string("двенадцать"));
	BOOST_TEST(string_from_int(13)==string("тринадцать"));
	BOOST_TEST(string_from_int(14)==string("четырнадцать"));
	BOOST_TEST(string_from_int(15)==string("пятнадцать"));
	BOOST_TEST(string_from_int(16)==string("шестнадцать"));
	BOOST_TEST(string_from_int(17)==string("семнадцать"));
	BOOST_TEST(string_from_int(18)==string("восемнадцать"));
	BOOST_TEST(string_from_int(19)==string("девятнадцать"));


	BOOST_TEST(string_from_int(21)==string("двадцать один"));
	BOOST_TEST(string_from_int(30)==string("тридцать"));
	BOOST_TEST(string_from_int(45)==string("сорок пять"));
	BOOST_TEST(string_from_int(59)==string("пятьдесят девять"));
	BOOST_TEST(string_from_int(62)==string("шестьдесят два"));
	BOOST_TEST(string_from_int(74)==string("семьдесят четыре"));
	BOOST_TEST(string_from_int(88)==string("восемьдесят восемь"));
	BOOST_TEST(string_from_int(95)==string("девяносто пять"));
	BOOST_TEST(string_from_int(10)==string("десять"));
	BOOST_TEST(string_from_int(93)==string("девяносто три"));

}
BOOST_AUTO_TEST_SUITE_END()
#endif