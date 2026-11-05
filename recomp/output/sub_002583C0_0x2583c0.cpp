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

// Function: sub_002583C0
// Address: 0x2583c0 - 0x258810
void sub_002583C0_0x2583c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002583C0_0x2583c0");
#endif

    switch (ctx->pc) {
        case 0x2583dcu: goto label_2583dc;
        case 0x2583f0u: goto label_2583f0;
        case 0x258404u: goto label_258404;
        case 0x258418u: goto label_258418;
        case 0x25842cu: goto label_25842c;
        case 0x258440u: goto label_258440;
        case 0x258628u: goto label_258628;
        case 0x258640u: goto label_258640;
        case 0x258720u: goto label_258720;
        case 0x258738u: goto label_258738;
        case 0x258754u: goto label_258754;
        case 0x25876cu: goto label_25876c;
        case 0x258778u: goto label_258778;
        case 0x258790u: goto label_258790;
        case 0x2587fcu: goto label_2587fc;
        default: break;
    }

    ctx->pc = 0x2583c0u;

    // 0x2583c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2583c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2583c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2583c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2583c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2583c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2583cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2583ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2583d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2583d4: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x2583D4u;
    SET_GPR_U32(ctx, 31, 0x2583DCu);
    ctx->pc = 0x2583D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583D4u;
    // 0x2583d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x2583D4u, 0x2583DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583DCu;
label_2583dc:
    // 0x2583dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2583dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2583e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2583e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2583e4: 0x24a554b0  addiu       $a1, $a1, 0x54B0
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21680));
    // 0x2583e8: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2583E8u;
    SET_GPR_U32(ctx, 31, 0x2583F0u);
    ctx->pc = 0x2583ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583E8u;
    // 0x2583ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2583E8u, 0x2583F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2583F0u;
label_2583f0:
    // 0x2583f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2583f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2583f4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2583f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2583f8: 0x24a554b8  addiu       $a1, $a1, 0x54B8
    ctx->pc = 0x2583f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21688));
    // 0x2583fc: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2583FCu;
    SET_GPR_U32(ctx, 31, 0x258404u);
    ctx->pc = 0x258400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2583FCu;
    // 0x258400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2583FCu, 0x258404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258404u;
label_258404:
    // 0x258404: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258408: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x258408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x25840c: 0x24a554c0  addiu       $a1, $a1, 0x54C0
    ctx->pc = 0x25840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21696));
    // 0x258410: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x258410u;
    SET_GPR_U32(ctx, 31, 0x258418u);
    ctx->pc = 0x258414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258410u;
    // 0x258414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x258410u, 0x258418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258418u;
label_258418:
    // 0x258418: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x258418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x25841c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258420: 0x24a554c8  addiu       $a1, $a1, 0x54C8
    ctx->pc = 0x258420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21704));
    // 0x258424: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x258424u;
    SET_GPR_U32(ctx, 31, 0x25842Cu);
    ctx->pc = 0x258428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258424u;
    // 0x258428: 0x262610d8  addiu       $a2, $s1, 0x10D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x258424u, 0x25842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25842Cu;
label_25842c:
    // 0x25842c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x25842cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x258430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258434: 0x24a554d8  addiu       $a1, $a1, 0x54D8
    ctx->pc = 0x258434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21720));
    // 0x258438: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x258438u;
    SET_GPR_U32(ctx, 31, 0x258440u);
    ctx->pc = 0x25843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258438u;
    // 0x25843c: 0x262610dc  addiu       $a2, $s1, 0x10DC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x258438u, 0x258440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258440u;
