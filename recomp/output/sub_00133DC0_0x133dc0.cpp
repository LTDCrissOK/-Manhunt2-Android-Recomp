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

// Function: sub_00133DC0
// Address: 0x133dc0 - 0x133de0
void sub_00133DC0_0x133dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133DC0_0x133dc0");
#endif

    switch (ctx->pc) {
        case 0x133dd4u: goto label_133dd4;
        default: break;
    }

    ctx->pc = 0x133dc0u;

    // 0x133dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133dc8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x133dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x133dcc: 0xc04cfcc  jal         func_133F30
    ctx->pc = 0x133DCCu;
    SET_GPR_U32(ctx, 31, 0x133DD4u);
    ctx->pc = 0x133DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DCCu;
    // 0x133dd0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F30u, 0x133DCCu, 0x133DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DD4u;
label_133dd4:
    // 0x133dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x133DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DD8u;
        // 0x133ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133DE0u;
}
