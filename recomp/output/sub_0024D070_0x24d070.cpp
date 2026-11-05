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

// Function: sub_0024D070
// Address: 0x24d070 - 0x24d128
void sub_0024D070_0x24d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D070_0x24d070");
#endif

    ctx->pc = 0x24d070u;

    // 0x24d070: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24d074: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d078: 0x24830140  addiu       $v1, $a0, 0x140
    ctx->pc = 0x24d078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x24d07c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24d080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d084: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24d084u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d088: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d088u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d08c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d090: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x24d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d094: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x24d094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d098: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x24d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d09c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24d09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d0a0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x24d0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24d0a4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x24d0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24d0a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x24d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x24d0ac: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d0b0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x24d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d0b4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x24d0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d0b8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24d0b8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24d0bc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24d0bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24d0c0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x24d0c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24d0c4: 0x46010044  c1          0x10044
    ctx->pc = 0x24d0c4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24d0c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24d0cc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x24d0ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x24d0d0: 0xc44098fc  lwc1        $f0, -0x6704($v0)
    ctx->pc = 0x24d0d0u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24d0d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24d0d8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D0D8u;
    {
        const bool branch_taken_0x24d0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0D8u;
        // 0x24d0dc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0d8) {
            ctx->pc = 0x24D0FCu;
            goto label_24d0fc;
        }
    }
    ctx->pc = 0x24D0E0u;
    // 0x24d0e0: 0xc48000f8  lwc1        $f0, 0xF8($a0)
    ctx->pc = 0x24d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d0e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d0e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d0e8: 0x0  nop
    ctx->pc = 0x24d0e8u;
    // NOP
    // 0x24d0ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24D0ECu;
    {
        const bool branch_taken_0x24d0ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d0ec) {
            ctx->pc = 0x24D0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D0ECu;
            // 0x24d0f0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D0F4u;
            goto label_24d0f4;
        }
    }
    ctx->pc = 0x24D0F4u;
label_24d0f4:
    // 0x24d0f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D0F4u;
    {
        const bool branch_taken_0x24d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0F4u;
        // 0x24d0f8: 0xe48000f8  swc1        $f0, 0xF8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0f4) {
            ctx->pc = 0x24D100u;
            goto label_24d100;
        }
    }
    ctx->pc = 0x24D0FCu;
label_24d0fc:
    // 0x24d0fc: 0xe48100f8  swc1        $f1, 0xF8($a0)
    ctx->pc = 0x24d0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_24d100:
    // 0x24d100: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x24d100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x24d104: 0xc4603cf0  lwc1        $f0, 0x3CF0($v1)
    ctx->pc = 0x24d104u;
    { uint32_t bits = FAST_READ32(0x4B3CF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d10c: 0x0  nop
    ctx->pc = 0x24d10cu;
    // NOP
    // 0x24d110: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24D110u;
    {
        const bool branch_taken_0x24d110 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D110u;
        // 0x24d114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d110) {
            ctx->pc = 0x24D11Cu;
            goto label_24d11c;
        }
    }
    ctx->pc = 0x24D118u;
    // 0x24d118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d11c:
    // 0x24d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x24D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D11Cu;
        // 0x24d120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D124u;
    // 0x24d124: 0x0  nop
    ctx->pc = 0x24d124u;
    // NOP
    ctx->pc = 0x24d128u;
}
