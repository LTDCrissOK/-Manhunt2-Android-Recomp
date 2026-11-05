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

// Function: sub_002581B8
// Address: 0x2581b8 - 0x2581e0
void sub_002581B8_0x2581b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002581B8_0x2581b8");
#endif

    switch (ctx->pc) {
        case 0x2581c8u: goto label_2581c8;
        case 0x2581d0u: goto label_2581d0;
        default: break;
    }

    ctx->pc = 0x2581b8u;

    // 0x2581b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2581b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2581bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2581bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2581c0: 0xc066608  jal         func_199820
    ctx->pc = 0x2581C0u;
    SET_GPR_U32(ctx, 31, 0x2581C8u);
    ctx->pc = 0x199820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199820u, 0x2581C0u, 0x2581C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2581C8u;
label_2581c8:
    // 0x2581c8: 0xc095ee8  jal         func_257BA0
    ctx->pc = 0x2581C8u;
    SET_GPR_U32(ctx, 31, 0x2581D0u);
    ctx->pc = 0x257BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257BA0u, 0x2581C8u, 0x2581D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2581D0u;
label_2581d0:
    // 0x2581d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2581d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2581d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2581D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2581D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581D4u;
        // 0x2581d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2581DCu;
    // 0x2581dc: 0x0  nop
    ctx->pc = 0x2581dcu;
    // NOP
    ctx->pc = 0x2581e0u;
}
