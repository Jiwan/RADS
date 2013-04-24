#include "export.h"
#include "IMain.h"
#include "IAsyncLoadFile.h"
#include "IBase.h"
#include "IBuffer.h"
#include "LogType.h"
#include "Log.h"
#include "IWriter.h"

void RADS::Log::SetLogLevel(TYPE t)
{

}

long RADS::Log::SetLogFile(char const * const path)
{
	return 0;
}

long RADS::Log::SetLogFile(char const * const path, int unknow)
{
	return 0;
}

long RADS::API::CreateMain(boost::shared_ptr<IMain>& main)
{
	return 0;
}

void RADS::Log::SetLogToConsole(bool enable)
{

}

void RADS::Log::SetIWriter(RADS::Log::IWriter * const writer)
{

}