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

// Function: sub_002E1178
// Address: 0x2e1178 - 0x2e11c0
void sub_002E1178_0x2e1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1178_0x2e1178");
#endif

    ctx->pc = 0x2e1178u;

    // 0x2e1178: 0x8c8600f0  lw          $a2, 0xF0($a0)
    ctx->pc = 0x2e1178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2e117c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e117cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e1180: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e1180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e1184: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2e1184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2e1188: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e1188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e118c: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x2e118cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e1190: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2e1190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2e1194: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e1194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1198: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x2e1198u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e119c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2e119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2e11a0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e11a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e11a4: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x2e11a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e11a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e11a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e11ac: 0x0  nop
    ctx->pc = 0x2e11acu;
    // NOP
    // 0x2e11b0: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x2e11b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x2e11b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E11B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11B4u;
        // 0x2e11b8: 0xe48000f8  swc1        $f0, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E11B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E11BCu;
    // 0x2e11bc: 0x0  nop
    ctx->pc = 0x2e11bcu;
    // NOP
    ctx->pc = 0x2e11c0u;
}
