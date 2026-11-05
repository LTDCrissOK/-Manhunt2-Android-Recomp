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

// Function: sub_00107058
// Address: 0x107058 - 0x1070a8
void sub_00107058_0x107058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107058_0x107058");
#endif

    ctx->pc = 0x107058u;

    // 0x107058: 0x460c7381  sub.s       $f14, $f14, $f12
    ctx->pc = 0x107058u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x10705c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x10705cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x107060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107064: 0x460d7bc1  sub.s       $f15, $f15, $f13
    ctx->pc = 0x107064u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    // 0x107068: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x107068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x10706c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x10706cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x107070: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x107074: 0x0  nop
    ctx->pc = 0x107074u;
    // NOP
    // 0x107078: 0x0  nop
    ctx->pc = 0x107078u;
    // NOP
    // 0x10707c: 0x460e0383  div.s       $f14, $f0, $f14
    ctx->pc = 0x10707cu;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[14] = FPU_DIV_S(ctx->f[0], ctx->f[14]); }
    // 0x107080: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x107080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x107084: 0x0  nop
    ctx->pc = 0x107084u;
    // NOP
    // 0x107088: 0x0  nop
    ctx->pc = 0x107088u;
    // NOP
    // 0x10708c: 0x460f0003  div.s       $f0, $f0, $f15
    ctx->pc = 0x10708cu;
    { if (ctx->f[15] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[15]); }
    // 0x107090: 0xe46c2b04  swc1        $f12, 0x2B04($v1)
    ctx->pc = 0x107090u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B04u, _value); } while (0); }
    // 0x107094: 0xe44d2b10  swc1        $f13, 0x2B10($v0)
    ctx->pc = 0x107094u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B10u, _value); } while (0); }
    // 0x107098: 0xe48e2b08  swc1        $f14, 0x2B08($a0)
    ctx->pc = 0x107098u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482B08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B08u, _value); } while (0); }
    // 0x10709c: 0x3e00008  jr          $ra
    ctx->pc = 0x10709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0xe4a02b0c  swc1        $f0, 0x2B0C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 11020), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1070A4u;
    // 0x1070a4: 0x0  nop
    ctx->pc = 0x1070a4u;
    // NOP
    ctx->pc = 0x1070a8u;
}
