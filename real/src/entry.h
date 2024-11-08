#pragma once

#include "core/application.h"

extern real::Application *real::CreateApp();

int main(int argc, char **argv)
{
    auto app = real::CreateApp();
    app->Run();
    delete app;
}
