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

// Function: sub_0016A810
// Address: 0x16a810 - 0x16a848
void sub_0016A810_0x16a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A810_0x16a810");
#endif

    ctx->pc = 0x16a810u;

    // 0x16a810: 0xac8500a0  sw          $a1, 0xA0($a0)
    ctx->pc = 0x16a810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
    // 0x16a814: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A814u;
    {
        const bool branch_taken_0x16a814 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A814u;
        // 0x16a818: 0xac8500b8  sw          $a1, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a814) {
            ctx->pc = 0x16A834u;
            goto label_16a834;
        }
    }
    ctx->pc = 0x16A81Cu;
    // 0x16a81c: 0x7c8000c0  sq          $zero, 0xC0($a0)
    ctx->pc = 0x16a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 0));
    // 0x16a820: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x16a824: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x16a824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
    // 0x16a828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16a828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A82Cu;
        // 0x16a830: 0xe48000c0  swc1        $f0, 0xC0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A834u;
label_16a834:
    // 0x16a834: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16a834u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a838: 0xf88100c0  sqc2        $vf1, 0xC0($a0)
    ctx->pc = 0x16a838u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16a83c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A844u;
    // 0x16a844: 0x0  nop
    ctx->pc = 0x16a844u;
    // NOP
    ctx->pc = 0x16a848u;
}
