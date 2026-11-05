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

// Function: sub_00262E20
// Address: 0x262e20 - 0x262e60
void sub_00262E20_0x262e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262E20_0x262e20");
#endif

    ctx->pc = 0x262e20u;

    // 0x262e20: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x262e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x262e24: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x262e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x262e28: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x262E28u;
    {
        const bool branch_taken_0x262e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E28u;
        // 0x262e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e28) {
            ctx->pc = 0x262E54u;
            goto label_262e54;
        }
    }
    ctx->pc = 0x262E30u;
    // 0x262e30: 0x8c840234  lw          $a0, 0x234($a0)
    ctx->pc = 0x262e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x262e34: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x262E34u;
    {
        const bool branch_taken_0x262e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e34) {
            ctx->pc = 0x262E54u;
            goto label_262e54;
        }
    }
    ctx->pc = 0x262E3Cu;
    // 0x262e3c: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x262e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x262e40: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x262e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x262e44: 0x2863045d  slti        $v1, $v1, 0x45D
    ctx->pc = 0x262e44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1117) ? 1 : 0);
    // 0x262e48: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x262E48u;
    {
        const bool branch_taken_0x262e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E48u;
        // 0x262e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e48) {
            ctx->pc = 0x262E54u;
            goto label_262e54;
        }
    }
    ctx->pc = 0x262E50u;
    // 0x262e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x262e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262e54:
    // 0x262e54: 0x3e00008  jr          $ra
    ctx->pc = 0x262E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262E5Cu;
    // 0x262e5c: 0x0  nop
    ctx->pc = 0x262e5cu;
    // NOP
    ctx->pc = 0x262e60u;
}
