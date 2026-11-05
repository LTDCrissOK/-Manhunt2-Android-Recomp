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

// Function: sub_0029A0C8
// Address: 0x29a0c8 - 0x29a0f8
void sub_0029A0C8_0x29a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A0C8_0x29a0c8");
#endif

    switch (ctx->pc) {
        case 0x29a0c8u: goto label_29a0c8;
        case 0x29a0ccu: goto label_29a0cc;
        case 0x29a0d0u: goto label_29a0d0;
        case 0x29a0d4u: goto label_29a0d4;
        case 0x29a0d8u: goto label_29a0d8;
        case 0x29a0dcu: goto label_29a0dc;
        case 0x29a0e0u: goto label_29a0e0;
        case 0x29a0e4u: goto label_29a0e4;
        case 0x29a0e8u: goto label_29a0e8;
        case 0x29a0ecu: goto label_29a0ec;
        case 0x29a0f0u: goto label_29a0f0;
        case 0x29a0f4u: goto label_29a0f4;
        default: break;
    }

    ctx->pc = 0x29a0c8u;

label_29a0c8:
    // 0x29a0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29a0cc:
    // 0x29a0cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29a0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a0d0:
    // 0x29a0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a0d4:
    // 0x29a0d4: 0x8c460084  lw          $a2, 0x84($v0)
    ctx->pc = 0x29a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_29a0d8:
    // 0x29a0d8: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x29a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_29a0dc:
    // 0x29a0dc: 0xac460080  sw          $a2, 0x80($v0)
    ctx->pc = 0x29a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
label_29a0e0:
    // 0x29a0e0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_29a0e4:
    // 0x29a0e4: 0x60f809  jalr        $v1
label_29a0e8:
    if (ctx->pc == 0x29A0E8u) {
        ctx->pc = 0x29A0ECu;
        goto label_29a0ec;
    }
    ctx->pc = 0x29A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29A0ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0E4u, 0x29A0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A0ECu;
label_29a0ec:
    // 0x29a0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a0f0:
    // 0x29a0f0: 0x3e00008  jr          $ra
label_29a0f4:
    if (ctx->pc == 0x29A0F4u) {
        ctx->pc = 0x29A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0F0u;
        // 0x29a0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0F8u;
        goto label_fallthrough_0x29a0f0;
    }
    ctx->pc = 0x29A0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0F0u;
        // 0x29a0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a0f0:
    ctx->pc = 0x29A0F8u;
}
