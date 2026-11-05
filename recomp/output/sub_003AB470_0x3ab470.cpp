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

// Function: sub_003AB470
// Address: 0x3ab470 - 0x3ab568
void sub_003AB470_0x3ab470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB470_0x3ab470");
#endif

    switch (ctx->pc) {
        case 0x3ab470u: goto label_3ab470;
        case 0x3ab474u: goto label_3ab474;
        case 0x3ab478u: goto label_3ab478;
        case 0x3ab47cu: goto label_3ab47c;
        case 0x3ab480u: goto label_3ab480;
        case 0x3ab484u: goto label_3ab484;
        case 0x3ab488u: goto label_3ab488;
        case 0x3ab48cu: goto label_3ab48c;
        case 0x3ab490u: goto label_3ab490;
        case 0x3ab494u: goto label_3ab494;
        case 0x3ab498u: goto label_3ab498;
        case 0x3ab49cu: goto label_3ab49c;
        case 0x3ab4a0u: goto label_3ab4a0;
        case 0x3ab4a4u: goto label_3ab4a4;
        case 0x3ab4a8u: goto label_3ab4a8;
        case 0x3ab4acu: goto label_3ab4ac;
        case 0x3ab4b0u: goto label_3ab4b0;
        case 0x3ab4b4u: goto label_3ab4b4;
        case 0x3ab4b8u: goto label_3ab4b8;
        case 0x3ab4bcu: goto label_3ab4bc;
        case 0x3ab4c0u: goto label_3ab4c0;
        case 0x3ab4c4u: goto label_3ab4c4;
        case 0x3ab4c8u: goto label_3ab4c8;
        case 0x3ab4ccu: goto label_3ab4cc;
        case 0x3ab4d0u: goto label_3ab4d0;
        case 0x3ab4d4u: goto label_3ab4d4;
        case 0x3ab4d8u: goto label_3ab4d8;
        case 0x3ab4dcu: goto label_3ab4dc;
        case 0x3ab4e0u: goto label_3ab4e0;
        case 0x3ab4e4u: goto label_3ab4e4;
        case 0x3ab4e8u: goto label_3ab4e8;
        case 0x3ab4ecu: goto label_3ab4ec;
        case 0x3ab4f0u: goto label_3ab4f0;
        case 0x3ab4f4u: goto label_3ab4f4;
        case 0x3ab4f8u: goto label_3ab4f8;
        case 0x3ab4fcu: goto label_3ab4fc;
        case 0x3ab500u: goto label_3ab500;
        case 0x3ab504u: goto label_3ab504;
        case 0x3ab508u: goto label_3ab508;
        case 0x3ab50cu: goto label_3ab50c;
        case 0x3ab510u: goto label_3ab510;
        case 0x3ab514u: goto label_3ab514;
        case 0x3ab518u: goto label_3ab518;
        case 0x3ab51cu: goto label_3ab51c;
        case 0x3ab520u: goto label_3ab520;
        case 0x3ab524u: goto label_3ab524;
        case 0x3ab528u: goto label_3ab528;
        case 0x3ab52cu: goto label_3ab52c;
        case 0x3ab530u: goto label_3ab530;
        case 0x3ab534u: goto label_3ab534;
        case 0x3ab538u: goto label_3ab538;
        case 0x3ab53cu: goto label_3ab53c;
        case 0x3ab540u: goto label_3ab540;
        case 0x3ab544u: goto label_3ab544;
        case 0x3ab548u: goto label_3ab548;
        case 0x3ab54cu: goto label_3ab54c;
        case 0x3ab550u: goto label_3ab550;
        case 0x3ab554u: goto label_3ab554;
        case 0x3ab558u: goto label_3ab558;
        case 0x3ab55cu: goto label_3ab55c;
        case 0x3ab560u: goto label_3ab560;
        case 0x3ab564u: goto label_3ab564;
        default: break;
    }

    ctx->pc = 0x3ab470u;

