#include <Loser.h>

class Sandbox : public Loser::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Loser::Application* Loser::CreatApplication()
{
	return new Sandbox;
}