label_258440:
    // 0x258440: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x258440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258444: 0x2c620027  sltiu       $v0, $v1, 0x27
    ctx->pc = 0x258444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
    // 0x258448: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x258448u;
    {
        const bool branch_taken_0x258448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258448u;
        // 0x25844c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258448) {
            ctx->pc = 0x258640u;
            goto label_258640;
        }
    }
    ctx->pc = 0x258450u;
    // 0x258450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258454: 0x244254f0  addiu       $v0, $v0, 0x54F0
    ctx->pc = 0x258454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21744));
    // 0x258458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x258458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25845c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258460: 0x800008  jr          $a0
    ctx->pc = 0x258460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258468u: goto label_258468;
            case 0x258474u: goto label_258474;
            case 0x258480u: goto label_258480;
            case 0x25848Cu: goto label_25848c;
            case 0x258498u: goto label_258498;
            case 0x2584A4u: goto label_2584a4;
            case 0x2584B0u: goto label_2584b0;
            case 0x2584BCu: goto label_2584bc;
            case 0x2584C8u: goto label_2584c8;
            case 0x2584D4u: goto label_2584d4;
            case 0x2584E0u: goto label_2584e0;
            case 0x2584ECu: goto label_2584ec;
            case 0x2584F8u: goto label_2584f8;
            case 0x258504u: goto label_258504;
            case 0x258510u: goto label_258510;
            case 0x25851Cu: goto label_25851c;
            case 0x258528u: goto label_258528;
            case 0x258534u: goto label_258534;
            case 0x258540u: goto label_258540;
            case 0x25854Cu: goto label_25854c;
            case 0x258558u: goto label_258558;
            case 0x258564u: goto label_258564;
            case 0x258570u: goto label_258570;
            case 0x25857Cu: goto label_25857c;
            case 0x258588u: goto label_258588;
            case 0x258594u: goto label_258594;
            case 0x2585A0u: goto label_2585a0;
            case 0x2585ACu: goto label_2585ac;
            case 0x2585B8u: goto label_2585b8;
            case 0x2585C4u: goto label_2585c4;
            case 0x2585D0u: goto label_2585d0;
            case 0x2585DCu: goto label_2585dc;
            case 0x2585E8u: goto label_2585e8;
            case 0x2585F4u: goto label_2585f4;
            case 0x258600u: goto label_258600;
            case 0x25860Cu: goto label_25860c;
            case 0x258618u: goto label_258618;
            case 0x258630u: goto label_258630;
            case 0x258640u: goto label_258640;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258468u;
