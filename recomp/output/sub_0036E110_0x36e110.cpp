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

// Function: sub_0036E110
// Address: 0x36e110 - 0x36e1e0
void sub_0036E110_0x36e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E110_0x36e110");
#endif

    ctx->pc = 0x36e110u;

    // 0x36e110: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36e110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e114: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x36e114u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x36e118: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x36e118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e11c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x36e11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36e120: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36e124: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x36e124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x36e128: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36e128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36e12c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x36e12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x36e130: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e134: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e138: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e13c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36e13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x36e140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36e140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e144: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x36e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e148: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36e14c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x36e14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x36e150: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e154: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e158: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x36e158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x36e15c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x36e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36e160: 0x90870014  lbu         $a3, 0x14($a0)
    ctx->pc = 0x36e160u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x36e164: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36e168: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x36e168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x36e16c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36e170: 0x90870015  lbu         $a3, 0x15($a0)
    ctx->pc = 0x36e170u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x36e174: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e178: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x36e178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x36e17c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x36e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36e180: 0x90870016  lbu         $a3, 0x16($a0)
    ctx->pc = 0x36e180u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x36e184: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36e188: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x36e188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x36e18c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x36e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x36e190: 0x90830017  lbu         $v1, 0x17($a0)
    ctx->pc = 0x36e190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x36e194: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e198: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x36e198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x36e19c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x36e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e1a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36e1a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x36e1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36e1a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e1ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e1b0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x36e1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36e1b4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x36e1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e1b8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36e1bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e1bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e1c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x36e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x36e1c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e1c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36e1c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36e1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x36e1cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x36e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36e1d0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x36e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36e1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x36E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E1D4u;
        // 0x36e1d8: 0xacc80008  sw          $t0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E1DCu;
    // 0x36e1dc: 0x0  nop
    ctx->pc = 0x36e1dcu;
    // NOP
    ctx->pc = 0x36e1e0u;
}
