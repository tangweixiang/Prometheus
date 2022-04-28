#pragma once

#include "Core.h"

namespace Pro {
	class PRO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// defined in Client
	Application* CreateApplication();
}

