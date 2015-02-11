/* Copyright 2015 Myles Salholm */
#pragma once

#include "Runtime/Public/Definitions.h"
#include "Runtime/Public/Core/Window.h"

/*
GameInstance is a single game window in the program.
*/
class FGameInstance
{
public:
	/* Constructor. */
	FGameInstance();
	/* Destructor. */
	~FGameInstance();

	/* Initializes the game instance and gives it a window. */
	virtual bool Init(FWindow* Window);

	/* Returns the window if one exists.  If this return nullptr, the instance probably hasn't been initialized. */
	virtual FWindow* GetWindow() const;

protected:
	/* The window for this game instance. */
	FWindow* Window;
};