label_3ab470:
    // 0x3ab470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ab474:
    // 0x3ab474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ab478:
    // 0x3ab478: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ab478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ab47c:
    // 0x3ab47c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ab480:
    // 0x3ab480: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ab480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ab484:
    // 0x3ab484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ab488:
    // 0x3ab488: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3ab48c:
    if (ctx->pc == 0x3AB48Cu) {
        ctx->pc = 0x3AB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB488u;
        // 0x3ab48c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB490u;
        goto label_3ab490;
    }
    ctx->pc = 0x3AB488u;
    {
        const bool branch_taken_0x3ab488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB488u;
        // 0x3ab48c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab488) {
            ctx->pc = 0x3AB4A8u;
            goto label_3ab4a8;
        }
    }
    ctx->pc = 0x3AB490u;
label_3ab490:
    // 0x3ab490: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab494:
    // 0x3ab494: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab498:
    // 0x3ab498: 0x2484f048  addiu       $a0, $a0, -0xFB8
    ctx->pc = 0x3ab498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963272));
label_3ab49c:
    // 0x3ab49c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3ab4a0:
    if (ctx->pc == 0x3AB4A0u) {
        ctx->pc = 0x3AB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB49Cu;
        // 0x3ab4a0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4A4u;
        goto label_3ab4a4;
    }
    ctx->pc = 0x3AB49Cu;
    {
        const bool branch_taken_0x3ab49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB49Cu;
        // 0x3ab4a0: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab49c) {
            ctx->pc = 0x3AB4C4u;
            goto label_3ab4c4;
        }
    }
    ctx->pc = 0x3AB4A4u;
label_3ab4a4:
    // 0x3ab4a4: 0x0  nop
    ctx->pc = 0x3ab4a4u;
    // NOP
label_3ab4a8:
    // 0x3ab4a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ab4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ab4ac:
    // 0x3ab4ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3ab4b0:
    if (ctx->pc == 0x3AB4B0u) {
        ctx->pc = 0x3AB4B4u;
        goto label_3ab4b4;
    }
    ctx->pc = 0x3AB4ACu;
    {
        const bool branch_taken_0x3ab4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab4ac) {
            ctx->pc = 0x3AB4D8u;
            goto label_3ab4d8;
        }
    }
    ctx->pc = 0x3AB4B4u;
label_3ab4b4:
    // 0x3ab4b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ab4b8:
    // 0x3ab4b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3ab4bc:
    // 0x3ab4bc: 0x2484f058  addiu       $a0, $a0, -0xFA8
    ctx->pc = 0x3ab4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963288));
label_3ab4c0:
    // 0x3ab4c0: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3ab4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
label_3ab4c4:
    // 0x3ab4c4: 0xc0eaa6e  jal         func_3AA9B8
label_3ab4c8:
    if (ctx->pc == 0x3AB4C8u) {
        ctx->pc = 0x3AB4CCu;
        goto label_3ab4cc;
    }
    ctx->pc = 0x3AB4C4u;
    SET_GPR_U32(ctx, 31, 0x3AB4CCu);
    ctx->pc = 0x3AA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA9B8u, 0x3AB4C4u, 0x3AB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB4CCu;
label_3ab4cc:
    // 0x3ab4cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_3ab4d0:
    if (ctx->pc == 0x3AB4D0u) {
        ctx->pc = 0x3AB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4CCu;
        // 0x3ab4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4D4u;
        goto label_3ab4d4;
    }
    ctx->pc = 0x3AB4CCu;
    {
        const bool branch_taken_0x3ab4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4CCu;
        // 0x3ab4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4cc) {
            ctx->pc = 0x3AB550u;
            goto label_3ab550;
        }
    }
    ctx->pc = 0x3AB4D4u;
label_3ab4d4:
    // 0x3ab4d4: 0x0  nop
    ctx->pc = 0x3ab4d4u;
    // NOP
label_3ab4d8:
    // 0x3ab4d8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3ab4dc:
    if (ctx->pc == 0x3AB4DCu) {
        ctx->pc = 0x3AB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4D8u;
        // 0x3ab4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4E0u;
        goto label_3ab4e0;
    }
    ctx->pc = 0x3AB4D8u;
    {
        const bool branch_taken_0x3ab4d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4D8u;
        // 0x3ab4dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4d8) {
            ctx->pc = 0x3AB4F8u;
            goto label_3ab4f8;
        }
    }
    ctx->pc = 0x3AB4E0u;
