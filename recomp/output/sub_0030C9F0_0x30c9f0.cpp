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

// Function: sub_0030C9F0
// Address: 0x30c9f0 - 0x30ca40
void sub_0030C9F0_0x30c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C9F0_0x30c9f0");
#endif

    ctx->pc = 0x30c9f0u;

    // 0x30c9f0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x30C9F0u;
    {
        const bool branch_taken_0x30c9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c9f0) {
            ctx->pc = 0x30CA24u;
            goto label_30ca24;
        }
    }
    ctx->pc = 0x30C9F8u;
    // 0x30c9f8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x30c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30c9fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30c9fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30ca00: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x30ca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x30ca04: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x30ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x30ca08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x30ca0c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x30ca0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x30ca10: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x30ca10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ca14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30ca14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30ca18: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x30ca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x30ca1c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x30ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca20: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x30ca20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_30ca24:
    // 0x30ca24: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CA24u;
    {
        const bool branch_taken_0x30ca24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA24u;
        // 0x30ca28: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca24) {
            ctx->pc = 0x30CA34u;
            goto label_30ca34;
        }
    }
    ctx->pc = 0x30CA2Cu;
    // 0x30ca2c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30ca2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ca30: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x30ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_30ca34:
    // 0x30ca34: 0x3e00008  jr          $ra
    ctx->pc = 0x30CA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CA3Cu;
    // 0x30ca3c: 0x0  nop
    ctx->pc = 0x30ca3cu;
    // NOP
    ctx->pc = 0x30ca40u;
}
