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

// Function: sub_001EAD30
// Address: 0x1ead30 - 0x1ead78
void sub_001EAD30_0x1ead30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAD30_0x1ead30");
#endif

    switch (ctx->pc) {
        case 0x1ead48u: goto label_1ead48;
        default: break;
    }

    ctx->pc = 0x1ead30u;

    // 0x1ead30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ead30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead34: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ead34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ead38: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EAD38u;
    {
        const bool branch_taken_0x1ead38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD38u;
        // 0x1ead3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead38) {
            ctx->pc = 0x1EAD70u;
            goto label_1ead70;
        }
    }
    ctx->pc = 0x1EAD40u;
    // 0x1ead40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ead40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead44: 0x0  nop
    ctx->pc = 0x1ead44u;
    // NOP
label_1ead48:
    // 0x1ead48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ead4c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ead4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ead50: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x1ead50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ead54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ead54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ead58: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x1ead58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ead5c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1ead5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ead60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ead60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ead64: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x1ead64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1ead68: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EAD68u;
    {
        const bool branch_taken_0x1ead68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD68u;
        // 0x1ead6c: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead68) {
            ctx->pc = 0x1EAD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ead48;
        }
    }
    ctx->pc = 0x1EAD70u;
label_1ead70:
    // 0x1ead70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD78u;
}
