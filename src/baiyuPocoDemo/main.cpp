//
// main.cpp
//
// This sample demonstrates the Poco project.
//
// Copyright (c) 2021, baiyu
//


#include "Poco/LocalDateTime.h"
#include "Poco/DateTime.h"
#include "Poco/DateTimeFormat.h"
#include "Poco/DateTimeFormatter.h"
#include "Poco/DateTimeParser.h"
#include <iostream>


using Poco::LocalDateTime;
using Poco::DateTime;
using Poco::DateTimeFormat;
using Poco::DateTimeFormatter;
using Poco::DateTimeParser;


int main(int argc, char** argv)
{
	std::cout << "baiyu�ɹ�������Poco���µ�ʱ����" << std::endl;
	LocalDateTime now;
	std::string str = DateTimeFormatter::format(now, DateTimeFormat::ISO8601_FORMAT);
	std::cout << "��ǰʱ���ǣ�" << str << std::endl;
	std::cout << "�ɹ��½���һ��Poco����" << std::endl;
	return 0;
}
