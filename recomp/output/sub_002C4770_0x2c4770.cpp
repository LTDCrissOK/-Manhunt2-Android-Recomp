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

// Function: sub_002C4770
// Address: 0x2c4770 - 0x2c4798
void sub_002C4770_0x2c4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4770_0x2c4770");
#endif

    switch (ctx->pc) {
        case 0x2c4788u: goto label_2c4788;
        default: break;
    }

    ctx->pc = 0x2c4770u;

    // 0x2c4770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4774: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c4774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c4778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c477c: 0x24845ac0  addiu       $a0, $a0, 0x5AC0
    ctx->pc = 0x2c477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23232));
    // 0x2c4780: 0xc0c3346  jal         func_30CD18
    ctx->pc = 0x2C4780u;
    SET_GPR_U32(ctx, 31, 0x2C4788u);
    ctx->pc = 0x2C4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4780u;
    // 0x2c4784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CD18u, 0x2C4780u, 0x2C4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c478c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C478Cu;
        // 0x2c4790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4794u;
    // 0x2c4794: 0x0  nop
    ctx->pc = 0x2c4794u;
    // NOP
    ctx->pc = 0x2c4798u;
}
