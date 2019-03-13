#ifdef TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
BOOST_AUTO_TEST_SUITE( test_suite1 )
BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(number_less_20_to_string(0)==string("ноль"));
	BOOST_TEST(number_less_20_to_string(1)==string("один"));
	BOOST_TEST(number_less_20_to_string(2)==string("два"));
	BOOST_TEST(number_less_20_to_string(3)==string("три"));
	BOOST_TEST(number_less_20_to_string(4)==string("четыре"));
	BOOST_TEST(number_less_20_to_string(5)==string("пять"));
	BOOST_TEST(number_less_20_to_string(6)==string("шесть"));
	BOOST_TEST(number_less_20_to_string(7)==string("семь"));
	BOOST_TEST(number_less_20_to_string(8)==string("восемь"));
	BOOST_TEST(number_less_20_to_string(9)==string("девять"));
	BOOST_TEST(number_less_20_to_string(10)==string("десять"));
	BOOST_TEST(number_less_20_to_string(11)==string("одиннадцать"));
	BOOST_TEST(number_less_20_to_string(12)==string("двенадцать"));
	BOOST_TEST(number_less_20_to_string(13)==string("тринадцать"));
	BOOST_TEST(number_less_20_to_string(14)==string("четырнадцать"));
	BOOST_TEST(number_less_20_to_string(15)==string("пятнадцать"));
	BOOST_TEST(number_less_20_to_string(16)==string("шестнадцать"));
	BOOST_TEST(number_less_20_to_string(17)==string("семнадцать"));
	BOOST_TEST(number_less_20_to_string(18)==string("восемнадцать"));
	BOOST_TEST(number_less_20_to_string(19)==string("девятнадцать"));
}
BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST(number_less_100_to_string(11)==string("одиннадцать"));
	BOOST_TEST(number_less_100_to_string(30)==string("тридцать"));
	BOOST_TEST(number_less_100_to_string(45)==string("сорок пять"));
	BOOST_TEST(number_less_100_to_string(59)==string("пятьдесят девять"));
	BOOST_TEST(number_less_100_to_string(62)==string("шестьдесят два"));
	BOOST_TEST(number_less_100_to_string(74)==string("семьдесят четыре"));
	BOOST_TEST(number_less_100_to_string(88)==string("восемьдесят восемь"));
	BOOST_TEST(number_less_100_to_string(95)==string("девяносто пять"));
	BOOST_TEST(number_less_100_to_string(93)==string("девяносто три"));

}
BOOST_AUTO_TEST_CASE(test_case3)
{
	BOOST_TEST(number_less_1000_to_string(151)==string("сто пятьдесят один"));
	BOOST_TEST(number_less_1000_to_string(215)==string("двести пятнадцать"));
	BOOST_TEST(number_less_1000_to_string(300)==string("триста"));
	BOOST_TEST(number_less_1000_to_string(456)==string("четыреста пятьдесят шесть"));
	BOOST_TEST(number_less_1000_to_string(599)==string("пятьсот девяносто девять"));
	BOOST_TEST(number_less_1000_to_string(620)==string("шестьсот двадцать"));
	BOOST_TEST(number_less_1000_to_string(742)==string("семьсот сорок два"));
	BOOST_TEST(number_less_1000_to_string(880)==string("восемьсот восемьдесят"));
	BOOST_TEST(number_less_1000_to_string(950)==string("девятьсот пятьдесят"));
	BOOST_TEST(number_less_1000_to_string(53)==string("пятьдесят три"));
	BOOST_TEST(number_less_1000_to_string(0)==string("ноль"));
	BOOST_TEST(number_less_1000_to_string(100)==string("сто"));
	BOOST_TEST(number_less_1000_to_string(105)==string("сто пять"));
	BOOST_TEST(number_less_1000_to_string(393)==string("триста девяносто три"));
}
BOOST_AUTO_TEST_SUITE_END()
#endif