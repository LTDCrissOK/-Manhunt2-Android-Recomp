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

// Function: sub_0025A288
// Address: 0x25a288 - 0x25a2f0
void sub_0025A288_0x25a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A288_0x25a288");
#endif

    ctx->pc = 0x25a288u;

    // 0x25a288: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x25a288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x25a28c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25a28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25a290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a294: 0xc44152e0  lwc1        $f1, 0x52E0($v0)
    ctx->pc = 0x25a294u;
    { uint32_t bits = FAST_READ32(0x5952E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a298: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x25a298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x25a29c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x25a29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x25a2a0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x25a2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x25a2a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a2a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25a2ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x25a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x25a2b0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x25a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x25a2b4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x25a2b8: 0xacc09948  sw          $zero, -0x66B8($a2)
    ctx->pc = 0x25a2b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9948u, _value); } while (0);
    // 0x25a2bc: 0xe4e09944  swc1        $f0, -0x66BC($a3)
    ctx->pc = 0x25a2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F9944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9944u, _value); } while (0); }
    // 0x25a2c0: 0xad009940  sw          $zero, -0x66C0($t0)
    ctx->pc = 0x25a2c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9940u, _value); } while (0);
    // 0x25a2c4: 0xa0409950  sb          $zero, -0x66B0($v0)
    ctx->pc = 0x25a2c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9950u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9950u, _value); } while (0);
    // 0x25a2c8: 0xa0609934  sb          $zero, -0x66CC($v1)
    ctx->pc = 0x25a2c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9934u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9934u, _value); } while (0);
    // 0x25a2cc: 0xa0809951  sb          $zero, -0x66AF($a0)
    ctx->pc = 0x25a2ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F9951u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9951u, _value); } while (0);
    // 0x25a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2D0u;
        // 0x25a2d4: 0xaca09954  sw          $zero, -0x66AC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294941012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A2D8u;
    // 0x25a2d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25a2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25a2dc: 0x0  nop
    ctx->pc = 0x25a2dcu;
    // NOP
    // 0x25a2e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25a2e4: 0x0  nop
    ctx->pc = 0x25a2e4u;
    // NOP
    // 0x25a2e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x25a2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25a2ec: 0x0  nop
    ctx->pc = 0x25a2ecu;
    // NOP
    ctx->pc = 0x25a2f0u;
}
