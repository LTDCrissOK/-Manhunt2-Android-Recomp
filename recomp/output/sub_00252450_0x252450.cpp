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

// Function: sub_00252450
// Address: 0x252450 - 0x252480
void sub_00252450_0x252450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252450_0x252450");
#endif

    ctx->pc = 0x252450u;

    // 0x252450: 0x90831080  lbu         $v1, 0x1080($a0)
    ctx->pc = 0x252450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4224)));
    // 0x252454: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x252454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x252458: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252458u;
    {
        const bool branch_taken_0x252458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252458u;
        // 0x25245c: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252458) {
            ctx->pc = 0x252474u;
            goto label_252474;
        }
    }
    ctx->pc = 0x252460u;
    // 0x252460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252460u;
    {
        const bool branch_taken_0x252460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252460u;
        // 0x252464: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252460) {
            ctx->pc = 0x252470u;
            goto label_252470;
        }
    }
    ctx->pc = 0x252468u;
    // 0x252468: 0x3e00008  jr          $ra
    ctx->pc = 0x252468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252468u;
        // 0x25246c: 0xa0801080  sb          $zero, 0x1080($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252470u;
label_252470:
    // 0x252470: 0xa0821080  sb          $v0, 0x1080($a0)
    ctx->pc = 0x252470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4224), (uint8_t)GPR_U32(ctx, 2));
label_252474:
    // 0x252474: 0x3e00008  jr          $ra
    ctx->pc = 0x252474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25247Cu;
    // 0x25247c: 0x0  nop
    ctx->pc = 0x25247cu;
    // NOP
    ctx->pc = 0x252480u;
}
