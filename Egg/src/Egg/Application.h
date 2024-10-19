#pragma once

#include "Core.h"

namespace Egg {

	class EGG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}


