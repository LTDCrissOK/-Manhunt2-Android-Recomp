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

// Function: sub_002DDED8
// Address: 0x2dded8 - 0x2ddf08
void sub_002DDED8_0x2dded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDED8_0x2dded8");
#endif

    switch (ctx->pc) {
        case 0x2ddeecu: goto label_2ddeec;
        case 0x2ddef4u: goto label_2ddef4;
        default: break;
    }

    ctx->pc = 0x2dded8u;

    // 0x2dded8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dded8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddee4: 0xc0b72fc  jal         func_2DCBF0
    ctx->pc = 0x2DDEE4u;
    SET_GPR_U32(ctx, 31, 0x2DDEECu);
    ctx->pc = 0x2DDEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEE4u;
    // 0x2ddee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCBF0u, 0x2DDEE4u, 0x2DDEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEECu;
label_2ddeec:
    // 0x2ddeec: 0xc0b7696  jal         func_2DDA58
    ctx->pc = 0x2DDEECu;
    SET_GPR_U32(ctx, 31, 0x2DDEF4u);
    ctx->pc = 0x2DDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDEECu;
    // 0x2ddef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA58u, 0x2DDEECu, 0x2DDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEF4u;
label_2ddef4:
    // 0x2ddef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddef8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddefc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEFCu;
        // 0x2ddf00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF04u;
    // 0x2ddf04: 0x0  nop
    ctx->pc = 0x2ddf04u;
    // NOP
    ctx->pc = 0x2ddf08u;
}
