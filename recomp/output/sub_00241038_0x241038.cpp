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

// Function: sub_00241038
// Address: 0x241038 - 0x241058
void sub_00241038_0x241038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241038_0x241038");
#endif

    switch (ctx->pc) {
        case 0x241048u: goto label_241048;
        default: break;
    }

    ctx->pc = 0x241038u;

    // 0x241038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24103c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24103cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x241040: 0xc092f08  jal         func_24BC20
    ctx->pc = 0x241040u;
    SET_GPR_U32(ctx, 31, 0x241048u);
    ctx->pc = 0x24BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BC20u, 0x241040u, 0x241048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241048u;
label_241048:
    // 0x241048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x241048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24104c: 0x3e00008  jr          $ra
    ctx->pc = 0x24104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24104Cu;
        // 0x241050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241054u;
    // 0x241054: 0x0  nop
    ctx->pc = 0x241054u;
    // NOP
    ctx->pc = 0x241058u;
}
