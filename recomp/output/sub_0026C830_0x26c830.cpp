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

// Function: sub_0026C830
// Address: 0x26c830 - 0x26c868
void sub_0026C830_0x26c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C830_0x26c830");
#endif

    switch (ctx->pc) {
        case 0x26c844u: goto label_26c844;
        case 0x26c858u: goto label_26c858;
        default: break;
    }

    ctx->pc = 0x26c830u;

    // 0x26c830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c838: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26c83c: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x26C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C83Cu;
    // 0x26c840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x26C83Cu, 0x26C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x26c848: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x26c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x26c84c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26c84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c850: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x26C850u;
    SET_GPR_U32(ctx, 31, 0x26C858u);
    ctx->pc = 0x26C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C850u;
    // 0x26c854: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x26C850u, 0x26C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C858u;
label_26c858:
    // 0x26c858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c85c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26c85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c860: 0x3e00008  jr          $ra
    ctx->pc = 0x26C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C860u;
        // 0x26c864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C868u;
}
