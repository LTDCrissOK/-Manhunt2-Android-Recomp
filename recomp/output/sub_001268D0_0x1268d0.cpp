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

// Function: sub_001268D0
// Address: 0x1268d0 - 0x126900
void sub_001268D0_0x1268d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001268D0_0x1268d0");
#endif

    ctx->pc = 0x1268d0u;

    // 0x1268d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1268D0u;
    {
        const bool branch_taken_0x1268d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D0u;
        // 0x1268d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d0) {
            ctx->pc = 0x1268F8u;
            goto label_1268f8;
        }
    }
    ctx->pc = 0x1268D8u;
    // 0x1268d8: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1268d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1268dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1268dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1268e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1268e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1268e4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1268e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1268e8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1268e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1268ec: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x1268ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x1268f0: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x1268f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x1268f4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1268f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_1268f8:
    // 0x1268f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1268F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126900u;
}
