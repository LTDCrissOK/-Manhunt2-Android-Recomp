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

// Function: sub_00255480
// Address: 0x255480 - 0x2554a0
void sub_00255480_0x255480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255480_0x255480");
#endif

    ctx->pc = 0x255480u;

    // 0x255480: 0x90821080  lbu         $v0, 0x1080($a0)
    ctx->pc = 0x255480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x255484: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x255484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x255488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255488u;
    {
        const bool branch_taken_0x255488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255488) {
            ctx->pc = 0x255498u;
            goto label_255498;
        }
    }
    ctx->pc = 0x255490u;
    // 0x255490: 0x3e00008  jr          $ra
    ctx->pc = 0x255490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x90821080  lbu         $v0, 0x1080($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4224)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255498u;
label_255498:
    // 0x255498: 0x3e00008  jr          $ra
    ctx->pc = 0x255498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255498u;
        // 0x25549c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2554A0u;
}
