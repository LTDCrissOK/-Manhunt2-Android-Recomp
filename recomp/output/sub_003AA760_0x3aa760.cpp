#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AA760
// Address: 0x3aa760 - 0x3aa860
void sub_003AA760_0x3aa760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA760_0x3aa760");
#endif

    switch (ctx->pc) {
        case 0x3aa760u: goto label_3aa760;
        case 0x3aa764u: goto label_3aa764;
        case 0x3aa768u: goto label_3aa768;
        case 0x3aa76cu: goto label_3aa76c;
        case 0x3aa770u: goto label_3aa770;
        case 0x3aa774u: goto label_3aa774;
        case 0x3aa778u: goto label_3aa778;
        case 0x3aa77cu: goto label_3aa77c;
        case 0x3aa780u: goto label_3aa780;
        case 0x3aa784u: goto label_3aa784;
        case 0x3aa788u: goto label_3aa788;
        case 0x3aa78cu: goto label_3aa78c;
        case 0x3aa790u: goto label_3aa790;
        case 0x3aa794u: goto label_3aa794;
        case 0x3aa798u: goto label_3aa798;
        case 0x3aa79cu: goto label_3aa79c;
        case 0x3aa7a0u: goto label_3aa7a0;
        case 0x3aa7a4u: goto label_3aa7a4;
        case 0x3aa7a8u: goto label_3aa7a8;
        case 0x3aa7acu: goto label_3aa7ac;
        case 0x3aa7b0u: goto label_3aa7b0;
        case 0x3aa7b4u: goto label_3aa7b4;
        case 0x3aa7b8u: goto label_3aa7b8;
        case 0x3aa7bcu: goto label_3aa7bc;
        case 0x3aa7c0u: goto label_3aa7c0;
        case 0x3aa7c4u: goto label_3aa7c4;
        case 0x3aa7c8u: goto label_3aa7c8;
        case 0x3aa7ccu: goto label_3aa7cc;
        case 0x3aa7d0u: goto label_3aa7d0;
        case 0x3aa7d4u: goto label_3aa7d4;
        case 0x3aa7d8u: goto label_3aa7d8;
        case 0x3aa7dcu: goto label_3aa7dc;
        case 0x3aa7e0u: goto label_3aa7e0;
        case 0x3aa7e4u: goto label_3aa7e4;
        case 0x3aa7e8u: goto label_3aa7e8;
        case 0x3aa7ecu: goto label_3aa7ec;
        case 0x3aa7f0u: goto label_3aa7f0;
        case 0x3aa7f4u: goto label_3aa7f4;
        case 0x3aa7f8u: goto label_3aa7f8;
        case 0x3aa7fcu: goto label_3aa7fc;
        case 0x3aa800u: goto label_3aa800;
        case 0x3aa804u: goto label_3aa804;
        case 0x3aa808u: goto label_3aa808;
        case 0x3aa80cu: goto label_3aa80c;
        case 0x3aa810u: goto label_3aa810;
        case 0x3aa814u: goto label_3aa814;
        case 0x3aa818u: goto label_3aa818;
        case 0x3aa81cu: goto label_3aa81c;
        case 0x3aa820u: goto label_3aa820;
        case 0x3aa824u: goto label_3aa824;
        case 0x3aa828u: goto label_3aa828;
        case 0x3aa82cu: goto label_3aa82c;
        case 0x3aa830u: goto label_3aa830;
        case 0x3aa834u: goto label_3aa834;
        case 0x3aa838u: goto label_3aa838;
        case 0x3aa83cu: goto label_3aa83c;
        case 0x3aa840u: goto label_3aa840;
        case 0x3aa844u: goto label_3aa844;
        case 0x3aa848u: goto label_3aa848;
        case 0x3aa84cu: goto label_3aa84c;
        case 0x3aa850u: goto label_3aa850;
        case 0x3aa854u: goto label_3aa854;
        case 0x3aa858u: goto label_3aa858;
        case 0x3aa85cu: goto label_3aa85c;
        default: break;
    }

    ctx->pc = 0x3aa760u;

label_3aa760:
    // 0x3aa760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aa764:
    // 0x3aa764: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3aa764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa768:
    // 0x3aa768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aa768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3aa76c:
    // 0x3aa76c: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
label_3aa770:
    if (ctx->pc == 0x3AA770u) {
        ctx->pc = 0x3AA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA76Cu;
        // 0x3aa770: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA774u;
        goto label_3aa774;
    }
    ctx->pc = 0x3AA76Cu;
    {
        const bool branch_taken_0x3aa76c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA76Cu;
        // 0x3aa770: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa76c) {
            ctx->pc = 0x3AA790u;
            goto label_3aa790;
        }
    }
    ctx->pc = 0x3AA774u;
