/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file newgrf_extension.h NewGRF extension support. */

#ifndef NEWGRF_EXTENSION_H
#define NEWGRF_EXTENSION_H

enum Action0RemapPropertyIds {
	A0RPI_UNKNOWN_IGNORE = 0x200,
	A0RPI_UNKNOWN_ERROR,

	A0RPI_STATION_MIN_BRIDGE_HEIGHT,
	A0RPI_STATION_DISALLOWED_BRIDGE_PILLARS,
	A0RPI_BRIDGE_MENU_ICON,
	A0RPI_BRIDGE_PILLAR_FLAGS,
	A0RPI_BRIDGE_AVAILABILITY_FLAGS,
	A0RPI_RAILTYPE_ENABLE_PROGRAMMABLE_SIGNALS,
	A0RPI_RAILTYPE_ENABLE_NO_ENTRY_SIGNALS,
	A0RPI_RAILTYPE_ENABLE_RESTRICTED_SIGNALS,
	A0RPI_RAILTYPE_DISABLE_REALISTIC_BRAKING,
	A0RPI_RAILTYPE_ENABLE_SIGNAL_RECOLOUR,
	A0RPI_RAILTYPE_EXTRA_ASPECTS,
	A0RPI_ROADTYPE_EXTRA_FLAGS,
	A0RPI_GLOBALVAR_EXTRA_STATION_NAMES,
	A0RPI_GLOBALVAR_EXTRA_STATION_NAMES_PROBABILITY,
	A0RPI_GLOBALVAR_LIGHTHOUSE_GENERATE_AMOUNT,
	A0RPI_GLOBALVAR_TRANSMITTER_GENERATE_AMOUNT,
	A0RPI_SIGNALS_ENABLE_PROGRAMMABLE_SIGNALS,
	A0RPI_SIGNALS_ENABLE_NO_ENTRY_SIGNALS,
	A0RPI_SIGNALS_ENABLE_RESTRICTED_SIGNALS,
	A0RPI_SIGNALS_ENABLE_SIGNAL_RECOLOUR,
	A0RPI_SIGNALS_EXTRA_ASPECTS,
	A0RPI_SIGNALS_NO_DEFAULT_STYLE,
	A0RPI_SIGNALS_DEFINE_STYLE,
	A0RPI_SIGNALS_STYLE_NAME,
	A0RPI_SIGNALS_STYLE_NO_ASPECT_INCREASE,
	A0RPI_SIGNALS_STYLE_ALWAYS_RESERVE_THROUGH,
	A0RPI_SIGNALS_STYLE_LOOKAHEAD_EXTRA_ASPECTS,
	A0RPI_SIGNALS_STYLE_LOOKAHEAD_SINGLE_SIGNAL_ONLY,
	A0RPI_SIGNALS_STYLE_SEMAPHORE_ENABLED,
	A0RPI_SIGNALS_STYLE_ELECTRIC_ENABLED,
	A0RPI_SIGNALS_STYLE_OPPOSITE_SIDE,
	A0RPI_SIGNALS_STYLE_COMBINED_NORMAL_SHUNT,
	A0RPI_SIGNALS_STYLE_REALISTIC_BRAKING_ONLY,
	A0RPI_OBJECT_USE_LAND_GROUND,
	A0RPI_OBJECT_EDGE_FOUNDATION_MODE,
	A0RPI_OBJECT_FLOOD_RESISTANT,
	A0RPI_OBJECT_VIEWPORT_MAP_TYPE,
	A0RPI_OBJECT_VIEWPORT_MAP_SUBTYPE,
	A0RPI_ROADSTOP_CLASS_ID,
	A0RPI_ROADSTOP_STOP_TYPE,
	A0RPI_ROADSTOP_STOP_NAME,
	A0RPI_ROADSTOP_CLASS_NAME,
	A0RPI_ROADSTOP_DRAW_MODE,
	A0RPI_ROADSTOP_TRIGGER_CARGOES,
	A0RPI_ROADSTOP_ANIMATION_INFO,
	A0RPI_ROADSTOP_ANIMATION_SPEED,
	A0RPI_ROADSTOP_ANIMATION_TRIGGERS,
	A0RPI_ROADSTOP_CALLBACK_MASK,
	A0RPI_ROADSTOP_GENERAL_FLAGS,
	A0RPI_ROADSTOP_MIN_BRIDGE_HEIGHT,
	A0RPI_ROADSTOP_DISALLOWED_BRIDGE_PILLARS,
	A0RPI_ROADSTOP_COST_MULTIPLIERS,
	A0RPI_NEWLANDSCAPE_ENABLE_RECOLOUR,
};


enum Action2VariableRemapIds {
	A2VRI_OBJECT_FOUNDATION_SLOPE = 0x100,
	A2VRI_OBJECT_FOUNDATION_SLOPE_CHANGE,
	A2VRI_VEHICLE_CURRENT_SPEED_SCALED,
	A2VRI_RAILTYPE_SIGNAL_RESTRICTION_INFO,
	A2VRI_RAILTYPE_SIGNAL_CONTEXT,
	A2VRI_SIGNALS_SIGNAL_RESTRICTION_INFO,
	A2VRI_SIGNALS_SIGNAL_CONTEXT,
	A2VRI_SIGNALS_SIGNAL_STYLE,
};

/** Action14 feature definition */
struct GRFFeatureInfo {
	const char *name; // nullptr indicates the end of the list
	uint16 version;

	/** Create empty object used to identify the end of a list. */
	GRFFeatureInfo() :
		name(nullptr),
		version(0)
	{}

	GRFFeatureInfo(const char *name, uint16 version) :
		name(name),
		version(version)
	{}
};

#endif
