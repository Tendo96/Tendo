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
	BOOST_TEST(number_less_100_to_string(20)==string("двадцать"));
	BOOST_TEST(number_less_100_to_string(35)==string("тридцать пять"));
	BOOST_TEST(number_less_100_to_string(49)==string("сорок девять"));
	BOOST_TEST(number_less_100_to_string(52)==string("пятьдесят два"));
	BOOST_TEST(number_less_100_to_string(64)==string("шестьдесят четыре"));
	BOOST_TEST(number_less_100_to_string(78)==string("семьдесят восемь"));
	BOOST_TEST(number_less_100_to_string(85)==string("восемьдесят пять"));
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

BOOST_AUTO_TEST_CASE( test_case4 )
{
    BOOST_TEST(sch(1,"стул","стула","стульев") == string("один стул"));
	BOOST_TEST(sch(3,"рубль","рубля","рублей") == string("три рубля"));
	BOOST_TEST(sch(6,"рубль","рубля","рублей") == string("шесть рублей"));
	BOOST_TEST(sch(101,"доллар","доллара","долларов") == string("сто один доллар"));
	BOOST_TEST(sch(105,"гриб","гриба","грибов") == string("сто пять грибов"));
	BOOST_TEST(sch(999,"город","города","городов") == string("девятьсот девяносто девять городов"));
	BOOST_TEST(sch(12,"стул","стула","стульев") == string("двенадцать стульев"));
	BOOST_TEST(sch(33,"богатырь","богатыря","богатырей") == string("тридцать три богатыря"));
	BOOST_TEST(sch(5,"батерфляй","батерфляя","батерфляев") == string("пять батерфляев"));
	BOOST_TEST(sch(256,"байт","байта","байтов") == string("двести пятьдесят шесть байтов"));
	BOOST_TEST(sch(415,"гвоздь","гвоздя","гвоздей") == string("четыреста пятнадцать гвоздей"));
	BOOST_TEST(sch(685,"таракан","таракана","тараканов") == string("шестьсот восемьдесят пять тараканов"));
	BOOST_TEST(sch(20,"картофель","картофеля","картофелей") == string("двадцать картофелей"));
	BOOST_TEST(sch(7,"грех","греха","грехов") == string("семь грехов"));
	BOOST_TEST(sch(4,"час","часа","часов") == string("четыре часа"));
	BOOST_TEST(sch(65,"кость","костя","костей") == string("шестьдесят пять костей"));
	BOOST_TEST(sch(89,"мышь","мыша","мышей") == string("восемьдесят девять мышей"));
	BOOST_TEST(sch(492,"солдат","солдата","солдатов") == string("четыреста девяносто два солдата"));
	BOOST_TEST(sch(111,"гриб","гриба","грибов") == string("сто одиннадцать грибов"));
	BOOST_TEST(sch(365,"день","дня","дней") == string("триста шестьдесят пять дней"));
}
BOOST_AUTO_TEST_CASE( test_case5 )
{
	BOOST_TEST(last(3,"рубль","рубля","рублей",5,"копейка","копейки","копеек") == string("три рубля, пять копеек"));
	BOOST_TEST(last(6,"рубль","рубля","рублей",85,"копейка","копейки","копеек") == string("шесть рублей, восемьдесят пять копеек"));
	BOOST_TEST(last(101,"доллар","доллара","долларов",1,"цент","цента","центов") == string("сто один доллар, один цент"));
	BOOST_TEST(last(105,"евро","евро","евро",20,"цент","цента","центов") == string("сто пять евро, двадцать центов"));
}

BOOST_AUTO_TEST_SUITE_END()
#endif