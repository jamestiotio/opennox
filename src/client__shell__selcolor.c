#include "client__shell__selcolor.h"

#include "proto.h"
extern _DWORD dword_5d4594_1308136;
extern _DWORD dword_5d4594_1308104;
extern _DWORD dword_5d4594_1308096;
extern _DWORD dword_5d4594_1308112;
extern _DWORD dword_5d4594_1308148;
extern _DWORD dword_587000_171388;
extern _DWORD dword_5d4594_1308140;
extern _DWORD dword_5d4594_1308144;
extern _DWORD dword_5d4594_1308152;
extern _DWORD dword_5d4594_1308116;
extern _DWORD dword_5d4594_1308100;
extern _DWORD dword_5d4594_1308132;
extern _DWORD dword_5d4594_1308108;
extern _DWORD dword_5d4594_1308120;
extern _DWORD dword_5d4594_1308128;
extern _DWORD dword_5d4594_1308124;
extern nox_wnd_xxx* nox_wnd_xxx_1308092;
extern _DWORD dword_5d4594_1308088;
extern _DWORD dword_5d4594_1308084;
extern _DWORD dword_5d4594_1307784;

//----- (004A5D00) --------------------------------------------------------
int sub_4A5D00() {
	char* v0;    // eax
	int result;  // eax
	int i;       // esi
	_DWORD* v3;  // eax
	int j;       // esi
	_DWORD* v5;  // edi
	wchar_t* v6; // eax
	_DWORD* v7;  // eax

	sub_43BDD0(700);
	v0 = nox_xxx_getHostInfoPtr_431770();
	dword_5d4594_1307784 = v0;
	v0[67] = 0;
	result = nox_new_window_from_file("SelColor.wnd", sub_4A7330);
	dword_5d4594_1308084 = result;
	if (result) {
		nox_xxx_wndSetWindowProc_46B300(result, sub_4A18E0);
		result = nox_wnd_sub_43C5B0(*(_DWORD**)&dword_5d4594_1308084, 0, 0, 0, -440, 0, 20, 0, -40);
		nox_wnd_xxx_1308092 = result;
		if (result) {
			nox_wnd_xxx_1308092->field_0 = 700;
			nox_wnd_xxx_1308092->field_12 = sub_4A6890;
			nox_wnd_xxx_1308092->field_14 = sub_4A6C90;
			sub_4A5E90();
			for (i = 720; i <= 729; ++i) {
				v3 = nox_xxx_wndGetChildByID_46B0C0(*(_DWORD**)&dword_5d4594_1308084, i);
				nox_xxx_wndSetDrawFn_46B340((int)v3, sub_4A6D20);
			}
			for (j = 761; j <= 792; ++j) {
				v5 = nox_xxx_wndGetChildByID_46B0C0(*(_DWORD**)&dword_5d4594_1308084, j);
				nox_xxx_wndSetDrawFn_46B340((int)v5, sub_4A6D20);
			}
			if (dword_587000_171388) {
				v6 = nox_strman_loadString_40F1D0((char*)getMemAt(0x587000, 171448), 0,
										   "C:\\NoxPost\\src\\client\\shell\\SelColor.c", 1138);
				nox_window_call_field_94(*(int*)&dword_5d4594_1308152, 16414, (int)v6, 0);
			}
			nox_xxx_wndRetNULL_46A8A0();
			dword_5d4594_1308088 = nox_xxx_wndGetChildByID_46B0C0(*(_DWORD**)&dword_5d4594_1308084, 760);
			nox_xxx_wndSetProc_46B2C0(*(int*)&dword_5d4594_1308088, sub_4A7330);
			nox_xxx_wndSetWindowProc_46B300(*(int*)&dword_5d4594_1308088, sub_4A7270);
			sub_46B120(*(_DWORD**)&dword_5d4594_1308088, 0);
			sub_4BFAD0();
			v7 = nox_xxx_wndGetChildByID_46B0C0(*(_DWORD**)&dword_5d4594_1308084, 740);
			nox_xxx_wndSetDrawFn_46B340((int)v7, sub_4A6DC0);
			result = 1;
		}
	}
	return result;
}
//----- (004A68C0) --------------------------------------------------------
wchar_t* sub_4A68C0() {
	wchar_t* v0;          // esi
	wchar_t* v1;          // eax
	wchar_t* v2;          // eax
	unsigned __int8* v3;  // edx
	int v4;               // eax
	int v5;               // ecx
	int v6;               // eax
	unsigned __int8* v7;  // eax
	int v8;               // ecx
	int v9;               // ecx
	int v10;              // eax
	int v11;              // ecx
	unsigned __int8* v12; // eax
	int v13;              // ecx
	int v14;              // eax
	int v15;              // ecx
	unsigned __int8* v16; // eax
	int v17;              // edx
	int v18;              // eax
	int v19;              // ecx
	unsigned __int8* v20; // eax
	wchar_t* result;      // eax

	v0 = (wchar_t*)nox_window_call_field_94(*(int*)&dword_5d4594_1308152, 16413, 0, 0);
	if (!*v0) {
		v1 = nox_strman_loadString_40F1D0((char*)getMemAt(0x587000, 171552), 0, "C:\\NoxPost\\src\\client\\shell\\SelColor.c", 225);
		nox_wcscpy(v0, v1);
	}
	nox_wcscpy(*(wchar_t**)&dword_5d4594_1307784, v0);
	if (!sub_4A6B50(*(wchar_t**)&dword_5d4594_1307784)) {
		v2 = nox_strman_loadString_40F1D0((char*)getMemAt(0x587000, 171604), 0, "C:\\NoxPost\\src\\client\\shell\\SelColor.c", 232);
		nox_wcscpy(*(wchar_t**)&dword_5d4594_1307784, v2);
	}
	v3 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308096 + 32) >> 16) +
						   32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308096 + 32)) +
					  1307796);
	v4 = dword_5d4594_1307784 + 71;
	*(_WORD*)(dword_5d4594_1307784 + 71) = *(_WORD*)v3;
	*(_BYTE*)(v4 + 2) = v3[2];
	if (*(_BYTE*)(dword_5d4594_1308136 + 4) & 8) {
		v7 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308100 + 32) >> 16) +
							   32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308100 + 32)) +
						  1307796);
		v8 = dword_5d4594_1307784 + 68;
		*(_WORD*)(dword_5d4594_1307784 + 68) = *(_WORD*)v7;
		*(_BYTE*)(v8 + 2) = v7[2];
	} else {
		v5 = dword_5d4594_1307784 + 71;
		v6 = dword_5d4594_1307784 + 68;
		*(_WORD*)(dword_5d4594_1307784 + 68) = *(_WORD*)(dword_5d4594_1307784 + 71);
		*(_BYTE*)(v6 + 2) = *(_BYTE*)(v5 + 2);
	}
	if (*(_BYTE*)(dword_5d4594_1308140 + 4) & 8) {
		v11 = dword_5d4594_1307784 + 74;
		v12 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308104 + 32) >> 16) +
								32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308104 + 32)) +
						   1307796);
		*(_WORD*)(dword_5d4594_1307784 + 74) = *(_WORD*)v12;
		*(_BYTE*)(v11 + 2) = v12[2];
	} else {
		v9 = dword_5d4594_1307784 + 71;
		v10 = dword_5d4594_1307784 + 74;
		*(_WORD*)(dword_5d4594_1307784 + 74) = *(_WORD*)(dword_5d4594_1307784 + 71);
		*(_BYTE*)(v10 + 2) = *(_BYTE*)(v9 + 2);
	}
	if (*(_BYTE*)(dword_5d4594_1308144 + 4) & 8) {
		v15 = dword_5d4594_1307784 + 77;
		v16 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308108 + 32) >> 16) +
								32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308108 + 32)) +
						   1307796);
		*(_WORD*)(dword_5d4594_1307784 + 77) = *(_WORD*)v16;
		*(_BYTE*)(v15 + 2) = v16[2];
	} else {
		v13 = dword_5d4594_1307784 + 71;
		v14 = dword_5d4594_1307784 + 77;
		*(_WORD*)(dword_5d4594_1307784 + 77) = *(_WORD*)(dword_5d4594_1307784 + 71);
		*(_BYTE*)(v14 + 2) = *(_BYTE*)(v13 + 2);
	}
	if (*(_BYTE*)(dword_5d4594_1308148 + 4) & 8) {
		v19 = dword_5d4594_1307784 + 80;
		v20 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308112 + 32) >> 16) +
								32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308112 + 32)) +
						   1307796);
		*(_WORD*)(dword_5d4594_1307784 + 80) = *(_WORD*)v20;
		*(_BYTE*)(v19 + 2) = v20[2];
	} else {
		v17 = dword_5d4594_1307784 + 71;
		v18 = dword_5d4594_1307784 + 80;
		*(_WORD*)(dword_5d4594_1307784 + 80) = *(_WORD*)(dword_5d4594_1307784 + 71);
		*(_BYTE*)(v18 + 2) = *(_BYTE*)(v17 + 2);
	}
	*(_BYTE*)(dword_5d4594_1307784 + 83) = *(_DWORD*)(dword_5d4594_1308116 + 32) >> 16;
	*(_BYTE*)(dword_5d4594_1307784 + 84) = *(_DWORD*)(dword_5d4594_1308120 + 32) >> 16;
	*(_BYTE*)(dword_5d4594_1307784 + 85) = *(_DWORD*)(dword_5d4594_1308124 + 32) >> 16;
	*(_BYTE*)(dword_5d4594_1307784 + 86) = *(_DWORD*)(dword_5d4594_1308128 + 32) >> 16;
	result = *(wchar_t**)&dword_5d4594_1307784;
	*(_BYTE*)(dword_5d4594_1307784 + 87) = *(_DWORD*)(dword_5d4594_1308132 + 32) >> 16;
	return result;
}

