#include <Albatros.h>

class Sandbox : public Albatros::Application
{
	public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Albatros ::Application* Albatros::CreateApplication()
{
	return new Sandbox();
}
