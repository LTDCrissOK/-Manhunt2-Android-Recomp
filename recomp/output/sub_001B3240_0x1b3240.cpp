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

// Function: sub_001B3240
// Address: 0x1b3240 - 0x1b33c8
void sub_001B3240_0x1b3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3240_0x1b3240");
#endif

    switch (ctx->pc) {
        case 0x1b3260u: goto label_1b3260;
        case 0x1b32b4u: goto label_1b32b4;
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b3340u: goto label_1b3340;
        case 0x1b3388u: goto label_1b3388;
        case 0x1b33b4u: goto label_1b33b4;
        default: break;
    }

    ctx->pc = 0x1b3240u;

    // 0x1b3240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b3244: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b3248: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b324c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b324cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3258: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B3258u;
    SET_GPR_U32(ctx, 31, 0x1B3260u);
    ctx->pc = 0x1B325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3258u;
    // 0x1b325c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B3258u, 0x1B3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3260u;
label_1b3260:
    // 0x1b3260: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1b3260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b3264: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b3268: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b326c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1b3270: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b3270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b3274: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b3274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3278: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b3278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b327c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b3280: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x1b3280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b3284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3288: 0x0  nop
    ctx->pc = 0x1b3288u;
    // NOP
    // 0x1b328c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1b328cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3290: 0x0  nop
    ctx->pc = 0x1b3290u;
    // NOP
    // 0x1b3294: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3294u;
    {
        const bool branch_taken_0x1b3294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3294u;
        // 0x1b3298: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3294) {
            ctx->pc = 0x1B32ACu;
            goto label_1b32ac;
        }
    }
    ctx->pc = 0x1B329Cu;
    // 0x1b329c: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x1b329cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b32a0: 0x0  nop
    ctx->pc = 0x1b32a0u;
    // NOP
    // 0x1b32a4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B32A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32A4u;
            // 0x1b32a8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B32B8u;
            goto label_1b32b8;
        }
    }
    ctx->pc = 0x1B32ACu;
label_1b32ac:
    // 0x1b32ac: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1B32ACu;
    SET_GPR_U32(ctx, 31, 0x1B32B4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1B32ACu, 0x1B32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32B4u;
label_1b32b4:
    // 0x1b32b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b32b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b32b8:
    // 0x1b32b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b32bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b32bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b32c0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1b32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1b32c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b32c8: 0xc48c0068  lwc1        $f12, 0x68($a0)
    ctx->pc = 0x1b32c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b32cc: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1b32ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b32d0: 0x0  nop
    ctx->pc = 0x1b32d0u;
    // NOP
    // 0x1b32d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B32D4u;
    {
        const bool branch_taken_0x1b32d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32D4u;
        // 0x1b32d8: 0xc48d0060  lwc1        $f13, 0x60($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32d4) {
            ctx->pc = 0x1B32ECu;
            goto label_1b32ec;
        }
    }
    ctx->pc = 0x1B32DCu;
    // 0x1b32dc: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x1b32dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b32e0: 0x0  nop
    ctx->pc = 0x1b32e0u;
    // NOP
    // 0x1b32e4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B32E4u;
    {
        const bool branch_taken_0x1b32e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E4u;
        // 0x1b32e8: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e4) {
            ctx->pc = 0x1B32F8u;
            goto label_1b32f8;
        }
    }
    ctx->pc = 0x1B32ECu;
label_1b32ec:
    // 0x1b32ec: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1B32ECu;
    SET_GPR_U32(ctx, 31, 0x1B32F4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1B32ECu, 0x1B32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32F4u;
label_1b32f4:
    // 0x1b32f4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b32f4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1b32f8:
    // 0x1b32f8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b32f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b32fc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3300: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1b3300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1b3304: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1b3304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1b3308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b330c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b330cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1b3310: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1b3310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1b3314: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3318: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b3318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b331c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b331cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3320: 0x0  nop
    ctx->pc = 0x1b3320u;
    // NOP
    // 0x1b3324: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B3324u;
    {
        const bool branch_taken_0x1b3324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3324u;
        // 0x1b3328: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3324) {
            ctx->pc = 0x1B335Cu;
            goto label_1b335c;
        }
    }
    ctx->pc = 0x1B332Cu;
    // 0x1b332c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1b3330: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3334: 0x0  nop
    ctx->pc = 0x1b3334u;
    // NOP
    // 0x1b3338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b333c: 0x0  nop
    ctx->pc = 0x1b333cu;
    // NOP
label_1b3340:
    // 0x1b3340: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b3340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3344: 0x0  nop
    ctx->pc = 0x1b3344u;
    // NOP
    // 0x1b3348: 0x0  nop
    ctx->pc = 0x1b3348u;
    // NOP
    // 0x1b334c: 0x0  nop
    ctx->pc = 0x1b334cu;
    // NOP
    // 0x1b3350: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B3350u;
    {
        const bool branch_taken_0x1b3350 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3350) {
            ctx->pc = 0x1B3354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3350u;
            // 0x1b3354: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3340;
        }
    }
    ctx->pc = 0x1B3358u;
    // 0x1b3358: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b335c:
    // 0x1b335c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3360: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1b3360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1b3364: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3368: 0x0  nop
    ctx->pc = 0x1b3368u;
    // NOP
    // 0x1b336c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b336cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3370: 0x0  nop
    ctx->pc = 0x1b3370u;
    // NOP
    // 0x1b3374: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B3374u;
    {
        const bool branch_taken_0x1b3374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3374u;
        // 0x1b3378: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3374) {
            ctx->pc = 0x1B33A8u;
            goto label_1b33a8;
        }
    }
    ctx->pc = 0x1B337Cu;
    // 0x1b337c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1b3380: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3384: 0x0  nop
    ctx->pc = 0x1b3384u;
    // NOP
label_1b3388:
    // 0x1b3388: 0x0  nop
    ctx->pc = 0x1b3388u;
    // NOP
    // 0x1b338c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x1b338cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1b3390: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b3390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3394: 0x0  nop
    ctx->pc = 0x1b3394u;
    // NOP
    // 0x1b3398: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B3398u;
    {
        const bool branch_taken_0x1b3398 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3398u;
        // 0x1b339c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3398) {
            ctx->pc = 0x1B3388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3388;
        }
    }
    ctx->pc = 0x1B33A0u;
    // 0x1b33a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b33a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b33a4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1b33a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b33a8:
    // 0x1b33a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b33a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b33ac: 0xc06cc8a  jal         func_1B3228
    ctx->pc = 0x1B33ACu;
    SET_GPR_U32(ctx, 31, 0x1B33B4u);
    ctx->pc = 0x1B33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33ACu;
    // 0x1b33b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3228u, 0x1B33ACu, 0x1B33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33B4u;
label_1b33b4:
    // 0x1b33b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b33b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b33b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b33b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b33bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b33bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b33c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B33C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33C0u;
        // 0x1b33c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B33C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B33C8u;
}
