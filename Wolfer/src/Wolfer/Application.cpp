#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Wolfer {

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		WF_TRACE(e);

		while (true);
	}
}