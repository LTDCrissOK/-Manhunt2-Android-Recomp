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

// Function: sub_003E9588
// Address: 0x3e9588 - 0x3e9630
void sub_003E9588_0x3e9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9588_0x3e9588");
#endif

    switch (ctx->pc) {
        case 0x3e95a8u: goto label_3e95a8;
        case 0x3e95c0u: goto label_3e95c0;
        case 0x3e95d0u: goto label_3e95d0;
        case 0x3e95e8u: goto label_3e95e8;
        case 0x3e9600u: goto label_3e9600;
        case 0x3e9610u: goto label_3e9610;
        default: break;
    }

    ctx->pc = 0x3e9588u;

    // 0x3e9588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e958c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e959c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e95a0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E95A0u;
    {
        const bool branch_taken_0x3e95a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e95a0) {
            ctx->pc = 0x3E95A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E95A0u;
            // 0x3e95a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E95DCu;
            goto label_3e95dc;
        }
    }
    ctx->pc = 0x3E95A8u;
label_3e95a8:
    // 0x3e95a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e95ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e95b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E95B0u;
    {
        const bool branch_taken_0x3e95b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e95b0) {
            ctx->pc = 0x3E95B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E95B0u;
            // 0x3e95b4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E95C8u;
            goto label_3e95c8;
        }
    }
    ctx->pc = 0x3E95B8u;
    // 0x3e95b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E95B8u;
    SET_GPR_U32(ctx, 31, 0x3E95C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E95B8u, 0x3E95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95C0u;
label_3e95c0:
    // 0x3e95c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e95c4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e95c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e95c8:
    // 0x3e95c8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E95C8u;
    SET_GPR_U32(ctx, 31, 0x3E95D0u);
    ctx->pc = 0x3E95CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E95C8u;
    // 0x3e95cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E95C8u, 0x3E95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E95D0u;
label_3e95d0:
    // 0x3e95d0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E95D0u;
    {
        const bool branch_taken_0x3e95d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E95D0u;
        // 0x3e95d4: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95d0) {
            ctx->pc = 0x3E95A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e95a8;
        }
    }
    ctx->pc = 0x3E95D8u;
    // 0x3e95d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e95dc:
    // 0x3e95dc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E95DCu;
    {
        const bool branch_taken_0x3e95dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e95dc) {
            ctx->pc = 0x3E95E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E95DCu;
            // 0x3e95e0: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E961Cu;
            goto label_3e961c;
        }
    }
    ctx->pc = 0x3E95E4u;
    // 0x3e95e4: 0x0  nop
    ctx->pc = 0x3e95e4u;
    // NOP
label_3e95e8:
    // 0x3e95e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e95ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e95f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E95F0u;
    {
        const bool branch_taken_0x3e95f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e95f0) {
            ctx->pc = 0x3E95F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E95F0u;
            // 0x3e95f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9608u;
            goto label_3e9608;
        }
    }
    ctx->pc = 0x3E95F8u;
    // 0x3e95f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E95F8u;
    SET_GPR_U32(ctx, 31, 0x3E9600u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E95F8u, 0x3E9600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9600u;
label_3e9600:
    // 0x3e9600: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9604: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9604u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9608:
    // 0x3e9608: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9608u;
    SET_GPR_U32(ctx, 31, 0x3E9610u);
    ctx->pc = 0x3E960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9608u;
    // 0x3e960c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9608u, 0x3E9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9610u;
label_3e9610:
    // 0x3e9610: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9610u;
    {
        const bool branch_taken_0x3e9610 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9610u;
        // 0x3e9614: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9610) {
            ctx->pc = 0x3E95E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e95e8;
        }
    }
    ctx->pc = 0x3E9618u;
    // 0x3e9618: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e961c:
    // 0x3e961c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9628: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9628u;
        // 0x3e962c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9630u;
}
