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

// Function: sub_00166048
// Address: 0x166048 - 0x166098
void sub_00166048_0x166048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166048_0x166048");
#endif

    switch (ctx->pc) {
        case 0x166058u: goto label_166058;
        case 0x166060u: goto label_166060;
        default: break;
    }

    ctx->pc = 0x166048u;

    // 0x166048: 0x24840308  addiu       $a0, $a0, 0x308
    ctx->pc = 0x166048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 776));
    // 0x16604c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16604cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166050: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x166050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x166054: 0x683018  mult        $a2, $v1, $t0
    ctx->pc = 0x166054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_166058:
    // 0x166058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16605c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x16605cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_166060:
    // 0x166060: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x166060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x166064: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x166064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x166068: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x166068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16606c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x16606cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x166070: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x166070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x166074: 0x2ca30006  sltiu       $v1, $a1, 0x6
    ctx->pc = 0x166074u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x166078: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166078u;
    {
        const bool branch_taken_0x166078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166078u;
        // 0x16607c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166078) {
            ctx->pc = 0x166060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166060;
        }
    }
    ctx->pc = 0x166080u;
    // 0x166080: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x166080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x166084: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x166084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x166088: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x166088u;
    {
        const bool branch_taken_0x166088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166088u;
        // 0x16608c: 0x683018  mult        $a2, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x166088) {
            ctx->pc = 0x166058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166058;
        }
    }
    ctx->pc = 0x166090u;
    // 0x166090: 0x3e00008  jr          $ra
    ctx->pc = 0x166090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166098u;
}
