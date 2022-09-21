#include <iostream>
#include <thread>

#include "Log.h"

void func()
{
	Log("Hello World!");
	std::cout << std::this_thread::get_id() << std::endl;
}

int main()
{
	std::thread th(func);
	
	th.join();

	std::cout << std::this_thread::get_id() << std::endl;
	std::cin.get();
}