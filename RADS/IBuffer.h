#pragma once

namespace RADS
{
namespace API
{

class DLLExport IBuffer
{
	public:
		virtual void Func1() = 0;
		virtual void Func2() = 0;
		virtual void Func3() = 0;

		virtual ~IBuffer()
		{

		}

	private:
		IBuffer(IBuffer const & other)
		{

		}

		IBuffer & operator=(IBuffer const & other)
		{

		}
};

}
}