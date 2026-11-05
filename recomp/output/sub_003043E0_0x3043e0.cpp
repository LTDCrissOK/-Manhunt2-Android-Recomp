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

// Function: sub_003043E0
// Address: 0x3043e0 - 0x304420
void sub_003043E0_0x3043e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003043E0_0x3043e0");
#endif

    ctx->pc = 0x3043e0u;

    // 0x3043e0: 0x460e7801  sub.s       $f0, $f15, $f14
    ctx->pc = 0x3043e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
    // 0x3043e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3043e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3043e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3043e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3043ec: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x3043ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3043f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3043f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3043f4: 0xe48f116c  swc1        $f15, 0x116C($a0)
    ctx->pc = 0x3043f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4460), bits); }
    // 0x3043f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3043f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3043fc: 0xe48c1160  swc1        $f12, 0x1160($a0)
    ctx->pc = 0x3043fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4448), bits); }
    // 0x304400: 0xe48d1164  swc1        $f13, 0x1164($a0)
    ctx->pc = 0x304400u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4452), bits); }
    // 0x304404: 0xa0821170  sb          $v0, 0x1170($a0)
    ctx->pc = 0x304404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4464), (uint8_t)GPR_U32(ctx, 2));
    // 0x304408: 0x46007000  add.s       $f0, $f14, $f0
    ctx->pc = 0x304408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
    // 0x30440c: 0xa0851171  sb          $a1, 0x1171($a0)
    ctx->pc = 0x30440cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4465), (uint8_t)GPR_U32(ctx, 5));
    // 0x304410: 0xe48e1168  swc1        $f14, 0x1168($a0)
    ctx->pc = 0x304410u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4456), bits); }
    // 0x304414: 0xac801158  sw          $zero, 0x1158($a0)
    ctx->pc = 0x304414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4440), GPR_U32(ctx, 0));
    // 0x304418: 0x3e00008  jr          $ra
    ctx->pc = 0x304418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304418u;
        // 0x30441c: 0xe480115c  swc1        $f0, 0x115C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4444), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304420u;
}
