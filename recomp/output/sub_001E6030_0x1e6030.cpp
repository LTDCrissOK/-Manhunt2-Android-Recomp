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

// Function: sub_001E6030
// Address: 0x1e6030 - 0x1e6078
void sub_001E6030_0x1e6030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6030_0x1e6030");
#endif

    switch (ctx->pc) {
        case 0x1e6048u: goto label_1e6048;
        default: break;
    }

    ctx->pc = 0x1e6030u;

    // 0x1e6030: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e6030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6034: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e6038: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E6038u;
    {
        const bool branch_taken_0x1e6038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6038u;
        // 0x1e603c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6038) {
            ctx->pc = 0x1E6070u;
            goto label_1e6070;
        }
    }
    ctx->pc = 0x1E6040u;
    // 0x1e6040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6044: 0x0  nop
    ctx->pc = 0x1e6044u;
    // NOP
label_1e6048:
    // 0x1e6048: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e604c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1e6050: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e6054: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e6054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6058: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x1e6058u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e605c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e6060: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e6060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e6064: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x1e6064u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e6068: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E6068u;
    {
        const bool branch_taken_0x1e6068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6068u;
        // 0x1e606c: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6068) {
            ctx->pc = 0x1E6048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6048;
        }
    }
    ctx->pc = 0x1E6070u;
label_1e6070:
    // 0x1e6070: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6078u;
}
