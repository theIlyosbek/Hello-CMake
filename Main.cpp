#include <iostream>
#include <thread>

void func()
{
	std::cout << "Hello World!" << std::endl;
	std::cout << std::this_thread::get_id() << std::endl;
}

int main()
{
	std::thread th(func);
	
	th.join();

	std::cout << std::this_thread::get_id() << std::endl;
	std::cin.get();
}