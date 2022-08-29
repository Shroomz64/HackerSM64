#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1109, 1354, -4383, 0, -5, 0, castle_grounds_dl_Telescope_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_Telescope_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4504, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_Blackpane_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4404, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_Blackpane2_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4304, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_Blackpane3_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4204, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_Blackpane4_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4104, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_Blackpane5_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 4004, -425, 3741, 0, 3, 90, castle_grounds_dl_zNight_BlackPane6_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 7656, -991, 3468, 90, 0, 90, castle_grounds_dl_zNight_Cat1_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 7494, -973, 2969, 90, 0, -123, castle_grounds_dl_zNight_Cat2_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 7505, -1044, 3248, castle_grounds_dl_zNight_Logs_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 432, 4158, 99, castle_grounds_dl_zNight_VIS_002_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_zNight_VIS_002_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1099, -70, -2607, castle_grounds_dl_zNight_VIS_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 516, -1360, 3522, castle_grounds_dl_zNight_Water_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 5175, 595, 3745, castle_grounds_dl_zNight_Waterfall_001_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 2742, 7617, 5859, 82, 64, -94, castle_grounds_dl_zyNight_PissingMario_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 3123, 6060, 6735, castle_grounds_dl_zzNight_Moon_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 3123, 6060, 6735, castle_grounds_dl_zzNight_moonglow_001_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 40117, -46420, -1529, 40117, -46520, -1529, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
