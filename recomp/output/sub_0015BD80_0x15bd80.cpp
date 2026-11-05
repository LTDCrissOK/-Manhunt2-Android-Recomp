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

// Function: sub_0015BD80
// Address: 0x15bd80 - 0x15bda8
void sub_0015BD80_0x15bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD80_0x15bd80");
#endif

    ctx->pc = 0x15bd80u;

    // 0x15bd80: 0x90820a20  lbu         $v0, 0xA20($a0)
    ctx->pc = 0x15bd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x15bd84: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15bd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15bd88: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x15bd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15bd8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BD8Cu;
    {
        const bool branch_taken_0x15bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD8Cu;
        // 0x15bd90: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd8c) {
            ctx->pc = 0x15BDA0u;
            goto label_15bda0;
        }
    }
    ctx->pc = 0x15BD94u;
    // 0x15bd94: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15bd94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15bd98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x15bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bd9c: 0xac400388  sw          $zero, 0x388($v0)
    ctx->pc = 0x15bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 904), GPR_U32(ctx, 0));
label_15bda0:
    // 0x15bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BDA8u;
}
