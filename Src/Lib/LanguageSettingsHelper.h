// Classic Shell (c) 2009-2017, Ivo Beltchev
// Retro-Shell (c) 2024, aubymori
// Retro-Shell (c) 2025, Olive6841
// Confidential information of Ivo Beltchev. Not for disclosure or distribution without prior written consent from the author

#pragma once

class ISettingsPanel;

extern int g_LanguageIDs[];
extern int g_LanguageIDCount;

ISettingsPanel* GetLanguageSettings(TSettingsComponent component);
