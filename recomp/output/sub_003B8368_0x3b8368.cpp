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

// Function: sub_003B8368
// Address: 0x3b8368 - 0x3b84c0
void sub_003B8368_0x3b8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8368_0x3b8368");
#endif

    switch (ctx->pc) {
        case 0x3b8388u: goto label_3b8388;
        case 0x3b8394u: goto label_3b8394;
        case 0x3b83c0u: goto label_3b83c0;
        case 0x3b83d8u: goto label_3b83d8;
        case 0x3b83ecu: goto label_3b83ec;
        case 0x3b83fcu: goto label_3b83fc;
        case 0x3b8410u: goto label_3b8410;
        case 0x3b8418u: goto label_3b8418;
        case 0x3b8438u: goto label_3b8438;
        case 0x3b844cu: goto label_3b844c;
        case 0x3b8470u: goto label_3b8470;
        case 0x3b8478u: goto label_3b8478;
        default: break;
    }

    ctx->pc = 0x3b8368u;

    // 0x3b8368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b836c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b8370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b8374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b8374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b8378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b837c: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3b837cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3b8380: 0xc0edf7c  jal         func_3B7DF0
    ctx->pc = 0x3B8380u;
    SET_GPR_U32(ctx, 31, 0x3B8388u);
    ctx->pc = 0x3B8384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8380u;
    // 0x3b8384: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7DF0u, 0x3B8380u, 0x3B8388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8388u;
label_3b8388:
    // 0x3b8388: 0x8e04aca8  lw          $a0, -0x5358($s0)
    ctx->pc = 0x3b8388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945960)));
    // 0x3b838c: 0xc0f267c  jal         func_3C99F0
    ctx->pc = 0x3B838Cu;
    SET_GPR_U32(ctx, 31, 0x3B8394u);
    ctx->pc = 0x3C99F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99F0u, 0x3B838Cu, 0x3B8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8394u;
label_3b8394:
    // 0x3b8394: 0x8e03aca8  lw          $v1, -0x5358($s0)
    ctx->pc = 0x3b8394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945960)));
    // 0x3b8398: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B8398u;
    {
        const bool branch_taken_0x3b8398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8398u;
        // 0x3b839c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8398) {
            ctx->pc = 0x3B83C8u;
            goto label_3b83c8;
        }
    }
    ctx->pc = 0x3B83A0u;
    // 0x3b83a0: 0x8c43ac90  lw          $v1, -0x5370($v0)
    ctx->pc = 0x3b83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945936)));
    // 0x3b83a4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B83A4u;
    {
        const bool branch_taken_0x3b83a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B83A4u;
        // 0x3b83a8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83a4) {
            ctx->pc = 0x3B83ECu;
            goto label_3b83ec;
        }
    }
    ctx->pc = 0x3B83ACu;
    // 0x3b83ac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b83acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b83b0: 0x8c46ac9c  lw          $a2, -0x5364($v0)
    ctx->pc = 0x3b83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945948)));
    // 0x3b83b4: 0x24840750  addiu       $a0, $a0, 0x750
    ctx->pc = 0x3b83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1872));
    // 0x3b83b8: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B83B8u;
    SET_GPR_U32(ctx, 31, 0x3B83C0u);
    ctx->pc = 0x3B83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B83B8u;
    // 0x3b83bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B83B8u, 0x3B83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B83C0u;
label_3b83c0:
    // 0x3b83c0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3B83C0u;
    {
        const bool branch_taken_0x3b83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B83C0u;
        // 0x3b83c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83c0) {
            ctx->pc = 0x3B84A8u;
            goto label_3b84a8;
        }
    }
    ctx->pc = 0x3B83C8u;
label_3b83c8:
    // 0x3b83c8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b83cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b83d0: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3B83D0u;
    SET_GPR_U32(ctx, 31, 0x3B83D8u);
    ctx->pc = 0x3B83D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B83D0u;
    // 0x3b83d4: 0xac51ac9c  sw          $s1, -0x5364($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945948), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3B83D0u, 0x3B83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B83D8u;
label_3b83d8:
    // 0x3b83d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B83D8u;
    {
        const bool branch_taken_0x3b83d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B83D8u;
        // 0x3b83dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83d8) {
            ctx->pc = 0x3B83F4u;
            goto label_3b83f4;
        }
    }
    ctx->pc = 0x3B83E0u;
    // 0x3b83e0: 0x8e04aca8  lw          $a0, -0x5358($s0)
    ctx->pc = 0x3b83e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945960)));
    // 0x3b83e4: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B83E4u;
    SET_GPR_U32(ctx, 31, 0x3B83ECu);
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B83E4u, 0x3B83ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B83ECu;
label_3b83ec:
    // 0x3b83ec: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3B83ECu;
    {
        const bool branch_taken_0x3b83ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B83ECu;
        // 0x3b83f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b83ec) {
            ctx->pc = 0x3B84A8u;
            goto label_3b84a8;
        }
    }
    ctx->pc = 0x3B83F4u;
