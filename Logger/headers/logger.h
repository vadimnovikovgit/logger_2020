#pragma once


namespace alphaLogger
{
	class output
	{
	private:
		enum m_outputType{File,Console,FC,Stream};
		int m_type = 0;
	public:
		output()
		{
			m_type = 0;
		}
		output(m_outputType t) :
			m_type(t)
		{}

	};



	class Logger
	{
	public:
		Logger();

	private:
		output* out;
	};
}