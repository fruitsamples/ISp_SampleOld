/*	File:		AppleEventHandler.h	Contains:	xxx put contents here xxx	Version:	xxx put version here xxx	Copyright:	© 1999 by Apple Computer, Inc., all rights reserved.	File Ownership:		DRI:				xxx put dri here xxx		Other Contact:		xxx put other contact here xxx		Technology:			xxx put technology here xxx	Writers:		(BWS)	Brent Schorsch	Change History (most recent first):	   <SP1>	  7/1/99	BWS		first checked in*/#ifndef __APPLEEVENTHANDLER__#define __APPLEEVENTHANDLER__//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Includes#ifndef __APPLEEVENTS__#include <AppleEvents.h>#endif//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Public Definitions//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Public Types//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Public Variables//₯	ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ	Public Functions#ifdef __cplusplusextern "C" {#endifextern void		AppleEventsInit(void);extern void		AppleEventsShutDown(void);extern Boolean	AppleEventsGotRequiredParams(const AppleEvent *inEvent);extern void		AppleEventsRegisterQuitFlag(Boolean *inFlag);#ifdef __cplusplus}#endif#endif