#pragma once
#include "Log.h"

namespace RADS
{
namespace Log
{
	/**
	 * Represent an interface for logs writers.
	 */
	class DLLExport IWriter
	{
		public:
			// Why the hell they put the defaults constructors in this class and not the default destructor :s
			virtual void Write(TYPE type, char const * const currentFunction, char const * const data) = 0;

		private:
			virtual ~IWriter()
			{

			}
	};

}
}