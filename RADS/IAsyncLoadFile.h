#pragma once
#include "IAsyncOperation.h"

namespace RADS
{
namespace API
{

class DLLExport IAsyncLoadFile : virtual IAsyncOperation
{
	public:
		virtual void AsyncLoad() = 0;

		virtual ~IAsyncLoadFile()
		{

		}

	private:
		IAsyncLoadFile& operator=(IAsyncLoadFile const & other)
		{

		}
};

}
}