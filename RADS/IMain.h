#pragma once
#include "boost/smart_ptr/shared_ptr.hpp"
#include "IFindResult.h"

namespace RADS
{
namespace API
{
	/**
	 * An interface for the core of a RADS file system
	 */
	class IMain
	{
		public:
			// The return is an error value (at least i think so)
			virtual int FindFile(std::string const & name, FindFlags flags, boost::shared_ptr<IFindFileResult>& result) = 0;

			virtual void OpenFile() = 0;

			virtual bool DoesFileOrDirectoryExist(std::string const & s) const = 0;
			
			virtual void FindBestPath(std::string const & s, std::string* output) const = 0;
			
			virtual void IAsyncLoadFile() = 0;
			
			virtual void GetUnknow() = 0; // Get Field 10 in the Main class
			
			virtual void GetUnknow2() = 0; // Get Field 18 in the Main class

			virtual ~IMain() = 0;
	};

	/**
	 *
	 */
	DLLExport long CreateMain(boost::shared_ptr<IMain>& main);
}
}