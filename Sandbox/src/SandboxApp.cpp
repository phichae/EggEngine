
#include <Egg.h>

class Sandbox : public Egg::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

Egg::Application* Egg::CreateApplication()
{
	return new Sandbox();
}