label_3aa774:
    // 0x3aa774: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa778:
    // 0x3aa778: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa77c:
    // 0x3aa77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa780:
    // 0x3aa780: 0x2484ee80  addiu       $a0, $a0, -0x1180
    ctx->pc = 0x3aa780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962816));
label_3aa784:
    // 0x3aa784: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
label_3aa788:
    // 0x3aa788: 0x80ea7ec  j           func_3A9FB0
label_3aa78c:
    if (ctx->pc == 0x3AA78Cu) {
        ctx->pc = 0x3AA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA788u;
        // 0x3aa78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA790u;
        goto label_3aa790;
    }
    ctx->pc = 0x3AA788u;
    ctx->pc = 0x3AA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA788u;
    // 0x3aa78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA790u;
label_3aa790:
    // 0x3aa790: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3aa790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3aa794:
    // 0x3aa794: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3aa798:
    if (ctx->pc == 0x3AA798u) {
        ctx->pc = 0x3AA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA794u;
        // 0x3aa798: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA79Cu;
        goto label_3aa79c;
    }
    ctx->pc = 0x3AA794u;
    {
        const bool branch_taken_0x3aa794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa794) {
            ctx->pc = 0x3AA798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA794u;
            // 0x3aa798: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA7B8u;
            goto label_3aa7b8;
        }
    }
    ctx->pc = 0x3AA79Cu;
label_3aa79c:
    // 0x3aa79c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa7a0:
    // 0x3aa7a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa7a4:
    // 0x3aa7a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa7a8:
    // 0x3aa7a8: 0x2484ee90  addiu       $a0, $a0, -0x1170
    ctx->pc = 0x3aa7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962832));
label_3aa7ac:
    // 0x3aa7ac: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_3aa7b0:
    // 0x3aa7b0: 0x80ea7ec  j           func_3A9FB0
label_3aa7b4:
    if (ctx->pc == 0x3AA7B4u) {
        ctx->pc = 0x3AA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7B0u;
        // 0x3aa7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7B8u;
        goto label_3aa7b8;
    }
    ctx->pc = 0x3AA7B0u;
    ctx->pc = 0x3AA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA7B0u;
    // 0x3aa7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA7B8u;
label_3aa7b8:
    // 0x3aa7b8: 0x18c00026  blez        $a2, . + 4 + (0x26 << 2)
label_3aa7bc:
    if (ctx->pc == 0x3AA7BCu) {
        ctx->pc = 0x3AA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7B8u;
        // 0x3aa7bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7C0u;
        goto label_3aa7c0;
    }
    ctx->pc = 0x3AA7B8u;
    {
        const bool branch_taken_0x3aa7b8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3AA7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7B8u;
        // 0x3aa7bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7b8) {
            ctx->pc = 0x3AA854u;
            goto label_3aa854;
        }
    }
    ctx->pc = 0x3AA7C0u;
label_3aa7c0:
    // 0x3aa7c0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x3aa7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3aa7c4:
    // 0x3aa7c4: 0x11200023  beqz        $t1, . + 4 + (0x23 << 2)
label_3aa7c8:
    if (ctx->pc == 0x3AA7C8u) {
        ctx->pc = 0x3AA7CCu;
        goto label_3aa7cc;
    }
    ctx->pc = 0x3AA7C4u;
    {
        const bool branch_taken_0x3aa7c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa7c4) {
            ctx->pc = 0x3AA854u;
            goto label_3aa854;
        }
    }
    ctx->pc = 0x3AA7CCu;
label_3aa7cc:
    // 0x3aa7cc: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_3aa7d0:
    if (ctx->pc == 0x3AA7D0u) {
        ctx->pc = 0x3AA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7CCu;
        // 0x3aa7d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7D4u;
        goto label_3aa7d4;
    }
    ctx->pc = 0x3AA7CCu;
    {
        const bool branch_taken_0x3aa7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7CCu;
        // 0x3aa7d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa7cc) {
            ctx->pc = 0x3AA818u;
            goto label_3aa818;
        }
    }
    ctx->pc = 0x3AA7D4u;
label_3aa7d4:
    // 0x3aa7d4: 0x54a20018  bnel        $a1, $v0, . + 4 + (0x18 << 2)
label_3aa7d8:
    if (ctx->pc == 0x3AA7D8u) {
        ctx->pc = 0x3AA7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA7D4u;
        // 0x3aa7d8: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA7DCu;
        goto label_3aa7dc;
    }
    ctx->pc = 0x3AA7D4u;
    {
        const bool branch_taken_0x3aa7d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aa7d4) {
            ctx->pc = 0x3AA7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA7D4u;
            // 0x3aa7d8: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA838u;
            goto label_3aa838;
        }
    }
    ctx->pc = 0x3AA7DCu;
label_3aa7dc:
    // 0x3aa7dc: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x3aa7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3aa7e0:
    // 0x3aa7e0: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x3aa7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3aa7e4:
    // 0x3aa7e4: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3aa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3aa7e8:
    // 0x3aa7e8: 0x8d060014  lw          $a2, 0x14($t0)
    ctx->pc = 0x3aa7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3aa7ec:
    // 0x3aa7ec: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x3aa7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
