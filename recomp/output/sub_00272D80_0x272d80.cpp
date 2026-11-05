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

// Function: sub_00272D80
// Address: 0x272d80 - 0x272da8
void sub_00272D80_0x272d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272D80_0x272d80");
#endif

    ctx->pc = 0x272d80u;

    // 0x272d80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x272d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272d88: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x272d88u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x272d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x272d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272d90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x272d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x272d94: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x272d94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x272d98: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x272d98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x272D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272D9Cu;
        // 0x272da0: 0xa08300c4  sb          $v1, 0xC4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272DA4u;
    // 0x272da4: 0x0  nop
    ctx->pc = 0x272da4u;
    // NOP
    ctx->pc = 0x272da8u;
}
