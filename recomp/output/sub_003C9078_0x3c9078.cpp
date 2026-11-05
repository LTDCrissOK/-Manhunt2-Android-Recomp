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

// Function: sub_003C9078
// Address: 0x3c9078 - 0x3c91e8
void sub_003C9078_0x3c9078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9078_0x3c9078");
#endif

    switch (ctx->pc) {
        case 0x3c90a0u: goto label_3c90a0;
        case 0x3c90dcu: goto label_3c90dc;
        case 0x3c90e8u: goto label_3c90e8;
        case 0x3c9100u: goto label_3c9100;
        case 0x3c9128u: goto label_3c9128;
        case 0x3c9144u: goto label_3c9144;
        case 0x3c9188u: goto label_3c9188;
        case 0x3c91c0u: goto label_3c91c0;
        default: break;
    }

    ctx->pc = 0x3c9078u;

    // 0x3c9078: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c9078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c907c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c9080: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c9080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c9084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c9084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9088: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c908c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c9090: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c9090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c9094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9098: 0xc0f2538  jal         func_3C94E0
    ctx->pc = 0x3C9098u;
    SET_GPR_U32(ctx, 31, 0x3C90A0u);
    ctx->pc = 0x3C909Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9098u;
    // 0x3c909c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C94E0u, 0x3C9098u, 0x3C90A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90A0u;
label_3c90a0:
    // 0x3c90a0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c90a4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c90a8: 0x2454d180  addiu       $s4, $v0, -0x2E80
    ctx->pc = 0x3c90a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3c90ac: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c90acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c90b0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3c90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42D188u));
    // 0x3c90b4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3c90b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3c90b8: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3c90b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3c90bc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x3c90bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3c90c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3c90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c90c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c90c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c90c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c90cc: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x3c90ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c90d0: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x3c90d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x3c90d4: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3C90D4u;
    SET_GPR_U32(ctx, 31, 0x3C90DCu);
    ctx->pc = 0x3C90D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90D4u;
    // 0x3c90d8: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3C90D4u, 0x3C90DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90DCu;
label_3c90dc:
    // 0x3c90dc: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x3c90dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x3c90e0: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3C90E0u;
    SET_GPR_U32(ctx, 31, 0x3C90E8u);
    ctx->pc = 0x3C90E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90E0u;
    // 0x3c90e4: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3C90E0u, 0x3C90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C90E8u;
label_3c90e8:
    // 0x3c90e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c90e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c90ec: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x3c90ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x3c90f0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3C90F0u;
    {
        const bool branch_taken_0x3c90f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C90F0u;
        // 0x3c90f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c90f0) {
            ctx->pc = 0x3C9180u;
            goto label_3c9180;
        }
    }
    ctx->pc = 0x3C90F8u;
    // 0x3c90f8: 0xc0f2508  jal         func_3C9420
    ctx->pc = 0x3C90F8u;
    SET_GPR_U32(ctx, 31, 0x3C9100u);
    ctx->pc = 0x3C90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C90F8u;
    // 0x3c90fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9420u, 0x3C90F8u, 0x3C9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9100u;
label_3c9100:
    // 0x3c9100: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x3c9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3c9104: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x3c9104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3c9108: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c9108u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c910c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c910cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c9110: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C9110u;
    {
        const bool branch_taken_0x3c9110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9110u;
        // 0x3c9114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9110) {
            ctx->pc = 0x3C9180u;
            goto label_3c9180;
        }
    }
    ctx->pc = 0x3C9118u;
    // 0x3c9118: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3c9118u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3c911c: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3c911cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3c9120: 0xc0f2508  jal         func_3C9420
    ctx->pc = 0x3C9120u;
    SET_GPR_U32(ctx, 31, 0x3C9128u);
    ctx->pc = 0x3C9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9120u;
    // 0x3c9124: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9420u, 0x3C9120u, 0x3C9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9128u;
label_3c9128:
    // 0x3c9128: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c9128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c912c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3c912cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3c9130: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C9130u;
    {
        const bool branch_taken_0x3c9130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9130u;
        // 0x3c9134: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9130) {
            ctx->pc = 0x3C9190u;
            goto label_3c9190;
        }
    }
    ctx->pc = 0x3C9138u;
    // 0x3c9138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c9138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c913c: 0xc0f2508  jal         func_3C9420
    ctx->pc = 0x3C913Cu;
    SET_GPR_U32(ctx, 31, 0x3C9144u);
    ctx->pc = 0x3C9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C913Cu;
    // 0x3c9140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9420u, 0x3C913Cu, 0x3C9144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9144u;
label_3c9144:
    // 0x3c9144: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x3c9144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3c9148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c9148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c914c: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x3c914cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c9150: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x3c9150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c9154: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C9154u;
    {
        const bool branch_taken_0x3c9154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9154u;
        // 0x3c9158: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9154) {
            ctx->pc = 0x3C9180u;
            goto label_3c9180;
        }
    }
    ctx->pc = 0x3C915Cu;
    // 0x3c915c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9160: 0x8c83d598  lw          $v1, -0x2A68($a0)
    ctx->pc = 0x3c9160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294956440)));
    // 0x3c9164: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x3c9164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3c9168: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3c9168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3c916c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c9170: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c9170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c9174: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x3c9174u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3c9178: 0xac83d5b0  sw          $v1, -0x2A50($a0)
    ctx->pc = 0x3c9178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956464), GPR_U32(ctx, 3));
    // 0x3c917c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3c917cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_3c9180:
    // 0x3c9180: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C9180u;
    SET_GPR_U32(ctx, 31, 0x3C9188u);
    ctx->pc = 0x3C9184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9180u;
    // 0x3c9184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C9180u, 0x3C9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9188u;
label_3c9188:
    // 0x3c9188: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C9188u;
    {
        const bool branch_taken_0x3c9188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9188u;
        // 0x3c918c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9188) {
            ctx->pc = 0x3C91C4u;
            goto label_3c91c4;
        }
    }
    ctx->pc = 0x3C9190u;
label_3c9190:
    // 0x3c9190: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x3c9190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x3c9194: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x3c9194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3c9198: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c9198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c919c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c91a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c91a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c91a4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c91a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3c91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3c91ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c91acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c91b0: 0x8c62d5b0  lw          $v0, -0x2A50($v1)
    ctx->pc = 0x3c91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D5B0u));
    // 0x3c91b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x3c91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3c91b8: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C91B8u;
    SET_GPR_U32(ctx, 31, 0x3C91C0u);
    ctx->pc = 0x3C91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C91B8u;
    // 0x3c91bc: 0xac62d5b0  sw          $v0, -0x2A50($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C91B8u, 0x3C91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C91C0u;
label_3c91c0:
    // 0x3c91c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c91c4:
    // 0x3c91c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c91c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c91c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c91c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c91cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c91ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c91d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c91d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c91d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c91d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c91d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c91d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c91dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C91DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C91DCu;
        // 0x3c91e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C91DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C91E4u;
    // 0x3c91e4: 0x0  nop
    ctx->pc = 0x3c91e4u;
    // NOP
    ctx->pc = 0x3c91e8u;
}
