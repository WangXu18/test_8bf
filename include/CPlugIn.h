#ifndef CPLUG_IN_H
#define CPLUG_IN_H

#if _MSC_VER > 1000
#pragma once
#endif  // _MSC_VER > 1000

//#ifndef __AFXWIN_H__
//#error include 'stdafx.h' before including this file for PCH
//#endif

#include "Resource.h"

class CMFCPlugInApp : public CWinApp {
 private:
  FilterRecord* m_pFilterRecord;
  intptr_t* m_pLongData;
  char* m_pData;

 public:
  CMFCPlugInApp();

  void Entry(FilterRecord*, intptr_t*);
  void Exit();
  void About(void);
  void Parameters(void);
  void Prepare(void);
  void Start(void);
  void Continue(void);
  void Finish(void);

  void DoUI(void);

  int m_Value;
  // Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(CMFCPlugInApp)
  //}}AFX_VIRTUAL

  //{{AFX_MSG(CMFCPlugInApp)
  // NOTE - the ClassWizard will add and remove member functions here.
  //    DO NOT EDIT what you see in these blocks of generated code !
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
};



#endif  // CPLUG_IN_H