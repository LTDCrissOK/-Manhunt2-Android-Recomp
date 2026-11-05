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

// Function: sub_0017CC40
// Address: 0x17cc40 - 0x17cc78
void sub_0017CC40_0x17cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CC40_0x17cc40");
#endif

    ctx->pc = 0x17cc40u;

    // 0x17cc40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17cc44: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17cc48: 0x8c48a9d4  lw          $t0, -0x562C($v0)
    ctx->pc = 0x17cc48u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x17cc4c: 0x8c82bd80  lw          $v0, -0x4280($a0)
    ctx->pc = 0x17cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48BD80u));
    // 0x17cc50: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CC50u;
    {
        const bool branch_taken_0x17cc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x17CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC50u;
        // 0x17cc54: 0x2483bd80  addiu       $v1, $a0, -0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc50) {
            ctx->pc = 0x17CC70u;
            goto label_17cc70;
        }
    }
    ctx->pc = 0x17CC58u;
    // 0x17cc58: 0xac88bd80  sw          $t0, -0x4280($a0)
    ctx->pc = 0x17cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950272), GPR_U32(ctx, 8));
    // 0x17cc5c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x17cc5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17cc60: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x17cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cc64: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x17cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x17cc68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x17cc68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17cc6c: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x17cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_17cc70:
    // 0x17cc70: 0x3e00008  jr          $ra
    ctx->pc = 0x17CC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CC78u;
}
