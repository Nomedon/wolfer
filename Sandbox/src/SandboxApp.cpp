#include <Wolfer.h>

class Sandbox : public Wolfer::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Wolfer::Application* Wolfer::CreateApplication()
{
	return new Sandbox();
}