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

// Function: sub_0020B9F0
// Address: 0x20b9f0 - 0x20ba18
void sub_0020B9F0_0x20b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B9F0_0x20b9f0");
#endif

    ctx->pc = 0x20b9f0u;

    // 0x20b9f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20b9f4: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B9F4u;
    {
        const bool branch_taken_0x20b9f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b9f4) {
            ctx->pc = 0x20BA0Cu;
            goto label_20ba0c;
        }
    }
    ctx->pc = 0x20B9FCu;
    // 0x20b9fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B9FCu;
    {
        const bool branch_taken_0x20b9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9FCu;
        // 0x20ba00: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9fc) {
            ctx->pc = 0x20BA0Cu;
            goto label_20ba0c;
        }
    }
    ctx->pc = 0x20BA04u;
    // 0x20ba04: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x20ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x20ba08: 0xac62e490  sw          $v0, -0x1B70($v1)
    ctx->pc = 0x20ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960272), GPR_U32(ctx, 2));
label_20ba0c:
    // 0x20ba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA14u;
    // 0x20ba14: 0x0  nop
    ctx->pc = 0x20ba14u;
    // NOP
    ctx->pc = 0x20ba18u;
}
