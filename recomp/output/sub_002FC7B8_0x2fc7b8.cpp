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

// Function: sub_002FC7B8
// Address: 0x2fc7b8 - 0x2fc7e8
void sub_002FC7B8_0x2fc7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC7B8_0x2fc7b8");
#endif

    ctx->pc = 0x2fc7b8u;

    // 0x2fc7b8: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x2fc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x2fc7bc: 0xc48211c8  lwc1        $f2, 0x11C8($a0)
    ctx->pc = 0x2fc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fc7c0: 0xc461156c  lwc1        $f1, 0x156C($v1)
    ctx->pc = 0x2fc7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fc7c4: 0xc4601570  lwc1        $f0, 0x1570($v1)
    ctx->pc = 0x2fc7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fc7c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2fc7c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2fc7cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fc7ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fc7d0: 0x0  nop
    ctx->pc = 0x2fc7d0u;
    // NOP
    // 0x2fc7d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC7D4u;
    {
        const bool branch_taken_0x2fc7d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7D4u;
        // 0x2fc7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7d4) {
            ctx->pc = 0x2FC7E0u;
            goto label_2fc7e0;
        }
    }
    ctx->pc = 0x2FC7DCu;
    // 0x2fc7dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc7dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc7e0:
    // 0x2fc7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7E8u;
}
