/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2009 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
#include "SDL_config.h"


#ifdef SDL_VIDEO_DRIVER_GC
/* Gamecube/Wii hardware setup for the SDL framebuffer console driver */

#include "SDL_fbvideo.h"

extern SDL_bool GC_Available(void);
extern void GC_CreateDevice(SDL_VideoDevice *this);

extern SDL_bool GC_Test(_THIS);
extern void GC_Init(_THIS, SDL_PixelFormat *vformat);
#endif
