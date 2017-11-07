#pragma once 
#include <stdlib.h>
#include <XString.h>
#include "XPCoreHead.h"

class CUIMgr
{
public:
    CUIMgr();
    ~CUIMgr();

    static CUIMgr* m_This;
    static CUIMgr* pins();

    void init_local();

    void clear_ui();
    
    void pause();

    int show_main();

    XString open_file_dlg();

    static void __stdcall in_fun(XString& command);

    static void __stdcall out_fun(CONTEXT context, const std::list<DECODEING_ASM>& asm_tab);
};