//----- (004A75C0) --------------------------------------------------------
int sub_4A75C0() {
	wchar_t* v0;          // esi
	wchar_t* v1;          // eax
	wchar_t* v2;          // eax
	char v3;              // dl
	unsigned __int8* v4;  // edx
	__int16 v5;           // si
	__int16 v6;           // cx
	unsigned __int8 v7;   // dl
	int v8;               // ecx
	char v9;              // dl
	unsigned __int8* v10; // eax
	int v11;              // eax
	unsigned __int8* v12; // ecx
	char* v13;            // edi
	__int16 v14;          // dx
	unsigned __int8 v15;  // al
	char* v16;            // edi
	int v17;              // edx
	char* v18;            // edi
	int i;                // esi
	FILE* v20;            // eax
	char* v21;            // eax
	char v23;             // [esp+2h] [ebp-512h]
	char v24[16];         // [esp+4h] [ebp-510h]
	char v25[sizeof(nox_savegame_xxx)];       // [esp+14h] [ebp-500h]

	if (nox_common_gameFlags_check_40A5C0(2048))
		nox_savegame_rm_4DBE10("WORKING", 0);
	memset(v25, 0, 0x4FCu);
	*(_WORD*)&v25[1276] = 0;
	v0 = (wchar_t*)nox_window_call_field_94(*(int*)&dword_5d4594_1308152, 16413, 0, 0);
	if (!*v0) {
		v1 = nox_strman_loadString_40F1D0((char*)getMemAt(0x587000, 171700), 0, "C:\\NoxPost\\src\\client\\shell\\SelColor.c", 605);
		nox_wcscpy(v0, v1);
	}
	nox_wcscpy((wchar_t*)&v25[1224], v0);
	if (!sub_4A6B50((wchar_t*)&v25[1224])) {
		v2 = nox_strman_loadString_40F1D0((char*)getMemAt(0x587000, 171752), 0, "C:\\NoxPost\\src\\client\\shell\\SelColor.c", 612);
		nox_wcscpy((wchar_t*)&v25[1224], v2);
	}
	v3 = *(_BYTE*)(dword_5d4594_1307784 + 66);
	v25[1276] = 1;
	v25[1274] = v3;
	v4 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308096 + 32) >> 16) +
						   32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308096 + 32)) +
					  1307796);
	*(_WORD*)&v25[1204] = *(_WORD*)v4;
	v5 = *(_WORD*)v4;
	v25[1206] = v4[2];
	v23 = v4[2];
	if (*(_BYTE*)(dword_5d4594_1308136 + 4) & 8) {
		v8 = (*(_DWORD*)(dword_5d4594_1308100 + 32) >> 16) +
			 32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308100 + 32);
		*(_WORD*)&v25[1207] = *getMemU16Ptr(0x5D4594, 3 * v8 + 1307796);
		v7 = getMemByte(0x5D4594, 3 * v8 + 1307798);
	} else {
		v6 = *(_WORD*)v4;
		v7 = v4[2];
		*(_WORD*)&v25[1207] = v6;
	}
	v25[1209] = v7;
	if (*(_BYTE*)(dword_5d4594_1308140 + 4) & 8) {
		v10 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308104 + 32) >> 16) +
								32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308104 + 32)) +
						   1307796);
		*(_WORD*)&v25[1210] = *(_WORD*)v10;
		v25[1212] = v10[2];
		v9 = v23;
	} else {
		v9 = v23;
		*(_WORD*)&v25[1210] = v5;
		v25[1212] = v23;
	}
	if (*(_BYTE*)(dword_5d4594_1308144 + 4) & 8) {
		v11 = (*(_DWORD*)(dword_5d4594_1308108 + 32) >> 16) +
			  32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308108 + 32);
		*(_WORD*)&v25[1213] = *getMemU16Ptr(0x5D4594, 3 * v11 + 1307796);
		v25[1215] = getMemByte(0x5D4594, 3 * v11 + 1307798);
	} else {
		*(_WORD*)&v25[1213] = v5;
		v25[1215] = v9;
	}
	if (*(_BYTE*)(dword_5d4594_1308148 + 4) & 8) {
		v12 = getMemAt(0x5D4594, 3 * ((*(_DWORD*)(dword_5d4594_1308112 + 32) >> 16) +
								32 * (unsigned __int16)*(_DWORD*)(dword_5d4594_1308112 + 32)) +
						   1307796);
		*(_WORD*)&v25[1216] = *(_WORD*)v12;
		v25[1218] = v12[2];
	} else {
		*(_WORD*)&v25[1216] = v5;
		v25[1218] = v9;
	}
	v25[1219] = *(_DWORD*)(dword_5d4594_1308116 + 32) >> 16;
	v25[1220] = *(_DWORD*)(dword_5d4594_1308120 + 32) >> 16;
	v25[1221] = *(_DWORD*)(dword_5d4594_1308124 + 32) >> 16;
	v25[1222] = *(_DWORD*)(dword_5d4594_1308128 + 32) >> 16;
	v25[1223] = *(_DWORD*)(dword_5d4594_1308132 + 32) >> 16;
	v13 = nox_common_get_data_path_409E10();
	v14 = *getMemU16Ptr(0x587000, 171768);
	strcpy(&v25[4], v13);
	v15 = getMemByte(0x587000, 171770);
	v16 = &v25[strlen(&v25[4]) + 4];
	*(_DWORD*)v16 = *getMemU32Ptr(0x587000, 171764);
	*((_WORD*)v16 + 2) = v14;
	v16[6] = v15;
	if (nox_common_gameFlags_check_40A5C0(2048)) {
		v17 = *getMemU32Ptr(0x587000, 171776);
		v18 = &v25[strlen(&v25[4]) + 4];
		*(_DWORD*)v18 = *getMemU32Ptr(0x587000, 171772);
		*((_DWORD*)v18 + 1) = v17;
		*(_WORD*)&v25[strlen(&v25[4]) + 4] = *getMemU16Ptr(0x587000, 171780);
	}
	CreateDirectoryA(&v25[4], 0);
	SetCurrentDirectoryA(&v25[4]);
	i = 0;
	if (nox_common_gameFlags_check_40A5C0(2048)) {
		strcpy(v24, "Player.plr");
	} else {
		for (i = 0; i < 100; ++i) {
			nox_sprintf(v24, "%.6s%2.2d.plr", &v25[1224], i);
			v20 = fopen(v24, "rb");
			if (!v20)
				break;
			fclose(v20);
		}
	}
	v21 = nox_common_get_data_path_409E10();
	SetCurrentDirectoryA(v21);
	if (i > 99)
		return 0;
	strcat(&v25[4], v24);
	if (nox_common_gameFlags_check_40A5C0(2048)) {
		if (v25[1274] != 0) {
			if (v25[1274] == 1) {
				nox_xxx_gameSetMapPath_409D70("Wiz01a.map");
			} else if (v25[1274] == 2) {
				nox_xxx_gameSetMapPath_409D70("Con01a.map");
			}
		} else {
			nox_xxx_gameSetMapPath_409D70("War01a.map");
		}
	}
	return sub_41CEE0((int)v25, 1);
}