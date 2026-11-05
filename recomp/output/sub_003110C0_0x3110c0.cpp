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

// Function: sub_003110C0
// Address: 0x3110c0 - 0x3110f8
void sub_003110C0_0x3110c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003110C0_0x3110c0");
#endif

    ctx->pc = 0x3110c0u;

    // 0x3110c0: 0xc4a200f0  lwc1        $f2, 0xF0($a1)
    ctx->pc = 0x3110c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3110c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3110c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3110c8: 0xe4820560  swc1        $f2, 0x560($a0)
    ctx->pc = 0x3110c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1376), bits); }
    // 0x3110cc: 0xc4a100f4  lwc1        $f1, 0xF4($a1)
    ctx->pc = 0x3110ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3110d0: 0xe4810564  swc1        $f1, 0x564($a0)
    ctx->pc = 0x3110d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1380), bits); }
    // 0x3110d4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3110d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3110d8: 0xc440bcdc  lwc1        $f0, -0x4324($v0)
    ctx->pc = 0x3110d8u;
    { uint32_t bits = FAST_READ32(0x3FBCDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3110dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3110dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3110e0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3110e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3110e4: 0xe4a200f0  swc1        $f2, 0xF0($a1)
    ctx->pc = 0x3110e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 240), bits); }
    // 0x3110e8: 0xc4800564  lwc1        $f0, 0x564($a0)
    ctx->pc = 0x3110e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3110ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3110ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3110f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3110F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3110F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3110F0u;
        // 0x3110f4: 0xe4a000f4  swc1        $f0, 0xF4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 244), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3110F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3110F8u;
}
