// Copyright (c) 2015, Matthew Malensek.
// Distributed under the BSD 2-Clause License (see LICENSE.txt for details)

#pragma once

#include "../Meter.h"

class HorizontalBar : public Meter {
public:
    HorizontalBar(std::wstring bitmapName, int x, int y,
        int units, bool reversed = false);

    virtual void Draw(Gdiplus::Bitmap *buffer, Gdiplus::Graphics *graphics);

private:
    int _pixelsPerUnit;
    bool _reversed;
};