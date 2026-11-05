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

// Function: sub_0036EBA8
// Address: 0x36eba8 - 0x36ebd0
void sub_0036EBA8_0x36eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EBA8_0x36eba8");
#endif

    ctx->pc = 0x36eba8u;

    // 0x36eba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36eba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36ebac: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36EBACu;
    {
        const bool branch_taken_0x36ebac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x36ebac) {
            ctx->pc = 0x36EBC8u;
            goto label_36ebc8;
        }
    }
    ctx->pc = 0x36EBB4u;
    // 0x36ebb4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EBB4u;
    {
        const bool branch_taken_0x36ebb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EBB4u;
        // 0x36ebb8: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ebb4) {
            ctx->pc = 0x36EBC8u;
            goto label_36ebc8;
        }
    }
    ctx->pc = 0x36EBBCu;
    // 0x36ebbc: 0x2462f168  addiu       $v0, $v1, -0xE98
    ctx->pc = 0x36ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963560));
    // 0x36ebc0: 0xac62f168  sw          $v0, -0xE98($v1)
    ctx->pc = 0x36ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 2));
    // 0x36ebc4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x36ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_36ebc8:
    // 0x36ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x36EBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EBD0u;
}
