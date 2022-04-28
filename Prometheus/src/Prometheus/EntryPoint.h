#pragma once

#ifdef PRO_PLATFORM_WINDOWS

 Pro::Application* Pro::CreateApplication();

int main(int argc, char** argv) {
	auto sandbox = Pro::CreateApplication();
	sandbox->Run();
	delete sandbox;
}

#endif