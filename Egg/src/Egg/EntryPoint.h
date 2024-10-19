#pragma once

#ifdef EG_PLATFORM_WINDOWS

extern Egg::Application* Egg::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Egg::CreateApplication();
	app->Run();
	delete app;
}

#endif