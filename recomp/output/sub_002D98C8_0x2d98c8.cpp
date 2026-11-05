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

// Function: sub_002D98C8
// Address: 0x2d98c8 - 0x2d9a08
void sub_002D98C8_0x2d98c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D98C8_0x2d98c8");
#endif

    switch (ctx->pc) {
        case 0x2d98ecu: goto label_2d98ec;
        case 0x2d9900u: goto label_2d9900;
        case 0x2d9918u: goto label_2d9918;
        case 0x2d9928u: goto label_2d9928;
        case 0x2d9938u: goto label_2d9938;
        case 0x2d9970u: goto label_2d9970;
        case 0x2d9994u: goto label_2d9994;
        case 0x2d99a4u: goto label_2d99a4;
        case 0x2d99f0u: goto label_2d99f0;
        default: break;
    }

    ctx->pc = 0x2d98c8u;

    // 0x2d98c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d98c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d98cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d98d0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d98d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d98d4: 0x24a512e8  addiu       $a1, $a1, 0x12E8
    ctx->pc = 0x2d98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4840));
    // 0x2d98d8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d98dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d98dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d98e4: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D98E4u;
    SET_GPR_U32(ctx, 31, 0x2D98ECu);
    ctx->pc = 0x2D98E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98E4u;
    // 0x2d98e8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D98E4u, 0x2D98ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98ECu;
label_2d98ec:
    // 0x2d98ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d98f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d98f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d98f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98f8: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D98F8u;
    SET_GPR_U32(ctx, 31, 0x2D9900u);
    ctx->pc = 0x2D98FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98F8u;
    // 0x2d98fc: 0x24a512f8  addiu       $a1, $a1, 0x12F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D98F8u, 0x2D9900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9900u;
label_2d9900:
    // 0x2d9900: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D9900u;
    {
        const bool branch_taken_0x2d9900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9900) {
            ctx->pc = 0x2D9904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9900u;
            // 0x2d9904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D99F4u;
            goto label_2d99f4;
        }
    }
    ctx->pc = 0x2D9908u;
    // 0x2d9908: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2D9908u;
    {
        const bool branch_taken_0x2d9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9908u;
        // 0x2d990c: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9908) {
            ctx->pc = 0x2D99F0u;
            goto label_2d99f0;
        }
    }
    ctx->pc = 0x2D9910u;
    // 0x2d9910: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2D9910u;
    SET_GPR_U32(ctx, 31, 0x2D9918u);
    ctx->pc = 0x2D9914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9910u;
    // 0x2d9914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2D9910u, 0x2D9918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9918u;
label_2d9918:
    // 0x2d9918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d991c: 0x2451fff6  addiu       $s1, $v0, -0xA
    ctx->pc = 0x2d991cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2d9920: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D9920u;
    SET_GPR_U32(ctx, 31, 0x2D9928u);
    ctx->pc = 0x2D9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9920u;
    // 0x2d9924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D9920u, 0x2D9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9928u;
label_2d9928:
    // 0x2d9928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d9928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d992c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9930: 0xc0d75c6  jal         func_35D718
    ctx->pc = 0x2D9930u;
    SET_GPR_U32(ctx, 31, 0x2D9938u);
    ctx->pc = 0x2D9934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9930u;
    // 0x2d9934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D718u, 0x2D9930u, 0x2D9938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9938u;
label_2d9938:
    // 0x2d9938: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2d9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2d993c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d9940: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d9940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d9944: 0x244234c0  addiu       $v0, $v0, 0x34C0
    ctx->pc = 0x2d9944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
    // 0x2d9948: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A34C4u));
    // 0x2d994c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2d994cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2d9950: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d9950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d9954: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2d9954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2d9958: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2d9958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2d995c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2d9960: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D9960u;
    {
        const bool branch_taken_0x2d9960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9960u;
        // 0x2d9964: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9960) {
            ctx->pc = 0x2D99E4u;
            goto label_2d99e4;
        }
    }
    ctx->pc = 0x2D9968u;
    // 0x2d9968: 0x24103001  addiu       $s0, $zero, 0x3001
    ctx->pc = 0x2d9968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d996c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d9970:
    // 0x2d9970: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9974: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9974u;
    {
        const bool branch_taken_0x2d9974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9974) {
            ctx->pc = 0x2D99B0u;
            goto label_2d99b0;
        }
    }
    ctx->pc = 0x2D997Cu;
    // 0x2d997c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9980: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9980u;
    {
        const bool branch_taken_0x2d9980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D9984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9980u;
        // 0x2d9984: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9980) {
            ctx->pc = 0x2D99B0u;
            goto label_2d99b0;
        }
    }
    ctx->pc = 0x2D9988u;
    // 0x2d9988: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d9988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d998c: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D998Cu;
    SET_GPR_U32(ctx, 31, 0x2D9994u);
    ctx->pc = 0x2D9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D998Cu;
    // 0x2d9990: 0x248403f4  addiu       $a0, $a0, 0x3F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1012));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D998Cu, 0x2D9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9994u;
label_2d9994:
    // 0x2d9994: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9994u;
    {
        const bool branch_taken_0x2d9994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9994u;
        // 0x2d9998: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9994) {
            ctx->pc = 0x2D99ACu;
            goto label_2d99ac;
        }
    }
    ctx->pc = 0x2D999Cu;
    // 0x2d999c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D999Cu;
    SET_GPR_U32(ctx, 31, 0x2D99A4u);
    ctx->pc = 0x2D99A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D999Cu;
    // 0x2d99a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D999Cu, 0x2D99A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99A4u;
label_2d99a4:
    // 0x2d99a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D99A4u;
    {
        const bool branch_taken_0x2d99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99A4u;
        // 0x2d99a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99a4) {
            ctx->pc = 0x2D99F4u;
            goto label_2d99f4;
        }
    }
    ctx->pc = 0x2D99ACu;
label_2d99ac:
    // 0x2d99ac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d99b0:
    // 0x2d99b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D99B0u;
    {
        const bool branch_taken_0x2d99b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99b0) {
            ctx->pc = 0x2D99B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D99B0u;
            // 0x2d99b4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D99C4u;
            goto label_2d99c4;
        }
    }
    ctx->pc = 0x2D99B8u;
    // 0x2d99b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d99bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99BCu;
        // 0x2d99c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D99D4u;
            goto label_2d99d4;
        }
    }
    ctx->pc = 0x2D99C4u;
label_2d99c4:
    // 0x2d99c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D99C4u;
    {
        const bool branch_taken_0x2d99c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99C4u;
        // 0x2d99c8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99c4) {
            ctx->pc = 0x2D99D8u;
            goto label_2d99d8;
        }
    }
    ctx->pc = 0x2D99CCu;
    // 0x2d99cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2d99ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d99d0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d99d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2d99d4:
    // 0x2d99d4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d99d8:
    // 0x2d99d8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2d99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2d99dc: 0x1462ffe4  bne         $v1, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D99DCu;
    {
        const bool branch_taken_0x2d99dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99DCu;
        // 0x2d99e0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99dc) {
            ctx->pc = 0x2D9970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9970;
        }
    }
    ctx->pc = 0x2D99E4u;
label_2d99e4:
    // 0x2d99e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D99E8u;
    SET_GPR_U32(ctx, 31, 0x2D99F0u);
    ctx->pc = 0x2D99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99E8u;
    // 0x2d99ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D99E8u, 0x2D99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99F0u;
label_2d99f0:
    // 0x2d99f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d99f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d99f4:
    // 0x2d99f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d99f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d99f8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d99f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d99fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d99fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A00u;
        // 0x2d9a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9A08u;
}
