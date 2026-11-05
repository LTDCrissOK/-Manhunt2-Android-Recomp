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

// Function: sub_00169878
// Address: 0x169878 - 0x169890
void sub_00169878_0x169878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169878_0x169878");
#endif

    ctx->pc = 0x169878u;

    // 0x169878: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x169878u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16987c: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x16987cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x169880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169884: 0x3e00008  jr          $ra
    ctx->pc = 0x169884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169884u;
        // 0x169888: 0xac820060  sw          $v0, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16988Cu;
    // 0x16988c: 0x0  nop
    ctx->pc = 0x16988cu;
    // NOP
    ctx->pc = 0x169890u;
}
