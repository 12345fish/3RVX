#pragma once
#include <Windows.h>

#include <string>

class UIContext {
public:
    UIContext(HWND hWnd);

    bool GetCheck(int chkId);
    bool SetCheck(int chkId, bool checked = true);

    void AddComboItem(int cmbId, std::wstring item);
    int SelectComboItem(int cmbId, std::wstring item);
    void SelectComboItem(int cmbId, int itemIdx);
    std::wstring GetComboSelection(int cmbId);
    bool SetText(int id, std::wstring text);
    bool SetText(int id, int value);
    void SetSpinRange(int spId, int lo, int hi);

    void Enable(int id);
    void Disable(int id);
    void SetEnabled(int id, bool enabled);

private:
    HWND _hWnd;
};