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

// Function: sub_002508D8
// Address: 0x2508d8 - 0x250960
void sub_002508D8_0x2508d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002508D8_0x2508d8");
#endif

    ctx->pc = 0x2508d8u;

    // 0x2508d8: 0x24860160  addiu       $a2, $a0, 0x160
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x2508dc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2508dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2508e0: 0xf8810160  sqc2        $vf1, 0x160($a0)
    ctx->pc = 0x2508e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2508e4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2508e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2508e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2508e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2508ec: 0xf8810170  sqc2        $vf1, 0x170($a0)
    ctx->pc = 0x2508ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2508f0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2508f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2508f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2508f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2508f8: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2508f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x2508fc: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x250900: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x250900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x250904: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x250904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x250908: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x250908u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x25090c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x250910: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x250910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x250914: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x250914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x250918: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x250918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x25091c: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x25091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x250920: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x250920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    // 0x250924: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x250924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250928: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x250928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x25092c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x25092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x250930: 0xacc2003c  sw          $v0, 0x3C($a2)
    ctx->pc = 0x250930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 2));
    // 0x250934: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x250934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x250938: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x250938u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x25093c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x25093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x250940: 0xacc20044  sw          $v0, 0x44($a2)
    ctx->pc = 0x250940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
    // 0x250944: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x250944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x250948: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x250948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
    // 0x25094c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x25094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x250950: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x250950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
    // 0x250954: 0x3e00008  jr          $ra
    ctx->pc = 0x250954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250954u;
        // 0x250958: 0xa08701c0  sb          $a3, 0x1C0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 448), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25095Cu;
    // 0x25095c: 0x0  nop
    ctx->pc = 0x25095cu;
    // NOP
    ctx->pc = 0x250960u;
}
