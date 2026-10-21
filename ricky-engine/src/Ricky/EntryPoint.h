#pragma once

#ifdef RK_PLATFORM_WINDOWS
	
extern Ricky::Application* Ricky::CreateApplication();

int main(int argc, char** argv)
{
	printf("Ricky Engine\n");
	auto app = Ricky::CreateApplication();
	app->Run();
	delete app;
}

#endif