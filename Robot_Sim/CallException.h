#pragma once
#include <iostream>

class CallException :
	public std::runtime_error
{
public:
	CallException(const std::string &str) :std::runtime_error(str){}
};