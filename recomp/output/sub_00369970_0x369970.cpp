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

// Function: sub_00369970
// Address: 0x369970 - 0x3699b8
void sub_00369970_0x369970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369970_0x369970");
#endif

    ctx->pc = 0x369970u;

    // 0x369970: 0xc4800104  lwc1        $f0, 0x104($a0)
    ctx->pc = 0x369970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369974: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x369974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x369978: 0xc4810108  lwc1        $f1, 0x108($a0)
    ctx->pc = 0x369978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36997c: 0x0  nop
    ctx->pc = 0x36997cu;
    // NOP
    // 0x369980: 0x0  nop
    ctx->pc = 0x369980u;
    // NOP
    // 0x369984: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x369984u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x369988: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36998c: 0x3e00008  jr          $ra
    ctx->pc = 0x36998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36998Cu;
        // 0x369990: 0xe440ca6c  swc1        $f0, -0x3594($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294953580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369994u;
    // 0x369994: 0x0  nop
    ctx->pc = 0x369994u;
    // NOP
    // 0x369998: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36999c: 0x0  nop
    ctx->pc = 0x36999cu;
    // NOP
    // 0x3699a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3699a4: 0x0  nop
    ctx->pc = 0x3699a4u;
    // NOP
    // 0x3699a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3699a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3699ac: 0x0  nop
    ctx->pc = 0x3699acu;
    // NOP
    // 0x3699b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3699b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3699b4: 0x0  nop
    ctx->pc = 0x3699b4u;
    // NOP
    ctx->pc = 0x3699b8u;
}
