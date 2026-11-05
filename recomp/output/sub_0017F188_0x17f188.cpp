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

// Function: sub_0017F188
// Address: 0x17f188 - 0x17f1b0
void sub_0017F188_0x17f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F188_0x17f188");
#endif

    switch (ctx->pc) {
        case 0x17f1a4u: goto label_17f1a4;
        default: break;
    }

    ctx->pc = 0x17f188u;

    // 0x17f188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f190: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f194: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F194u;
    {
        const bool branch_taken_0x17f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F194u;
        // 0x17f198: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f194) {
            ctx->pc = 0x17F1A8u;
            goto label_17f1a8;
        }
    }
    ctx->pc = 0x17F19Cu;
    // 0x17f19c: 0xc05fdb0  jal         func_17F6C0
    ctx->pc = 0x17F19Cu;
    SET_GPR_U32(ctx, 31, 0x17F1A4u);
    ctx->pc = 0x17F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6C0u, 0x17F19Cu, 0x17F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1A4u;
label_17f1a4:
    // 0x17f1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f1a8:
    // 0x17f1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F1A8u;
        // 0x17f1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F1B0u;
}
