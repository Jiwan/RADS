#pragma once

namespace RADS
{
namespace API
{
namespace RPC
{

class IBase
{
	public:
		virtual void Func1() = 0;
		virtual void Func2() = 0;
		virtual void Func3() = 0;
		virtual void Func4() = 0;
		virtual void Func5() = 0;

		virtual ~IBase()
		{

		}

	private:
		IBase(IBase const & other)
		{

		}

		IBase & operator=(IBase const & other)
		{

		}
};

}
}
}