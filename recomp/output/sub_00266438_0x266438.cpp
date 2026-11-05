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

// Function: sub_00266438
// Address: 0x266438 - 0x266460
void sub_00266438_0x266438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266438_0x266438");
#endif

    switch (ctx->pc) {
        case 0x266438u: goto label_266438;
        case 0x26643cu: goto label_26643c;
        case 0x266440u: goto label_266440;
        case 0x266444u: goto label_266444;
        case 0x266448u: goto label_266448;
        case 0x26644cu: goto label_26644c;
        case 0x266450u: goto label_266450;
        case 0x266454u: goto label_266454;
        case 0x266458u: goto label_266458;
        case 0x26645cu: goto label_26645c;
        default: break;
    }

    ctx->pc = 0x266438u;

label_266438:
    // 0x266438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_26643c:
    // 0x26643c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_266440:
    // 0x266440: 0x8c84010c  lw          $a0, 0x10C($a0)
    ctx->pc = 0x266440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_266444:
    // 0x266444: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x266444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_266448:
    // 0x266448: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x266448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_26644c:
    // 0x26644c: 0x40f809  jalr        $v0
label_266450:
    if (ctx->pc == 0x266450u) {
        ctx->pc = 0x266454u;
        goto label_266454;
    }
    ctx->pc = 0x26644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x266454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26644Cu, 0x266454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x266454u;
label_266454:
    // 0x266454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266458:
    // 0x266458: 0x3e00008  jr          $ra
label_26645c:
    if (ctx->pc == 0x26645Cu) {
        ctx->pc = 0x26645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266458u;
        // 0x26645c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x266460u;
        goto label_fallthrough_0x266458;
    }
    ctx->pc = 0x266458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266458u;
        // 0x26645c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x266458:
    ctx->pc = 0x266460u;
}
