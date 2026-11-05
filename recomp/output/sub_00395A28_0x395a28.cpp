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

// Function: sub_00395A28
// Address: 0x395a28 - 0x395a90
void sub_00395A28_0x395a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395A28_0x395a28");
#endif

    switch (ctx->pc) {
        case 0x395a48u: goto label_395a48;
        case 0x395a50u: goto label_395a50;
        case 0x395a58u: goto label_395a58;
        case 0x395a68u: goto label_395a68;
        default: break;
    }

    ctx->pc = 0x395a28u;

    // 0x395a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x395a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x395a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395a30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x395a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x395a38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x395a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395a3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x395A3Cu;
    {
        const bool branch_taken_0x395a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A3Cu;
        // 0x395a40: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a3c) {
            ctx->pc = 0x395A50u;
            goto label_395a50;
        }
    }
    ctx->pc = 0x395A44u;
    // 0x395a44: 0x0  nop
    ctx->pc = 0x395a44u;
    // NOP
label_395a48:
    // 0x395a48: 0xc0e57a4  jal         func_395E90
    ctx->pc = 0x395A48u;
    SET_GPR_U32(ctx, 31, 0x395A50u);
    ctx->pc = 0x395E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E90u, 0x395A48u, 0x395A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A50u;
label_395a50:
    // 0x395a50: 0xc0e52f0  jal         func_394BC0
    ctx->pc = 0x395A50u;
    SET_GPR_U32(ctx, 31, 0x395A58u);
    ctx->pc = 0x395A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A50u;
    // 0x395a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394BC0u, 0x395A50u, 0x395A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A58u;
label_395a58:
    // 0x395a58: 0x50510006  beql        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x395A58u;
    {
        const bool branch_taken_0x395a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x395a58) {
            ctx->pc = 0x395A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395A58u;
            // 0x395a5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395A74u;
            goto label_395a74;
        }
    }
    ctx->pc = 0x395A60u;
    // 0x395a60: 0xc0e66a4  jal         func_399A90
    ctx->pc = 0x395A60u;
    SET_GPR_U32(ctx, 31, 0x395A68u);
    ctx->pc = 0x395A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A60u;
    // 0x395a64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399A90u, 0x395A60u, 0x395A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395A68u;
label_395a68:
    // 0x395a68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x395A68u;
    {
        const bool branch_taken_0x395a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395a68) {
            ctx->pc = 0x395A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395a48;
        }
    }
    ctx->pc = 0x395A70u;
    // 0x395a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_395a74:
    // 0x395a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x395a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x395A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A7Cu;
        // 0x395a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395A84u;
    // 0x395a84: 0x0  nop
    ctx->pc = 0x395a84u;
    // NOP
    // 0x395a88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x395a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395a8c: 0x0  nop
    ctx->pc = 0x395a8cu;
    // NOP
    ctx->pc = 0x395a90u;
}
