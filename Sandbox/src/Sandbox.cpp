
#include "Prometheus.h"

class Sandbox : public Pro::Application
{
public:
	Sandbox() {

	};
	~Sandbox() {

	};

};

Pro::Application* Pro::CreateApplication() {
	return new Sandbox();
}