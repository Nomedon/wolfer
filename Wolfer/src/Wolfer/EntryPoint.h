#pragma once

#ifdef WF_PLATFORM_WINDOWS

extern Wolfer::Application* Wolfer::CreateApplication();

int main(int argc, char** argv)
{
	printf("Wolfer Engine");
	auto app = Wolfer::CreateApplication();
	app->Run();
	delete app;

}

#endif