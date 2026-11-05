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

// Function: sub_0011B838
// Address: 0x11b838 - 0x11b878
void sub_0011B838_0x11b838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B838_0x11b838");
#endif

    switch (ctx->pc) {
        case 0x11b85cu: goto label_11b85c;
        default: break;
    }

    ctx->pc = 0x11b838u;

    // 0x11b838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b83c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11b83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b844: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B844u;
    {
        const bool branch_taken_0x11b844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B844u;
        // 0x11b848: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b844) {
            ctx->pc = 0x11B868u;
            goto label_11b868;
        }
    }
    ctx->pc = 0x11B84Cu;
    // 0x11b84c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B84Cu;
    {
        const bool branch_taken_0x11b84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b84c) {
            ctx->pc = 0x11B850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B84Cu;
            // 0x11b850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B86Cu;
            goto label_11b86c;
        }
    }
    ctx->pc = 0x11B854u;
    // 0x11b854: 0xc044234  jal         func_1108D0
    ctx->pc = 0x11B854u;
    SET_GPR_U32(ctx, 31, 0x11B85Cu);
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x11B854u, 0x11B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B85Cu;
label_11b85c:
    // 0x11b85c: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x11b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x11b860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11B860u;
    {
        const bool branch_taken_0x11b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B860u;
        // 0x11b864: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b860) {
            ctx->pc = 0x11B86Cu;
            goto label_11b86c;
        }
    }
    ctx->pc = 0x11B868u;
label_11b868:
    // 0x11b868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11b868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b86c:
    // 0x11b86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b870: 0x3e00008  jr          $ra
    ctx->pc = 0x11B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B870u;
        // 0x11b874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B878u;
}
