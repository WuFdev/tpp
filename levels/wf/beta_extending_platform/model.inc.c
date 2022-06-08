const Vtx beta_extending_platform_dl_mesh_vtx_0[20] = {
	{{{375, -5, 204},0, {-578, 976},{0x0, 0x81, 0xFE, 0xFF}}},
	{{{-214, 0, -204},0, {1010, -16},{0x0, 0x81, 0xFE, 0xFF}}},
	{{{215, 0, -204},0, {-129, -16},{0x0, 0x81, 0xFE, 0xFF}}},
	{{{-375, -5, 204},0, {1506, 976},{0x0, 0x81, 0xFE, 0xFF}}},
	{{{-214, 102, -204},0, {-16, -16},{0x8A, 0x0, 0xD1, 0xFF}}},
	{{{-214, 0, -204},0, {-16, 462},{0x8A, 0x0, 0xD1, 0xFF}}},
	{{{-375, -5, 204},0, {1996, 462},{0x8A, 0x0, 0xD1, 0xFF}}},
	{{{-375, 107, 204},0, {1996, -16},{0x8A, 0x0, 0xD1, 0xFF}}},
	{{{-375, 107, 204},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-375, -5, 204},0, {-16, 462},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{375, -5, 204},0, {1996, 462},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{375, 107, 204},0, {1996, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{215, 102, -204},0, {1599, -16},{0x0, 0x7F, 0xFE, 0xFF}}},
	{{{-214, 102, -204},0, {423, -16},{0x0, 0x7F, 0xFE, 0xFF}}},
	{{{-375, 107, 204},0, {-68, 976},{0x0, 0x7F, 0xFE, 0xFF}}},
	{{{375, 107, 204},0, {2018, 976},{0x0, 0x7F, 0xFE, 0xFF}}},
	{{{375, 107, 204},0, {-16, -16},{0x76, 0x0, 0xD1, 0xFF}}},
	{{{215, 0, -204},0, {1996, 462},{0x76, 0x0, 0xD1, 0xFF}}},
	{{{215, 102, -204},0, {1996, -16},{0x76, 0x0, 0xD1, 0xFF}}},
	{{{375, -5, 204},0, {-16, 462},{0x76, 0x0, 0xD1, 0xFF}}},
};

const Gfx beta_extending_platform_dl_mesh_tri_0[] = {
	gsSPVertex(beta_extending_platform_dl_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beta_extending_platform_dl_mesh_vtx_0 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSPEndDisplayList(),
};

const Gfx beta_extending_platform_dl_mesh[] = {
	gsSPDisplayList(mat_mountain_TowerBrickMaterial),
	gsSPDisplayList(beta_extending_platform_dl_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};