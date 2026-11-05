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

// Function: sub_002C4740
// Address: 0x2c4740 - 0x2c4768
void sub_002C4740_0x2c4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4740_0x2c4740");
#endif

    switch (ctx->pc) {
        case 0x2c4758u: goto label_2c4758;
        default: break;
    }

    ctx->pc = 0x2c4740u;

    // 0x2c4740: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c4744: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4748: 0x8c445ac0  lw          $a0, 0x5AC0($v0)
    ctx->pc = 0x2c4748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x575AC0u));
    // 0x2c474c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4750: 0xc0c7a4c  jal         func_31E930
    ctx->pc = 0x2C4750u;
    SET_GPR_U32(ctx, 31, 0x2C4758u);
    ctx->pc = 0x31E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E930u, 0x2C4750u, 0x2C4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4758u;
label_2c4758:
    // 0x2c4758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c475c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C475Cu;
        // 0x2c4760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4764u;
    // 0x2c4764: 0x0  nop
    ctx->pc = 0x2c4764u;
    // NOP
    ctx->pc = 0x2c4768u;
}
