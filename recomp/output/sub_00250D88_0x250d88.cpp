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

// Function: sub_00250D88
// Address: 0x250d88 - 0x250dc8
void sub_00250D88_0x250d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250D88_0x250d88");
#endif

    ctx->pc = 0x250d88u;

    // 0x250d88: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x250d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x250d8c: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x250d90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x250d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x250d94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x250d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x250d98: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x250d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x250d9c: 0xf84101d0  sqc2        $vf1, 0x1D0($v0)
    ctx->pc = 0x250d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250da0: 0x8c8301cc  lw          $v1, 0x1CC($a0)
    ctx->pc = 0x250da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x250da4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x250da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250da8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x250da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x250dac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x250dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x250db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x250db4: 0xe44001dc  swc1        $f0, 0x1DC($v0)
    ctx->pc = 0x250db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 476), bits); }
    // 0x250db8: 0x3e00008  jr          $ra
    ctx->pc = 0x250DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DB8u;
        // 0x250dbc: 0xac8301cc  sw          $v1, 0x1CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250DC0u;
    // 0x250dc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x250dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x250dc4: 0x0  nop
    ctx->pc = 0x250dc4u;
    // NOP
    ctx->pc = 0x250dc8u;
}
