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

// Function: sub_002260F8
// Address: 0x2260f8 - 0x226138
void sub_002260F8_0x2260f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002260F8_0x2260f8");
#endif

    switch (ctx->pc) {
        case 0x226120u: goto label_226120;
        case 0x226128u: goto label_226128;
        default: break;
    }

    ctx->pc = 0x2260f8u;

    // 0x2260f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2260fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2260fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x226100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x226104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x226104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226108: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x22610c: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x226110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226110u;
    {
        const bool branch_taken_0x226110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226110) {
            ctx->pc = 0x226120u;
            goto label_226120;
        }
    }
    ctx->pc = 0x226118u;
    // 0x226118: 0xc0b8102  jal         func_2E0408
    ctx->pc = 0x226118u;
    SET_GPR_U32(ctx, 31, 0x226120u);
    ctx->pc = 0x2E0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0408u, 0x226118u, 0x226120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226120u;
label_226120:
    // 0x226120: 0xc084048  jal         func_210120
    ctx->pc = 0x226120u;
    SET_GPR_U32(ctx, 31, 0x226128u);
    ctx->pc = 0x226124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226120u;
    // 0x226124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x226120u, 0x226128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226128u;
label_226128:
    // 0x226128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22612c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22612cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226130: 0x3e00008  jr          $ra
    ctx->pc = 0x226130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226130u;
        // 0x226134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226138u;
}
