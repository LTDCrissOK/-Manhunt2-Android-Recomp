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

// Function: sub_00341840
// Address: 0x341840 - 0x3418a8
void sub_00341840_0x341840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341840_0x341840");
#endif

    ctx->pc = 0x341840u;

    // 0x341840: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x341840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x341844: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x341844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x341848: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x341848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34184c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x34184cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341850: 0x0  nop
    ctx->pc = 0x341850u;
    // NOP
    // 0x341854: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x341854u;
    {
        const bool branch_taken_0x341854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341854) {
            ctx->pc = 0x341858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341854u;
            // 0x341858: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34185Cu;
            goto label_34185c;
        }
    }
    ctx->pc = 0x34185Cu;
label_34185c:
    // 0x34185c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x341860: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x341860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x341864: 0xc460ac6c  lwc1        $f0, -0x5394($v1)
    ctx->pc = 0x341864u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341868: 0x2442e118  addiu       $v0, $v0, -0x1EE8
    ctx->pc = 0x341868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959384));
    // 0x34186c: 0xac47002c  sw          $a3, 0x2C($v0)
    ctx->pc = 0x34186cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x6BE144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE144u, _value); } while (0);
    // 0x341870: 0x46008042  mul.s       $f1, $f16, $f0
    ctx->pc = 0x341870u;
    ctx->f[1] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x341874: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x341874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6BE11Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE11Cu, _value); } while (0);
    // 0x341878: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x341878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x34187c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x34187cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BE120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE120u, _value); } while (0);
    // 0x341880: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x341880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BE124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE124u, _value); } while (0);
    // 0x341884: 0xe44c0010  swc1        $f12, 0x10($v0)
    ctx->pc = 0x341884u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE128u, _value); } while (0); }
    // 0x341888: 0xe44d0014  swc1        $f13, 0x14($v0)
    ctx->pc = 0x341888u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE12Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE12Cu, _value); } while (0); }
    // 0x34188c: 0xe44e0018  swc1        $f14, 0x18($v0)
    ctx->pc = 0x34188cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE130u, _value); } while (0); }
    // 0x341890: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x341890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE134u, _value); } while (0); }
    // 0x341894: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x341894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE138u, _value); } while (0); }
    // 0x341898: 0xe4510024  swc1        $f17, 0x24($v0)
    ctx->pc = 0x341898u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BE13Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BE13Cu, _value); } while (0); }
    // 0x34189c: 0x3e00008  jr          $ra
    ctx->pc = 0x34189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34189Cu;
        // 0x3418a0: 0xe4520028  swc1        $f18, 0x28($v0) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34189Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3418A4u;
    // 0x3418a4: 0x0  nop
    ctx->pc = 0x3418a4u;
    // NOP
    ctx->pc = 0x3418a8u;
}
