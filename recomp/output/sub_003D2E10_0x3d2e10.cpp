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

// Function: sub_003D2E10
// Address: 0x3d2e10 - 0x3d2e70
void sub_003D2E10_0x3d2e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2E10_0x3d2e10");
#endif

    ctx->pc = 0x3d2e10u;

    // 0x3d2e10: 0x4303f  dsra32      $a2, $a0, 0
    ctx->pc = 0x3d2e10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d2e14: 0x5183f  dsra32      $v1, $a1, 0
    ctx->pc = 0x3d2e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d2e18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d2e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d2e1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d2e1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d2e20: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3d2e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3d2e24: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3d2e24u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3d2e28: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3d2e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d2e2c: 0x70c53018  mult1       $a2, $a2, $a1
    ctx->pc = 0x3d2e2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2e30: 0x850019  multu       $a0, $a1
    ctx->pc = 0x3d2e30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3d2e34: 0x2012  mflo        $a0
    ctx->pc = 0x3d2e34u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3d2e38: 0x1010  mfhi        $v0
    ctx->pc = 0x3d2e38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3d2e3c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d2e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d2e40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2e44: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3d2e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3d2e48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3d2e4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3d2e4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3d2e50: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3d2e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3d2e54: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3d2e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3d2e58: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x3d2e58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d2e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d2e60: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x3d2e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3d2e64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d2e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d2e68: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E68u;
        // 0x3d2e6c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2E70u;
}
