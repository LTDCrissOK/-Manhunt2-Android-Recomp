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

// Function: sub_002A7CF8
// Address: 0x2a7cf8 - 0x2a7d20
void sub_002A7CF8_0x2a7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7CF8_0x2a7cf8");
#endif

    switch (ctx->pc) {
        case 0x2a7d10u: goto label_2a7d10;
        default: break;
    }

    ctx->pc = 0x2a7cf8u;

    // 0x2a7cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7cfc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a7d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7d04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7d08: 0xc0a9f1e  jal         func_2A7C78
    ctx->pc = 0x2A7D08u;
    SET_GPR_U32(ctx, 31, 0x2A7D10u);
    ctx->pc = 0x2A7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D08u;
    // 0x2a7d0c: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7C78u, 0x2A7D08u, 0x2A7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D10u;
label_2a7d10:
    // 0x2a7d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D14u;
        // 0x2a7d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D1Cu;
    // 0x2a7d1c: 0x0  nop
    ctx->pc = 0x2a7d1cu;
    // NOP
    ctx->pc = 0x2a7d20u;
}
