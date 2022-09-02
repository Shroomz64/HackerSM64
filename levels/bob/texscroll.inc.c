void scroll_bob_dl_Cube_003_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 32;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Cube_003_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_bob_dl_f3d_material_004() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_f3d_material_004);
	shift_s_down(mat, 18, PACK_TILESIZE(0, 1));
};

void scroll_bob() {
	scroll_bob_dl_Cube_003_mesh_layer_5_vtx_0();
	scroll_sts_mat_bob_dl_f3d_material_004();
}
