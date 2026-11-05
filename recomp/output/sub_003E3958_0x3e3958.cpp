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

// Function: sub_003E3958
// Address: 0x3e3958 - 0x3e3990
void sub_003E3958_0x3e3958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3958_0x3e3958");
#endif

    switch (ctx->pc) {
        case 0x3e3968u: goto label_3e3968;
        default: break;
    }

    ctx->pc = 0x3e3958u;

    // 0x3e3958: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3e3958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e395c: 0x94e6000c  lhu         $a2, 0xC($a3)
    ctx->pc = 0x3e395cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3e3960: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E3960u;
    {
        const bool branch_taken_0x3e3960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3960u;
        // 0x3e3964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3960) {
            ctx->pc = 0x3E3988u;
            goto label_3e3988;
        }
    }
    ctx->pc = 0x3E3968u;
label_3e3968:
    // 0x3e3968: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3e3968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3e396c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e3970: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3e3970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e3974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3978: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3e3978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3e397c: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x3e397cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3e3980: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E3980u;
    {
        const bool branch_taken_0x3e3980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3980u;
        // 0x3e3984: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3980) {
            ctx->pc = 0x3E3968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3968;
        }
    }
    ctx->pc = 0x3E3988u;
label_3e3988:
    // 0x3e3988: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3990u;
}
