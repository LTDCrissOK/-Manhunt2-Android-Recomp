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

// Function: sub_003E91C8
// Address: 0x3e91c8 - 0x3e9270
void sub_003E91C8_0x3e91c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E91C8_0x3e91c8");
#endif

    switch (ctx->pc) {
        case 0x3e91e8u: goto label_3e91e8;
        case 0x3e9200u: goto label_3e9200;
        case 0x3e9210u: goto label_3e9210;
        case 0x3e9228u: goto label_3e9228;
        case 0x3e9240u: goto label_3e9240;
        case 0x3e9250u: goto label_3e9250;
        default: break;
    }

    ctx->pc = 0x3e91c8u;

    // 0x3e91c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e91c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e91cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e91ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e91d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e91d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e91d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e91d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e91d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e91dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e91e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E91E0u;
    {
        const bool branch_taken_0x3e91e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e91e0) {
            ctx->pc = 0x3E91E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E91E0u;
            // 0x3e91e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E921Cu;
            goto label_3e921c;
        }
    }
    ctx->pc = 0x3E91E8u;
label_3e91e8:
    // 0x3e91e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e91ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e91f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E91F0u;
    {
        const bool branch_taken_0x3e91f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e91f0) {
            ctx->pc = 0x3E91F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E91F0u;
            // 0x3e91f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9208u;
            goto label_3e9208;
        }
    }
    ctx->pc = 0x3E91F8u;
    // 0x3e91f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E91F8u;
    SET_GPR_U32(ctx, 31, 0x3E9200u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E91F8u, 0x3E9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9200u;
label_3e9200:
    // 0x3e9200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9204: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9208:
    // 0x3e9208: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9208u;
    SET_GPR_U32(ctx, 31, 0x3E9210u);
    ctx->pc = 0x3E920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9208u;
    // 0x3e920c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9208u, 0x3E9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9210u;
label_3e9210:
    // 0x3e9210: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9210u;
    {
        const bool branch_taken_0x3e9210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9210u;
        // 0x3e9214: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9210) {
            ctx->pc = 0x3E91E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e91e8;
        }
    }
    ctx->pc = 0x3E9218u;
    // 0x3e9218: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e921c:
    // 0x3e921c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E921Cu;
    {
        const bool branch_taken_0x3e921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e921c) {
            ctx->pc = 0x3E9220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E921Cu;
            // 0x3e9220: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E925Cu;
            goto label_3e925c;
        }
    }
    ctx->pc = 0x3E9224u;
    // 0x3e9224: 0x0  nop
    ctx->pc = 0x3e9224u;
    // NOP
label_3e9228:
    // 0x3e9228: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e922c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9230: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9230u;
    {
        const bool branch_taken_0x3e9230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9230) {
            ctx->pc = 0x3E9234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9230u;
            // 0x3e9234: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9248u;
            goto label_3e9248;
        }
    }
    ctx->pc = 0x3E9238u;
    // 0x3e9238: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9238u;
    SET_GPR_U32(ctx, 31, 0x3E9240u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9238u, 0x3E9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9240u;
label_3e9240:
    // 0x3e9240: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9244: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9248:
    // 0x3e9248: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9248u;
    SET_GPR_U32(ctx, 31, 0x3E9250u);
    ctx->pc = 0x3E924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9248u;
    // 0x3e924c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9248u, 0x3E9250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9250u;
label_3e9250:
    // 0x3e9250: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9250u;
    {
        const bool branch_taken_0x3e9250 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9250u;
        // 0x3e9254: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9250) {
            ctx->pc = 0x3E9228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9228;
        }
    }
    ctx->pc = 0x3E9258u;
    // 0x3e9258: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e925c:
    // 0x3e925c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e925cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9268: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9268u;
        // 0x3e926c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9270u;
}
