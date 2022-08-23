void scroll_castle_grounds_dl_Circle_005_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 28;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Circle_005_mesh_layer_5_vtx_0);

	deltaX = (int)(0.5 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_castle_grounds_dl_Clouds_001() {
	static int intervalTex0 = 5;
	static int curInterval0 = 5;
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_Clouds_001);

	if (--curInterval0 <= 0) {
		shift_s(mat, 12, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}
};

void scroll_castle_grounds_dl_Plane_002_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 4;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Plane_002_mesh_layer_5_vtx_0);

	deltaX = (int)(0.25 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_castle_grounds_dl_water2() {
	static int intervalTex0 = 10;
	static int curInterval0 = 10;
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_water2);

	if (--curInterval0 <= 0) {
		shift_s(mat, 18, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}
};

void scroll_castle_grounds_dl_Plane_003_mesh_layer_5_vtx_2() {
	int i = 0;
	int count = 24;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Plane_003_mesh_layer_5_vtx_2);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_castle_grounds_dl_WF() {
	static int intervalTex0 = 10;
	static int curInterval0 = 10;
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_WF);

	if (--curInterval0 <= 0) {
		shift_s(mat, 18, PACK_TILESIZE(0, 1));
		curInterval0 = intervalTex0;
	}
};

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_Circle_005_mesh_layer_5_vtx_0();
	scroll_sts_mat_castle_grounds_dl_Clouds_001();
	scroll_castle_grounds_dl_Plane_002_mesh_layer_5_vtx_0();
	scroll_sts_mat_castle_grounds_dl_water2();
	scroll_castle_grounds_dl_Plane_003_mesh_layer_5_vtx_2();
	scroll_sts_mat_castle_grounds_dl_WF();
}
