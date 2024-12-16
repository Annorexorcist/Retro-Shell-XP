// Classic Shell (c) 2009-2017, Ivo Beltchev
// Retro-Shell (c) 2024, aubymori
// Retro-Shell (c) 2025, Olive6841
// Confidential information of Ivo Beltchev. Not for disclosure or distribution without prior written consent from the author

#pragma once

#include "ClassicIEDLL_h.h"

class CClassicIEDLLModule : public CAtlDllModuleT<CClassicIEDLLModule>
{
public :
	DECLARE_LIBID(LIBID_ClassicIEDLLLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_CLASSICIEDLL, "{DF3255F4-FF55-44FA-A728-E77B83E9E403}")
};

extern class CClassicIEDLLModule _AtlModule;
