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

// Function: sub_003DD5B8
// Address: 0x3dd5b8 - 0x3dd5e8
void sub_003DD5B8_0x3dd5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD5B8_0x3dd5b8");
#endif

    ctx->pc = 0x3dd5b8u;

    // 0x3dd5b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3dd5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd5bc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x3dd5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dd5c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3dd5c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3dd5c4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3dd5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3dd5c8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3dd5c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3dd5cc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3dd5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd5d0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3dd5d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3dd5d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3dd5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3dd5d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3dd5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3dd5dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3dd5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3dd5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5E0u;
        // 0x3dd5e4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD5E8u;
}
