
// spiwavmfc.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CspiwavmfcApp:
// See spiwavmfc.cpp for the implementation of this class
//

class CspiwavmfcApp : public CWinApp
{
public:
	CspiwavmfcApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
	virtual BOOL OnIdle(LONG lCount);
};

extern CspiwavmfcApp theApp;