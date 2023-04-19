#pragma once

#include "Core.h"

namespace Loser {
	class LOSER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in Client
	Application* CreatApplication();
}