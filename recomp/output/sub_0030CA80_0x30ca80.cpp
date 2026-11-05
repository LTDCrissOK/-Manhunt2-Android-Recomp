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

// Function: sub_0030CA80
// Address: 0x30ca80 - 0x30cad0
void sub_0030CA80_0x30ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CA80_0x30ca80");
#endif

    ctx->pc = 0x30ca80u;

    // 0x30ca80: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x30CA80u;
    {
        const bool branch_taken_0x30ca80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca80) {
            ctx->pc = 0x30CAB4u;
            goto label_30cab4;
        }
    }
    ctx->pc = 0x30CA88u;
    // 0x30ca88: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x30ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ca8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30ca8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30ca90: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x30ca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x30ca94: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x30ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca98: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30ca98u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30ca9c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x30ca9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x30caa0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x30caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30caa4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30caa4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30caa8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x30caa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x30caac: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x30caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cab0: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x30cab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_30cab4:
    // 0x30cab4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CAB4u;
    {
        const bool branch_taken_0x30cab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cab4) {
            ctx->pc = 0x30CAC4u;
            goto label_30cac4;
        }
    }
    ctx->pc = 0x30CABCu;
    // 0x30cabc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x30cabcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30cac0: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x30cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_30cac4:
    // 0x30cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x30CAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CACCu;
    // 0x30cacc: 0x0  nop
    ctx->pc = 0x30caccu;
    // NOP
    ctx->pc = 0x30cad0u;
}
