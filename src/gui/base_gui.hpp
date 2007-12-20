//  $Id$
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2006 SuperTuxKart-Team
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_BASEGUI_H
#define HEADER_BASEGUI_H

#include <SDL/SDL.h>
#include "input.hpp"

class BaseGUI
{
	void animateWidget(const int, const int);
		
public:
    BaseGUI() {}
    virtual ~BaseGUI() {}

    virtual void update(float dt);
    virtual void select() = 0;
	
	virtual void handle(GameAction, int);
	
	virtual void inputKeyboard(SDLKey, int);

    void inputPointer(int x, int y);

    void  TimeToString(const double time, char *s);
protected:

    int m_menu_id;
};

#endif // HEADER_BASEGUI_H
