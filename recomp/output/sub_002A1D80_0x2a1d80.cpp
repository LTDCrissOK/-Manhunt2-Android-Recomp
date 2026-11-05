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

// Function: sub_002A1D80
// Address: 0x2a1d80 - 0x2a1dc0
void sub_002A1D80_0x2a1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1D80_0x2a1d80");
#endif

    switch (ctx->pc) {
        case 0x2a1d94u: goto label_2a1d94;
        default: break;
    }

    ctx->pc = 0x2a1d80u;

    // 0x2a1d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a1d8c: 0xc0a8746  jal         func_2A1D18
    ctx->pc = 0x2A1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D94u);
    ctx->pc = 0x2A1D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D8Cu;
    // 0x2a1d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D18u, 0x2A1D8Cu, 0x2A1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D94u;
label_2a1d94:
    // 0x2a1d94: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x2a1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x2a1d98: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2a1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a1d9c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2a1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2a1da0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2a1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x2a1da4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2a1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2a1da8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2a1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x2a1dac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1db0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a1db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DB4u;
        // 0x2a1db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1DBCu;
    // 0x2a1dbc: 0x0  nop
    ctx->pc = 0x2a1dbcu;
    // NOP
    ctx->pc = 0x2a1dc0u;
}
