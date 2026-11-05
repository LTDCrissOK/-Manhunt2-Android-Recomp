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

// Function: sub_00235030
// Address: 0x235030 - 0x235070
void sub_00235030_0x235030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235030_0x235030");
#endif

    switch (ctx->pc) {
        case 0x235060u: goto label_235060;
        default: break;
    }

    ctx->pc = 0x235030u;

    // 0x235030: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x235030u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235034: 0x0  nop
    ctx->pc = 0x235034u;
    // NOP
    // 0x235038: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x235038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23503c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x23503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x235040: 0xc4404624  lwc1        $f0, 0x4624($v0)
    ctx->pc = 0x235040u;
    { uint32_t bits = FAST_READ32(0x4A4624u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235044: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x235048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23504c: 0x0  nop
    ctx->pc = 0x23504cu;
    // NOP
    // 0x235050: 0x0  nop
    ctx->pc = 0x235050u;
    // NOP
    // 0x235054: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x235054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x235058: 0xc08d42c  jal         func_2350B0
    ctx->pc = 0x235058u;
    SET_GPR_U32(ctx, 31, 0x235060u);
    ctx->pc = 0x2350B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350B0u, 0x235058u, 0x235060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235060u;
label_235060:
    // 0x235060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235064: 0x3e00008  jr          $ra
    ctx->pc = 0x235064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235064u;
        // 0x235068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23506Cu;
    // 0x23506c: 0x0  nop
    ctx->pc = 0x23506cu;
    // NOP
    ctx->pc = 0x235070u;
}