label_3ab4e0:
    // 0x3ab4e0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3ab4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3ab4e4:
    // 0x3ab4e4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3ab4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3ab4e8:
    // 0x3ab4e8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3ab4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3ab4ec:
    // 0x3ab4ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ab4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ab4f0:
    // 0x3ab4f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ab4f4:
    if (ctx->pc == 0x3AB4F4u) {
        ctx->pc = 0x3AB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4F0u;
        // 0x3ab4f4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB4F8u;
        goto label_3ab4f8;
    }
    ctx->pc = 0x3AB4F0u;
    {
        const bool branch_taken_0x3ab4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4F0u;
        // 0x3ab4f4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4f0) {
            ctx->pc = 0x3AB514u;
            goto label_3ab514;
        }
    }
    ctx->pc = 0x3AB4F8u;
label_3ab4f8:
    // 0x3ab4f8: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
label_3ab4fc:
    if (ctx->pc == 0x3AB4FCu) {
        ctx->pc = 0x3AB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4F8u;
        // 0x3ab4fc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB500u;
        goto label_3ab500;
    }
    ctx->pc = 0x3AB4F8u;
    {
        const bool branch_taken_0x3ab4f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab4f8) {
            ctx->pc = 0x3AB4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB4F8u;
            // 0x3ab4fc: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB530u;
            goto label_3ab530;
        }
    }
    ctx->pc = 0x3AB500u;
label_3ab500:
    // 0x3ab500: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3ab500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3ab504:
    // 0x3ab504: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3ab504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3ab508:
    // 0x3ab508: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3ab508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3ab50c:
    // 0x3ab50c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ab50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ab510:
    // 0x3ab510: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3ab510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3ab514:
    // 0x3ab514: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x3ab514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ab518:
    // 0x3ab518: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x3ab518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ab51c:
    // 0x3ab51c: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x3ab51cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_3ab520:
    // 0x3ab520: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x3ab520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3ab524:
    // 0x3ab524: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ab528:
    if (ctx->pc == 0x3AB528u) {
        ctx->pc = 0x3AB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB524u;
        // 0x3ab528: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB52Cu;
        goto label_3ab52c;
    }
    ctx->pc = 0x3AB524u;
    {
        const bool branch_taken_0x3ab524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB524u;
        // 0x3ab528: 0x223800a  movz        $s0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab524) {
            ctx->pc = 0x3AB544u;
            goto label_3ab544;
        }
    }
    ctx->pc = 0x3AB52Cu;
label_3ab52c:
    // 0x3ab52c: 0x0  nop
    ctx->pc = 0x3ab52cu;
    // NOP
label_3ab530:
    // 0x3ab530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ab534:
    if (ctx->pc == 0x3AB534u) {
        ctx->pc = 0x3AB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB530u;
        // 0x3ab534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB538u;
        goto label_3ab538;
    }
    ctx->pc = 0x3AB530u;
    {
        const bool branch_taken_0x3ab530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB530u;
        // 0x3ab534: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab530) {
            ctx->pc = 0x3AB544u;
            goto label_3ab544;
        }
    }
    ctx->pc = 0x3AB538u;
label_3ab538:
    // 0x3ab538: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x3ab538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3ab53c:
    // 0x3ab53c: 0x40f809  jalr        $v0
label_3ab540:
    if (ctx->pc == 0x3AB540u) {
        ctx->pc = 0x3AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB53Cu;
        // 0x3ab540: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB544u;
        goto label_3ab544;
    }
    ctx->pc = 0x3AB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AB544u);
        ctx->pc = 0x3AB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB53Cu;
        // 0x3ab540: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB53Cu, 0x3AB544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AB544u;
label_3ab544:
    // 0x3ab544: 0x2111026  xor         $v0, $s0, $s1
    ctx->pc = 0x3ab544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_3ab548:
    // 0x3ab548: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3ab548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3ab54c:
    // 0x3ab54c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ab54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3ab550:
    // 0x3ab550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ab554:
    // 0x3ab554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ab558:
    // 0x3ab558: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ab55c:
    // 0x3ab55c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ab55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ab560:
    // 0x3ab560: 0x3e00008  jr          $ra
label_3ab564:
    if (ctx->pc == 0x3AB564u) {
        ctx->pc = 0x3AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB560u;
        // 0x3ab564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AB568u;
        goto label_fallthrough_0x3ab560;
    }
    ctx->pc = 0x3AB560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB560u;
        // 0x3ab564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ab560:
    ctx->pc = 0x3AB568u;
}
