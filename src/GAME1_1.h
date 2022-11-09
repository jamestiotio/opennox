#ifndef NOX_PORT_GAME1_1
#define NOX_PORT_GAME1_1

#include "common__savegame.h"
#include "defs.h"
#include "common__system__team.h"

void* sub_421430();
void sub_418800(wchar_t* a1, wchar_t* a2, int a3);
int sub_418830(int a1, int a2);
char* sub_4189D0();
char* sub_418A10();
char* sub_418A40(wchar_t* a1);
char* sub_418A80(int a1);
int sub_418BC0(int a1);
int nox_xxx_teamCheckSmth_418C60(int a1);
uint32_t* sub_418C70(uint32_t* a1);
uint32_t* nox_xxx_objGetTeamByNetCode_418C80(int a1);
void nox_xxx_teamRenameMB_418CD0(wchar_t* a1, wchar_t* a2);
void sub_418D80(int a1);
uint32_t* sub_418E40(int a1, int a2);
void sub_418F20(nox_team_t* a1, int a2);
void nox_xxx_netChangeTeamID_419090(int a1, int a2);
int sub_4190F0(wchar_t* a1);
int nox_xxx_servObjectHasTeam_419130(int a1);
int nox_xxx_servCompareTeams_419150(int a1, int a2);
int nox_xxx_teamCompare2_419180(int a1, unsigned char a2);
void nox_xxx_netChangeTeamMb_419570(void* a1, int a2);
int sub_4196D0(int a1, int a2, int a3, int a4);
void sub_4197C0(wchar_t* a1, int a2);
void sub_4198A0(int a1, int a2, int a3);
char sub_419900(int a1, int a2, short a3);
char sub_419960(int a1, int a2, short a3);
double sub_419A10(float a1);
unsigned int sub_419A30(float a1);
int nox_float2int(float a1);
short nox_float2int16(float a1);
short nox_float2int16_abs(float a1);
float nox_double2float(double a1);
int nox_double2int(double a1);
double nox_xxx_gamedataGetFloat_419D40(char* a1);
double nox_xxx_gamedataGetFloatTable_419D70(char* a1, int a2);
int sub_419E10(int a1, int a2);
int sub_419E60(nox_object_t* a1);
int sub_419EA0();
void sub_419EB0(int a1, int a2);
int sub_41A000(char* a1, nox_savegame_xxx* sv);
int nox_xxx_playerSaveToFile_41A140(char* a1, int a2);
int nox_xxx_mapSavePlayerDataMB_41A230(char* a1);
char* nox_xxx_cliPlrInfoLoadFromFile_41A2E0(char* a1, int a2);
int nox_xxx_plrLoad_41A480(char* a1);
int sub_41A590(int a1, int a2);
char* sub_41AA30(int a1);
int sub_41AC30(uint32_t* a1);
int sub_41B3B0();
int sub_41B3E0(int a1);
int nox_xxx_guiFieldbook_41B420(int a1);
int nox_xxx_guiSpellbook_41B660(int a1);
int nox_xxx_guiEnchantment_41B9C0(uint32_t* a1);
int sub_41BEC0(int a1);
int sub_41C080(int a1);
int sub_41C200();
int sub_41C280(void* a1);
int nox_xxx_parseFileInfoData_41C3B0(int a1);
int sub_41C780(int a1);
FILE* sub_41CAC0(char* a1, char** a2);
int sub_41CC00(char* a1);
int nox_xxx_computeServerPlayerDataBufferSize_41CC50(char* a1);
int nox_xxx_netSavePlayer_41CE00();
int sub_41CEE0(void* a1, int a2);
int sub_41D1A0(int a1);
int sub_41D1B0();
int sub_41D650();
int sub_41D670(char* a1);
int sub_41D6C0();
int sub_41DA10(int a1);
int sub_41DA70(int a1, short a2);
int sub_41E2F0();
int sub_41E300(int a1);
int sub_41E370();
int nox_xxx_reconAttempt_41E390();
void nox_xxx_reconStart_41E400();
int sub_41E470();
int sub_41E4B0(int a1);
int sub_41EC30();
int sub_41F4B0();
uint32_t* sub_41F790(const char* a1);
int sub_41F800(const char* a1);
char* sub_41FA40();
void sub_41FA50(const char* a1);
int sub_41FBE0(uint32_t* a1, uint32_t* a2);
int nox_xxx_officialStringCmp_41FDE0();
int sub_4200E0();
int sub_420100();
int sub_420230(char* a1, uint16_t* a2);
int sub_420360(char* a1, uint16_t* a2);
int sub_4207E0();
uint32_t* sub_420C40(int a1, int a2);
uint32_t* sub_420C70();
char* nox_xxx_polygon_420CA0();
char* nox_xxx_polygon_420CD0(uint32_t* a1);
int sub_420D10();
unsigned int* nox_xxx_polygonSetAngle_420D40(int a1, int a2, unsigned int a3, int a4);
unsigned int* sub_420DA0(float a1, float a2);
int sub_420E80(float a1, float a2, float a3);
char* sub_421010();
char* nox_xxx_polygonGetAngle_421030(int a1);
void sub_421040(int a1);
char* nox_xxx_polygonGetNext_4210A0();
char* sub_4210E0(int a1);
int sub_421130();
int sub_421160(int a1);
int sub_4211D0(int a1);
unsigned char* sub_421230();
char* nox_xxx_polygonGetByIdx_4214A0(int a1);
void sub_4214D0();
int nox_xxx_polygon_421660(int* a1, int a2);
int nox_xxx_polygonGetIdxA_421790(int2* a1, int a2);
nox_player_polygon_check_data* nox_xxx_polygonIsPlayerInPolygon_4217B0(int2* a1, int a2);
int sub_421880(int a1, int a2, float a3);
int* sub_421990(int2* a1, float a2, int a3);
uint32_t* sub_421B10();
int sub_421B40(uint32_t* a1);
void nox_xxx_polygonDrawColor_421B80();
void nox_xxx_questCheckSecretArea_421C70(nox_object_t* a1);
unsigned char* sub_421F10(int* a1, int a2);
void nox_xxx_monsterPolygonEnter_421FF0(nox_object_t* a1);
int sub_422140(int a1);
int* nox_xxx_tileListAddNewSubtile_422160(int a1, int a2, int a3, int a4);
int nox_xxx_tileFreeTileOne_4221E0(int a1);
int nox_xxx_tileFreeTile_422200(int a1);
int nox_server_mapRWFloorMap_422230(int a1);
unsigned char nox_xxx_tileReadOne_422A40(int a1, uint8_t* a2);
int nox_xxx_tile_422C10(int a1, int a2);
int nox_xxx_effectFloatValueLoad_4235C0(const char* a1, char* a2, obj_412ae0_t* a3);
int nox_xxx_effectLoadFloatParam_4235F0(const char* a1, float a2, obj_412ae0_t* a3);
double nox_xxx_effectLoadFloat_423730_parse_float();
int nox_xxx_effectDwordValueLoad_423780(const char* a1, char* a2, obj_412ae0_t* a3);
int nox_xxx_effectLoadDwordParam_4237B0(const char* a1, int a2, obj_412ae0_t* a3);
int nox_xxx_effectLoadDword_4238F0_parse_int();
int set_one_bitmask_flag_by_name_4239C0(char* name, uint32_t* bitmask, const char** allowed_names);
void set_bitmask_flags_from_plus_separated_names_multiple_423A10(const char* input, uint32_t* bitmask);
int nox_parse_shape(nox_shape* s, char* buf);
int sub_4240F0(int a1, const char* a2, int a3);
int nox_xxx_parseSoundSetBin_424170(char* a1);
void* nox_xxx_monsterGetSoundSet_424300(nox_object_t* a1);
int nox_xxx_setNPCVoiceSet_424320(int a1, int a2);
const char** nox_xxx_getDefaultSoundSet_424350(const char* a1);
void* nox_xxx_updateSpellRelated_424830(void* a1, int a2);
int nox_xxx_enchantByName_424880(char* a1);
char* nox_xxx_getEnchantName_4248F0(int a1);
int nox_xxx_getEnchantSpell_424920(int a1);
char sub_424CB0(int a1);
int sub_424D00();
int sub_424D20(int a1);
int nox_xxx_abilityNameToN_424D80(const char* a1);
char* nox_xxx_abilityGetName_425250(int a1);
wchar_t* nox_xxx_abilityGetName_0_425260(int a1);
int nox_xxx_abilityCooldown_4252D0(int a1);
wchar_t* sub_4252F0(int a1);
nox_video_bag_image_t* nox_xxx_spellGetAbilityIcon_425310(int a1, int a2);
int nox_xxx_bookFirstKnownAbil_425330();
int nox_xxx_bookNextKnownAbil_425350(int a1);
int sub_425450(int a1);
int sub_4254A0(int a1, uint8_t* a2);
bool sub_4254C0(unsigned char** a1);
uint8_t* sub_425500(int a1, uint8_t* a2, char a3);
char sub_425520(int a1, char a2);
int sub_425550(uint8_t* a1, uint8_t* a2, int a3);
void nox_common_list_clear_425760(nox_list_item_t* list);
void* sub_425770(void* a1);
int sub_425790(int* a1, uint32_t* a2);
void sub_4257F0(int* a1, uint32_t* a2);
nox_list_item_t* nox_common_list_getFirstSafe_425890(nox_list_item_t* list);
nox_list_item_t* nox_common_list_getNextSafe_4258A0(nox_list_item_t* list);
uint32_t* sub_4258C0(uint32_t** a1, int a2);
void nox_common_list_append_4258E0(nox_list_item_t* list, nox_list_item_t* cur);
uint32_t* sub_425900(uint32_t* a1, uint32_t* a2);
void nox_common_list_remove_425920(void* a1);
nox_list_item_t* nox_common_list_getNext_425940(nox_list_item_t* list);
int sub_425960(int a1);
void sub_4259C0();
int* sub_4259F0();
int* sub_425A50();
int* sub_425A60(int* a1);
int* sub_425A70(int a1);
int sub_425AA0(int a1);
wchar_t* sub_425AD0(int a1, wchar_t* a2);
void sub_425B30(void* a1, int a2);
char* sub_425B60(void* lpMem, int a2);
int* sub_425BC0(int a1);
int* sub_425BE0(int* a1);
int nox_xxx_countObserverPlayers_425BF0();
char* sub_425CA0(int a1, int a2);
int sub_425E90(int a1, char a2);
int sub_425ED0(int a1, char a2);
void sub_425F10(nox_playerInfo* pl);
char* sub_426150();
char* nox_xxx_net_4263C0();
int sub_4264D0();
int nox_xxx_wallGet_426A30();
char* nox_xxx_mapGetWallSize_426A70();
void nox_xxx_mapWall_426A80(int* a1);
int nox_xxx_mapWriteSectionsMB_426E20(void* a1);
int nox_xxx_mapReadSection_426EA0(void* a1, char* name, uint32_t* a3);
int nox_xxx_guide_427010(const char* a1);
char* nox_xxx_guideNameByN_427230(int a1);
int nox_xxx_guiCreatureGetName_427240(int a1);
int nox_xxx_creatureIsCharmableByTT_4272B0(int a1);
int nox_xxx_guideGetDescById_4272E0(int a1);
int nox_xxx_bookGetFirstCreMB_427300();
int nox_xxx_bookGetNextCre_427320(int a1);
int nox_xxx_bookGetCreatureImg_427400(int a1);
int sub_427430(int a1);
unsigned char nox_xxx_guideGetUnitSize_427460(int a1);
nox_playerInfo_journal* nox_xxx_journalEntryAdd_427490(nox_playerInfo* a1, char* a2, short a3);
void nox_xxx_comJournalEntryAdd_427500(nox_object_t* a1, char* a2, short a3);
int nox_xxx_comAddEntryAll_427550(char* a1, short a2);
int nox_xxx_journalEntryRemove_427590(nox_playerInfo* a1p, const char* a2);
void nox_xxx_comJournalEntryRemove_427630(int a1, const char* a2);
int nox_xxx_comRemoveEntryAll_427680(const char* a1);
int nox_xxx_journalUpdateEntry_4276B0(nox_playerInfo* a1p, const char* a2, short a3);
int nox_xxx_comJournalEntryUpdate_427720(int a1, const char* a2, short a3);
int nox_xxx_comUpdateEntryAll_427770(const char* a1, short a2);
int sub_4277B0(nox_object_t* a1p, unsigned short a2);
int sub_4278B0(float* a1, float* a2, float* a3);
int sub_427980(float4* a1, float4* a2);
int sub_427C80(int4* a1, int4* a2);
int sub_427DF0(int a1, int* a2, float a3);

void set_bitmask_flags_from_plus_separated_names_423930(const char* input, uint32_t* bitmask,
														const char** allowed_names);

#endif // NOX_PORT_GAME1_1
