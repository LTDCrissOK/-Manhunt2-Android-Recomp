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

// Function: sub_003AD710
// Address: 0x3ad710 - 0x3ad740
void sub_003AD710_0x3ad710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD710_0x3ad710");
#endif

    switch (ctx->pc) {
        case 0x3ad710u: goto label_3ad710;
        case 0x3ad714u: goto label_3ad714;
        case 0x3ad718u: goto label_3ad718;
        case 0x3ad71cu: goto label_3ad71c;
        case 0x3ad720u: goto label_3ad720;
        case 0x3ad724u: goto label_3ad724;
        case 0x3ad728u: goto label_3ad728;
        case 0x3ad72cu: goto label_3ad72c;
        case 0x3ad730u: goto label_3ad730;
        case 0x3ad734u: goto label_3ad734;
        case 0x3ad738u: goto label_3ad738;
        case 0x3ad73cu: goto label_3ad73c;
        default: break;
    }

    ctx->pc = 0x3ad710u;

label_3ad710:
    // 0x3ad710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ad714:
    // 0x3ad714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ad718:
    // 0x3ad718: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x3ad718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_3ad71c:
    // 0x3ad71c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ad720:
    if (ctx->pc == 0x3AD720u) {
        ctx->pc = 0x3AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD71Cu;
        // 0x3ad720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD724u;
        goto label_3ad724;
    }
    ctx->pc = 0x3AD71Cu;
    {
        const bool branch_taken_0x3ad71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD71Cu;
        // 0x3ad720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad71c) {
            ctx->pc = 0x3AD734u;
            goto label_3ad734;
        }
    }
    ctx->pc = 0x3AD724u;
label_3ad724:
    // 0x3ad724: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ad724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ad728:
    // 0x3ad728: 0x8c4336e4  lw          $v1, 0x36E4($v0)
    ctx->pc = 0x3ad728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14052)));
label_3ad72c:
    // 0x3ad72c: 0x60f809  jalr        $v1
label_3ad730:
    if (ctx->pc == 0x3AD730u) {
        ctx->pc = 0x3AD734u;
        goto label_3ad734;
    }
    ctx->pc = 0x3AD72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AD734u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD72Cu, 0x3AD734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AD734u;
label_3ad734:
    // 0x3ad734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ad738:
    // 0x3ad738: 0x3e00008  jr          $ra
label_3ad73c:
    if (ctx->pc == 0x3AD73Cu) {
        ctx->pc = 0x3AD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD738u;
        // 0x3ad73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AD740u;
        goto label_fallthrough_0x3ad738;
    }
    ctx->pc = 0x3AD738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD738u;
        // 0x3ad73c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ad738:
    ctx->pc = 0x3AD740u;
}
