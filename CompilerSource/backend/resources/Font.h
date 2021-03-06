/*
 * Copyright (C) 2010 IsmAvatar <IsmAvatar@gmail.com>
 * Copyright (C) 2014 Robert B. Colton
 * 
 * This file is part of Enigma Plugin.
 * Enigma Plugin is free software and comes with ABSOLUTELY NO WARRANTY.
 * See LICENSE for details.
 */

#ifndef _FONT__H
#define _FONT__H

#include "backend/JavaStruct.h"
#include "backend/sub/GlyphRange.h"

struct Font
{
	String name;
	int id;
  
	String fontName;
	int size;
	boolean bold;
	boolean italic;

	int glyphRangeCount;
	GlyphRange *glyphRanges;
};

#endif
