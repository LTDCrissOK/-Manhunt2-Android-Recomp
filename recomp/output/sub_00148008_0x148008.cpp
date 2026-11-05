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

// Function: sub_00148008
// Address: 0x148008 - 0x148070
void sub_00148008_0x148008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148008_0x148008");
#endif

    ctx->pc = 0x148008u;

    // 0x148008: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x148008u;
    {
        const bool branch_taken_0x148008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x148008) {
            ctx->pc = 0x148064u;
            goto label_148064;
        }
    }
    ctx->pc = 0x148010u;
    // 0x148010: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x148010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148014: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x148014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148018: 0x0  nop
    ctx->pc = 0x148018u;
    // NOP
    // 0x14801c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14801cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148020: 0x0  nop
    ctx->pc = 0x148020u;
    // NOP
    // 0x148024: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x148024u;
    {
        const bool branch_taken_0x148024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148024) {
            ctx->pc = 0x148054u;
            goto label_148054;
        }
    }
    ctx->pc = 0x14802Cu;
    // 0x14802c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x14802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148030: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148030u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148034: 0x0  nop
    ctx->pc = 0x148034u;
    // NOP
    // 0x148038: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x148038u;
    {
        const bool branch_taken_0x148038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148038) {
            ctx->pc = 0x148054u;
            goto label_148054;
        }
    }
    ctx->pc = 0x148040u;
    // 0x148040: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x148040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148044: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x148044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148048: 0x0  nop
    ctx->pc = 0x148048u;
    // NOP
    // 0x14804c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14804Cu;
    {
        const bool branch_taken_0x14804c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14804c) {
            ctx->pc = 0x148064u;
            goto label_148064;
        }
    }
    ctx->pc = 0x148054u;
label_148054:
    // 0x148054: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x148054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148058: 0xf88106d0  sqc2        $vf1, 0x6D0($a0)
    ctx->pc = 0x148058u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1744), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14805c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148060: 0xac8206e0  sw          $v0, 0x6E0($a0)
    ctx->pc = 0x148060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1760), GPR_U32(ctx, 2));
label_148064:
    // 0x148064: 0x3e00008  jr          $ra
    ctx->pc = 0x148064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14806Cu;
    // 0x14806c: 0x0  nop
    ctx->pc = 0x14806cu;
    // NOP
    ctx->pc = 0x148070u;
}
