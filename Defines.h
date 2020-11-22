/*
 *   Copyright (C) 2015,2016,2017,2018 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#pragma once

const unsigned char MODE_IDLE    = 0U;
const unsigned char MODE_DMR     = 2U;
const unsigned char MODE_POCSAG  = 6U;

const unsigned char MODE_CW      = 98U;
const unsigned char MODE_ERROR   = 100U;
const unsigned char MODE_QUIT    = 110U;

const unsigned char TAG_HEADER = 0x00U;
const unsigned char TAG_DATA   = 0x01U;
const unsigned char TAG_LOST   = 0x02U;
const unsigned char TAG_EOT    = 0x03U;

enum RPT_RF_STATE {
	RS_RF_LISTENING,
	RS_RF_LATE_ENTRY,
	RS_RF_AUDIO,
	RS_RF_DATA,
	RS_RF_REJECTED,
	RS_RF_INVALID
};

enum RPT_NET_STATE {
	RS_NET_IDLE,
	RS_NET_AUDIO,
	RS_NET_DATA
};

enum DMR_BEACONS {
	DMR_BEACONS_OFF,
	DMR_BEACONS_NETWORK
};

enum DMR_OVCM_TYPES {
	DMR_OVCM_OFF,
	DMR_OVCM_RX_ON,
	DMR_OVCM_TX_ON,
	DMR_OVCM_ON,
	DMR_OVCM_FORCE_OFF
};
