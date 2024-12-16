// Classic Shell (c) 2009-2017, Ivo Beltchev
// Retro-Shell (c) 2024, aubymori
// Retro-Shell (c) 2025, Olive6841
// Confidential information of Ivo Beltchev. Not for disclosure or distribution without prior written consent from the author

#pragma once

bool CreateFakeFolder(const wchar_t* source, const wchar_t* fname);
void DeleteFakeFolder(const wchar_t* fname);
bool IsFakeFolder(const wchar_t* fname);
bool GetFakeFolder(wchar_t* dst, int len, const wchar_t* src);
