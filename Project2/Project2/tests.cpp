#ifdef TEST
#define BOOST_TEST_MODULE tests
#include <boost/test/included/unit_test.hpp>
#include "numbers.h"
BOOST_AUTO_TEST_SUITE( test_suite1 )
BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST(number_less_20_to_string(0)==string("����"));
	BOOST_TEST(number_less_20_to_string(1)==string("����"));
	BOOST_TEST(number_less_20_to_string(2)==string("���"));
	BOOST_TEST(number_less_20_to_string(3)==string("���"));
	BOOST_TEST(number_less_20_to_string(4)==string("������"));
	BOOST_TEST(number_less_20_to_string(5)==string("����"));
	BOOST_TEST(number_less_20_to_string(6)==string("�����"));
	BOOST_TEST(number_less_20_to_string(7)==string("����"));
	BOOST_TEST(number_less_20_to_string(8)==string("������"));
	BOOST_TEST(number_less_20_to_string(9)==string("������"));
	BOOST_TEST(number_less_20_to_string(10)==string("������"));
	BOOST_TEST(number_less_20_to_string(11)==string("�����������"));
	BOOST_TEST(number_less_20_to_string(12)==string("����������"));
	BOOST_TEST(number_less_20_to_string(13)==string("����������"));
	BOOST_TEST(number_less_20_to_string(14)==string("������������"));
	BOOST_TEST(number_less_20_to_string(15)==string("����������"));
	BOOST_TEST(number_less_20_to_string(16)==string("�����������"));
	BOOST_TEST(number_less_20_to_string(17)==string("����������"));
	BOOST_TEST(number_less_20_to_string(18)==string("������������"));
	BOOST_TEST(number_less_20_to_string(19)==string("������������"));
}
BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST(number_less_100_to_string(11)==string("�����������"));
	BOOST_TEST(number_less_100_to_string(20)==string("��������"));
	BOOST_TEST(number_less_100_to_string(35)==string("�������� ����"));
	BOOST_TEST(number_less_100_to_string(49)==string("����� ������"));
	BOOST_TEST(number_less_100_to_string(52)==string("��������� ���"));
	BOOST_TEST(number_less_100_to_string(64)==string("���������� ������"));
	BOOST_TEST(number_less_100_to_string(78)==string("��������� ������"));
	BOOST_TEST(number_less_100_to_string(85)==string("����������� ����"));
	BOOST_TEST(number_less_100_to_string(93)==string("��������� ���"));

}
BOOST_AUTO_TEST_CASE(test_case3)
{
	BOOST_TEST(number_less_1000_to_string(151)==string("��� ��������� ����"));
	BOOST_TEST(number_less_1000_to_string(215)==string("������ ����������"));
	BOOST_TEST(number_less_1000_to_string(300)==string("������"));
	BOOST_TEST(number_less_1000_to_string(456)==string("��������� ��������� �����"));
	BOOST_TEST(number_less_1000_to_string(599)==string("������� ��������� ������"));
	BOOST_TEST(number_less_1000_to_string(620)==string("�������� ��������"));
	BOOST_TEST(number_less_1000_to_string(742)==string("������� ����� ���"));
	BOOST_TEST(number_less_1000_to_string(880)==string("��������� �����������"));
	BOOST_TEST(number_less_1000_to_string(950)==string("��������� ���������"));
	BOOST_TEST(number_less_1000_to_string(53)==string("��������� ���"));
	BOOST_TEST(number_less_1000_to_string(0)==string("����"));
	BOOST_TEST(number_less_1000_to_string(100)==string("���"));
	BOOST_TEST(number_less_1000_to_string(105)==string("��� ����"));
	BOOST_TEST(number_less_1000_to_string(393)==string("������ ��������� ���"));
}

BOOST_AUTO_TEST_CASE( test_case4 )
{
    BOOST_TEST(sch(1,"����","�����","�������") == string("���� ����"));
	BOOST_TEST(sch(3,"�����","�����","������") == string("��� �����"));
	BOOST_TEST(sch(6,"�����","�����","������") == string("����� ������"));
	BOOST_TEST(sch(101,"������","�������","��������") == string("��� ���� ������"));
	BOOST_TEST(sch(105,"����","�����","������") == string("��� ���� ������"));
	BOOST_TEST(sch(999,"�����","������","�������") == string("��������� ��������� ������ �������"));
	BOOST_TEST(sch(12,"����","�����","�������") == string("���������� �������"));
	BOOST_TEST(sch(33,"��������","��������","���������") == string("�������� ��� ��������"));
	BOOST_TEST(sch(5,"���������","���������","����������") == string("���� ����������"));
	BOOST_TEST(sch(256,"����","�����","������") == string("������ ��������� ����� ������"));
	BOOST_TEST(sch(415,"������","������","�������") == string("��������� ���������� �������"));
	BOOST_TEST(sch(685,"�������","��������","���������") == string("�������� ����������� ���� ���������"));
	BOOST_TEST(sch(20,"���������","���������","����������") == string("�������� ����������"));
	BOOST_TEST(sch(7,"����","�����","������") == string("���� ������"));
	BOOST_TEST(sch(4,"���","����","�����") == string("������ ����"));
	BOOST_TEST(sch(65,"�����","�����","������") == string("���������� ���� ������"));
	BOOST_TEST(sch(89,"����","����","�����") == string("����������� ������ �����"));
	BOOST_TEST(sch(492,"������","�������","��������") == string("��������� ��������� ��� �������"));
	BOOST_TEST(sch(111,"����","�����","������") == string("��� ����������� ������"));
	BOOST_TEST(sch(365,"����","���","����") == string("������ ���������� ���� ����"));
}
BOOST_AUTO_TEST_CASE( test_case5 )
{
	BOOST_TEST(last(3,"�����","�����","������",5,"�������","�������","������") == string("��� �����, ���� ������"));
	BOOST_TEST(last(6,"�����","�����","������",85,"�������","�������","������") == string("����� ������, ����������� ���� ������"));
	BOOST_TEST(last(101,"������","�������","��������",1,"����","�����","������") == string("��� ���� ������, ���� ����"));
	BOOST_TEST(last(105,"����","����","����",20,"����","�����","������") == string("��� ���� ����, �������� ������"));
}

BOOST_AUTO_TEST_SUITE_END()
#endif