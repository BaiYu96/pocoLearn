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
	std::cout << "baiyu成功调用了Poco库下的时间类" << std::endl;
	LocalDateTime now;
	std::string str = DateTimeFormatter::format(now, DateTimeFormat::ISO8601_FORMAT);
	std::cout << "当前时间是：" << str << std::endl;
	std::cout << "成功新建了一个Poco工程" << std::endl;
	return 0;
}
