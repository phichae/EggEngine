#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern Egg::Application* Egg::CreateApplication();

int main(int argc, char** argv)
{
	Egg::Log::Init();
	EG_CORE_WARN("Initialized Log!");
	int a = 5;
	EG_INFO("Hello! Var={0}", a);


	auto app = Egg::CreateApplication();
	app->Run();
	delete app;
}

#endif 