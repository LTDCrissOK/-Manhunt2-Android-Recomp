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

// Function: sub_00366440
// Address: 0x366440 - 0x366470
void sub_00366440_0x366440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366440_0x366440");
#endif

    ctx->pc = 0x366440u;

    // 0x366440: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x366440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x366444: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x366444u;
    {
        const bool branch_taken_0x366444 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x366448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366444u;
        // 0x366448: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366444) {
            ctx->pc = 0x366464u;
            goto label_366464;
        }
    }
    ctx->pc = 0x36644Cu;
    // 0x36644c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36644Cu;
    {
        const bool branch_taken_0x36644c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x366450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36644Cu;
        // 0x366450: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36644c) {
            ctx->pc = 0x366464u;
            goto label_366464;
        }
    }
    ctx->pc = 0x366454u;
    // 0x366454: 0x2443dc40  addiu       $v1, $v0, -0x23C0
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
    // 0x366458: 0xac40dc40  sw          $zero, -0x23C0($v0)
    ctx->pc = 0x366458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958144), GPR_U32(ctx, 0));
    // 0x36645c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x36645cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x366460: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_366464:
    // 0x366464: 0x3e00008  jr          $ra
    ctx->pc = 0x366464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366464u;
        // 0x366468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36646Cu;
    // 0x36646c: 0x0  nop
    ctx->pc = 0x36646cu;
    // NOP
    ctx->pc = 0x366470u;
}
