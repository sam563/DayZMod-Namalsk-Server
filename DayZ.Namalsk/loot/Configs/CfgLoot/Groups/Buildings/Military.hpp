Military[] =
{
	//Pistols
	{Loot_WEAPON,		3,		Makarov_DZ},
	{Loot_WEAPON,		2,		M1911_DZ},
//Mill Special -	{Loot_WEAPON,		1,		M9_DZ},
	{Loot_WEAPON,		1,		G17_DZ},
	
	//Submachineguns
	{Loot_WEAPON,		1,		PDW_DZ},
	{Loot_WEAPON,		3,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	
	//Assault rifles
	{Loot_WEAPON,		2,		M16A2_DZ},
	//{Loot_WEAPON,		1,		M16A2_GL_DZ}, //added to attachments system
//Mill Special -	{Loot_WEAPON,		1.5,	M16A4_DZ},
//Mill Special -	{Loot_WEAPON,		0.5,	M4A1_DZ},
//	{Loot_WEAPON,		3,		G36C_DZ},
	{Loot_WEAPON,		3,		AK74_DZ},
//Mill Special -	{Loot_WEAPON,		3,		AKS74U_DZ},
	{Loot_WEAPON,		1,		AKM_DZ},
//Mill Special -	{Loot_WEAPON,		1,		SA58_DZ},
	{Loot_WEAPON,       1,    VSS_vintorez_DZN},
	//Shotguns
	{Loot_WEAPON,		2,		Remington870_DZ},
//Mill Special -	{Loot_WEAPON,		0.5,		M1014_DZ},
	
	//Tools
	{Loot_TOOL,			3,		Binocular},
	{Loot_TOOL,			4,		ItemFlashlightRed},
	{Loot_TOOL,			4,		ItemKnife},
	{Loot_TOOL,			0.5,	ItemGPS},
	{Loot_TOOL,			3,		ItemMap},
	{Loot_TOOL,			3,		ItemEtool},
	
	//Backpacks
	{Loot_BACKPACK,		4,		DZ_BP_Survival},
	{Loot_BACKPACK,		2,		DZ_BP_Alice},
	{Loot_BACKPACK,		1,		DZ_BP_British},
	
	//Clothing
	{Loot_MAGAZINE,		1,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		0.75,	Skin_Soldier1_DZ},
	{Loot_MAGAZINE,		0.75,	Skin_CamoWinterW_DZN},
	{Loot_MAGAZINE,		0.75,	Skin_CamoWinter_DZN},
	
	//Containers
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxRU1, 6, 12},
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 4, 10},
	
	//Other
	{Loot_MAGAZINE,		5,		FoodMRE},
	{Loot_MAGAZINE,		5,		ItemSandbag},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 3},
	{Loot_GROUP,		4,		AmmoMilitaryHigh},
	{Loot_GROUP,		4,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			15,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2},
	{Loot_GROUP,		10,		Generic}
};

