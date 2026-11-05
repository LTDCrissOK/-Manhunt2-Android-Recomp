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

// Function: sub_0030F6E0
// Address: 0x30f6e0 - 0x30f708
void sub_0030F6E0_0x30f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F6E0_0x30f6e0");
#endif

    switch (ctx->pc) {
        case 0x30f6f8u: goto label_30f6f8;
        default: break;
    }

    ctx->pc = 0x30f6e0u;

    // 0x30f6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30f6e4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x30f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x30f6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30f6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30f6ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x30f6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f6f0: 0xc0c3e10  jal         func_30F840
    ctx->pc = 0x30F6F0u;
    SET_GPR_U32(ctx, 31, 0x30F6F8u);
    ctx->pc = 0x30F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F6F0u;
    // 0x30f6f4: 0x248417a0  addiu       $a0, $a0, 0x17A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F840u, 0x30F6F0u, 0x30F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F6F8u;
label_30f6f8:
    // 0x30f6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6FCu;
        // 0x30f700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F704u;
    // 0x30f704: 0x0  nop
    ctx->pc = 0x30f704u;
    // NOP
    ctx->pc = 0x30f708u;
}
