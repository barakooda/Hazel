#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::Application* Hazel::CreateApplication();

	int main(int argc, char** argv)
	{

		Hazel::Log::Init();
		int number = 1;

		HZ_CORE_INFO("Initialized Log GetCoreLogger");
		HZ_CORE_WARN("Hello GetClientLogge Var = {0}",number );

		auto app = Hazel::CreateApplication();
		app->Run();
		delete app;
	}
#endif
