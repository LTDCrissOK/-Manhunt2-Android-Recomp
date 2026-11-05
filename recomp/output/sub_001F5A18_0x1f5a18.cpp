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

// Function: sub_001F5A18
// Address: 0x1f5a18 - 0x1f5a58
void sub_001F5A18_0x1f5a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5A18_0x1f5a18");
#endif

    ctx->pc = 0x1f5a18u;

    // 0x1f5a18: 0x28a200e6  slti        $v0, $a1, 0xE6
    ctx->pc = 0x1f5a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)230) ? 1 : 0);
    // 0x1f5a1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5A1Cu;
    {
        const bool branch_taken_0x1f5a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A1Cu;
        // 0x1f5a20: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a1c) {
            ctx->pc = 0x1F5A4Cu;
            goto label_1f5a4c;
        }
    }
    ctx->pc = 0x1F5A24u;
    // 0x1f5a24: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1f5a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1f5a28: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1f5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f5a2c: 0x8c624f98  lw          $v0, 0x4F98($v1)
    ctx->pc = 0x1f5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20376)));
    // 0x1f5a30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A30u;
        // 0x1f5a34: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5A4Cu;
            goto label_1f5a4c;
        }
    }
    ctx->pc = 0x1F5A38u;
    // 0x1f5a38: 0x8c434f9c  lw          $v1, 0x4F9C($v0)
    ctx->pc = 0x1f5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20380)));
    // 0x1f5a3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5A3Cu;
    {
        const bool branch_taken_0x1f5a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A3Cu;
        // 0x1f5a40: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a3c) {
            ctx->pc = 0x1F5A4Cu;
            goto label_1f5a4c;
        }
    }
    ctx->pc = 0x1F5A44u;
    // 0x1f5a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5a48: 0xa0627ab4  sb          $v0, 0x7AB4($v1)
    ctx->pc = 0x1f5a48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31412), (uint8_t)GPR_U32(ctx, 2));
label_1f5a4c:
    // 0x1f5a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5A54u;
    // 0x1f5a54: 0x0  nop
    ctx->pc = 0x1f5a54u;
    // NOP
    ctx->pc = 0x1f5a58u;
}
