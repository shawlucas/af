#include "ac_npc_majin5.h"
#include "m_lib.h"
#include "m_actor_dlftbls.h"
#include "m_object.h"
#include "overlays/gamestates/ovl_play/m_play.h"

void aNMJ5_actor_ct(Actor* thisx, Game_Play* game_play);
void aNMJ5_actor_dt(Actor* thisx, Game_Play* game_play);
void aNMJ5_actor_init(Actor* thisx, Game_Play* game_play);
void aNMJ5_actor_save(Actor* thisx, Game_Play* game_play);

#if 0
ActorProfile Npc_Majin5_Profile = {
    /* */ ACTOR_NPC_MAJIN5,
    /* */ ACTOR_PART_NPC,
    /* */ 0,
    /* */ 0xD06B,
    /* */ GAMEPLAY_KEEP,
    /* */ sizeof(Npc_Majin5),
    /* */ aNMJ5_actor_ct,
    /* */ aNMJ5_actor_dt,
    /* */ aNMJ5_actor_init,
    /* */ (void*)none_proc1,
    /* */ aNMJ5_actor_save,
};
#endif

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/aNMJ5_actor_ct.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/aNMJ5_actor_save.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/aNMJ5_actor_dt.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/aNMJ5_actor_init.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACD34_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACDD0_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACE50_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACE60_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACED4_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACF1C_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACF5C_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AACFC8_jp.s")

#pragma GLOBAL_ASM("asm/jp/nonmatchings/overlays/actors/ovl_Npc_Majin5/ac_npc_majin5/func_80AAD010_jp.s")
