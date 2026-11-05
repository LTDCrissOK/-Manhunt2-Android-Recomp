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

// Function: sub_002C47D0
// Address: 0x2c47d0 - 0x2c47f8
void sub_002C47D0_0x2c47d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C47D0_0x2c47d0");
#endif

    switch (ctx->pc) {
        case 0x2c47d0u: goto label_2c47d0;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47d8u: goto label_2c47d8;
        case 0x2c47dcu: goto label_2c47dc;
        case 0x2c47e0u: goto label_2c47e0;
        case 0x2c47e4u: goto label_2c47e4;
        case 0x2c47e8u: goto label_2c47e8;
        case 0x2c47ecu: goto label_2c47ec;
        case 0x2c47f0u: goto label_2c47f0;
        case 0x2c47f4u: goto label_2c47f4;
        default: break;
    }

    ctx->pc = 0x2c47d0u;

label_2c47d0:
    // 0x2c47d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c47d4:
    // 0x2c47d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c47d8:
    // 0x2c47d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c47d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c47dc:
    // 0x2c47dc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c47e0:
    // 0x2c47e0: 0x40f809  jalr        $v0
label_2c47e4:
    if (ctx->pc == 0x2C47E4u) {
        ctx->pc = 0x2C47E8u;
        goto label_2c47e8;
    }
    ctx->pc = 0x2C47E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C47E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C47E0u, 0x2C47E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C47E8u;
label_2c47e8:
    // 0x2c47e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c47e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c47ec:
    // 0x2c47ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c47ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c47f0:
    // 0x2c47f0: 0x3e00008  jr          $ra
label_2c47f4:
    if (ctx->pc == 0x2C47F4u) {
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F0u;
        // 0x2c47f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47F8u;
        goto label_fallthrough_0x2c47f0;
    }
    ctx->pc = 0x2C47F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F0u;
        // 0x2c47f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C47F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c47f0:
    ctx->pc = 0x2C47F8u;
}
