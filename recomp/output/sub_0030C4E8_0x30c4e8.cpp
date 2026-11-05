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

// Function: sub_0030C4E8
// Address: 0x30c4e8 - 0x30c510
void sub_0030C4E8_0x30c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C4E8_0x30c4e8");
#endif

    switch (ctx->pc) {
        case 0x30c500u: goto label_30c500;
        default: break;
    }

    ctx->pc = 0x30c4e8u;

    // 0x30c4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c4ec: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c4f4: 0x24a5c460  addiu       $a1, $a1, -0x3BA0
    ctx->pc = 0x30c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952032));
    // 0x30c4f8: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C4F8u;
    SET_GPR_U32(ctx, 31, 0x30C500u);
    ctx->pc = 0x30C4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4F8u;
    // 0x30c4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C4F8u, 0x30C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C500u;
label_30c500:
    // 0x30c500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c504: 0x3e00008  jr          $ra
    ctx->pc = 0x30C504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C504u;
        // 0x30c508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C50Cu;
    // 0x30c50c: 0x0  nop
    ctx->pc = 0x30c50cu;
    // NOP
    ctx->pc = 0x30c510u;
}
