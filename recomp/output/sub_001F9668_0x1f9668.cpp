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

// Function: sub_001F9668
// Address: 0x1f9668 - 0x1f96a8
void sub_001F9668_0x1f9668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9668_0x1f9668");
#endif

    switch (ctx->pc) {
        case 0x1f9680u: goto label_1f9680;
        default: break;
    }

    ctx->pc = 0x1f9668u;

    // 0x1f9668: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1f9668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f966c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F966Cu;
    {
        const bool branch_taken_0x1f966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F966Cu;
        // 0x1f9670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f966c) {
            ctx->pc = 0x1F96A0u;
            goto label_1f96a0;
        }
    }
    ctx->pc = 0x1F9674u;
    // 0x1f9674: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1f9674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f9678: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x1f9678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f967c: 0x0  nop
    ctx->pc = 0x1f967cu;
    // NOP
label_1f9680:
    // 0x1f9680: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f9680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9684: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1f9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f9688: 0xac603604  sw          $zero, 0x3604($v1)
    ctx->pc = 0x1f9688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13828), GPR_U32(ctx, 0));
    // 0x1f968c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f968cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f9690: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x1f9690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f9694: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1f9694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9698: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F9698u;
    {
        const bool branch_taken_0x1f9698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9698u;
        // 0x1f969c: 0xa61018  mult        $v0, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9698) {
            ctx->pc = 0x1F9680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9680;
        }
    }
    ctx->pc = 0x1F96A0u;
label_1f96a0:
    // 0x1f96a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F96A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F96A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F96A8u;
}
