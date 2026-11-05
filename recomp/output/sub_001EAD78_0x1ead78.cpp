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

// Function: sub_001EAD78
// Address: 0x1ead78 - 0x1eadc0
void sub_001EAD78_0x1ead78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAD78_0x1ead78");
#endif

    switch (ctx->pc) {
        case 0x1ead90u: goto label_1ead90;
        default: break;
    }

    ctx->pc = 0x1ead78u;

    // 0x1ead78: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ead78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead7c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ead7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ead80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EAD80u;
    {
        const bool branch_taken_0x1ead80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD80u;
        // 0x1ead84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead80) {
            ctx->pc = 0x1EADB8u;
            goto label_1eadb8;
        }
    }
    ctx->pc = 0x1EAD88u;
    // 0x1ead88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ead88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead8c: 0x0  nop
    ctx->pc = 0x1ead8cu;
    // NOP
label_1ead90:
    // 0x1ead90: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ead90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ead94: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ead94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ead98: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1ead98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ead9c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ead9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eada0: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1eada0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eada4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1eada4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1eada8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eadac: 0xa4202b  sltu        $a0, $a1, $a0
    ctx->pc = 0x1eadacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1eadb0: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EADB0u;
    {
        const bool branch_taken_0x1eadb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EADB0u;
        // 0x1eadb4: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eadb0) {
            ctx->pc = 0x1EAD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ead90;
        }
    }
    ctx->pc = 0x1EADB8u;
label_1eadb8:
    // 0x1eadb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EADC0u;
}
