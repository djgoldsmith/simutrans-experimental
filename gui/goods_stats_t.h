/*
 * Copyright (c) 1997 - 2003 Hansj�rg Malthaner
 *
 * This file is part of the Simutrans project under the artistic licence.
 * (see licence.txt)
 */

#ifndef good_stats_t_h
#define good_stats_t_h

#include "../simtypes.h"
#include "components/gui_komponente.h"

class karte_t;


/**
 * Display information about each configured good
 * as a list like display
 * @author Hj. Malthaner
 */
class goods_stats_t : public gui_komponente_t
{
private:
	uint16 *goodslist;
	int bonus;
	uint8 comfort;
	uint8 catering_level;
	uint16 distance;
	karte_t *welt;
	waytype_t way_type;

	// The number of goods to be displayed. May be less than maximum number of goods possible,
	// if we are filtering to only the goods being produced by factories in the current game.
	int listed_goods;

public:
	goods_stats_t();

	// update list and resize
	void update_goodslist(uint16 *g, int bonus, int listed_goods, uint16 distance, uint8 comfort, uint8 catering, karte_t* welt, waytype_t waytype);

	/**
	* Zeichnet die Komponente
	* @author Hj. Malthaner
	*/
	void zeichnen(koord offset);
};

#endif
