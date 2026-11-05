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

// Function: sub_002D4820
// Address: 0x2d4820 - 0x2d4848
void sub_002D4820_0x2d4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4820_0x2d4820");
#endif

    switch (ctx->pc) {
        case 0x2d4838u: goto label_2d4838;
        default: break;
    }

    ctx->pc = 0x2d4820u;

    // 0x2d4820: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d4820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4824: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4828: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d4828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d482c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4830: 0xc0b51d6  jal         func_2D4758
    ctx->pc = 0x2D4830u;
    SET_GPR_U32(ctx, 31, 0x2D4838u);
    ctx->pc = 0x2D4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4830u;
    // 0x2d4834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4758u, 0x2D4830u, 0x2D4838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4838u;
label_2d4838:
    // 0x2d4838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d4838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d483c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D483Cu;
        // 0x2d4840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4844u;
    // 0x2d4844: 0x0  nop
    ctx->pc = 0x2d4844u;
    // NOP
    ctx->pc = 0x2d4848u;
}
