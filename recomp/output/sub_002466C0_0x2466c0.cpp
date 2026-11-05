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

// Function: sub_002466C0
// Address: 0x2466c0 - 0x2466f0
void sub_002466C0_0x2466c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002466C0_0x2466c0");
#endif

    switch (ctx->pc) {
        case 0x2466c0u: goto label_2466c0;
        case 0x2466c4u: goto label_2466c4;
        case 0x2466c8u: goto label_2466c8;
        case 0x2466ccu: goto label_2466cc;
        case 0x2466d0u: goto label_2466d0;
        case 0x2466d4u: goto label_2466d4;
        case 0x2466d8u: goto label_2466d8;
        case 0x2466dcu: goto label_2466dc;
        case 0x2466e0u: goto label_2466e0;
        case 0x2466e4u: goto label_2466e4;
        case 0x2466e8u: goto label_2466e8;
        case 0x2466ecu: goto label_2466ec;
        default: break;
    }

    ctx->pc = 0x2466c0u;

label_2466c0:
    // 0x2466c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2466c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2466c4:
    // 0x2466c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2466c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2466c8:
    // 0x2466c8: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x2466c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_2466cc:
    // 0x2466cc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2466ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2466d0:
    // 0x2466d0: 0x8ca4010c  lw          $a0, 0x10C($a1)
    ctx->pc = 0x2466d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_2466d4:
    // 0x2466d4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2466d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2466d8:
    // 0x2466d8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2466d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2466dc:
    // 0x2466dc: 0x40f809  jalr        $v0
label_2466e0:
    if (ctx->pc == 0x2466E0u) {
        ctx->pc = 0x2466E4u;
        goto label_2466e4;
    }
    ctx->pc = 0x2466DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2466E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466DCu, 0x2466E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2466E4u;
label_2466e4:
    // 0x2466e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2466e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2466e8:
    // 0x2466e8: 0x3e00008  jr          $ra
label_2466ec:
    if (ctx->pc == 0x2466ECu) {
        ctx->pc = 0x2466ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E8u;
        // 0x2466ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2466F0u;
        goto label_fallthrough_0x2466e8;
    }
    ctx->pc = 0x2466E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2466ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2466E8u;
        // 0x2466ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2466E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2466e8:
    ctx->pc = 0x2466F0u;
}
