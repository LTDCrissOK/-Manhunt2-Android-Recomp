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

// Function: sub_002D7E40
// Address: 0x2d7e40 - 0x2d7e68
void sub_002D7E40_0x2d7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7E40_0x2d7e40");
#endif

    switch (ctx->pc) {
        case 0x2d7e58u: goto label_2d7e58;
        default: break;
    }

    ctx->pc = 0x2d7e40u;

    // 0x2d7e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d7e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d7e44: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2d7e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2d7e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7e4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d7e50: 0xc0b5fbe  jal         func_2D7EF8
    ctx->pc = 0x2D7E50u;
    SET_GPR_U32(ctx, 31, 0x2D7E58u);
    ctx->pc = 0x2D7E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E50u;
    // 0x2d7e54: 0x2484b090  addiu       $a0, $a0, -0x4F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7EF8u, 0x2D7E50u, 0x2D7E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E58u;
label_2d7e58:
    // 0x2d7e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E5Cu;
        // 0x2d7e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7E64u;
    // 0x2d7e64: 0x0  nop
    ctx->pc = 0x2d7e64u;
    // NOP
    ctx->pc = 0x2d7e68u;
}
