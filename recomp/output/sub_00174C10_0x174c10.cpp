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

// Function: sub_00174C10
// Address: 0x174c10 - 0x174c68
void sub_00174C10_0x174c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174C10_0x174c10");
#endif

    switch (ctx->pc) {
        case 0x174c28u: goto label_174c28;
        case 0x174c48u: goto label_174c48;
        case 0x174c58u: goto label_174c58;
        default: break;
    }

    ctx->pc = 0x174c10u;

    // 0x174c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174c14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174c20: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174C20u;
    SET_GPR_U32(ctx, 31, 0x174C28u);
    ctx->pc = 0x174C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C20u;
    // 0x174c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174C20u, 0x174C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C28u;
label_174c28:
    // 0x174c28: 0x8e0302b0  lw          $v1, 0x2B0($s0)
    ctx->pc = 0x174c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x174c2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174C2Cu;
    {
        const bool branch_taken_0x174c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C2Cu;
        // 0x174c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c2c) {
            ctx->pc = 0x174C3Cu;
            goto label_174c3c;
        }
    }
    ctx->pc = 0x174C34u;
    // 0x174c34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174C34u;
    {
        const bool branch_taken_0x174c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C34u;
        // 0x174c38: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c34) {
            ctx->pc = 0x174C40u;
            goto label_174c40;
        }
    }
    ctx->pc = 0x174C3Cu;
label_174c3c:
    // 0x174c3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_174c40:
    // 0x174c40: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x174C40u;
    SET_GPR_U32(ctx, 31, 0x174C48u);
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x174C40u, 0x174C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C48u;
label_174c48:
    // 0x174c48: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x174c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x174c4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c50: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174C50u;
    SET_GPR_U32(ctx, 31, 0x174C58u);
    ctx->pc = 0x174C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C50u;
    // 0x174c54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174C50u, 0x174C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C58u;
label_174c58:
    // 0x174c58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174c60: 0x3e00008  jr          $ra
    ctx->pc = 0x174C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C60u;
        // 0x174c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174C68u;
}
