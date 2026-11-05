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

// Function: sub_00366790
// Address: 0x366790 - 0x3667e8
void sub_00366790_0x366790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366790_0x366790");
#endif

    switch (ctx->pc) {
        case 0x3667a0u: goto label_3667a0;
        default: break;
    }

    ctx->pc = 0x366790u;

    // 0x366790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366798: 0xc0d9924  jal         func_366490
    ctx->pc = 0x366798u;
    SET_GPR_U32(ctx, 31, 0x3667A0u);
    ctx->pc = 0x366490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366490u, 0x366798u, 0x3667A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667A0u;
label_3667a0:
    // 0x3667a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3667a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3667a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3667a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3667a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3667A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3667ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667A8u;
        // 0x3667ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3667A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3667B0u;
    // 0x3667b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667b4: 0x0  nop
    ctx->pc = 0x3667b4u;
    // NOP
    // 0x3667b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667bc: 0x0  nop
    ctx->pc = 0x3667bcu;
    // NOP
    // 0x3667c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667c4: 0x0  nop
    ctx->pc = 0x3667c4u;
    // NOP
    // 0x3667c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667cc: 0x0  nop
    ctx->pc = 0x3667ccu;
    // NOP
    // 0x3667d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667d4: 0x0  nop
    ctx->pc = 0x3667d4u;
    // NOP
    // 0x3667d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667dc: 0x0  nop
    ctx->pc = 0x3667dcu;
    // NOP
    // 0x3667e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3667e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3667e4: 0x0  nop
    ctx->pc = 0x3667e4u;
    // NOP
    ctx->pc = 0x3667e8u;
}
