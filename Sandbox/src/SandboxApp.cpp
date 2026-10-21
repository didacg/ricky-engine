#include <Ricky.h>

class Sandbox : public Ricky::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Ricky::Application* Ricky::CreateApplication()
{
	return new Sandbox();
}