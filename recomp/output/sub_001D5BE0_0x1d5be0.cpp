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

// Function: sub_001D5BE0
// Address: 0x1d5be0 - 0x1d5c20
void sub_001D5BE0_0x1d5be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5BE0_0x1d5be0");
#endif

    ctx->pc = 0x1d5be0u;

    // 0x1d5be0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1d5be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1d5be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5be8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5BE8u;
    {
        const bool branch_taken_0x1d5be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BE8u;
        // 0x1d5bec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5be8) {
            ctx->pc = 0x1D5BF8u;
            goto label_1d5bf8;
        }
    }
    ctx->pc = 0x1D5BF0u;
    // 0x1d5bf0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x1d5bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5bf8:
    // 0x1d5bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bfc: 0xe4408ec0  swc1        $f0, -0x7140($v0)
    ctx->pc = 0x1d5bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294938304), bits); }
    // 0x1d5c00: 0xc4608ec0  lwc1        $f0, -0x7140($v1)
    ctx->pc = 0x1d5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294938304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5c04: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1d5c08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5c10: 0x0  nop
    ctx->pc = 0x1d5c10u;
    // NOP
    // 0x1d5c14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d5c14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d5c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C18u;
        // 0x1d5c1c: 0xe441f2f0  swc1        $f1, -0xD10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963952), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C20u;
}
