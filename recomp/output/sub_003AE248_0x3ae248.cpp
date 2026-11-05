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

// Function: sub_003AE248
// Address: 0x3ae248 - 0x3ae278
void sub_003AE248_0x3ae248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE248_0x3ae248");
#endif

    switch (ctx->pc) {
        case 0x3ae250u: goto label_3ae250;
        case 0x3ae268u: goto label_3ae268;
        case 0x3ae270u: goto label_3ae270;
        default: break;
    }

    ctx->pc = 0x3ae248u;

    // 0x3ae248: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE248u;
        // 0x3ae24c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE250u;
label_3ae250:
    // 0x3ae250: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE250u;
    {
        const bool branch_taken_0x3ae250 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE250u;
        // 0x3ae254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae250) {
            ctx->pc = 0x3AE25Cu;
            goto label_3ae25c;
        }
    }
    ctx->pc = 0x3AE258u;
    // 0x3ae258: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x3ae258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3ae25c:
    // 0x3ae25c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE264u;
    // 0x3ae264: 0x0  nop
    ctx->pc = 0x3ae264u;
    // NOP
label_3ae268:
    // 0x3ae268: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE268u;
        // 0x3ae26c: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE270u;
label_3ae270:
    // 0x3ae270: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE270u;
        // 0x3ae274: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE278u;
}
