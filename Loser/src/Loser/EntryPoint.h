#pragma once

#ifdef LS_PLATFORM_WINDOWS

extern Loser::Application* Loser::CreatApplication();

int main(int argc, char** argv)
{
	auto app = Loser::CreatApplication();
	app->Run();
	delete app;
}

#endif 
