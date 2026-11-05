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

// Function: sub_0028DE40
// Address: 0x28de40 - 0x28de70
void sub_0028DE40_0x28de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE40_0x28de40");
#endif

    ctx->pc = 0x28de40u;

    // 0x28de40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28de44: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x28de44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x28de48: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x28de48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28de4c: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x28de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28de50: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x28de50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x28de54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x28de54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28de58: 0xf8810070  sqc2        $vf1, 0x70($a0)
    ctx->pc = 0x28de58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28de5c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x28de5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28de60: 0xf8810080  sqc2        $vf1, 0x80($a0)
    ctx->pc = 0x28de60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28de64: 0xe48d0094  swc1        $f13, 0x94($a0)
    ctx->pc = 0x28de64u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x28de68: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE68u;
        // 0x28de6c: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DE70u;
}
