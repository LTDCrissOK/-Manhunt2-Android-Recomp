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

// Function: sub_003DCD70
// Address: 0x3dcd70 - 0x3dcd90
void sub_003DCD70_0x3dcd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCD70_0x3dcd70");
#endif

    ctx->pc = 0x3dcd70u;

    // 0x3dcd70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3dcd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dcd74: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3dcd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dcd78: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3dcd78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3dcd7c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3dcd7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3dcd80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3dcd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3dcd84: 0x46000004  c1          0x4
    ctx->pc = 0x3dcd84u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3dcd88: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCD90u;
}
