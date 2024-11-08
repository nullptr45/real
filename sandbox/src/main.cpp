#include "real.h"

class Sandbox : public real::Application {
public:
    Sandbox()
    {
    }

    ~Sandbox()
    {
    }
};

real::Application *real::CreateApp()
{
    return new Sandbox();
}
