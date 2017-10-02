/*-----------------------------------------------------------------

 Copyright (C) 2005  Michael "Chishm" Chisholm

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

 If you use this code, please give due credit and email me about your
 project at chishm@hotmail.com
------------------------------------------------------------------*/

#ifndef CARD_H
#define CARD_H

#include "disc_io.h"

static inline bool CARD_StartUp (void) {
	return get_io_dsisd()->startup();
}

static inline bool CARD_IsInserted (void) {
	return get_io_dsisd()->isInserted();
}

static inline bool CARD_ReadSector (u32 sector, void *buffer) {
	return get_io_dsisd()->readSectors(sector, 1, buffer);
}

static inline bool CARD_ReadSectors (u32 sector, int count, void *buffer) {
	return get_io_dsisd()->readSectors(sector, count, buffer);
}

static inline bool CARD_WriteSector (u32 sector, void *buffer) {
	return get_io_dsisd()->writeSectors(sector, 1, buffer);
}

static inline bool CARD_WriteSectors (u32 sector, int count, void *buffer) {
	return get_io_dsisd()->writeSectors(sector, count, buffer);
}

#endif // CARD_H