label_258468:
    // 0x258468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25846c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x25846Cu;
    {
        const bool branch_taken_0x25846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25846Cu;
        // 0x258470: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25846c) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258474u;
label_258474:
    // 0x258474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258478: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x258478u;
    {
        const bool branch_taken_0x258478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258478u;
        // 0x25847c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258478) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258480u;
label_258480:
    // 0x258480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258484: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x258484u;
    {
        const bool branch_taken_0x258484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258484u;
        // 0x258488: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258484) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x25848Cu;
label_25848c:
    // 0x25848c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258490: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x258490u;
    {
        const bool branch_taken_0x258490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258490u;
        // 0x258494: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258490) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258498u;
label_258498:
    // 0x258498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25849c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25849Cu;
    {
        const bool branch_taken_0x25849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25849Cu;
        // 0x2584a0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25849c) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584A4u;
label_2584a4:
    // 0x2584a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584a8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2584A8u;
    {
        const bool branch_taken_0x2584a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584A8u;
        // 0x2584ac: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584a8) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584B0u;
label_2584b0:
    // 0x2584b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584b4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2584B4u;
    {
        const bool branch_taken_0x2584b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584B4u;
        // 0x2584b8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584b4) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584BCu;
label_2584bc:
    // 0x2584bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584c0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2584C0u;
    {
        const bool branch_taken_0x2584c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584C0u;
        // 0x2584c4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584c0) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584C8u;
label_2584c8:
    // 0x2584c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584cc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2584CCu;
    {
        const bool branch_taken_0x2584cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584CCu;
        // 0x2584d0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584cc) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584D4u;
label_2584d4:
    // 0x2584d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584d8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2584D8u;
    {
        const bool branch_taken_0x2584d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584D8u;
        // 0x2584dc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584d8) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584E0u;
label_2584e0:
    // 0x2584e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584e4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2584E4u;
    {
        const bool branch_taken_0x2584e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584E4u;
        // 0x2584e8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584e4) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584ECu;
label_2584ec:
    // 0x2584ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584f0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2584F0u;
    {
        const bool branch_taken_0x2584f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2584F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584F0u;
        // 0x2584f4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584f0) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2584F8u;
label_2584f8:
    // 0x2584f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2584f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2584fc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2584FCu;
    {
        const bool branch_taken_0x2584fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2584FCu;
        // 0x258500: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2584fc) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258504u;
label_258504:
    // 0x258504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258508: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x258508u;
    {
        const bool branch_taken_0x258508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258508u;
        // 0x25850c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258508) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258510u;
label_258510:
    // 0x258510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258514: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x258514u;
    {
        const bool branch_taken_0x258514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258514u;
        // 0x258518: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258514) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x25851Cu;
label_25851c:
    // 0x25851c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258520: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x258520u;
    {
        const bool branch_taken_0x258520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258520u;
        // 0x258524: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258520) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258528u;
label_258528:
    // 0x258528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25852c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25852Cu;
    {
        const bool branch_taken_0x25852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25852Cu;
        // 0x258530: 0x24050071  addiu       $a1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25852c) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258534u;
label_258534:
    // 0x258534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258538: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x258538u;
    {
        const bool branch_taken_0x258538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258538u;
        // 0x25853c: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258538) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258540u;
label_258540:
    // 0x258540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258544: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x258544u;
    {
        const bool branch_taken_0x258544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258544u;
        // 0x258548: 0x24050073  addiu       $a1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258544) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x25854Cu;
label_25854c:
    // 0x25854c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258550: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x258550u;
    {
        const bool branch_taken_0x258550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258550u;
        // 0x258554: 0x24050074  addiu       $a1, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258550) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258558u;
label_258558:
    // 0x258558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25855c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25855Cu;
    {
        const bool branch_taken_0x25855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25855Cu;
        // 0x258560: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25855c) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258564u;
label_258564:
    // 0x258564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258568: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x258568u;
    {
        const bool branch_taken_0x258568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258568u;
        // 0x25856c: 0x24050076  addiu       $a1, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258568) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258570u;
label_258570:
    // 0x258570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258574: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x258574u;
    {
        const bool branch_taken_0x258574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258574u;
        // 0x258578: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258574) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x25857Cu;
label_25857c:
    // 0x25857c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25857cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258580: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x258580u;
    {
        const bool branch_taken_0x258580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258580u;
        // 0x258584: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258580) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258588u;
label_258588:
    // 0x258588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25858c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25858Cu;
    {
        const bool branch_taken_0x25858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25858Cu;
        // 0x258590: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25858c) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258594u;
label_258594:
    // 0x258594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258598: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x258598u;
    {
        const bool branch_taken_0x258598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258598u;
        // 0x25859c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258598) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585A0u;
label_2585a0:
    // 0x2585a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2585A4u;
    {
        const bool branch_taken_0x2585a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585A4u;
        // 0x2585a8: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585a4) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585ACu;
label_2585ac:
    // 0x2585ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2585B0u;
    {
        const bool branch_taken_0x2585b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585B0u;
        // 0x2585b4: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585b0) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585B8u;
label_2585b8:
    // 0x2585b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2585BCu;
    {
        const bool branch_taken_0x2585bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585BCu;
        // 0x2585c0: 0x2405007d  addiu       $a1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585bc) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585C4u;
label_2585c4:
    // 0x2585c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2585C8u;
    {
        const bool branch_taken_0x2585c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585C8u;
        // 0x2585cc: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585c8) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585D0u;
label_2585d0:
    // 0x2585d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2585D4u;
    {
        const bool branch_taken_0x2585d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585D4u;
        // 0x2585d8: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585d4) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585DCu;
label_2585dc:
    // 0x2585dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2585E0u;
    {
        const bool branch_taken_0x2585e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585E0u;
        // 0x2585e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585e0) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585E8u;
label_2585e8:
    // 0x2585e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2585ECu;
    {
        const bool branch_taken_0x2585ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585ECu;
        // 0x2585f0: 0x24050086  addiu       $a1, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585ec) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x2585F4u;
label_2585f4:
    // 0x2585f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2585f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2585F8u;
    {
        const bool branch_taken_0x2585f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2585FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2585F8u;
        // 0x2585fc: 0x24050087  addiu       $a1, $zero, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2585f8) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258600u;
label_258600:
    // 0x258600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258604: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x258604u;
    {
        const bool branch_taken_0x258604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258604u;
        // 0x258608: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258604) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x25860Cu;
label_25860c:
    // 0x25860c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258610: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258610u;
    {
        const bool branch_taken_0x258610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258610u;
        // 0x258614: 0x24050089  addiu       $a1, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258610) {
            ctx->pc = 0x258620u;
            goto label_258620;
        }
    }
    ctx->pc = 0x258618u;
label_258618:
    // 0x258618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25861c: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x25861cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
label_258620:
    // 0x258620: 0xc08da04  jal         func_236810
    ctx->pc = 0x258620u;
    SET_GPR_U32(ctx, 31, 0x258628u);
    ctx->pc = 0x258624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258620u;
    // 0x258624: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x258620u, 0x258628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258628u;
label_258628:
    // 0x258628: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x258628u;
    {
        const bool branch_taken_0x258628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258628u;
        // 0x25862c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258628) {
            ctx->pc = 0x258644u;
            goto label_258644;
        }
    }
    ctx->pc = 0x258630u;
label_258630:
    // 0x258630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258634: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x258634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x258638: 0xc08da04  jal         func_236810
    ctx->pc = 0x258638u;
    SET_GPR_U32(ctx, 31, 0x258640u);
    ctx->pc = 0x25863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258638u;
    // 0x25863c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x258638u, 0x258640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258640u;
label_258640:
    // 0x258640: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x258640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_258644:
    // 0x258644: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x258644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x258648: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x258648u;
    {
        const bool branch_taken_0x258648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258648u;
        // 0x25864c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258648) {
            ctx->pc = 0x258738u;
            goto label_258738;
        }
    }
    ctx->pc = 0x258650u;
    // 0x258650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258654: 0x24425590  addiu       $v0, $v0, 0x5590
    ctx->pc = 0x258654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
    // 0x258658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x258658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25865c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258660: 0x800008  jr          $a0
    ctx->pc = 0x258660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258668u: goto label_258668;
            case 0x258674u: goto label_258674;
            case 0x258680u: goto label_258680;
            case 0x25868Cu: goto label_25868c;
            case 0x258698u: goto label_258698;
            case 0x2586A4u: goto label_2586a4;
            case 0x2586B0u: goto label_2586b0;
            case 0x2586BCu: goto label_2586bc;
            case 0x2586C8u: goto label_2586c8;
            case 0x2586D4u: goto label_2586d4;
            case 0x2586E0u: goto label_2586e0;
            case 0x2586ECu: goto label_2586ec;
            case 0x2586F8u: goto label_2586f8;
            case 0x258704u: goto label_258704;
            case 0x258710u: goto label_258710;
            case 0x258728u: goto label_258728;
            case 0x258738u: goto label_258738;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258668u;
label_258668:
    // 0x258668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25866c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25866Cu;
    {
        const bool branch_taken_0x25866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25866Cu;
        // 0x258670: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25866c) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x258674u;
label_258674:
    // 0x258674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258678: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x258678u;
    {
        const bool branch_taken_0x258678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258678u;
        // 0x25867c: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258678) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x258680u;
label_258680:
    // 0x258680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258684: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x258684u;
    {
        const bool branch_taken_0x258684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258684u;
        // 0x258688: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258684) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x25868Cu;
label_25868c:
    // 0x25868c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258690: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x258690u;
    {
        const bool branch_taken_0x258690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258690u;
        // 0x258694: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258690) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x258698u;
label_258698:
    // 0x258698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25869c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25869Cu;
    {
        const bool branch_taken_0x25869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25869Cu;
        // 0x2586a0: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25869c) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586A4u;
label_2586a4:
    // 0x2586a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2586A8u;
    {
        const bool branch_taken_0x2586a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586A8u;
        // 0x2586ac: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586a8) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586B0u;
label_2586b0:
    // 0x2586b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2586B4u;
    {
        const bool branch_taken_0x2586b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586B4u;
        // 0x2586b8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586b4) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586BCu;
label_2586bc:
    // 0x2586bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2586C0u;
    {
        const bool branch_taken_0x2586c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586C0u;
        // 0x2586c4: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586c0) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586C8u;
label_2586c8:
    // 0x2586c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2586CCu;
    {
        const bool branch_taken_0x2586cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586CCu;
        // 0x2586d0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586cc) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586D4u;
label_2586d4:
    // 0x2586d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2586D8u;
    {
        const bool branch_taken_0x2586d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586D8u;
        // 0x2586dc: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586d8) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586E0u;
label_2586e0:
    // 0x2586e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2586E4u;
    {
        const bool branch_taken_0x2586e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586E4u;
        // 0x2586e8: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586e4) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586ECu;
label_2586ec:
    // 0x2586ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2586F0u;
    {
        const bool branch_taken_0x2586f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2586F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586F0u;
        // 0x2586f4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586f0) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x2586F8u;
label_2586f8:
    // 0x2586f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2586f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2586fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2586FCu;
    {
        const bool branch_taken_0x2586fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2586FCu;
        // 0x258700: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2586fc) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x258704u;
label_258704:
    // 0x258704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258708u;
    {
        const bool branch_taken_0x258708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258708u;
        // 0x25870c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258708) {
            ctx->pc = 0x258718u;
            goto label_258718;
        }
    }
    ctx->pc = 0x258710u;
label_258710:
    // 0x258710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258714: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x258714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_258718:
    // 0x258718: 0xc08da04  jal         func_236810
    ctx->pc = 0x258718u;
    SET_GPR_U32(ctx, 31, 0x258720u);
    ctx->pc = 0x25871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258718u;
    // 0x25871c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x258718u, 0x258720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258720u;
label_258720:
    // 0x258720: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x258720u;
    {
        const bool branch_taken_0x258720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258720u;
        // 0x258724: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258720) {
            ctx->pc = 0x25873Cu;
            goto label_25873c;
        }
    }
    ctx->pc = 0x258728u;
label_258728:
    // 0x258728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25872c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x25872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x258730: 0xc08da04  jal         func_236810
    ctx->pc = 0x258730u;
    SET_GPR_U32(ctx, 31, 0x258738u);
    ctx->pc = 0x258734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258730u;
    // 0x258734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236810u, 0x258730u, 0x258738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258738u;
label_258738:
    // 0x258738: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x258738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_25873c:
    // 0x25873c: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x25873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
    // 0x258740: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x258740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x258744: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x258744u;
    {
        const bool branch_taken_0x258744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258744u;
        // 0x258748: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258744) {
            ctx->pc = 0x258800u;
            goto label_258800;
        }
    }
    ctx->pc = 0x25874Cu;
    // 0x25874c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x25874Cu;
    SET_GPR_U32(ctx, 31, 0x258754u);
    ctx->pc = 0x258750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25874Cu;
    // 0x258750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x25874Cu, 0x258754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258754u;
label_258754:
    // 0x258754: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x258754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x258758: 0x38633001  xori        $v1, $v1, 0x3001
    ctx->pc = 0x258758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12289);
    // 0x25875c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25875Cu;
    {
        const bool branch_taken_0x25875c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x258760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25875Cu;
        // 0x258760: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25875c) {
            ctx->pc = 0x258794u;
            goto label_258794;
        }
    }
    ctx->pc = 0x258764u;
    // 0x258764: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x258764u;
    SET_GPR_U32(ctx, 31, 0x25876Cu);
    ctx->pc = 0x258768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258764u;
    // 0x258768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x258764u, 0x25876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25876Cu;
label_25876c:
    // 0x25876c: 0x8c500274  lw          $s0, 0x274($v0)
    ctx->pc = 0x25876cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x258770: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x258770u;
    SET_GPR_U32(ctx, 31, 0x258778u);
    ctx->pc = 0x258774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258770u;
    // 0x258774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x258770u, 0x258778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258778u;
label_258778:
    // 0x258778: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x258778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x25877c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25877Cu;
    {
        const bool branch_taken_0x25877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25877Cu;
        // 0x258780: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25877c) {
            ctx->pc = 0x258794u;
            goto label_258794;
        }
    }
    ctx->pc = 0x258784u;
    // 0x258784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258788: 0xc0d9080  jal         func_364200
    ctx->pc = 0x258788u;
    SET_GPR_U32(ctx, 31, 0x258790u);
    ctx->pc = 0x25878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258788u;
    // 0x25878c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x258788u, 0x258790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258790u;
label_258790:
    // 0x258790: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x258790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_258794:
    // 0x258794: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x258794u;
    {
        const bool branch_taken_0x258794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258794u;
        // 0x258798: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258794) {
            ctx->pc = 0x2587DCu;
            goto label_2587dc;
        }
    }
    ctx->pc = 0x25879Cu;
    // 0x25879c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x25879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2587a0: 0x8c8213f8  lw          $v0, 0x13F8($a0)
    ctx->pc = 0x2587a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5112)));
    // 0x2587a4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2587a4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2587a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2587A8u;
    {
        const bool branch_taken_0x2587a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2587a8) {
            ctx->pc = 0x2587ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2587A8u;
            // 0x2587ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2587B0u;
            goto label_2587b0;
        }
    }
    ctx->pc = 0x2587B0u;
label_2587b0:
    // 0x2587b0: 0x1810  mfhi        $v1
    ctx->pc = 0x2587b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2587b4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x2587b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2587b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2587B8u;
    {
        const bool branch_taken_0x2587b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587B8u;
        // 0x2587bc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587b8) {
            ctx->pc = 0x2587D0u;
            goto label_2587d0;
        }
    }
    ctx->pc = 0x2587C0u;
    // 0x2587c0: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x2587c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x2587c4: 0xae230478  sw          $v1, 0x478($s1)
    ctx->pc = 0x2587c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 3));
    // 0x2587c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2587C8u;
    {
        const bool branch_taken_0x2587c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587C8u;
        // 0x2587cc: 0xac430230  sw          $v1, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587c8) {
            ctx->pc = 0x2587DCu;
            goto label_2587dc;
        }
    }
    ctx->pc = 0x2587D0u;
label_2587d0:
    // 0x2587d0: 0x8e22032c  lw          $v0, 0x32C($s1)
    ctx->pc = 0x2587d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x2587d4: 0xae200478  sw          $zero, 0x478($s1)
    ctx->pc = 0x2587d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 0));
    // 0x2587d8: 0xac400230  sw          $zero, 0x230($v0)
    ctx->pc = 0x2587d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 0));
label_2587dc:
    // 0x2587dc: 0x922210dc  lbu         $v0, 0x10DC($s1)
    ctx->pc = 0x2587dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4316)));
    // 0x2587e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2587E0u;
    {
        const bool branch_taken_0x2587e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2587E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2587E0u;
        // 0x2587e4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2587e0) {
            ctx->pc = 0x2587FCu;
            goto label_2587fc;
        }
    }
    ctx->pc = 0x2587E8u;
    // 0x2587e8: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2587e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2587ec: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x2587ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x2587f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2587f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2587f4: 0xc0484a6  jal         func_121298
    ctx->pc = 0x2587F4u;
    SET_GPR_U32(ctx, 31, 0x2587FCu);
    ctx->pc = 0x2587F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2587F4u;
    // 0x2587f8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121298u, 0x2587F4u, 0x2587FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2587FCu;
label_2587fc:
    // 0x2587fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2587fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_258800:
    // 0x258800: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x258800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x258804: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258808: 0x3e00008  jr          $ra
    ctx->pc = 0x258808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258808u;
        // 0x25880c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258810u;
}
