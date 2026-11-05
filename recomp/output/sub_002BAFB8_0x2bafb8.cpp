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

// Function: sub_002BAFB8
// Address: 0x2bafb8 - 0x2bafd8
void sub_002BAFB8_0x2bafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAFB8_0x2bafb8");
#endif

    switch (ctx->pc) {
        case 0x2bafc8u: goto label_2bafc8;
        default: break;
    }

    ctx->pc = 0x2bafb8u;

    // 0x2bafb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bafb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bafbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bafbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bafc0: 0xc0ae998  jal         func_2BA660
    ctx->pc = 0x2BAFC0u;
    SET_GPR_U32(ctx, 31, 0x2BAFC8u);
    ctx->pc = 0x2BA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA660u, 0x2BAFC0u, 0x2BAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFC8u;
label_2bafc8:
    // 0x2bafc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bafcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFCCu;
        // 0x2bafd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFD4u;
    // 0x2bafd4: 0x0  nop
    ctx->pc = 0x2bafd4u;
    // NOP
    ctx->pc = 0x2bafd8u;
}
