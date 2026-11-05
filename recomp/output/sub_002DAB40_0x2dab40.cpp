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

// Function: sub_002DAB40
// Address: 0x2dab40 - 0x2dab68
void sub_002DAB40_0x2dab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAB40_0x2dab40");
#endif

    switch (ctx->pc) {
        case 0x2dab54u: goto label_2dab54;
        default: break;
    }

    ctx->pc = 0x2dab40u;

    // 0x2dab40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dab44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dab48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dab4c: 0xc0b6a90  jal         func_2DAA40
    ctx->pc = 0x2DAB4Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB54u);
    ctx->pc = 0x2DAB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAB4Cu;
    // 0x2dab50: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAA40u, 0x2DAB4Cu, 0x2DAB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB54u;
label_2dab54:
    // 0x2dab54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dab54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dab58: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAB58u;
        // 0x2dab5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAB60u;
    // 0x2dab60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dab64: 0x0  nop
    ctx->pc = 0x2dab64u;
    // NOP
    ctx->pc = 0x2dab68u;
}
