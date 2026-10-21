#pragma once

#include "Core.h"


namespace Ricky {
	class RICKY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}


