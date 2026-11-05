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

// Function: sub_00259460
// Address: 0x259460 - 0x259490
void sub_00259460_0x259460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259460_0x259460");
#endif

    switch (ctx->pc) {
        case 0x259478u: goto label_259478;
        default: break;
    }

    ctx->pc = 0x259460u;

    // 0x259460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259464: 0x24841110  addiu       $a0, $a0, 0x1110
    ctx->pc = 0x259464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4368));
    // 0x259468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25946c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x259470: 0xc0f7e00  jal         func_3DF800
    ctx->pc = 0x259470u;
    SET_GPR_U32(ctx, 31, 0x259478u);
    ctx->pc = 0x259474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259470u;
    // 0x259474: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF800u, 0x259470u, 0x259478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259478u;
label_259478:
    // 0x259478: 0xae0210d0  sw          $v0, 0x10D0($s0)
    ctx->pc = 0x259478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4304), GPR_U32(ctx, 2));
    // 0x25947c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25947cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x259480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259484: 0x3e00008  jr          $ra
    ctx->pc = 0x259484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259484u;
        // 0x259488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25948Cu;
    // 0x25948c: 0x0  nop
    ctx->pc = 0x25948cu;
    // NOP
    ctx->pc = 0x259490u;
}
