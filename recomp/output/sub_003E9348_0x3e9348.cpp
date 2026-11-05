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

// Function: sub_003E9348
// Address: 0x3e9348 - 0x3e93f0
void sub_003E9348_0x3e9348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9348_0x3e9348");
#endif

    switch (ctx->pc) {
        case 0x3e9368u: goto label_3e9368;
        case 0x3e9380u: goto label_3e9380;
        case 0x3e9390u: goto label_3e9390;
        case 0x3e93a8u: goto label_3e93a8;
        case 0x3e93c0u: goto label_3e93c0;
        case 0x3e93d0u: goto label_3e93d0;
        default: break;
    }

    ctx->pc = 0x3e9348u;

    // 0x3e9348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e934c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e935c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9360: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E9360u;
    {
        const bool branch_taken_0x3e9360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9360) {
            ctx->pc = 0x3E9364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9360u;
            // 0x3e9364: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E939Cu;
            goto label_3e939c;
        }
    }
    ctx->pc = 0x3E9368u;
label_3e9368:
    // 0x3e9368: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e936c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9370: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9370u;
    {
        const bool branch_taken_0x3e9370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9370) {
            ctx->pc = 0x3E9374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9370u;
            // 0x3e9374: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9388u;
            goto label_3e9388;
        }
    }
    ctx->pc = 0x3E9378u;
    // 0x3e9378: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9378u;
    SET_GPR_U32(ctx, 31, 0x3E9380u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9378u, 0x3E9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9380u;
label_3e9380:
    // 0x3e9380: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9384: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9388:
    // 0x3e9388: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9388u;
    SET_GPR_U32(ctx, 31, 0x3E9390u);
    ctx->pc = 0x3E938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9388u;
    // 0x3e938c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9388u, 0x3E9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9390u;
label_3e9390:
    // 0x3e9390: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9390u;
    {
        const bool branch_taken_0x3e9390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9390u;
        // 0x3e9394: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9390) {
            ctx->pc = 0x3E9368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9368;
        }
    }
    ctx->pc = 0x3E9398u;
    // 0x3e9398: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e939c:
    // 0x3e939c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E939Cu;
    {
        const bool branch_taken_0x3e939c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e939c) {
            ctx->pc = 0x3E93A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E939Cu;
            // 0x3e93a0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E93DCu;
            goto label_3e93dc;
        }
    }
    ctx->pc = 0x3E93A4u;
    // 0x3e93a4: 0x0  nop
    ctx->pc = 0x3e93a4u;
    // NOP
label_3e93a8:
    // 0x3e93a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e93ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e93acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e93b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E93B0u;
    {
        const bool branch_taken_0x3e93b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e93b0) {
            ctx->pc = 0x3E93B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E93B0u;
            // 0x3e93b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E93C8u;
            goto label_3e93c8;
        }
    }
    ctx->pc = 0x3E93B8u;
    // 0x3e93b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E93B8u;
    SET_GPR_U32(ctx, 31, 0x3E93C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E93B8u, 0x3E93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93C0u;
label_3e93c0:
    // 0x3e93c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e93c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e93c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e93c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e93c8:
    // 0x3e93c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E93C8u;
    SET_GPR_U32(ctx, 31, 0x3E93D0u);
    ctx->pc = 0x3E93CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93C8u;
    // 0x3e93cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E93C8u, 0x3E93D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93D0u;
label_3e93d0:
    // 0x3e93d0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E93D0u;
    {
        const bool branch_taken_0x3e93d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93D0u;
        // 0x3e93d4: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e93d0) {
            ctx->pc = 0x3E93A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e93a8;
        }
    }
    ctx->pc = 0x3E93D8u;
    // 0x3e93d8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e93d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e93dc:
    // 0x3e93dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e93dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e93e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e93e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e93e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e93e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e93e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E93E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93E8u;
        // 0x3e93ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E93E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E93F0u;
}
