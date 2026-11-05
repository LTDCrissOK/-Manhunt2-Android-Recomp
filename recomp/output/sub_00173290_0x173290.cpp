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

// Function: sub_00173290
// Address: 0x173290 - 0x1732e0
void sub_00173290_0x173290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173290_0x173290");
#endif

    switch (ctx->pc) {
        case 0x1732a0u: goto label_1732a0;
        case 0x1732a8u: goto label_1732a8;
        default: break;
    }

    ctx->pc = 0x173290u;

    // 0x173290: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x173290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x173294: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x173294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173298: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x173298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x17329c: 0x683018  mult        $a2, $v1, $t0
    ctx->pc = 0x17329cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1732a0:
    // 0x1732a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1732a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732a4: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1732a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1732a8:
    // 0x1732a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1732ac: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1732acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1732b0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1732b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1732b4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1732b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1732b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1732b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1732bc: 0x2ca30009  sltiu       $v1, $a1, 0x9
    ctx->pc = 0x1732bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1732c0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1732C0u;
    {
        const bool branch_taken_0x1732c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732C0u;
        // 0x1732c4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732c0) {
            ctx->pc = 0x1732A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1732a8;
        }
    }
    ctx->pc = 0x1732C8u;
    // 0x1732c8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1732c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1732cc: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1732ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1732d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1732D0u;
    {
        const bool branch_taken_0x1732d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732D0u;
        // 0x1732d4: 0x683018  mult        $a2, $v1, $t0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d0) {
            ctx->pc = 0x1732A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1732a0;
        }
    }
    ctx->pc = 0x1732D8u;
    // 0x1732d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1732D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1732D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1732E0u;
}
