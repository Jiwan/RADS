#pragma once

enum FindFlags : char
{
	Unknow	= 1 << 1,
	Unknow2 = 1 << 2
};


class IFindFileResult
{
	public:
		virtual int Count() = 0;
		virtual void* /*256 byte size fileinfo*/ GetAt(unsigned int index) = 0;

		virtual ~IFindFileResult()
		{

		}

	private:
		IFindFileResult& operator=(IFindFileResult const& other);   

};