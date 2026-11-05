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

// Function: sub_0020B8A0
// Address: 0x20b8a0 - 0x20b9b0
void sub_0020B8A0_0x20b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B8A0_0x20b8a0");
#endif

    switch (ctx->pc) {
        case 0x20b954u: goto label_20b954;
        case 0x20b964u: goto label_20b964;
        case 0x20b974u: goto label_20b974;
        case 0x20b988u: goto label_20b988;
        case 0x20b998u: goto label_20b998;
        case 0x20b9a8u: goto label_20b9a8;
        default: break;
    }

    ctx->pc = 0x20b8a0u;

label_20b8a0:
    // 0x20b8a0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x20b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x20b8a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x20b8a8: 0x8c49e490  lw          $t1, -0x1B70($v0)
    ctx->pc = 0x20b8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x49E490u));
    // 0x20b8ac: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x20b8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x20b8b0: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x20b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
    // 0x20b8b4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x20b8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20b8b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b8bc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20b8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b8c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20b8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x20b8c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8c8: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x20b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x20b8cc: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x20b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x20b8d0: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x20b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x20b8d4: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x20b8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x20b8d8: 0xac870038  sw          $a3, 0x38($a0)
    ctx->pc = 0x20b8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
    // 0x20b8dc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x20b8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x20b8e0: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x20b8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x20b8e4: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x20b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x20b8e8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x20b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x20b8ec: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x20b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x20b8f0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x20b8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x20b8f4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x20b8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x20b8f8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x20b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x20b8fc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x20b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x20b900: 0x3e00008  jr          $ra
    ctx->pc = 0x20B900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B900u;
        // 0x20b904: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B908u;
    // 0x20b908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b90c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x20b90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b910: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x20b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20b914: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B914u;
    {
        const bool branch_taken_0x20b914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B914u;
        // 0x20b918: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b914) {
            ctx->pc = 0x20B924u;
            goto label_20b924;
        }
    }
    ctx->pc = 0x20B91Cu;
    // 0x20b91c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b920: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x20b920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_20b924:
    // 0x20b924: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x20b924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20b928: 0x2c620026  sltiu       $v0, $v1, 0x26
    ctx->pc = 0x20b928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x20b92c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20B92Cu;
    {
        const bool branch_taken_0x20b92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B92Cu;
        // 0x20b930: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b92c) {
            ctx->pc = 0x20B9C0u;
            return;
        }
    }
    ctx->pc = 0x20B934u;
    // 0x20b934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b938: 0x24420e70  addiu       $v0, $v0, 0xE70
    ctx->pc = 0x20b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3696));
    // 0x20b93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b940: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b944: 0x800008  jr          $a0
    ctx->pc = 0x20B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B94Cu: goto label_20b94c;
            case 0x20B95Cu: goto label_20b95c;
            case 0x20B96Cu: goto label_20b96c;
            case 0x20B97Cu: goto label_20b97c;
            case 0x20B990u: goto label_20b990;
            case 0x20B9A0u: goto label_20b9a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B94Cu;
label_20b94c:
    // 0x20b94c: 0xc082e76  jal         func_20B9D8
    ctx->pc = 0x20B94Cu;
    SET_GPR_U32(ctx, 31, 0x20B954u);
    ctx->pc = 0x20B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B94Cu;
    // 0x20b950: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B9D8u, 0x20B94Cu, 0x20B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B954u;
label_20b954:
    // 0x20b954: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20B954u;
    {
        const bool branch_taken_0x20b954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B954u;
        // 0x20b958: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b954) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B95Cu;
label_20b95c:
    // 0x20b95c: 0xc082e78  jal         func_20B9E0
    ctx->pc = 0x20B95Cu;
    SET_GPR_U32(ctx, 31, 0x20B964u);
    ctx->pc = 0x20B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B95Cu;
    // 0x20b960: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B9E0u, 0x20B95Cu, 0x20B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B964u;
label_20b964:
    // 0x20b964: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20B964u;
    {
        const bool branch_taken_0x20b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B964u;
        // 0x20b968: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b964) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B96Cu;
label_20b96c:
    // 0x20b96c: 0xc082b5e  jal         func_20AD78
    ctx->pc = 0x20B96Cu;
    SET_GPR_U32(ctx, 31, 0x20B974u);
    ctx->pc = 0x20B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B96Cu;
    // 0x20b970: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AD78u, 0x20B96Cu, 0x20B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B974u;
label_20b974:
    // 0x20b974: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20B974u;
    {
        const bool branch_taken_0x20b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B974u;
        // 0x20b978: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b974) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B97Cu;
label_20b97c:
    // 0x20b97c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20b97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b980: 0xc082b1e  jal         func_20AC78
    ctx->pc = 0x20B980u;
    SET_GPR_U32(ctx, 31, 0x20B988u);
    ctx->pc = 0x20B984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B980u;
    // 0x20b984: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC78u, 0x20B980u, 0x20B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B988u;
label_20b988:
    // 0x20b988: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20B988u;
    {
        const bool branch_taken_0x20b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B988u;
        // 0x20b98c: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b988) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B990u;
label_20b990:
    // 0x20b990: 0xc082e26  jal         func_20B898
    ctx->pc = 0x20B990u;
    SET_GPR_U32(ctx, 31, 0x20B998u);
    ctx->pc = 0x20B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B990u;
    // 0x20b994: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B898u, 0x20B990u, 0x20B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B998u;
label_20b998:
    // 0x20b998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20B998u;
    {
        const bool branch_taken_0x20b998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B998u;
        // 0x20b99c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b998) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B9A0u;
label_20b9a0:
    // 0x20b9a0: 0xc082e28  jal         func_20B8A0
    ctx->pc = 0x20B9A0u;
    SET_GPR_U32(ctx, 31, 0x20B9A8u);
    ctx->pc = 0x20B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9A0u;
    // 0x20b9a4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8A0u;
    goto label_20b8a0;
    ctx->pc = 0x20B9A8u;
label_20b9a8:
    // 0x20b9a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20B9A8u;
    {
        const bool branch_taken_0x20b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9A8u;
        // 0x20b9ac: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9a8) {
            ctx->pc = 0x20B9C4u;
            return;
        }
    }
    ctx->pc = 0x20B9B0u;
}
