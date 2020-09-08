#include "CustomModule.h"

DEFINE_LOG_CATEGORY(CustomModule);

void FCustomModule::StartupModule()
{
    UE_LOG(CustomModule, Warning, TEXT("Module started"));
}

void FCustomModule::ShutdownModule()
{
    UE_LOG(CustomModule, Warning, TEXT("Module shutdown"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FCustomModule, CustomModule)