MilitarySpecial[] =
{
	//Pistols
	{Loot_WEAPON,		1,		Makarov_DZ},
	{Loot_WEAPON,		1,		M1911_DZ},
	{Loot_WEAPON,		2,		M9_DZ},
	{Loot_WEAPON,		2,		G17_DZ},
	
	//Submachineguns
	{Loot_WEAPON,		2,		PDW_DZ},
	{Loot_WEAPON,		3,		Bizon_DZ},
	{Loot_WEAPON,		2,		MP5_DZ},
	
	//Assault rifles
	{Loot_WEAPON,		3,		M16A2_DZ},
	//{Loot_WEAPON,		2,		M16A2_GL_DZ},  //added to attachments system
	{Loot_WEAPON,		2,		M16A4_DZ},
	{Loot_WEAPON,		1,		M4A1_DZ},
	{Loot_WEAPON,		2.5,	G36C_DZ},
	{Loot_WEAPON,		2,		AK74_DZ},
	{Loot_WEAPON,		2,		AKS74U_DZ},
	{Loot_WEAPON,		2,		AKS_GOLD_DZN},
	{Loot_WEAPON,		2,		AKM_DZ},
	{Loot_WEAPON,		2,		SA58_DZ},
	{Loot_WEAPON,		1,		SA58_RIS_DZ},
	{Loot_WEAPON,		0.5,	M24_DZ},
	
	//Shotguns
	{Loot_WEAPON,		2,		Remington870_DZ},
	{Loot_WEAPON,		1,		M1014_DZ},
	
	//Machine guns
	{Loot_WEAPON,		1,		RPK74_DZ},
	{Loot_WEAPON,		0.5,	UK59_DZ},
//	{Loot_WEAPON,		0.5,	PKM_DZ},
	{Loot_WEAPON,		0.5,	M249_DZ},
	
//Sniper Rifles
	{Loot_WEAPON,		0.3,	SVD_DZ},
	{Loot_WEAPON,		0.1,	L115A3_DZ},
	{Loot_WEAPON,       0.2,    DMR_DZ},
	{Loot_WEAPON,       1,    VSS_vintorez_DZN},
	
//Moved from Crashsites, Move to categories later
	{Loot_WEAPON,        0.17,    RPK_DZ},
    //{Loot_WEAPON,        0.17,    PKM_DZ},
    {Loot_WEAPON,        0.25,    M40A3_DZ},
    {Loot_WEAPON,        0.17,    FNFAL_DZ},
    //{Loot_WEAPON,        0.17,    Mk48_DZ},
    {Loot_WEAPON,        0.25,    M14_DZ},
    {Loot_WEAPON,        0.12,    DMR_DZ},
    {Loot_WEAPON,        0.25,    M24_DZ},
    {Loot_WEAPON,        1.25,    G36C_DZ},
    {Loot_WEAPON,        1.25,    L85A2_DZ},
    {Loot_WEAPON,        0.37,    G36K_Camo_DZ},
    {Loot_WEAPON,        0.62,    G36A_Camo_DZ},
    //{Loot_WEAPON,        0.12,    FNFAL_ANPVS4_DZ},
    //{Loot_WEAPON,        0.17,    M240_DZ},
    {Loot_WEAPON,        0.22,    L110A1_DZ},
	
	//Tools
	{Loot_TOOL,			4,		Binocular},
	{Loot_TOOL,			3,		ItemFlashlightRed},
	{Loot_TOOL,			5,		ItemKnife},
	{Loot_TOOL,			1.3,	ItemGPS},
	{Loot_TOOL,			4,		ItemMap},
	{Loot_TOOL,			2,		ItemEtool},
	{Loot_TOOL,			0.5,	Binocular_Vector},
	{Loot_MAGAZINE,		0.1,	PipeBomb},
	
	//Backpacks
	{Loot_BACKPACK,		3,		DZ_BP_Alice},
	{Loot_BACKPACK,		2,		DZ_BP_British},
	{Loot_BACKPACK,		1,		DZ_BP_Czech},
	{Loot_BACKPACK,		0.5,	DZ_BP_Coyote},
	
	//Clothing
	{Loot_MAGAZINE,		2,		Skin_Camo1_DZ},
	{Loot_MAGAZINE,		2,	Skin_CamoWinterW_DZN},
	{Loot_MAGAZINE,		2,	Skin_CamoWinter_DZN},
	{Loot_MAGAZINE,		1.5,	Skin_Soldier1_DZ},
	{Loot_MAGAZINE,		1,		Skin_Sniper1_DZ},
	{Loot_MAGAZINE,		1,		Skin_Sniper1W_DZN},
	
	//Containers
	{Loot_CONTAINER,	3,		DZ_AmmoBoxRU, AmmoBoxRU1, 10, 20},	//5.45x39
	{Loot_CONTAINER,	2,		DZ_AmmoBoxUS, AmmoBoxUS1, 7, 14},	//5.56x45
	{Loot_CONTAINER,	2,		DZ_AmmoBoxRU, AmmoBoxCZ1, 7, 14},	//7.62x39
	{Loot_CONTAINER,	1,		DZ_AmmoBoxRU, AmmoBoxCZ2, 2, 5},	//7.62x54R
//	{Loot_CONTAINER,	0.5,	DZ_AmmoBoxRU, AmmoBoxRU3, 3, 7},	//7.62x54R
	{Loot_CONTAINER,	0.5,	DZ_ExplosiveBoxRU, AmmoBoxRU4, 5, 15},	//GP-25
	{Loot_CONTAINER,	0.5,	DZ_ExplosiveBoxRU, AmmoBoxRU5, 3, 7},	//Grenades
	
	//Other
	{Loot_MAGAZINE,		3,		FoodMRE},
	{Loot_MAGAZINE,		2,		ItemSandbag},
	{Loot_TOOL,			0.5,	NVGoggles},
	{Loot_TOOL,			1,	APSI},
	{Loot_PILE,			15,		AmmoMilitaryLow, 1, 4},
	{Loot_PILE,			10,		AmmoMilitaryHigh, 1, 3},
	{Loot_GROUP,		2,		AttachmentsGeneric},
	{Loot_GROUP,		8,		AttachmentsEast},
	{Loot_GROUP,		6,		AttachmentsWest},
	{Loot_PILE,			10,		MedicalLow, 1, 2},
	{Loot_PILE,			10,		Trash, 1, 2},
	{Loot_PILE,			10,		Consumable, 1, 2},
	{Loot_GROUP,		8,		Generic}
};