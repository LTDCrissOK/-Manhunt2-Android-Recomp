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

// Function: sub_003E9108
// Address: 0x3e9108 - 0x3e91b0
void sub_003E9108_0x3e9108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9108_0x3e9108");
#endif

    switch (ctx->pc) {
        case 0x3e9128u: goto label_3e9128;
        case 0x3e9140u: goto label_3e9140;
        case 0x3e9150u: goto label_3e9150;
        case 0x3e9168u: goto label_3e9168;
        case 0x3e9180u: goto label_3e9180;
        case 0x3e9190u: goto label_3e9190;
        default: break;
    }

    ctx->pc = 0x3e9108u;

    // 0x3e9108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e910c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e911c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9120: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E9120u;
    {
        const bool branch_taken_0x3e9120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9120) {
            ctx->pc = 0x3E9124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9120u;
            // 0x3e9124: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E915Cu;
            goto label_3e915c;
        }
    }
    ctx->pc = 0x3E9128u;
label_3e9128:
    // 0x3e9128: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e912c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9130: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9130u;
    {
        const bool branch_taken_0x3e9130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9130) {
            ctx->pc = 0x3E9134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9130u;
            // 0x3e9134: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9148u;
            goto label_3e9148;
        }
    }
    ctx->pc = 0x3E9138u;
    // 0x3e9138: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9138u;
    SET_GPR_U32(ctx, 31, 0x3E9140u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9138u, 0x3E9140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9140u;
label_3e9140:
    // 0x3e9140: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9144: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9148:
    // 0x3e9148: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9148u;
    SET_GPR_U32(ctx, 31, 0x3E9150u);
    ctx->pc = 0x3E914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9148u;
    // 0x3e914c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9148u, 0x3E9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9150u;
label_3e9150:
    // 0x3e9150: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9150u;
    {
        const bool branch_taken_0x3e9150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9150u;
        // 0x3e9154: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9150) {
            ctx->pc = 0x3E9128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9128;
        }
    }
    ctx->pc = 0x3E9158u;
    // 0x3e9158: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e915c:
    // 0x3e915c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E915Cu;
    {
        const bool branch_taken_0x3e915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e915c) {
            ctx->pc = 0x3E9160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E915Cu;
            // 0x3e9160: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E919Cu;
            goto label_3e919c;
        }
    }
    ctx->pc = 0x3E9164u;
    // 0x3e9164: 0x0  nop
    ctx->pc = 0x3e9164u;
    // NOP
label_3e9168:
    // 0x3e9168: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e916c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e916cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9170: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9170u;
    {
        const bool branch_taken_0x3e9170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9170) {
            ctx->pc = 0x3E9174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9170u;
            // 0x3e9174: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9188u;
            goto label_3e9188;
        }
    }
    ctx->pc = 0x3E9178u;
    // 0x3e9178: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9178u;
    SET_GPR_U32(ctx, 31, 0x3E9180u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9178u, 0x3E9180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9180u;
label_3e9180:
    // 0x3e9180: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9184: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9188:
    // 0x3e9188: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9188u;
    SET_GPR_U32(ctx, 31, 0x3E9190u);
    ctx->pc = 0x3E918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9188u;
    // 0x3e918c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9188u, 0x3E9190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9190u;
label_3e9190:
    // 0x3e9190: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9190u;
    {
        const bool branch_taken_0x3e9190 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9190u;
        // 0x3e9194: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9190) {
            ctx->pc = 0x3E9168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9168;
        }
    }
    ctx->pc = 0x3E9198u;
    // 0x3e9198: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e919c:
    // 0x3e919c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e919cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e91a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e91a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e91a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e91a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e91a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E91A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91A8u;
        // 0x3e91ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E91A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E91B0u;
}
