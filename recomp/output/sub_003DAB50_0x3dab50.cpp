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

// Function: sub_003DAB50
// Address: 0x3dab50 - 0x3dab80
void sub_003DAB50_0x3dab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAB50_0x3dab50");
#endif

    switch (ctx->pc) {
        case 0x3dab68u: goto label_3dab68;
        default: break;
    }

    ctx->pc = 0x3dab50u;

    // 0x3dab50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dab54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dab58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dab5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dab5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab60: 0xc0f6ace  jal         func_3DAB38
    ctx->pc = 0x3DAB60u;
    SET_GPR_U32(ctx, 31, 0x3DAB68u);
    ctx->pc = 0x3DAB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB60u;
    // 0x3dab64: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAB38u, 0x3DAB60u, 0x3DAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB68u;
label_3dab68:
    // 0x3dab68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dab68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dab6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3dab6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dab70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dab70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dab74: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB74u;
        // 0x3dab78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAB7Cu;
    // 0x3dab7c: 0x0  nop
    ctx->pc = 0x3dab7cu;
    // NOP
    ctx->pc = 0x3dab80u;
}
