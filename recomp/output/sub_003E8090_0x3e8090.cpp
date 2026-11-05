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

// Function: sub_003E8090
// Address: 0x3e8090 - 0x3e80b0
void sub_003E8090_0x3e8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8090_0x3e8090");
#endif

    switch (ctx->pc) {
        case 0x3e80a0u: goto label_3e80a0;
        default: break;
    }

    ctx->pc = 0x3e8090u;

    // 0x3e8090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e8094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8098: 0xc0b036e  jal         func_2C0DB8
    ctx->pc = 0x3E8098u;
    SET_GPR_U32(ctx, 31, 0x3E80A0u);
    ctx->pc = 0x3E809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8098u;
    // 0x3e809c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DB8u, 0x3E8098u, 0x3E80A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E80A0u;
label_3e80a0:
    // 0x3e80a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e80a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e80a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E80A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80A4u;
        // 0x3e80a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E80A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E80ACu;
    // 0x3e80ac: 0x0  nop
    ctx->pc = 0x3e80acu;
    // NOP
    ctx->pc = 0x3e80b0u;
}
