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

// Function: sub_003AD7D0
// Address: 0x3ad7d0 - 0x3ad808
void sub_003AD7D0_0x3ad7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD7D0_0x3ad7d0");
#endif

    switch (ctx->pc) {
        case 0x3ad7d0u: goto label_3ad7d0;
        case 0x3ad7d4u: goto label_3ad7d4;
        case 0x3ad7d8u: goto label_3ad7d8;
        case 0x3ad7dcu: goto label_3ad7dc;
        case 0x3ad7e0u: goto label_3ad7e0;
        case 0x3ad7e4u: goto label_3ad7e4;
        case 0x3ad7e8u: goto label_3ad7e8;
        case 0x3ad7ecu: goto label_3ad7ec;
        case 0x3ad7f0u: goto label_3ad7f0;
        case 0x3ad7f4u: goto label_3ad7f4;
        case 0x3ad7f8u: goto label_3ad7f8;
        case 0x3ad7fcu: goto label_3ad7fc;
        case 0x3ad800u: goto label_3ad800;
        case 0x3ad804u: goto label_3ad804;
        default: break;
    }

    ctx->pc = 0x3ad7d0u;

label_3ad7d0:
    // 0x3ad7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad7d4:
    // 0x3ad7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad7d8:
    // 0x3ad7d8: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x3ad7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_3ad7dc:
    // 0x3ad7dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad7e0:
    if (ctx->pc == 0x3AD7E0u) {
        ctx->pc = 0x3AD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7DCu;
        // 0x3ad7e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD7E4u;
        goto label_3ad7e4;
    }
    ctx->pc = 0x3AD7DCu;
    {
        const bool branch_taken_0x3ad7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7DCu;
        // 0x3ad7e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad7dc) {
            ctx->pc = 0x3AD7F4u;
            goto label_3ad7f4;
        }
    }
    ctx->pc = 0x3AD7E4u;
label_3ad7e4:
    // 0x3ad7e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad7e8:
    // 0x3ad7e8: 0x8c4336ec  lw          $v1, 0x36EC($v0)
    ctx->pc = 0x3ad7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14060)));
label_3ad7ec:
    // 0x3ad7ec: 0x60f809  jalr        $v1
label_3ad7f0:
    if (ctx->pc == 0x3AD7F0u) {
        ctx->pc = 0x3AD7F4u;
        goto label_3ad7f4;
    }
    ctx->pc = 0x3AD7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD7F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD7ECu, 0x3AD7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD7F4u;
label_3ad7f4:
    // 0x3ad7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad7f8:
    // 0x3ad7f8: 0x3e00008  jr          $ra
label_3ad7fc:
    if (ctx->pc == 0x3AD7FCu) {
        ctx->pc = 0x3AD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7F8u;
        // 0x3ad7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD800u;
        goto label_3ad800;
    }
    ctx->pc = 0x3AD7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD7F8u;
        // 0x3ad7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD800u;
label_3ad800:
    // 0x3ad800: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ad800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ad804:
    // 0x3ad804: 0x0  nop
    ctx->pc = 0x3ad804u;
    // NOP
    ctx->pc = 0x3ad808u;
}
