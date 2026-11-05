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

// Function: sub_003A0C10
// Address: 0x3a0c10 - 0x3a0c50
void sub_003A0C10_0x3a0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0C10_0x3a0c10");
#endif

    ctx->pc = 0x3a0c10u;

    // 0x3a0c10: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x3a0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3a0c14: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3a0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a0c18: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0C18u;
    {
        const bool branch_taken_0x3a0c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C18u;
        // 0x3a0c1c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0c18) {
            ctx->pc = 0x3A0C28u;
            goto label_3a0c28;
        }
    }
    ctx->pc = 0x3A0C20u;
    // 0x3a0c20: 0x8ca202b4  lw          $v0, 0x2B4($a1)
    ctx->pc = 0x3a0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x3a0c24: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3a0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3a0c28:
    // 0x3a0c28: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A0C28u;
    {
        const bool branch_taken_0x3a0c28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0c28) {
            ctx->pc = 0x3A0C38u;
            goto label_3a0c38;
        }
    }
    ctx->pc = 0x3A0C30u;
    // 0x3a0c30: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x3a0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x3a0c34: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3a0c34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3a0c38:
    // 0x3a0c38: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0C40u;
    // 0x3a0c40: 0x0  nop
    ctx->pc = 0x3a0c40u;
    // NOP
    // 0x3a0c44: 0x0  nop
    ctx->pc = 0x3a0c44u;
    // NOP
    // 0x3a0c48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a0c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0c4c: 0x0  nop
    ctx->pc = 0x3a0c4cu;
    // NOP
    ctx->pc = 0x3a0c50u;
}
