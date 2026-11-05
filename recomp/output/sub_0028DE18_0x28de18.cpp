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

// Function: sub_0028DE18
// Address: 0x28de18 - 0x28de40
void sub_0028DE18_0x28de18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE18_0x28de18");
#endif

    ctx->pc = 0x28de18u;

    // 0x28de18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28de1c: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x28de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x28de20: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x28de20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28de24: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x28de24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28de28: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x28de28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28de2c: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x28de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28de30: 0xe48d0064  swc1        $f13, 0x64($a0)
    ctx->pc = 0x28de30u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x28de34: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x28de34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x28de38: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE38u;
        // 0x28de3c: 0xfc800038  sd          $zero, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE40u;
}
