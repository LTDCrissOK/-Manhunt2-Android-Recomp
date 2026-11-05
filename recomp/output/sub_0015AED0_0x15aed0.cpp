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

// Function: sub_0015AED0
// Address: 0x15aed0 - 0x15af10
void sub_0015AED0_0x15aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AED0_0x15aed0");
#endif

    switch (ctx->pc) {
        case 0x15aee8u: goto label_15aee8;
        default: break;
    }

    ctx->pc = 0x15aed0u;

    // 0x15aed0: 0x90820a20  lbu         $v0, 0xA20($a0)
    ctx->pc = 0x15aed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x15aed4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15AED4u;
    {
        const bool branch_taken_0x15aed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED4u;
        // 0x15aed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed4) {
            ctx->pc = 0x15AF08u;
            goto label_15af08;
        }
    }
    ctx->pc = 0x15AEDCu;
    // 0x15aedc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15aee0: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x15aee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15aee4: 0x0  nop
    ctx->pc = 0x15aee4u;
    // NOP
label_15aee8:
    // 0x15aee8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15aeec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15aef0: 0xac600330  sw          $zero, 0x330($v1)
    ctx->pc = 0x15aef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 0));
    // 0x15aef4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x15aef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15aef8: 0x90820a20  lbu         $v0, 0xA20($a0)
    ctx->pc = 0x15aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x15aefc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x15aefcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15af00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15AF00u;
    {
        const bool branch_taken_0x15af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF00u;
        // 0x15af04: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af00) {
            ctx->pc = 0x15AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aee8;
        }
    }
    ctx->pc = 0x15AF08u;
label_15af08:
    // 0x15af08: 0x3e00008  jr          $ra
    ctx->pc = 0x15AF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AF10u;
}
