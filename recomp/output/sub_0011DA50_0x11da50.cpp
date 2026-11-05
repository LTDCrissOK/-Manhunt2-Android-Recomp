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

// Function: sub_0011DA50
// Address: 0x11da50 - 0x11da80
void sub_0011DA50_0x11da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DA50_0x11da50");
#endif

    switch (ctx->pc) {
        case 0x11da74u: goto label_11da74;
        default: break;
    }

    ctx->pc = 0x11da50u;

    // 0x11da50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11da54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11da58: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DA58u;
    {
        const bool branch_taken_0x11da58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA58u;
        // 0x11da5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da58) {
            ctx->pc = 0x11DA74u;
            goto label_11da74;
        }
    }
    ctx->pc = 0x11DA60u;
    // 0x11da60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA60u;
    {
        const bool branch_taken_0x11da60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA60u;
        // 0x11da64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da60) {
            ctx->pc = 0x11DA78u;
            goto label_11da78;
        }
    }
    ctx->pc = 0x11DA68u;
    // 0x11da68: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11da68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11da6c: 0xc046e62  jal         func_11B988
    ctx->pc = 0x11DA6Cu;
    SET_GPR_U32(ctx, 31, 0x11DA74u);
    ctx->pc = 0x11DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA6Cu;
    // 0x11da70: 0x248499f0  addiu       $a0, $a0, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B988u, 0x11DA6Cu, 0x11DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA74u;
label_11da74:
    // 0x11da74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11da74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11da78:
    // 0x11da78: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA78u;
        // 0x11da7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA80u;
}