label_3aa7f0:
    // 0x3aa7f0: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x3aa7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_3aa7f4:
    // 0x3aa7f4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x3aa7f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3aa7f8:
    // 0x3aa7f8: 0x1263023  subu        $a2, $t1, $a2
    ctx->pc = 0x3aa7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_3aa7fc:
    // 0x3aa7fc: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x3aa7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
label_3aa800:
    // 0x3aa800: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3aa800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3aa804:
    // 0x3aa804: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3aa804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3aa808:
    // 0x3aa808: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3aa808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3aa80c:
    // 0x3aa80c: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x3aa80cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_3aa810:
    // 0x3aa810: 0x10860010  beq         $a0, $a2, . + 4 + (0x10 << 2)
label_3aa814:
    if (ctx->pc == 0x3AA814u) {
        ctx->pc = 0x3AA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA810u;
        // 0x3aa814: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA818u;
        goto label_3aa818;
    }
    ctx->pc = 0x3AA810u;
    {
        const bool branch_taken_0x3aa810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x3AA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA810u;
        // 0x3aa814: 0xad05000c  sw          $a1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa810) {
            ctx->pc = 0x3AA854u;
            goto label_3aa854;
        }
    }
    ctx->pc = 0x3AA818u;
label_3aa818:
    // 0x3aa818: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x3aa818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3aa81c:
    // 0x3aa81c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3aa820:
    if (ctx->pc == 0x3AA820u) {
        ctx->pc = 0x3AA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA81Cu;
        // 0x3aa820: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA824u;
        goto label_3aa824;
    }
    ctx->pc = 0x3AA81Cu;
    {
        const bool branch_taken_0x3aa81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa81c) {
            ctx->pc = 0x3AA820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA81Cu;
            // 0x3aa820: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA854u;
            goto label_3aa854;
        }
    }
    ctx->pc = 0x3AA824u;
label_3aa824:
    // 0x3aa824: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3aa824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3aa828:
    // 0x3aa828: 0x40f809  jalr        $v0
label_3aa82c:
    if (ctx->pc == 0x3AA82Cu) {
        ctx->pc = 0x3AA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA828u;
        // 0x3aa82c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA830u;
        goto label_3aa830;
    }
    ctx->pc = 0x3AA828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA830u);
        ctx->pc = 0x3AA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA828u;
        // 0x3aa82c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA828u, 0x3AA830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA830u;
label_3aa830:
    // 0x3aa830: 0x10000008  b           . + 4 + (0x8 << 2)
label_3aa834:
    if (ctx->pc == 0x3AA834u) {
        ctx->pc = 0x3AA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA830u;
        // 0x3aa834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA838u;
        goto label_3aa838;
    }
    ctx->pc = 0x3AA830u;
    {
        const bool branch_taken_0x3aa830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA830u;
        // 0x3aa834: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa830) {
            ctx->pc = 0x3AA854u;
            goto label_3aa854;
        }
    }
    ctx->pc = 0x3AA838u;
label_3aa838:
    // 0x3aa838: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3aa838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3aa83c:
    // 0x3aa83c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3aa840:
    if (ctx->pc == 0x3AA840u) {
        ctx->pc = 0x3AA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA83Cu;
        // 0x3aa840: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA844u;
        goto label_3aa844;
    }
    ctx->pc = 0x3AA83Cu;
    {
        const bool branch_taken_0x3aa83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA83Cu;
        // 0x3aa840: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa83c) {
            ctx->pc = 0x3AA850u;
            goto label_3aa850;
        }
    }
    ctx->pc = 0x3AA844u;
label_3aa844:
    // 0x3aa844: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3aa844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3aa848:
    // 0x3aa848: 0x40f809  jalr        $v0
label_3aa84c:
    if (ctx->pc == 0x3AA84Cu) {
        ctx->pc = 0x3AA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA848u;
        // 0x3aa84c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA850u;
        goto label_3aa850;
    }
    ctx->pc = 0x3AA848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA850u);
        ctx->pc = 0x3AA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA848u;
        // 0x3aa84c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA848u, 0x3AA850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA850u;
label_3aa850:
    // 0x3aa850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa854:
    // 0x3aa854: 0x3e00008  jr          $ra
label_3aa858:
    if (ctx->pc == 0x3AA858u) {
        ctx->pc = 0x3AA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA854u;
        // 0x3aa858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA85Cu;
        goto label_3aa85c;
    }
    ctx->pc = 0x3AA854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA854u;
        // 0x3aa858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA85Cu;
label_3aa85c:
    // 0x3aa85c: 0x0  nop
    ctx->pc = 0x3aa85cu;
    // NOP
    ctx->pc = 0x3aa860u;
}
