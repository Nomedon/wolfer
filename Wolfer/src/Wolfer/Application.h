#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Wolfer
{

	class WOLFER_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in client
	Application* CreateApplication();

}