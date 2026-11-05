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

// Function: sub_002FFC20
// Address: 0x2ffc20 - 0x2ffc40
void sub_002FFC20_0x2ffc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFC20_0x2ffc20");
#endif

    ctx->pc = 0x2ffc20u;

    // 0x2ffc20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffc24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFC24u;
    {
        const bool branch_taken_0x2ffc24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC24u;
        // 0x2ffc28: 0x24425870  addiu       $v0, $v0, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc24) {
            ctx->pc = 0x2FFC34u;
            goto label_2ffc34;
        }
    }
    ctx->pc = 0x2FFC2Cu;
    // 0x2ffc2c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2ffc2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ffc30: 0xf84102b0  sqc2        $vf1, 0x2B0($v0)
    ctx->pc = 0x2ffc30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 688), _mm_castps_si128(ctx->vu0_vf[1]));
label_2ffc34:
    // 0x2ffc34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC3Cu;
    // 0x2ffc3c: 0x0  nop
    ctx->pc = 0x2ffc3cu;
    // NOP
    ctx->pc = 0x2ffc40u;
}
