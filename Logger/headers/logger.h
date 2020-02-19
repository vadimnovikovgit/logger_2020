#pragma once


namespace alphaLogger
{
	class output
	{
	public:
		output()
		{
			m_outputType = 1;
		}
		output(enum t) :
			m_outputType(t)
	private:
		enum m_outputType{"File","Console","FC","Stream"};
	};



	class Logger
	{
	public:
		Logger();

	private:
		output* out;
	};
}