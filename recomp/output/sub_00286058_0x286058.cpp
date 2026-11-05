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

// Function: sub_00286058
// Address: 0x286058 - 0x2860c0
void sub_00286058_0x286058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286058_0x286058");
#endif

    ctx->pc = 0x286058u;

    // 0x286058: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x286058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28605c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286060: 0xc461a420  lwc1        $f1, -0x5BE0($v1)
    ctx->pc = 0x286060u;
    { uint32_t bits = FAST_READ32(0x3FA420u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286068: 0xc442a428  lwc1        $f2, -0x5BD8($v0)
    ctx->pc = 0x286068u;
    { uint32_t bits = FAST_READ32(0x3FA428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28606c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x28606cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x286070: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286074: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x286078: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x286078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x28607c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x286080: 0xc461a420  lwc1        $f1, -0x5BE0($v1)
    ctx->pc = 0x286080u;
    { uint32_t bits = FAST_READ32(0x3FA420u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286084: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x286084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286088: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28608c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x28608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x286090: 0xc440a424  lwc1        $f0, -0x5BDC($v0)
    ctx->pc = 0x286090u;
    { uint32_t bits = FAST_READ32(0x3FA424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286094: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x286094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286098: 0xc502a42c  lwc1        $f2, -0x5BD4($t0)
    ctx->pc = 0x286098u;
    { uint32_t bits = FAST_READ32(0x3FA42Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28609c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28609cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2860a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2860a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2860a4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2860a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2860a8: 0xc442a424  lwc1        $f2, -0x5BDC($v0)
    ctx->pc = 0x2860a8u;
    { uint32_t bits = FAST_READ32(0x3FA424u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2860ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2860acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2860b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2860b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2860b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2860B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2860B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860B4u;
        // 0x2860b8: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2860B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2860BCu;
    // 0x2860bc: 0x0  nop
    ctx->pc = 0x2860bcu;
    // NOP
    ctx->pc = 0x2860c0u;
}
