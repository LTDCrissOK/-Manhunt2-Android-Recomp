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

// Function: sub_003AD7A8
// Address: 0x3ad7a8 - 0x3ad7d0
void sub_003AD7A8_0x3ad7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD7A8_0x3ad7a8");
#endif

    switch (ctx->pc) {
        case 0x3ad7a8u: goto label_3ad7a8;
        case 0x3ad7acu: goto label_3ad7ac;
        case 0x3ad7b0u: goto label_3ad7b0;
        case 0x3ad7b4u: goto label_3ad7b4;
        case 0x3ad7b8u: goto label_3ad7b8;
        case 0x3ad7bcu: goto label_3ad7bc;
        case 0x3ad7c0u: goto label_3ad7c0;
        case 0x3ad7c4u: goto label_3ad7c4;
        case 0x3ad7c8u: goto label_3ad7c8;
        case 0x3ad7ccu: goto label_3ad7cc;
        default: break;
    }

    ctx->pc = 0x3ad7a8u;

label_3ad7a8:
    // 0x3ad7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad7ac:
    // 0x3ad7ac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad7b0:
    // 0x3ad7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad7b4:
    // 0x3ad7b4: 0x8c4336f0  lw          $v1, 0x36F0($v0)
    ctx->pc = 0x3ad7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14064)));
label_3ad7b8:
    // 0x3ad7b8: 0x60f809  jalr        $v1
label_3ad7bc:
    if (ctx->pc == 0x3AD7BCu) {
        ctx->pc = 0x3AD7C0u;
        goto label_3ad7c0;
    }
    ctx->pc = 0x3AD7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD7C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD7B8u, 0x3AD7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD7C0u;
label_3ad7c0:
    // 0x3ad7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad7c4:
    // 0x3ad7c4: 0x3e00008  jr          $ra
label_3ad7c8:
    if (ctx->pc == 0x3AD7C8u) {
        ctx->pc = 0x3AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C4u;
        // 0x3ad7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7CCu;
        goto label_3ad7cc;
    }
    ctx->pc = 0x3AD7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7C4u;
        // 0x3ad7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD7CCu;
label_3ad7cc:
    // 0x3ad7cc: 0x0  nop
    ctx->pc = 0x3ad7ccu;
    // NOP
    ctx->pc = 0x3ad7d0u;
}
