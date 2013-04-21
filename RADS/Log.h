#pragma once
#include "IWriter.h"

namespace RADS
{
namespace Log
{
	DLLExport enum TYPE
	{
		User = 0,
		Error = 1,
		Warning = 2,
		Debug = 3,
		Verbose = 4
	};

	DLLExport void SetLogLevel(TYPE t);

	// if path is null default to "rads.log"
	DLLExport long SetLogFile(char const * const path);
	// return SetLogFile(path, 0)

	// if path is null default to "rads.log"
	// !TODO find the unknow byte usage
	DLLExport long SetLogFile(char const * const path, int unknow);
	// Seam to always return 0 (in the real implementation)

	DLLExport void SetLogToConsole(bool enable);

	DLLExport void SetIWriter(RADS::Log::IWriter * const writer);
}
}