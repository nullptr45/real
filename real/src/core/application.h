#pragma once

namespace real {

class Application {
public:
    Application();
    virtual ~Application();

    void Run();

private:
};

// NOTE: Must be implemented by user
Application *CreateApp();

}
