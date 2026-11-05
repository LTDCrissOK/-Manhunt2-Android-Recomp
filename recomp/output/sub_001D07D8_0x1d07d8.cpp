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

// Function: sub_001D07D8
// Address: 0x1d07d8 - 0x1d0860
void sub_001D07D8_0x1d07d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D07D8_0x1d07d8");
#endif

    ctx->pc = 0x1d07d8u;

    // 0x1d07d8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d07dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d07e0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1d07e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d07e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d07e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d07e8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1d07e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d07ec: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1d07ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d07f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d07f4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1d07f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d07f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d07fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d0800: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1d0800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d0804: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1d0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0808: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d0808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d080c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1d080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0810: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1d0810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1d0814: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1d0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0818: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0818u;
    {
        const bool branch_taken_0x1d0818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0818u;
        // 0x1d081c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0818) {
            ctx->pc = 0x1D0834u;
            goto label_1d0834;
        }
    }
    ctx->pc = 0x1D0820u;
    // 0x1d0820: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d0820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0824: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d0824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d0828: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x1d0828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d082c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d0830: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x1d0830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_1d0834:
    // 0x1d0834: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0834u;
    {
        const bool branch_taken_0x1d0834 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0834) {
            ctx->pc = 0x1D0850u;
            goto label_1d0850;
        }
    }
    ctx->pc = 0x1D083Cu;
    // 0x1d083c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0840: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d0840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d0844: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x1d0844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d0848: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d0848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d084c: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x1d084cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_1d0850:
    // 0x1d0850: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0858u;
    // 0x1d0858: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d0858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d085c: 0x0  nop
    ctx->pc = 0x1d085cu;
    // NOP
    ctx->pc = 0x1d0860u;
}
