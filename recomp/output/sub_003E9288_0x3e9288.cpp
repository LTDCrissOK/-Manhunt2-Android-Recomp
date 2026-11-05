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

// Function: sub_003E9288
// Address: 0x3e9288 - 0x3e9330
void sub_003E9288_0x3e9288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9288_0x3e9288");
#endif

    switch (ctx->pc) {
        case 0x3e92a8u: goto label_3e92a8;
        case 0x3e92c0u: goto label_3e92c0;
        case 0x3e92d0u: goto label_3e92d0;
        case 0x3e92e8u: goto label_3e92e8;
        case 0x3e9300u: goto label_3e9300;
        case 0x3e9310u: goto label_3e9310;
        default: break;
    }

    ctx->pc = 0x3e9288u;

    // 0x3e9288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e928c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9294: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e929c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e92a0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E92A0u;
    {
        const bool branch_taken_0x3e92a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e92a0) {
            ctx->pc = 0x3E92A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E92A0u;
            // 0x3e92a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E92DCu;
            goto label_3e92dc;
        }
    }
    ctx->pc = 0x3E92A8u;
label_3e92a8:
    // 0x3e92a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e92ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e92b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E92B0u;
    {
        const bool branch_taken_0x3e92b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e92b0) {
            ctx->pc = 0x3E92B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E92B0u;
            // 0x3e92b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E92C8u;
            goto label_3e92c8;
        }
    }
    ctx->pc = 0x3E92B8u;
    // 0x3e92b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E92B8u;
    SET_GPR_U32(ctx, 31, 0x3E92C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E92B8u, 0x3E92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E92C0u;
label_3e92c0:
    // 0x3e92c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e92c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e92c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e92c8:
    // 0x3e92c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E92C8u;
    SET_GPR_U32(ctx, 31, 0x3E92D0u);
    ctx->pc = 0x3E92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E92C8u;
    // 0x3e92cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E92C8u, 0x3E92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E92D0u;
label_3e92d0:
    // 0x3e92d0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E92D0u;
    {
        const bool branch_taken_0x3e92d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E92D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E92D0u;
        // 0x3e92d4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e92d0) {
            ctx->pc = 0x3E92A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e92a8;
        }
    }
    ctx->pc = 0x3E92D8u;
    // 0x3e92d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e92dc:
    // 0x3e92dc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E92DCu;
    {
        const bool branch_taken_0x3e92dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e92dc) {
            ctx->pc = 0x3E92E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E92DCu;
            // 0x3e92e0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E931Cu;
            goto label_3e931c;
        }
    }
    ctx->pc = 0x3E92E4u;
    // 0x3e92e4: 0x0  nop
    ctx->pc = 0x3e92e4u;
    // NOP
label_3e92e8:
    // 0x3e92e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e92ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e92ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e92f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E92F0u;
    {
        const bool branch_taken_0x3e92f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e92f0) {
            ctx->pc = 0x3E92F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E92F0u;
            // 0x3e92f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9308u;
            goto label_3e9308;
        }
    }
    ctx->pc = 0x3E92F8u;
    // 0x3e92f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E92F8u;
    SET_GPR_U32(ctx, 31, 0x3E9300u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E92F8u, 0x3E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9300u;
label_3e9300:
    // 0x3e9300: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9304: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9308:
    // 0x3e9308: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9308u;
    SET_GPR_U32(ctx, 31, 0x3E9310u);
    ctx->pc = 0x3E930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9308u;
    // 0x3e930c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9308u, 0x3E9310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9310u;
label_3e9310:
    // 0x3e9310: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9310u;
    {
        const bool branch_taken_0x3e9310 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9310u;
        // 0x3e9314: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9310) {
            ctx->pc = 0x3E92E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e92e8;
        }
    }
    ctx->pc = 0x3E9318u;
    // 0x3e9318: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e931c:
    // 0x3e931c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e931cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9328: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9328u;
        // 0x3e932c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9330u;
}
