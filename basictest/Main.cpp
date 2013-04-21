#include <cstdlib>
#include <iostream>
#include "boost/smart_ptr/shared_ptr.hpp"
#include "export.h"

#include "Log.h"
#include "IMain.h"

int main(int argc, char* argv[])
{
	RADS::Log::SetLogFile("test");
	RADS::Log::SetLogToConsole(true);
	RADS::Log::SetLogLevel(RADS::Log::TYPE::Verbose);

	boost::shared_ptr<RADS::API::IMain> main;

	RADS::API::CreateMain(main);

	std::cout << main->DoesFileOrDirectoryExist(std::string("maestro-game_client.log")) << std::endl;
	
	std::string* bestPath = new std::string("test");
	main->FindBestPath(std::string("Va te faire foutre"), bestPath);
	
	std::cout << bestPath->c_str();
	
	system("PAUSE");

	return EXIT_SUCCESS;
}