#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Albatros::Application* Albatros::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Albatros::CreateApplication();
	app->Run();
	delete app;
}

#endif
