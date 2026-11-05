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

// Function: sub_00301E88
// Address: 0x301e88 - 0x301ed0
void sub_00301E88_0x301e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301E88_0x301e88");
#endif

    ctx->pc = 0x301e88u;

    // 0x301e88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x301e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x301e8c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x301e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x301e90: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x301e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x301e94: 0x8c642b00  lw          $a0, 0x2B00($v1)
    ctx->pc = 0x301e94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x301e98: 0x8c4502e8  lw          $a1, 0x2E8($v0)
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x595B58u));
    // 0x301e9c: 0x8c4302ec  lw          $v1, 0x2EC($v0)
    ctx->pc = 0x301e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x595B5Cu));
    // 0x301ea0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x301ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x301ea4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x301ea8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x301ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301eac: 0x0  nop
    ctx->pc = 0x301eacu;
    // NOP
    // 0x301eb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x301eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x301eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301eb8: 0x0  nop
    ctx->pc = 0x301eb8u;
    // NOP
    // 0x301ebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x301ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x301ec0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x301ec0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x301ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x301EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301ECCu;
    // 0x301ecc: 0x0  nop
    ctx->pc = 0x301eccu;
    // NOP
    ctx->pc = 0x301ed0u;
}
