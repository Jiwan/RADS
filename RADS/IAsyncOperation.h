#pragma once
namespace RADS
{
namespace API
{

class DLLExport IAsyncOperation
{
	public:
		virtual void Func1() = 0;
		virtual void Func2() = 0;
		virtual void Func3() = 0;
		virtual void Func4() = 0;

		virtual ~IAsyncOperation()
		{

		}

	private:
		IAsyncOperation(IAsyncOperation const & other);

		IAsyncOperation& operator=(IAsyncOperation const & other);
};

}
}