#pragma once

#ifdef WF_PLATFORM_WINDOWS

extern Wolfer::Application* Wolfer::CreateApplication();

int main(int argc, char** argv)
{
	Wolfer::Log::Init();
	WF_CORE_WARN("Initializez Log");
	int a = 5;
	WF_INFO("Hello Var={0}", a);


	auto app = Wolfer::CreateApplication();
	app->Run();
	delete app;

}

#endif