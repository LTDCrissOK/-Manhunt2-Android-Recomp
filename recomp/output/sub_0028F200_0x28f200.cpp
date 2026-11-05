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

// Function: sub_0028F200
// Address: 0x28f200 - 0x28f228
void sub_0028F200_0x28f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F200_0x28f200");
#endif

    switch (ctx->pc) {
        case 0x28f218u: goto label_28f218;
        default: break;
    }

    ctx->pc = 0x28f200u;

    // 0x28f200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28f204: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28f204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28f208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f20c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f210: 0xc0a3c62  jal         func_28F188
    ctx->pc = 0x28F210u;
    SET_GPR_U32(ctx, 31, 0x28F218u);
    ctx->pc = 0x28F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F210u;
    // 0x28f214: 0x24841138  addiu       $a0, $a0, 0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F188u, 0x28F210u, 0x28F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F218u;
label_28f218:
    // 0x28f218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f21c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F21Cu;
        // 0x28f220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F224u;
    // 0x28f224: 0x0  nop
    ctx->pc = 0x28f224u;
    // NOP
    ctx->pc = 0x28f228u;
}
