#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/area_2/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_area_2_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _area_2_segment_7SegmentRomStart, _area_2_segment_7SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, area_2_area_1),
		WARP_NODE(4, LEVEL_CASTLE_GROUNDS, 1, 5, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -460, -2452, 1867, 90, 0, -180, (4 << 16), bhvAirborneWarp),
		OBJECT(MODEL_NONE, -461, -2453, 1732, 0, -180, 0, (4 << 16), bhvWarp),
		MARIO_POS(1, 0, -461, -2409, 1732),
		OBJECT(MODEL_TOAD, 626, -2337, -538, 0, 81, 0, (1 << 16), bhvToadMessage),
		TERRAIN(area_2_area_1_collision),
		MACRO_OBJECTS(area_2_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, -461, -2409, 1732),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
