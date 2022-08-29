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

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(2, LEVEL_CASTLE_GROUNDS, 1, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_CASTLE, 1, 4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -284, -1925, 3674, 0, 0, 0, (2 << 16), bhvAirborneWarp),
		MARIO_POS(1, -180, -90, -3264, 3887),
		OBJECT(MODEL_NONE, 57, 0, -1924, 0, 0, 0, (1 << 16), bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 2578, -3430, -280, 0, 0, 0, (1 << 16), bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, 6599, -3123, -570, 0, -90, 0, (3 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 6442, -3102, -1052, 0, -59, 0, (3 << 16), bhvSignOnWall),
		OBJECT(MODEL_RED_FLAME, 6465, -3094, -783, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_NONE, 58, -2286, -6653, -90, 0, 0, (3 << 16), bhvWarp),
		OBJECT(MODEL_EXCLAMATION_POINT, 6594, -2893, -586, 0, 108, 0, 0x00000000, bhvRotatingCounterClockwise),
		OBJECT(MODEL_EXCLAMATION_POINT, 6461, -2885, -1035, 0, 110, 0, 0x00000000, bhvRotatingCounterClockwise),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_grounds_area_2),
		WARP_NODE(6, LEVEL_CASTLE, 1, 6, WARP_NO_CHECKPOINT),
		WARP_NODE(7, LEVEL_CASTLE, 1, 4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_TOAD, 1027, 1151, -4710, 0, -74, 0, (16 << 24), bhvToadMessage),
		OBJECT(MODEL_NONE, 3603, -1376, 3746, 0, 0, 0, (1 << 16), bhvWaterfallSoundLoop),
		OBJECT(MODEL_NONE, 7643, -1057, 3461, 0, -90, 0, (3 << 16), bhvSignOnWall),
		OBJECT(MODEL_NONE, 7484, -1036, 2976, 0, -57, 0, (3 << 16), bhvSignOnWall),
		OBJECT(MODEL_RED_FLAME, 7506, -1030, 3248, 0, 0, 0, (1 << 16), bhvFlame),
		OBJECT(MODEL_NONE, 1114, -225, -2391, -90, 0, 0, (6 << 16), bhvAirborneWarp),
		OBJECT(MODEL_NONE, 1104, -210, -2651, -90, 0, 0, (7 << 16), bhvWarp),
		OBJECT(MODEL_EXCLAMATION_POINT, 7647, -821, 3433, 0, 108, 0, 0x00000000, bhvRotatingCounterClockwise),
		OBJECT(MODEL_EXCLAMATION_POINT, 7514, -813, 2984, 0, 110, 0, 0x00000000, bhvRotatingCounterClockwise),
		TERRAIN(castle_grounds_area_2_collision),
		MACRO_OBJECTS(castle_grounds_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, -180, -90, -3264, 3887),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
