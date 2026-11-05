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

// Function: sub_003125C0
// Address: 0x3125c0 - 0x3125f0
void sub_003125C0_0x3125c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003125C0_0x3125c0");
#endif

    switch (ctx->pc) {
        case 0x3125e0u: goto label_3125e0;
        default: break;
    }

    ctx->pc = 0x3125c0u;

    // 0x3125c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3125c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3125c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3125c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3125c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3125cc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x3125ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3125d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3125d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3125d4: 0x24a52588  addiu       $a1, $a1, 0x2588
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9608));
    // 0x3125d8: 0xc0c4898  jal         func_312260
    ctx->pc = 0x3125D8u;
    SET_GPR_U32(ctx, 31, 0x3125E0u);
    ctx->pc = 0x3125DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125D8u;
    // 0x3125dc: 0xac42000c  sw          $v0, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x3125D8u, 0x3125E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125E0u;
label_3125e0:
    // 0x3125e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3125e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3125e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3125E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3125E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125E4u;
        // 0x3125e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3125E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3125ECu;
    // 0x3125ec: 0x0  nop
    ctx->pc = 0x3125ecu;
    // NOP
    ctx->pc = 0x3125f0u;
}
