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

// Function: sub_002C9DB0
// Address: 0x2c9db0 - 0x2c9de8
void sub_002C9DB0_0x2c9db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DB0_0x2c9db0");
#endif

    switch (ctx->pc) {
        case 0x2c9dccu: goto label_2c9dcc;
        default: break;
    }

    ctx->pc = 0x2c9db0u;

    // 0x2c9db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9db4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2c9db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9dbc: 0x24a55b88  addiu       $a1, $a1, 0x5B88
    ctx->pc = 0x2c9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23432));
    // 0x2c9dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c9dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c9dc4: 0xc0b1bd8  jal         func_2C6F60
    ctx->pc = 0x2C9DC4u;
    SET_GPR_U32(ctx, 31, 0x2C9DCCu);
    ctx->pc = 0x2C9DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DC4u;
    // 0x2c9dc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F60u, 0x2C9DC4u, 0x2C9DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DCCu;
label_2c9dcc:
    // 0x2c9dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c9dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c9dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c9dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DD8u;
        // 0x2c9ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9DE0u;
    // 0x2c9de0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c9de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c9de4: 0x0  nop
    ctx->pc = 0x2c9de4u;
    // NOP
    ctx->pc = 0x2c9de8u;
}
