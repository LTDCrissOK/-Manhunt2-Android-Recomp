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

// Function: sub_003A1C50
// Address: 0x3a1c50 - 0x3a1cb8
void sub_003A1C50_0x3a1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1C50_0x3a1c50");
#endif

    switch (ctx->pc) {
        case 0x3a1c64u: goto label_3a1c64;
        case 0x3a1c78u: goto label_3a1c78;
        default: break;
    }

    ctx->pc = 0x3a1c50u;

    // 0x3a1c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1c58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a1c5c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A1C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A1C64u);
    ctx->pc = 0x3A1C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C5Cu;
    // 0x3a1c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A1C5Cu, 0x3A1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C64u;
label_3a1c64:
    // 0x3a1c64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a1c68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A1C68u;
    {
        const bool branch_taken_0x3a1c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C68u;
        // 0x3a1c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c68) {
            ctx->pc = 0x3A1CA0u;
            goto label_3a1ca0;
        }
    }
    ctx->pc = 0x3A1C70u;
    // 0x3a1c70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a1c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1c74: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x3a1c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3a1c78:
    // 0x3a1c78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a1c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a1c7c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a1c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a1c80: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x3a1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x3a1c84: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x3a1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x3a1c88: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x3a1c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x3a1c8c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A1C8Cu;
    {
        const bool branch_taken_0x3a1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C8Cu;
        // 0x3a1c90: 0xc7282b  sltu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c8c) {
            ctx->pc = 0x3A1C98u;
            goto label_3a1c98;
        }
    }
    ctx->pc = 0x3A1C94u;
    // 0x3a1c94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3a1c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a1c98:
    // 0x3a1c98: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A1C98u;
    {
        const bool branch_taken_0x3a1c98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C98u;
        // 0x3a1c9c: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c98) {
            ctx->pc = 0x3A1C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1c78;
        }
    }
    ctx->pc = 0x3A1CA0u;
label_3a1ca0:
    // 0x3a1ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a1ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CA8u;
        // 0x3a1cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1CB0u;
    // 0x3a1cb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a1cb4: 0x0  nop
    ctx->pc = 0x3a1cb4u;
    // NOP
    ctx->pc = 0x3a1cb8u;
}
