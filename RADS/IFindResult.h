#pragma once

enum FindFlags : char
{
	Unknow	= 1 << 1,
	Unknow2 = 1 << 2
};


class IFindFileResult
{
	public:
		virtual void method1() = 0;
		virtual void method2() = 0;

		virtual ~IFindFileResult()
		{

		}

	private:
		IFindFileResult& operator=(IFindFileResult const& other);   

};