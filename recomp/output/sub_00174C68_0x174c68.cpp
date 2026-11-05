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

// Function: sub_00174C68
// Address: 0x174c68 - 0x174cc0
void sub_00174C68_0x174c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C68_0x174c68");
#endif

    switch (ctx->pc) {
        case 0x174c80u: goto label_174c80;
        case 0x174ca0u: goto label_174ca0;
        case 0x174cb0u: goto label_174cb0;
        default: break;
    }

    ctx->pc = 0x174c68u;

    // 0x174c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174c6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174c78: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174C78u;
    SET_GPR_U32(ctx, 31, 0x174C80u);
    ctx->pc = 0x174C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C78u;
    // 0x174c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174C78u, 0x174C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C80u;
label_174c80:
    // 0x174c80: 0x8e0302b0  lw          $v1, 0x2B0($s0)
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x174c84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174C84u;
    {
        const bool branch_taken_0x174c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C84u;
        // 0x174c88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c84) {
            ctx->pc = 0x174C94u;
            goto label_174c94;
        }
    }
    ctx->pc = 0x174C8Cu;
    // 0x174c8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174C8Cu;
    {
        const bool branch_taken_0x174c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C8Cu;
        // 0x174c90: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c8c) {
            ctx->pc = 0x174C98u;
            goto label_174c98;
        }
    }
    ctx->pc = 0x174C94u;
label_174c94:
    // 0x174c94: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x174c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_174c98:
    // 0x174c98: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x174C98u;
    SET_GPR_U32(ctx, 31, 0x174CA0u);
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x174C98u, 0x174CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CA0u;
label_174ca0:
    // 0x174ca0: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x174ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x174ca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174CA8u;
    SET_GPR_U32(ctx, 31, 0x174CB0u);
    ctx->pc = 0x174CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174CA8u;
    // 0x174cac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174CA8u, 0x174CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CB0u;
label_174cb0:
    // 0x174cb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174cb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x174CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CB8u;
        // 0x174cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174CC0u;
}
