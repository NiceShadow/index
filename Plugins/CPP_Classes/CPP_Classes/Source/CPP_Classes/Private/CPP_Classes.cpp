// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CPP_Classes.h"

#define LOCTEXT_NAMESPACE "FCPP_ClassesModule"

void FCPP_ClassesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCPP_ClassesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCPP_ClassesModule, CPP_Classes)