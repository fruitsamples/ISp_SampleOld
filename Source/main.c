/*	File:		main.c	Contains:	xxx put contents here xxx	Version:	xxx put version here xxx	Copyright:	© 1999 by Apple Computer, Inc., all rights reserved.	File Ownership:		DRI:				xxx put dri here xxx		Other Contact:		xxx put other contact here xxx		Technology:			xxx put technology here xxx	Writers:		(BWS)	Brent Schorsch	Change History (most recent first):	   <SP1>	  7/1/99	BWS		first checked in*///₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Includes#include <Appearance.h>#include <Dialogs.h>#include <Fonts.h>#include <Processes.h>#include <Resources.h>#include <Quickdraw.h>#include <Windows.h>#include "AppleEventHandler.h"#include "EventHandler.h"#include "MemoryHandler.h"#include "MenuHandler.h"//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Private Definitions//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Private Types//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Private Variablesstatic QDGlobals	qd;//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Private Functionsvoid main(void);static void ToolboxInit(void);//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Public Variables//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	mainvoidmain(void){	ToolboxInit();	AppleEventsInit();	RegisterAppearanceClient();		MenuInit();	EventInit();	EventLoop();	AppleEventsShutDown();	UnregisterAppearanceClient();	ExitToShell();}//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	ToolboxInitstatic voidToolboxInit(void){	MaxApplZone();	InitGraf(&qd.thePort);	InitFonts();	InitWindows();	InitMenus();	TEInit();	InitDialogs(nil);	InitCursor();}