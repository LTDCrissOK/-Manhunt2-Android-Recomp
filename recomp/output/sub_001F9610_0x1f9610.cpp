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

// Function: sub_001F9610
// Address: 0x1f9610 - 0x1f9668
void sub_001F9610_0x1f9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9610_0x1f9610");
#endif

    switch (ctx->pc) {
        case 0x1f9630u: goto label_1f9630;
        default: break;
    }

    ctx->pc = 0x1f9610u;

    // 0x1f9610: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f9610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9614: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1f9614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9618: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9618u;
    {
        const bool branch_taken_0x1f9618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9618u;
        // 0x1f961c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9618) {
            ctx->pc = 0x1F9658u;
            goto label_1f9658;
        }
    }
    ctx->pc = 0x1F9620u;
    // 0x1f9620: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x1f9620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f9624: 0x24a73550  addiu       $a3, $a1, 0x3550
    ctx->pc = 0x1f9624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 13648));
    // 0x1f9628: 0x90a20180  lbu         $v0, 0x180($a1)
    ctx->pc = 0x1f9628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x1f962c: 0x0  nop
    ctx->pc = 0x1f962cu;
    // NOP
label_1f9630:
    // 0x1f9630: 0x90a40008  lbu         $a0, 0x8($a1)
    ctx->pc = 0x1f9630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f9634: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x1f9634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f9638: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1f9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f963c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1f963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1f9640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f9640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f9644: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1f9644u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9648: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x1f9648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f964c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x1f964cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f9650: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F9650u;
    {
        const bool branch_taken_0x1f9650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9650) {
            ctx->pc = 0x1F9654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9650u;
            // 0x1f9654: 0x90a20180  lbu         $v0, 0x180($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9630;
        }
    }
    ctx->pc = 0x1F9658u;
label_1f9658:
    // 0x1f9658: 0x90a20180  lbu         $v0, 0x180($a1)
    ctx->pc = 0x1f9658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 384)));
    // 0x1f965c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f9660: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9660u;
        // 0x1f9664: 0xa04035ac  sb          $zero, 0x35AC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 13740), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9668u;
}
