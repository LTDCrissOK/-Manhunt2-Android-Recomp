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

// Function: sub_00252438
// Address: 0x252438 - 0x252450
void sub_00252438_0x252438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252438_0x252438");
#endif

    switch (ctx->pc) {
        case 0x25243cu: goto label_25243c;
        default: break;
    }

    ctx->pc = 0x252438u;

    // 0x252438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25243c:
    // 0x25243c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25243cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252440: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x252440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252444: 0x3e00008  jr          $ra
    ctx->pc = 0x252444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252444u;
        // 0x252448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25244Cu;
    // 0x25244c: 0x0  nop
    ctx->pc = 0x25244cu;
    // NOP
    ctx->pc = 0x252450u;
}
