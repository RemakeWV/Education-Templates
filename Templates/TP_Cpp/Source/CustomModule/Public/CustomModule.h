#pragma once

#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(CustomModule, All, All);

class FCustomModule : public IModuleInterface
{
    public:

    virtual void StartupModule() override;
    virtual void ShtudownModule() override;
}