label_3b83f4:
    // 0x3b83f4: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x3B83F4u;
    SET_GPR_U32(ctx, 31, 0x3B83FCu);
    ctx->pc = 0x3B83F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B83F4u;
    // 0x3b83f8: 0x3c120043  lui         $s2, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x3B83F4u, 0x3B83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B83FCu;
label_3b83fc:
    // 0x3b83fc: 0x8e42acbc  lw          $v0, -0x5344($s2)
    ctx->pc = 0x3b83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945980)));
    // 0x3b8400: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3B8400u;
    {
        const bool branch_taken_0x3b8400 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8400u;
        // 0x3b8404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8400) {
            ctx->pc = 0x3B84A8u;
            goto label_3b84a8;
        }
    }
    ctx->pc = 0x3B8408u;
    // 0x3b8408: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B8408u;
    {
        const bool branch_taken_0x3b8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8408u;
        // 0x3b840c: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8408) {
            ctx->pc = 0x3B8434u;
            goto label_3b8434;
        }
    }
    ctx->pc = 0x3B8410u;
label_3b8410:
    // 0x3b8410: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b8410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3b8414: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b8418:
    // 0x3b8418: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b8418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b841c: 0x0  nop
    ctx->pc = 0x3b841cu;
    // NOP
    // 0x3b8420: 0x0  nop
    ctx->pc = 0x3b8420u;
    // NOP
    // 0x3b8424: 0x0  nop
    ctx->pc = 0x3b8424u;
    // NOP
    // 0x3b8428: 0x0  nop
    ctx->pc = 0x3b8428u;
    // NOP
    // 0x3b842c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B842Cu;
    {
        const bool branch_taken_0x3b842c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b842c) {
            ctx->pc = 0x3B8418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8418;
        }
    }
    ctx->pc = 0x3B8434u;
label_3b8434:
    // 0x3b8434: 0x2630be50  addiu       $s0, $s1, -0x41B0
    ctx->pc = 0x3b8434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950480));
label_3b8438:
    // 0x3b8438: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b8438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3b843c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8440: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x3b8440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x3b8444: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x3B8444u;
    SET_GPR_U32(ctx, 31, 0x3B844Cu);
    ctx->pc = 0x3B8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8444u;
    // 0x3b8448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x3B8444u, 0x3B844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B844Cu;
label_3b844c:
    // 0x3b844c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B844Cu;
    {
        const bool branch_taken_0x3b844c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3b844c) {
            ctx->pc = 0x3B8450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B844Cu;
            // 0x3b8450: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B849Cu;
            goto label_3b849c;
        }
    }
    ctx->pc = 0x3B8454u;
    // 0x3b8454: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b8454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b8458: 0x8c43ac90  lw          $v1, -0x5370($v0)
    ctx->pc = 0x3b8458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42AC90u));
    // 0x3b845c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B845Cu;
    {
        const bool branch_taken_0x3b845c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B845Cu;
        // 0x3b8460: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b845c) {
            ctx->pc = 0x3B8474u;
            goto label_3b8474;
        }
    }
    ctx->pc = 0x3B8464u;
    // 0x3b8464: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b8464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b8468: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3B8468u;
    SET_GPR_U32(ctx, 31, 0x3B8470u);
    ctx->pc = 0x3B846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8468u;
    // 0x3b846c: 0x24840778  addiu       $a0, $a0, 0x778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3B8468u, 0x3B8470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8470u;
label_3b8470:
    // 0x3b8470: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3b8470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_3b8474:
    // 0x3b8474: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b8474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b8478:
    // 0x3b8478: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b847c: 0x0  nop
    ctx->pc = 0x3b847cu;
    // NOP
    // 0x3b8480: 0x0  nop
    ctx->pc = 0x3b8480u;
    // NOP
    // 0x3b8484: 0x0  nop
    ctx->pc = 0x3b8484u;
    // NOP
    // 0x3b8488: 0x0  nop
    ctx->pc = 0x3b8488u;
    // NOP
    // 0x3b848c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B848Cu;
    {
        const bool branch_taken_0x3b848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b848c) {
            ctx->pc = 0x3B8478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8478;
        }
    }
    ctx->pc = 0x3B8494u;
    // 0x3b8494: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3B8494u;
    {
        const bool branch_taken_0x3b8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8494u;
        // 0x3b8498: 0x2630be50  addiu       $s0, $s1, -0x41B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8494) {
            ctx->pc = 0x3B8438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8438;
        }
    }
    ctx->pc = 0x3B849Cu;
label_3b849c:
    // 0x3b849c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x3B849Cu;
    {
        const bool branch_taken_0x3b849c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B849Cu;
        // 0x3b84a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b849c) {
            ctx->pc = 0x3B8410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8410;
        }
    }
    ctx->pc = 0x3B84A4u;
    // 0x3b84a4: 0xae40acbc  sw          $zero, -0x5344($s2)
    ctx->pc = 0x3b84a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945980), GPR_U32(ctx, 0));
label_3b84a8:
    // 0x3b84a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b84a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b84ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b84acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b84b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b84b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b84b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b84b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b84b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B84B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84B8u;
        // 0x3b84bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B84B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B84C0u;
}
