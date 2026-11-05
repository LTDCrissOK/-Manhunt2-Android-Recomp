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

// Function: sub_00361990
// Address: 0x361990 - 0x3625f0
void sub_00361990_0x361990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361990_0x361990");
#endif

    switch (ctx->pc) {
        case 0x3619d8u: goto label_3619d8;
        case 0x3619e0u: goto label_3619e0;
        case 0x361a40u: goto label_361a40;
        case 0x361a5cu: goto label_361a5c;
        case 0x361aacu: goto label_361aac;
        case 0x361bb0u: goto label_361bb0;
        case 0x361bb8u: goto label_361bb8;
        case 0x361c94u: goto label_361c94;
        case 0x361d08u: goto label_361d08;
        case 0x361d38u: goto label_361d38;
        case 0x361d94u: goto label_361d94;
        case 0x361dd8u: goto label_361dd8;
        case 0x361de0u: goto label_361de0;
        case 0x361e28u: goto label_361e28;
        case 0x361e88u: goto label_361e88;
        case 0x361e98u: goto label_361e98;
        case 0x361eb4u: goto label_361eb4;
        case 0x362068u: goto label_362068;
        case 0x362140u: goto label_362140;
        case 0x362150u: goto label_362150;
        case 0x36217cu: goto label_36217c;
        case 0x3622f0u: goto label_3622f0;
        case 0x362304u: goto label_362304;
        case 0x362368u: goto label_362368;
        case 0x3623c0u: goto label_3623c0;
        case 0x3623d8u: goto label_3623d8;
        case 0x362408u: goto label_362408;
        case 0x362468u: goto label_362468;
        case 0x362480u: goto label_362480;
        case 0x36249cu: goto label_36249c;
        case 0x3624acu: goto label_3624ac;
        case 0x3624d8u: goto label_3624d8;
        case 0x362548u: goto label_362548;
        case 0x362560u: goto label_362560;
        default: break;
    }

    ctx->pc = 0x361990u;

    // 0x361990: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x361990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x361994: 0xffb701d8  sd          $s7, 0x1D8($sp)
    ctx->pc = 0x361994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 23));
    // 0x361998: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x361998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x36199c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x36199cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3619a0: 0xffb001a0  sd          $s0, 0x1A0($sp)
    ctx->pc = 0x3619a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 16));
    // 0x3619a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3619a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3619a8: 0xafa60188  sw          $a2, 0x188($sp)
    ctx->pc = 0x3619a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 6));
    // 0x3619ac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3619acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3619b0: 0xffb101a8  sd          $s1, 0x1A8($sp)
    ctx->pc = 0x3619b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 17));
    // 0x3619b4: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x3619b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x3619b8: 0xffb301b8  sd          $s3, 0x1B8($sp)
    ctx->pc = 0x3619b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 19));
    // 0x3619bc: 0xffb401c0  sd          $s4, 0x1C0($sp)
    ctx->pc = 0x3619bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 20));
    // 0x3619c0: 0xffb501c8  sd          $s5, 0x1C8($sp)
    ctx->pc = 0x3619c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 21));
    // 0x3619c4: 0xffb601d0  sd          $s6, 0x1D0($sp)
    ctx->pc = 0x3619c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 22));
    // 0x3619c8: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x3619c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x3619cc: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x3619ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x3619d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3619D0u;
    SET_GPR_U32(ctx, 31, 0x3619D8u);
    ctx->pc = 0x3619D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619D0u;
    // 0x3619d4: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3619D0u, 0x3619D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619D8u;
label_3619d8:
    // 0x3619d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3619D8u;
    SET_GPR_U32(ctx, 31, 0x3619E0u);
    ctx->pc = 0x3619DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3619D8u;
    // 0x3619dc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3619D8u, 0x3619E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3619E0u;
label_3619e0:
    // 0x3619e0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3619e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3619e4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x3619e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3619e8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3619e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x3619ec: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3619ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x3619f0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3619f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x3619f4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3619f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3619f8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3619f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3619fc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3619fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x361a00: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x361a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x361a04: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x361a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x361a08: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x361a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x361a0c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x361a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x361a10: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x361a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361a14: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x361a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361a18: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x361a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x361a1c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x361a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x361a20: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x361a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x361a24: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x361a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x361a28: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x361a28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361a2c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x361a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361a30: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x361a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x361a34: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x361a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361a38: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361A38u;
    SET_GPR_U32(ctx, 31, 0x361A40u);
    ctx->pc = 0x361A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A38u;
    // 0x361a3c: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361A38u, 0x361A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A40u;
label_361a40:
    // 0x361a40: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x361a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x361a44: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x361a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x361a48: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x361a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x361a4c: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x361a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x361a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x361a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a54: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x361A54u;
    SET_GPR_U32(ctx, 31, 0x361A5Cu);
    ctx->pc = 0x361A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361A54u;
    // 0x361a58: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x361A54u, 0x361A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361A5Cu;
label_361a5c:
    // 0x361a5c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x361a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x361a60: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x361a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x361a64: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x361a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x361a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x361a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x361a6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x361a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361a74: 0x0  nop
    ctx->pc = 0x361a74u;
    // NOP
    // 0x361a78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x361A78u;
    {
        const bool branch_taken_0x361a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x361a78) {
            ctx->pc = 0x361A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361A78u;
            // 0x361a7c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x361A80u;
            goto label_361a80;
        }
    }
    ctx->pc = 0x361A80u;
label_361a80:
    // 0x361a80: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x361a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x361a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x361a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361a88: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x361a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x361a8c: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361A8Cu;
    {
        const bool branch_taken_0x361a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x361A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361A8Cu;
        // 0x361a90: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361a8c) {
            ctx->pc = 0x361AA0u;
            goto label_361aa0;
        }
    }
    ctx->pc = 0x361A94u;
    // 0x361a94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x361a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361a98: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x361A98u;
    {
        const bool branch_taken_0x361a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361a98) {
            ctx->pc = 0x361B38u;
            goto label_361b38;
        }
    }
    ctx->pc = 0x361AA0u;
label_361aa0:
    // 0x361aa0: 0xc4940010  lwc1        $f20, 0x10($a0)
    ctx->pc = 0x361aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361aa4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361AA4u;
    SET_GPR_U32(ctx, 31, 0x361AACu);
    ctx->pc = 0x361AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361AA4u;
    // 0x361aa8: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361AA4u, 0x361AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361AACu;
label_361aac:
    // 0x361aac: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x361aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x361ab0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x361ab0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361ab4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x361ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x361ab8: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x361ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x361abc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x361abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x361ac0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x361ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x361ac4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x361ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361ac8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x361ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361acc: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x361accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361ad0: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x361ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361ad4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x361ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x361ad8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x361ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x361adc: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x361adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x361ae0: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x361ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x361ae4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x361ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361ae8: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x361ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361aec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x361aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x361af0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x361af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361af4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x361af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x361af8: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x361af8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x361afc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x361afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x361b00: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x361b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361b04: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x361b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361b08: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x361b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361b0c: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x361b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361b10: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x361b10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x361b14: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x361b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x361b18: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x361b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x361b1c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x361b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x361b20: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x361b20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x361b24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x361b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361b28: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x361b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361b2c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x361b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361b30: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x361B30u;
    {
        const bool branch_taken_0x361b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361B30u;
        // 0x361b34: 0xafa3018c  sw          $v1, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361b30) {
            ctx->pc = 0x361C88u;
            goto label_361c88;
        }
    }
    ctx->pc = 0x361B38u;
label_361b38:
    // 0x361b38: 0x54a00054  bnel        $a1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x361B38u;
    {
        const bool branch_taken_0x361b38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x361b38) {
            ctx->pc = 0x361B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361B38u;
            // 0x361b3c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361C8Cu;
            goto label_361c8c;
        }
    }
    ctx->pc = 0x361B40u;
    // 0x361b40: 0x26e20010  addiu       $v0, $s7, 0x10
    ctx->pc = 0x361b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x361b44: 0xc6e20010  lwc1        $f2, 0x10($s7)
    ctx->pc = 0x361b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361b48: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x361b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361b4c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x361b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x361b50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x361b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361b54: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x361b54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x361b58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x361b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361b5c: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x361b5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x361b60: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x361b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x361b64: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x361b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x361b68: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x361b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x361b6c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x361b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x361b70: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x361b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x361b74: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x361b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x361b78: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x361b78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361b7c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x361b7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361b80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361b84: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x361b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361b88: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x361b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361b8c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x361b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x361b90: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x361b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361b94: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x361b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361b98: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x361b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361b9c: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x361b9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x361ba0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x361ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x361ba4: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x361ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x361ba8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361BA8u;
    SET_GPR_U32(ctx, 31, 0x361BB0u);
    ctx->pc = 0x361BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BA8u;
    // 0x361bac: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361BA8u, 0x361BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BB0u;
label_361bb0:
    // 0x361bb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361BB0u;
    SET_GPR_U32(ctx, 31, 0x361BB8u);
    ctx->pc = 0x361BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361BB0u;
    // 0x361bb4: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361BB0u, 0x361BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BB8u;
label_361bb8:
    // 0x361bb8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x361bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361bbc: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x361bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x361bc0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x361bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x361bc4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x361bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x361bc8: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x361bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x361bcc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x361bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x361bd0: 0x7fa30140  sq          $v1, 0x140($sp)
    ctx->pc = 0x361bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 3));
    // 0x361bd4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x361bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x361bd8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x361bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361bdc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361bdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361be0: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x361be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361be4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x361be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361be8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x361be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361bec: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x361becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x361bf0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x361bf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x361bf4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x361bf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x361bf8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x361bf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x361bfc: 0x0  nop
    ctx->pc = 0x361bfcu;
    // NOP
    // 0x361c00: 0x0  nop
    ctx->pc = 0x361c00u;
    // NOP
    // 0x361c04: 0x46010084  c1          0x10084
    ctx->pc = 0x361c04u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x361c08: 0xe7a10174  swc1        $f1, 0x174($sp)
    ctx->pc = 0x361c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x361c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x361c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361c10: 0x0  nop
    ctx->pc = 0x361c10u;
    // NOP
    // 0x361c14: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x361c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361c18: 0x0  nop
    ctx->pc = 0x361c18u;
    // NOP
    // 0x361c1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x361C1Cu;
    {
        const bool branch_taken_0x361c1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x361C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C1Cu;
        // 0x361c20: 0xe7a20170  swc1        $f2, 0x170($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c1c) {
            ctx->pc = 0x361C48u;
            goto label_361c48;
        }
    }
    ctx->pc = 0x361C24u;
    // 0x361c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x361c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x361c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x361c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361c2c: 0x0  nop
    ctx->pc = 0x361c2cu;
    // NOP
    // 0x361c30: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x361c30u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x361c34: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x361c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x361c38: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361c3c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x361c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x361c40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x361c40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361c44: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x361c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
label_361c48:
    // 0x361c48: 0x93a40000  lbu         $a0, 0x0($sp)
    ctx->pc = 0x361c48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361c4c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x361c4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x361c50: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x361c50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x361c54: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x361c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x361c58: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x361c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x361c5c: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x361c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
    // 0x361c60: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x361c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361c64: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x361c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361c68: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x361c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x361c6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x361c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361c70: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x361c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361c74: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x361c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361c78: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x361c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361c7c: 0xafbd018c  sw          $sp, 0x18C($sp)
    ctx->pc = 0x361c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 29));
    // 0x361c80: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x361c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x361c84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x361c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_361c88:
    // 0x361c88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_361c8c:
    // 0x361c8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361C8Cu;
    SET_GPR_U32(ctx, 31, 0x361C94u);
    ctx->pc = 0x361C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C8Cu;
    // 0x361c90: 0xafa00190  sw          $zero, 0x190($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361C8Cu, 0x361C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C94u;
label_361c94:
    // 0x361c94: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x361c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x361c98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x361c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x361c9c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x361c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x361ca0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361ca4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x361CA4u;
    {
        const bool branch_taken_0x361ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ca4) {
            ctx->pc = 0x361CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361CA4u;
            // 0x361ca8: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361CD0u;
            goto label_361cd0;
        }
    }
    ctx->pc = 0x361CACu;
    // 0x361cac: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x361cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x361cb0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x361cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x361cb4: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x361cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x361cb8: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x361cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x361cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361CBCu;
    {
        const bool branch_taken_0x361cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CBCu;
        // 0x361cc0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cbc) {
            ctx->pc = 0x361CCCu;
            goto label_361ccc;
        }
    }
    ctx->pc = 0x361CC4u;
    // 0x361cc4: 0x1462023c  bne         $v1, $v0, . + 4 + (0x23C << 2)
    ctx->pc = 0x361CC4u;
    {
        const bool branch_taken_0x361cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x361CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CC4u;
        // 0x361cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cc4) {
            ctx->pc = 0x3625B8u;
            goto label_3625b8;
        }
    }
    ctx->pc = 0x361CCCu;
label_361ccc:
    // 0x361ccc: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x361cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_361cd0:
    // 0x361cd0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x361cd4: 0x106001dc  beqz        $v1, . + 4 + (0x1DC << 2)
    ctx->pc = 0x361CD4u;
    {
        const bool branch_taken_0x361cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CD4u;
        // 0x361cd8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cd4) {
            ctx->pc = 0x362448u;
            goto label_362448;
        }
    }
    ctx->pc = 0x361CDCu;
    // 0x361cdc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x361cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x361ce0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x361ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x361ce4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x361CE4u;
    {
        const bool branch_taken_0x361ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ce4) {
            ctx->pc = 0x361CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361CE4u;
            // 0x361ce8: 0x27a300d0  addiu       $v1, $sp, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361CFCu;
            goto label_361cfc;
        }
    }
    ctx->pc = 0x361CECu;
    // 0x361cec: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x361cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x361cf0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x361cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x361cf4: 0x104001d4  beqz        $v0, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x361CF4u;
    {
        const bool branch_taken_0x361cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361CF4u;
        // 0x361cf8: 0x27a300d0  addiu       $v1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361cf4) {
            ctx->pc = 0x362448u;
            goto label_362448;
        }
    }
    ctx->pc = 0x361CFCu;
label_361cfc:
    // 0x361cfc: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x361cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361d00: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x361d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
    // 0x361d04: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x361d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_361d08:
    // 0x361d08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x361d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x361d0c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x361d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x361d10: 0x0  nop
    ctx->pc = 0x361d10u;
    // NOP
    // 0x361d14: 0x0  nop
    ctx->pc = 0x361d14u;
    // NOP
    // 0x361d18: 0x661fffb  bgez        $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x361D18u;
    {
        const bool branch_taken_0x361d18 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x361D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D18u;
        // 0x361d1c: 0x2442fff4  addiu       $v0, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d18) {
            ctx->pc = 0x361D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361d08;
        }
    }
    ctx->pc = 0x361D20u;
    // 0x361d20: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x361d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x361d24: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x361d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x361d28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x361d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x361d2c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x361D2Cu;
    {
        const bool branch_taken_0x361d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D2Cu;
        // 0x361d30: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d2c) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x361D34u;
    // 0x361d34: 0x0  nop
    ctx->pc = 0x361d34u;
    // NOP
label_361d38:
    // 0x361d38: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x361d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x361d3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361D3Cu;
    {
        const bool branch_taken_0x361d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D3Cu;
        // 0x361d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d3c) {
            ctx->pc = 0x361D50u;
            goto label_361d50;
        }
    }
    ctx->pc = 0x361D44u;
    // 0x361d44: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x361d48: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x361D48u;
    {
        const bool branch_taken_0x361d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361d48) {
            ctx->pc = 0x361D54u;
            goto label_361d54;
        }
    }
    ctx->pc = 0x361D50u;
label_361d50:
    // 0x361d50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x361d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_361d54:
    // 0x361d54: 0x108000e9  beqz        $a0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x361D54u;
    {
        const bool branch_taken_0x361d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D54u;
        // 0x361d58: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d54) {
            ctx->pc = 0x3620FCu;
            goto label_3620fc;
        }
    }
    ctx->pc = 0x361D5Cu;
    // 0x361d5c: 0x8ea2036c  lw          $v0, 0x36C($s5)
    ctx->pc = 0x361d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 876)));
    // 0x361d60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x361d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x361d64: 0x144000e6  bnez        $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x361D64u;
    {
        const bool branch_taken_0x361d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D64u;
        // 0x361d68: 0x24633d20  addiu       $v1, $v1, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d64) {
            ctx->pc = 0x362100u;
            goto label_362100;
        }
    }
    ctx->pc = 0x361D6Cu;
    // 0x361d6c: 0x8ea20370  lw          $v0, 0x370($s5)
    ctx->pc = 0x361d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 880)));
    // 0x361d70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361d74: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x361D74u;
    {
        const bool branch_taken_0x361d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D74u;
        // 0x361d78: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d74) {
            ctx->pc = 0x3620FCu;
            goto label_3620fc;
        }
    }
    ctx->pc = 0x361D7Cu;
    // 0x361d7c: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x361d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x361d80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x361d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d84: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x361d84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x361d88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x361d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d8c: 0xc0d84f2  jal         func_3613C8
    ctx->pc = 0x361D8Cu;
    SET_GPR_U32(ctx, 31, 0x361D94u);
    ctx->pc = 0x361D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D8Cu;
    // 0x361d90: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3613C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3613C8u, 0x361D8Cu, 0x361D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D94u;
label_361d94:
    // 0x361d94: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x361D94u;
    {
        const bool branch_taken_0x361d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D94u;
        // 0x361d98: 0x8fa30194  lw          $v1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d94) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x361D9Cu;
    // 0x361d9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x361d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361da0: 0x27be0110  addiu       $fp, $sp, 0x110
    ctx->pc = 0x361da0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x361da4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x361da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361da8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361dac: 0x27b400d8  addiu       $s4, $sp, 0xD8
    ctx->pc = 0x361dacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x361db0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361DB0u;
    {
        const bool branch_taken_0x361db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361DB0u;
        // 0x361db4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361db0) {
            ctx->pc = 0x361DD8u;
            goto label_361dd8;
        }
    }
    ctx->pc = 0x361DB8u;
    // 0x361db8: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x361db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
    // 0x361dbc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x361dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x361dc0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x361dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x361dc4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x361dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361dc8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x361dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x361dcc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x361DCCu;
    {
        const bool branch_taken_0x361dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361DCCu;
        // 0x361dd0: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361dcc) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x361DD4u;
    // 0x361dd4: 0x0  nop
    ctx->pc = 0x361dd4u;
    // NOP
label_361dd8:
    // 0x361dd8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x361DD8u;
    SET_GPR_U32(ctx, 31, 0x361DE0u);
    ctx->pc = 0x361DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361DD8u;
    // 0x361ddc: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x361DD8u, 0x361DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361DE0u;
label_361de0:
    // 0x361de0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x361de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x361de4: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x361DE4u;
    {
        const bool branch_taken_0x361de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361de4) {
            ctx->pc = 0x361DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361DE4u;
            // 0x361de8: 0x8ef00004  lw          $s0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361E7Cu;
            goto label_361e7c;
        }
    }
    ctx->pc = 0x361DECu;
    // 0x361dec: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x361decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x361df0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x361df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361df4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x361df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361df8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x361df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361dfc: 0x0  nop
    ctx->pc = 0x361dfcu;
    // NOP
    // 0x361e00: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
    ctx->pc = 0x361E00u;
    {
        const bool branch_taken_0x361e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x361E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E00u;
        // 0x361e04: 0x27a400d8  addiu       $a0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e00) {
            ctx->pc = 0x3620BCu;
            goto label_3620bc;
        }
    }
    ctx->pc = 0x361E08u;
    // 0x361e08: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x361e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361e0c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x361e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x361e10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x361E10u;
    {
        const bool branch_taken_0x361e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E10u;
        // 0x361e14: 0x27a900d4  addiu       $t1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e10) {
            ctx->pc = 0x361E58u;
            goto label_361e58;
        }
    }
    ctx->pc = 0x361E18u;
    // 0x361e18: 0x8fa30194  lw          $v1, 0x194($sp)
    ctx->pc = 0x361e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x361e1c: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x361e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x361e20: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x361e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x361e24: 0x24650024  addiu       $a1, $v1, 0x24
    ctx->pc = 0x361e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_361e28:
    // 0x361e28: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x361e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x361e2c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x361e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x361e30: 0x268182a  slt         $v1, $s3, $t0
    ctx->pc = 0x361e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x361e34: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x361e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x361e38: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x361e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x361e3c: 0x8cc2fff4  lw          $v0, -0xC($a2)
    ctx->pc = 0x361e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x361e40: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x361e40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x361e44: 0x24c6fff4  addiu       $a2, $a2, -0xC
    ctx->pc = 0x361e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
    // 0x361e48: 0xc4e0fff4  lwc1        $f0, -0xC($a3)
    ctx->pc = 0x361e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361e4c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x361e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x361e50: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x361E50u;
    {
        const bool branch_taken_0x361e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x361E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E50u;
        // 0x361e54: 0x24e7fff4  addiu       $a3, $a3, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e50) {
            ctx->pc = 0x361E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361e28;
        }
    }
    ctx->pc = 0x361E58u;
label_361e58:
    // 0x361e58: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x361e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x361e5c: 0x1361821  addu        $v1, $t1, $s6
    ctx->pc = 0x361e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 22)));
    // 0x361e60: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x361e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x361e64: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x361e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x361e68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x361e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x361e6c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x361e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x361e70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361e74: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x361E74u;
    {
        const bool branch_taken_0x361e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E74u;
        // 0x361e78: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e74) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x361E7Cu;
label_361e7c:
    // 0x361e7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e80: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x361E80u;
    SET_GPR_U32(ctx, 31, 0x361E88u);
    ctx->pc = 0x361E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E80u;
    // 0x361e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x361E80u, 0x361E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E88u;
label_361e88:
    // 0x361e88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x361E88u;
    {
        const bool branch_taken_0x361e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e88) {
            ctx->pc = 0x361E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361E88u;
            // 0x361e8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361EA4u;
            goto label_361ea4;
        }
    }
    ctx->pc = 0x361E90u;
    // 0x361e90: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x361E90u;
    SET_GPR_U32(ctx, 31, 0x361E98u);
    ctx->pc = 0x361E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E90u;
    // 0x361e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x361E90u, 0x361E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E98u;
label_361e98:
    // 0x361e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361e9c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x361E9Cu;
    {
        const bool branch_taken_0x361e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x361e9c) {
            ctx->pc = 0x361EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361E9Cu;
            // 0x361ea0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361EA4u;
            goto label_361ea4;
        }
    }
    ctx->pc = 0x361EA4u;
label_361ea4:
    // 0x361ea4: 0x52200086  beql        $s1, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x361EA4u;
    {
        const bool branch_taken_0x361ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ea4) {
            ctx->pc = 0x361EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361EA4u;
            // 0x361ea8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3620C0u;
            goto label_3620c0;
        }
    }
    ctx->pc = 0x361EACu;
    // 0x361eac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361EACu;
    SET_GPR_U32(ctx, 31, 0x361EB4u);
    ctx->pc = 0x361EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EACu;
    // 0x361eb0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361EACu, 0x361EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361EB4u;
label_361eb4:
    // 0x361eb4: 0x8ee70004  lw          $a3, 0x4($s7)
    ctx->pc = 0x361eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x361eb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x361eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361ebc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x361ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x361ec0: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x361ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x361ec4: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x361ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x361ec8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x361ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x361ecc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x361eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361ed0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x361ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x361ed4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x361ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x361ed8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x361ed8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361edc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x361edcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361ee0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361ee4: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x361ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361ee8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x361ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361eec: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x361eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361ef0: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x361ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361ef4: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x361ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361ef8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x361ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x361efc: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x361efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x361f00: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x361f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x361f04: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x361f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x361f08: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x361f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x361f0c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x361f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361f10: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x361f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x361f14: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x361f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361f18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x361f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361f1c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x361f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361f20: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x361f20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361f24: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x361f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361f28: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x361f28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x361f2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x361f2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x361f30: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x361f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361f34: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x361f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361f38: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x361f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x361f3c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x361f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x361f40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x361f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361f44: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x361f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361f48: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x361f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x361f4c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x361f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361f50: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x361f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361f54: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x361f54u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x361f58: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x361f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361f5c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x361f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361f60: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x361f60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x361f64: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x361f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361f68: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x361f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361f6c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x361f6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x361f70: 0x8ea30104  lw          $v1, 0x104($s5)
    ctx->pc = 0x361f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
    // 0x361f74: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x361f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x361f78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361f7c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x361f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x361f80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x361f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f84: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x361f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361f88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x361f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361f8c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x361f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361f90: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x361f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f94: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x361f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361f98: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x361f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361f9c: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x361f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361fa0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x361fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x361fa4: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x361fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x361fa8: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x361fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x361fac: 0xe7a3011c  swc1        $f3, 0x11C($sp)
    ctx->pc = 0x361facu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x361fb0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x361fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x361fb4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x361fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361fb8: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x361fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x361fbc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x361fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361fc0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x361fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361fc4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x361fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361fc8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x361fc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361fcc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x361fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361fd0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x361fd0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x361fd4: 0x4a0003bf  vwaitq
    ctx->pc = 0x361fd4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x361fd8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x361fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361fdc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x361fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361fe0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x361fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x361fe4: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x361fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x361fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361fec: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x361fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x361ff0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x361ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x361ff4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x361ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361ff8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x361ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361ffc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x361ffcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x362000: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x362000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x362004: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x362004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x362008: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x362008u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x36200c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x36200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x362010: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x362010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x362014: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x362014u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x362018: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x362018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x36201c: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x36201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x362020: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x362020u;
    {
        const bool branch_taken_0x362020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362020u;
        // 0x362024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362020) {
            ctx->pc = 0x36202Cu;
            goto label_36202c;
        }
    }
    ctx->pc = 0x362028u;
    // 0x362028: 0x8c82121c  lw          $v0, 0x121C($a0)
    ctx->pc = 0x362028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
label_36202c:
    // 0x36202c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x36202cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x362030: 0x0  nop
    ctx->pc = 0x362030u;
    // NOP
    // 0x362034: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x362034u;
    {
        const bool branch_taken_0x362034 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x362038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362034u;
        // 0x362038: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362034) {
            ctx->pc = 0x362048u;
            goto label_362048;
        }
    }
    ctx->pc = 0x36203Cu;
    // 0x36203c: 0x56a20020  bnel        $s5, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36203Cu;
    {
        const bool branch_taken_0x36203c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x36203c) {
            ctx->pc = 0x362040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36203Cu;
            // 0x362040: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3620C0u;
            goto label_3620c0;
        }
    }
    ctx->pc = 0x362044u;
    // 0x362044: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x362044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_362048:
    // 0x362048: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x362048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36204c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x36204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x362050: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x362050u;
    {
        const bool branch_taken_0x362050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362050u;
        // 0x362054: 0x27a900d4  addiu       $t1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362050) {
            ctx->pc = 0x362098u;
            goto label_362098;
        }
    }
    ctx->pc = 0x362058u;
    // 0x362058: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x362058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x36205c: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x36205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x362060: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x362060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x362064: 0x24450024  addiu       $a1, $v0, 0x24
    ctx->pc = 0x362064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_362068:
    // 0x362068: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x362068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x36206c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x36206cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x362070: 0x268182a  slt         $v1, $s3, $t0
    ctx->pc = 0x362070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x362074: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x362074u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x362078: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x362078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x36207c: 0x8cc2fff4  lw          $v0, -0xC($a2)
    ctx->pc = 0x36207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x362080: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x362080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x362084: 0x24c6fff4  addiu       $a2, $a2, -0xC
    ctx->pc = 0x362084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
    // 0x362088: 0xc4e0fff4  lwc1        $f0, -0xC($a3)
    ctx->pc = 0x362088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36208c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x36208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x362090: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x362090u;
    {
        const bool branch_taken_0x362090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x362094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362090u;
        // 0x362094: 0x24e7fff4  addiu       $a3, $a3, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362090) {
            ctx->pc = 0x362068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362068;
        }
    }
    ctx->pc = 0x362098u;
label_362098:
    // 0x362098: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x362098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x36209c: 0x1361821  addu        $v1, $t1, $s6
    ctx->pc = 0x36209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 22)));
    // 0x3620a0: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x3620a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x3620a4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3620a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3620a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3620a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3620ac: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x3620acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x3620b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3620b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3620b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3620B4u;
    {
        const bool branch_taken_0x3620b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3620B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620B4u;
        // 0x3620b8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620b4) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x3620BCu;
label_3620bc:
    // 0x3620bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3620bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3620c0:
    // 0x3620c0: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x3620c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x3620c4: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x3620c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x3620c8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x3620c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3620cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3620CCu;
    {
        const bool branch_taken_0x3620cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3620D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620CCu;
        // 0x3620d0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620cc) {
            ctx->pc = 0x3620F8u;
            goto label_3620f8;
        }
    }
    ctx->pc = 0x3620D4u;
    // 0x3620d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3620d8: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x3620D8u;
    {
        const bool branch_taken_0x3620d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3620DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3620D8u;
        // 0x3620dc: 0x3b61021  addu        $v0, $sp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3620d8) {
            ctx->pc = 0x361DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361dd8;
        }
    }
    ctx->pc = 0x3620E0u;
    // 0x3620e0: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x3620e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x3620e4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x3620e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x3620e8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x3620e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3620ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3620ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3620f0: 0xac4300d4  sw          $v1, 0xD4($v0)
    ctx->pc = 0x3620f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 3));
    // 0x3620f4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x3620f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_3620f8:
    // 0x3620f8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x3620f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_3620fc:
    // 0x3620fc: 0x24633d20  addiu       $v1, $v1, 0x3D20
    ctx->pc = 0x3620fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
label_362100:
    // 0x362100: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x362100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x362104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x362104u;
    {
        const bool branch_taken_0x362104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362104u;
        // 0x362108: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362104) {
            ctx->pc = 0x362110u;
            goto label_362110;
        }
    }
    ctx->pc = 0x36210Cu;
    // 0x36210c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x36210cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362110:
    // 0x362110: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362110u;
    {
        const bool branch_taken_0x362110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362110u;
        // 0x362114: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362110) {
            ctx->pc = 0x362124u;
            goto label_362124;
        }
    }
    ctx->pc = 0x362118u;
    // 0x362118: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x362118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x36211c: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x36211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x362120: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x362120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_362124:
    // 0x362124: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x362124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362128: 0x5460ff03  bnel        $v1, $zero, . + 4 + (-0xFD << 2)
    ctx->pc = 0x362128u;
    {
        const bool branch_taken_0x362128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362128) {
            ctx->pc = 0x36212Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362128u;
            // 0x36212c: 0x8c6300c0  lw          $v1, 0xC0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x361D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361d38;
        }
    }
    ctx->pc = 0x362130u;
    // 0x362130: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x362130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x362134: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x362134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362138: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x362138u;
    SET_GPR_U32(ctx, 31, 0x362140u);
    ctx->pc = 0x36213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362138u;
    // 0x36213c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x362138u, 0x362140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362140u;
label_362140:
    // 0x362140: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x362140u;
    {
        const bool branch_taken_0x362140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x362140) {
            ctx->pc = 0x362144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362140u;
            // 0x362144: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36215Cu;
            goto label_36215c;
        }
    }
    ctx->pc = 0x362148u;
    // 0x362148: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x362148u;
    SET_GPR_U32(ctx, 31, 0x362150u);
    ctx->pc = 0x36214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362148u;
    // 0x36214c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x362148u, 0x362150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362150u;
label_362150:
    // 0x362150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362154: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x362154u;
    {
        const bool branch_taken_0x362154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x362154) {
            ctx->pc = 0x362158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362154u;
            // 0x362158: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36215Cu;
            goto label_36215c;
        }
    }
    ctx->pc = 0x36215Cu;
label_36215c:
    // 0x36215c: 0x12200095  beqz        $s1, . + 4 + (0x95 << 2)
    ctx->pc = 0x36215Cu;
    {
        const bool branch_taken_0x36215c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x362160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36215Cu;
        // 0x362160: 0x8fb00194  lw          $s0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36215c) {
            ctx->pc = 0x3623B4u;
            goto label_3623b4;
        }
    }
    ctx->pc = 0x362164u;
    // 0x362164: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x362164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x362168: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x362168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36216c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x36216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x362170: 0x8c700338  lw          $s0, 0x338($v1)
    ctx->pc = 0x362170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 824)));
    // 0x362174: 0xc098750  jal         func_261D40
    ctx->pc = 0x362174u;
    SET_GPR_U32(ctx, 31, 0x36217Cu);
    ctx->pc = 0x362178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362174u;
    // 0x362178: 0x8c720334  lw          $s2, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x362174u, 0x36217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36217Cu;
label_36217c:
    // 0x36217c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362180: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x362180u;
    {
        const bool branch_taken_0x362180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x362180) {
            ctx->pc = 0x362184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362180u;
            // 0x362184: 0x8e420150  lw          $v0, 0x150($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3621C0u;
            goto label_3621c0;
        }
    }
    ctx->pc = 0x362188u;
    // 0x362188: 0x8e430150  lw          $v1, 0x150($s2)
    ctx->pc = 0x362188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x36218c: 0x2462ffe3  addiu       $v0, $v1, -0x1D
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967267));
    // 0x362190: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x362190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x362194: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362194u;
    {
        const bool branch_taken_0x362194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362194u;
        // 0x362198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362194) {
            ctx->pc = 0x3621B4u;
            goto label_3621b4;
        }
    }
    ctx->pc = 0x36219Cu;
    // 0x36219c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36219cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3621a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3621a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3621a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3621a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3621a8: 0x284304a5  slti        $v1, $v0, 0x4A5
    ctx->pc = 0x3621a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1189) ? 1 : 0);
    // 0x3621ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3621ACu;
    {
        const bool branch_taken_0x3621ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621ac) {
            ctx->pc = 0x3621B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3621ACu;
            // 0x3621b0: 0x284404aa  slti        $a0, $v0, 0x4AA (Delay Slot)
            SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1194) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3621B4u;
            goto label_3621b4;
        }
    }
    ctx->pc = 0x3621B4u;
label_3621b4:
    // 0x3621b4: 0x14800045  bnez        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3621B4u;
    {
        const bool branch_taken_0x3621b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3621B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621B4u;
        // 0x3621b8: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621b4) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x3621BCu;
    // 0x3621bc: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x3621bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
label_3621c0:
    // 0x3621c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3621c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3621c4: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x3621c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x3621c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3621c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3621cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3621CCu;
    {
        const bool branch_taken_0x3621cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3621D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621CCu;
        // 0x3621d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621cc) {
            ctx->pc = 0x3621ECu;
            goto label_3621ec;
        }
    }
    ctx->pc = 0x3621D4u;
    // 0x3621d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3621d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3621d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3621d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3621dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3621dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3621e0: 0x284304b9  slti        $v1, $v0, 0x4B9
    ctx->pc = 0x3621e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1209) ? 1 : 0);
    // 0x3621e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3621E4u;
    {
        const bool branch_taken_0x3621e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621e4) {
            ctx->pc = 0x3621E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3621E4u;
            // 0x3621e8: 0x284504be  slti        $a1, $v0, 0x4BE (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1214) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3621ECu;
            goto label_3621ec;
        }
    }
    ctx->pc = 0x3621ECu;
label_3621ec:
    // 0x3621ec: 0x14a00037  bnez        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x3621ECu;
    {
        const bool branch_taken_0x3621ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3621F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621ECu;
        // 0x3621f0: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621ec) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x3621F4u;
    // 0x3621f4: 0x2482ffe3  addiu       $v0, $a0, -0x1D
    ctx->pc = 0x3621f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
    // 0x3621f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3621f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3621fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3621FCu;
    {
        const bool branch_taken_0x3621fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3621FCu;
        // 0x362200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3621fc) {
            ctx->pc = 0x36221Cu;
            goto label_36221c;
        }
    }
    ctx->pc = 0x362204u;
    // 0x362204: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x362204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x362208: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x362208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36220c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x362210: 0x2843049b  slti        $v1, $v0, 0x49B
    ctx->pc = 0x362210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1179) ? 1 : 0);
    // 0x362214: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x362214u;
    {
        const bool branch_taken_0x362214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362214) {
            ctx->pc = 0x362218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362214u;
            // 0x362218: 0x284504a0  slti        $a1, $v0, 0x4A0 (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1184) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36221Cu;
            goto label_36221c;
        }
    }
    ctx->pc = 0x36221Cu;
label_36221c:
    // 0x36221c: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x36221Cu;
    {
        const bool branch_taken_0x36221c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x362220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36221Cu;
        // 0x362220: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36221c) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x362224u;
    // 0x362224: 0x2482ffe3  addiu       $v0, $a0, -0x1D
    ctx->pc = 0x362224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967267));
    // 0x362228: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x362228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x36222c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36222Cu;
    {
        const bool branch_taken_0x36222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36222Cu;
        // 0x362230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36222c) {
            ctx->pc = 0x36224Cu;
            goto label_36224c;
        }
    }
    ctx->pc = 0x362234u;
    // 0x362234: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x362234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x362238: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x362238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x36223c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x362240: 0x284304af  slti        $v1, $v0, 0x4AF
    ctx->pc = 0x362240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1199) ? 1 : 0);
    // 0x362244: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x362244u;
    {
        const bool branch_taken_0x362244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362244) {
            ctx->pc = 0x362248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362244u;
            // 0x362248: 0x284504b4  slti        $a1, $v0, 0x4B4 (Delay Slot)
            SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1204) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36224Cu;
            goto label_36224c;
        }
    }
    ctx->pc = 0x36224Cu;
label_36224c:
    // 0x36224c: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x36224Cu;
    {
        const bool branch_taken_0x36224c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x362250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36224Cu;
        // 0x362250: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36224c) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x362254u;
    // 0x362254: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x362254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x362258: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x362258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36225c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36225Cu;
    {
        const bool branch_taken_0x36225c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x362260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36225Cu;
        // 0x362260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36225c) {
            ctx->pc = 0x36226Cu;
            goto label_36226c;
        }
    }
    ctx->pc = 0x362264u;
    // 0x362264: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x362264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x362268: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x362268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_36226c:
    // 0x36226c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x36226Cu;
    {
        const bool branch_taken_0x36226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36226Cu;
        // 0x362270: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36226c) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x362274u;
    // 0x362274: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x362274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x362278: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362278u;
    {
        const bool branch_taken_0x362278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x36227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362278u;
        // 0x36227c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362278) {
            ctx->pc = 0x362288u;
            goto label_362288;
        }
    }
    ctx->pc = 0x362280u;
    // 0x362280: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x362280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x362284: 0x28440097  slti        $a0, $v0, 0x97
    ctx->pc = 0x362284u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_362288:
    // 0x362288: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x362288u;
    {
        const bool branch_taken_0x362288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362288u;
        // 0x36228c: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362288) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x362290u;
    // 0x362290: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x362290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x362294: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362294u;
    {
        const bool branch_taken_0x362294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x362298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362294u;
        // 0x362298: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362294) {
            ctx->pc = 0x3622A8u;
            goto label_3622a8;
        }
    }
    ctx->pc = 0x36229Cu;
    // 0x36229c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x36229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3622a0: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x3622a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
    // 0x3622a4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x3622a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3622a8:
    // 0x3622a8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3622A8u;
    {
        const bool branch_taken_0x3622a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3622ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622A8u;
        // 0x3622ac: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622a8) {
            ctx->pc = 0x3622CCu;
            goto label_3622cc;
        }
    }
    ctx->pc = 0x3622B0u;
    // 0x3622b0: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3622B0u;
    {
        const bool branch_taken_0x3622b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3622B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622B0u;
        // 0x3622b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622b0) {
            ctx->pc = 0x3622C4u;
            goto label_3622c4;
        }
    }
    ctx->pc = 0x3622B8u;
    // 0x3622b8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3622b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3622bc: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x3622bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
    // 0x3622c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3622c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3622c4:
    // 0x3622c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3622C4u;
    {
        const bool branch_taken_0x3622c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3622C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622C4u;
        // 0x3622c8: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622c4) {
            ctx->pc = 0x362348u;
            goto label_362348;
        }
    }
    ctx->pc = 0x3622CCu;
label_3622cc:
    // 0x3622cc: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3622ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3622d0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3622D0u;
    {
        const bool branch_taken_0x3622d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3622D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622D0u;
        // 0x3622d4: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622d0) {
            ctx->pc = 0x362388u;
            goto label_362388;
        }
    }
    ctx->pc = 0x3622D8u;
    // 0x3622d8: 0x8fb00194  lw          $s0, 0x194($sp)
    ctx->pc = 0x3622d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3622dc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3622dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3622e0: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x3622e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x3622e4: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x3622e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3622e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3622e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3622ec: 0x0  nop
    ctx->pc = 0x3622ecu;
    // NOP
label_3622f0:
    // 0x3622f0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3622F0u;
    {
        const bool branch_taken_0x3622f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3622F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3622F0u;
        // 0x3622f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3622f0) {
            ctx->pc = 0x362324u;
            goto label_362324;
        }
    }
    ctx->pc = 0x3622F8u;
    // 0x3622f8: 0x8e26fffc  lw          $a2, -0x4($s1)
    ctx->pc = 0x3622f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3622fc: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x3622FCu;
    SET_GPR_U32(ctx, 31, 0x362304u);
    ctx->pc = 0x362300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3622FCu;
    // 0x362300: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x3622FCu, 0x362304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362304u;
label_362304:
    // 0x362304: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362304u;
    {
        const bool branch_taken_0x362304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362304u;
        // 0x362308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362304) {
            ctx->pc = 0x362324u;
            goto label_362324;
        }
    }
    ctx->pc = 0x36230Cu;
    // 0x36230c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x36230cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362310: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x362310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x362314: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x362314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x362318: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x362318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x36231c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x36231cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x362320: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x362320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_362324:
    // 0x362324: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x362324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x362328: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x362328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x36232c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x36232Cu;
    {
        const bool branch_taken_0x36232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36232Cu;
        // 0x362330: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36232c) {
            ctx->pc = 0x362388u;
            goto label_362388;
        }
    }
    ctx->pc = 0x362334u;
    // 0x362334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x362334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x362338: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x362338u;
    {
        const bool branch_taken_0x362338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362338) {
            ctx->pc = 0x36233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362338u;
            // 0x36233c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3622F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3622f0;
        }
    }
    ctx->pc = 0x362340u;
    // 0x362340: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x362340u;
    {
        const bool branch_taken_0x362340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362340u;
        // 0x362344: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362340) {
            ctx->pc = 0x36238Cu;
            goto label_36238c;
        }
    }
    ctx->pc = 0x362348u;
label_362348:
    // 0x362348: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x362348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36234c: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x36234cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x362350: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x362350u;
    {
        const bool branch_taken_0x362350 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x362354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362350u;
        // 0x362354: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362350) {
            ctx->pc = 0x362388u;
            goto label_362388;
        }
    }
    ctx->pc = 0x362358u;
    // 0x362358: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x362358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x36235c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x36235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362360: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x362360u;
    SET_GPR_U32(ctx, 31, 0x362368u);
    ctx->pc = 0x362364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362360u;
    // 0x362364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x362360u, 0x362368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362368u;
label_362368:
    // 0x362368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x362368u;
    {
        const bool branch_taken_0x362368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362368u;
        // 0x36236c: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362368) {
            ctx->pc = 0x362388u;
            goto label_362388;
        }
    }
    ctx->pc = 0x362370u;
    // 0x362370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362374: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x362374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362378: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x362378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36237c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x36237cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x362380: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x362380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x362384: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x362384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_362388:
    // 0x362388: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x362388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_36238c:
    // 0x36238c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36238Cu;
    {
        const bool branch_taken_0x36238c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36238Cu;
        // 0x362390: 0x8ec3bd50  lw          $v1, -0x42B0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36238c) {
            ctx->pc = 0x3623ACu;
            goto label_3623ac;
        }
    }
    ctx->pc = 0x362394u;
    // 0x362394: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x362394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x362398: 0x54430086  bnel        $v0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x362398u;
    {
        const bool branch_taken_0x362398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x362398) {
            ctx->pc = 0x36239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362398u;
            // 0x36239c: 0xaea0b828  sw          $zero, -0x47D8($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4294948904), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3625B4u;
            goto label_3625b4;
        }
    }
    ctx->pc = 0x3623A0u;
    // 0x3623a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3623a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3623a4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3623A4u;
    {
        const bool branch_taken_0x3623a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623A4u;
        // 0x3623a8: 0xaea2b828  sw          $v0, -0x47D8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294948904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623a4) {
            ctx->pc = 0x3625B4u;
            goto label_3625b4;
        }
    }
    ctx->pc = 0x3623ACu;
label_3623ac:
    // 0x3623ac: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x3623ACu;
    {
        const bool branch_taken_0x3623ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623ACu;
        // 0x3623b0: 0xaea0b828  sw          $zero, -0x47D8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294948904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623ac) {
            ctx->pc = 0x3625B4u;
            goto label_3625b4;
        }
    }
    ctx->pc = 0x3623B4u;
label_3623b4:
    // 0x3623b4: 0x27b100d8  addiu       $s1, $sp, 0xD8
    ctx->pc = 0x3623b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x3623b8: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x3623b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3623bc: 0x0  nop
    ctx->pc = 0x3623bcu;
    // NOP
label_3623c0:
    // 0x3623c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3623c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3623c4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3623C4u;
    {
        const bool branch_taken_0x3623c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623C4u;
        // 0x3623c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623c4) {
            ctx->pc = 0x362430u;
            goto label_362430;
        }
    }
    ctx->pc = 0x3623CCu;
    // 0x3623cc: 0x8e26fffc  lw          $a2, -0x4($s1)
    ctx->pc = 0x3623ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3623d0: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x3623D0u;
    SET_GPR_U32(ctx, 31, 0x3623D8u);
    ctx->pc = 0x3623D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3623D0u;
    // 0x3623d4: 0x8fa7018c  lw          $a3, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x3623D0u, 0x3623D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3623D8u;
label_3623d8:
    // 0x3623d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3623D8u;
    {
        const bool branch_taken_0x3623d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3623DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3623D8u;
        // 0x3623dc: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3623d8) {
            ctx->pc = 0x362430u;
            goto label_362430;
        }
    }
    ctx->pc = 0x3623E0u;
    // 0x3623e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3623e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3623e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3623e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3623e8: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x3623e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x3623ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3623ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3623f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3623f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3623f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3623f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3623f8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x3623f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x3623fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3623fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x362400: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x362400u;
    SET_GPR_U32(ctx, 31, 0x362408u);
    ctx->pc = 0x362404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362400u;
    // 0x362404: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x362400u, 0x362408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362408u;
label_362408:
    // 0x362408: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x362408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x36240c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x36240Cu;
    {
        const bool branch_taken_0x36240c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36240c) {
            ctx->pc = 0x362410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36240Cu;
            // 0x362410: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362434u;
            goto label_362434;
        }
    }
    ctx->pc = 0x362414u;
    // 0x362414: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x362414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x362418: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x362418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x36241c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x36241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x362420: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x362420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x362424: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x362424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x362428: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x362428u;
    {
        const bool branch_taken_0x362428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362428u;
        // 0x36242c: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362428) {
            ctx->pc = 0x3625B8u;
            goto label_3625b8;
        }
    }
    ctx->pc = 0x362430u;
label_362430:
    // 0x362430: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x362430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_362434:
    // 0x362434: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x362434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x362438: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x362438u;
    {
        const bool branch_taken_0x362438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362438u;
        // 0x36243c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362438) {
            ctx->pc = 0x3623C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3623c0;
        }
    }
    ctx->pc = 0x362440u;
    // 0x362440: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x362440u;
    {
        const bool branch_taken_0x362440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362440u;
        // 0x362444: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362440) {
            ctx->pc = 0x3625B8u;
            goto label_3625b8;
        }
    }
    ctx->pc = 0x362448u;
label_362448:
    // 0x362448: 0x27a80180  addiu       $t0, $sp, 0x180
    ctx->pc = 0x362448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x36244c: 0x8e05bd50  lw          $a1, -0x42B0($s0)
    ctx->pc = 0x36244cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x362450: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x362450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362454: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x362454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x362458: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x362458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36245c: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x36245cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x362460: 0xc0d84f2  jal         func_3613C8
    ctx->pc = 0x362460u;
    SET_GPR_U32(ctx, 31, 0x362468u);
    ctx->pc = 0x362464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362460u;
    // 0x362464: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3613C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3613C8u, 0x362460u, 0x362468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362468u;
label_362468:
    // 0x362468: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x362468u;
    {
        const bool branch_taken_0x362468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362468u;
        // 0x36246c: 0x8e05bd50  lw          $a1, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362468) {
            ctx->pc = 0x3624C4u;
            goto label_3624c4;
        }
    }
    ctx->pc = 0x362470u;
    // 0x362470: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x362470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362474: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x362474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x362478: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x362478u;
    SET_GPR_U32(ctx, 31, 0x362480u);
    ctx->pc = 0x36247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362478u;
    // 0x36247c: 0x8fa7018c  lw          $a3, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x362478u, 0x362480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362480u;
label_362480:
    // 0x362480: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x362480u;
    {
        const bool branch_taken_0x362480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362480u;
        // 0x362484: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362480) {
            ctx->pc = 0x3624C4u;
            goto label_3624c4;
        }
    }
    ctx->pc = 0x362488u;
    // 0x362488: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x362488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36248c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x36248cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x362490: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x362490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x362494: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x362494u;
    SET_GPR_U32(ctx, 31, 0x36249Cu);
    ctx->pc = 0x362498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362494u;
    // 0x362498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x362494u, 0x36249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36249Cu;
label_36249c:
    // 0x36249c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36249Cu;
    {
        const bool branch_taken_0x36249c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36249c) {
            ctx->pc = 0x3624A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36249Cu;
            // 0x3624a0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3624A4u;
    // 0x3624a4: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x3624A4u;
    SET_GPR_U32(ctx, 31, 0x3624ACu);
    ctx->pc = 0x3624A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3624A4u;
    // 0x3624a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x3624A4u, 0x3624ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3624ACu;
label_3624ac:
    // 0x3624ac: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x3624ACu;
    {
        const bool branch_taken_0x3624ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x3624ac) {
            ctx->pc = 0x3624B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3624ACu;
            // 0x3624b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3624B4u;
            goto label_3624b4;
        }
    }
    ctx->pc = 0x3624B4u;
label_3624b4:
    // 0x3624b4: 0x16200040  bnez        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3624B4u;
    {
        const bool branch_taken_0x3624b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3624B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624B4u;
        // 0x3624b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624b4) {
            ctx->pc = 0x3625B8u;
            goto label_3625b8;
        }
    }
    ctx->pc = 0x3624BCu;
    // 0x3624bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3624bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3624c0: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x3624c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_3624c4:
    // 0x3624c4: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x3624c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x3624c8: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x3624c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x3624cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3624ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x3624d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3624D0u;
    {
        const bool branch_taken_0x3624d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3624D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624D0u;
        // 0x3624d4: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624d0) {
            ctx->pc = 0x36257Cu;
            goto label_36257c;
        }
    }
    ctx->pc = 0x3624D8u;
label_3624d8:
    // 0x3624d8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3624d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3624dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3624DCu;
    {
        const bool branch_taken_0x3624dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3624E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624DCu;
        // 0x3624e0: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624dc) {
            ctx->pc = 0x362510u;
            goto label_362510;
        }
    }
    ctx->pc = 0x3624E4u;
    // 0x3624e4: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x3624e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x3624e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3624e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3624ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3624ECu;
    {
        const bool branch_taken_0x3624ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3624ec) {
            ctx->pc = 0x3624F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3624ECu;
            // 0x3624f0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362514u;
            goto label_362514;
        }
    }
    ctx->pc = 0x3624F4u;
    // 0x3624f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3624f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3624f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3624F8u;
    {
        const bool branch_taken_0x3624f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3624FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3624F8u;
        // 0x3624fc: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3624f8) {
            ctx->pc = 0x362580u;
            goto label_362580;
        }
    }
    ctx->pc = 0x362500u;
    // 0x362500: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x362500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x362504: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x362504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x362508: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x362508u;
    {
        const bool branch_taken_0x362508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362508u;
        // 0x36250c: 0x24633d20  addiu       $v1, $v1, 0x3D20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362508) {
            ctx->pc = 0x362584u;
            goto label_362584;
        }
    }
    ctx->pc = 0x362510u;
label_362510:
    // 0x362510: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x362510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_362514:
    // 0x362514: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x362514u;
    {
        const bool branch_taken_0x362514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x362518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362514u;
        // 0x362518: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362514) {
            ctx->pc = 0x362534u;
            goto label_362534;
        }
    }
    ctx->pc = 0x36251Cu;
    // 0x36251c: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x36251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x362520: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x362520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x362524: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362524u;
    {
        const bool branch_taken_0x362524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362524u;
        // 0x362528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362524) {
            ctx->pc = 0x362538u;
            goto label_362538;
        }
    }
    ctx->pc = 0x36252Cu;
    // 0x36252c: 0x12030014  beq         $s0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36252Cu;
    {
        const bool branch_taken_0x36252c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x362530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36252Cu;
        // 0x362530: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36252c) {
            ctx->pc = 0x362580u;
            goto label_362580;
        }
    }
    ctx->pc = 0x362534u;
label_362534:
    // 0x362534: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x362534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_362538:
    // 0x362538: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x362538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x36253c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362540: 0xc0d84f2  jal         func_3613C8
    ctx->pc = 0x362540u;
    SET_GPR_U32(ctx, 31, 0x362548u);
    ctx->pc = 0x362544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362540u;
    // 0x362544: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3613C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3613C8u, 0x362540u, 0x362548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362548u;
label_362548:
    // 0x362548: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x362548u;
    {
        const bool branch_taken_0x362548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362548u;
        // 0x36254c: 0x8fa60180  lw          $a2, 0x180($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362548) {
            ctx->pc = 0x36257Cu;
            goto label_36257c;
        }
    }
    ctx->pc = 0x362550u;
    // 0x362550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x362550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362554: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x362554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362558: 0xc0d77a8  jal         func_35DEA0
    ctx->pc = 0x362558u;
    SET_GPR_U32(ctx, 31, 0x362560u);
    ctx->pc = 0x36255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362558u;
    // 0x36255c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DEA0u, 0x362558u, 0x362560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362560u;
label_362560:
    // 0x362560: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362560u;
    {
        const bool branch_taken_0x362560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362560u;
        // 0x362564: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362560) {
            ctx->pc = 0x36257Cu;
            goto label_36257c;
        }
    }
    ctx->pc = 0x362568u;
    // 0x362568: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x362568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36256c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362570: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x362570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x362574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x362574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x362578: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x362578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36257c:
    // 0x36257c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x36257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_362580:
    // 0x362580: 0x24633d20  addiu       $v1, $v1, 0x3D20
    ctx->pc = 0x362580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
label_362584:
    // 0x362584: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x362584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x362588: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x362588u;
    {
        const bool branch_taken_0x362588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362588u;
        // 0x36258c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362588) {
            ctx->pc = 0x362594u;
            goto label_362594;
        }
    }
    ctx->pc = 0x362590u;
    // 0x362590: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x362590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_362594:
    // 0x362594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x362594u;
    {
        const bool branch_taken_0x362594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x362598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362594u;
        // 0x362598: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362594) {
            ctx->pc = 0x3625A8u;
            goto label_3625a8;
        }
    }
    ctx->pc = 0x36259Cu;
    // 0x36259c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x36259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3625a0: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x3625a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
    // 0x3625a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3625a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3625a8:
    // 0x3625a8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3625a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625ac: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3625ACu;
    {
        const bool branch_taken_0x3625ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3625ac) {
            ctx->pc = 0x3625B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3625ACu;
            // 0x3625b0: 0x8c62036c  lw          $v0, 0x36C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3624D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3624d8;
        }
    }
    ctx->pc = 0x3625B4u;
label_3625b4:
    // 0x3625b4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3625b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_3625b8:
    // 0x3625b8: 0xdfb001a0  ld          $s0, 0x1A0($sp)
    ctx->pc = 0x3625b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3625bc: 0xdfb101a8  ld          $s1, 0x1A8($sp)
    ctx->pc = 0x3625bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x3625c0: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x3625c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3625c4: 0xdfb301b8  ld          $s3, 0x1B8($sp)
    ctx->pc = 0x3625c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x3625c8: 0xdfb401c0  ld          $s4, 0x1C0($sp)
    ctx->pc = 0x3625c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3625cc: 0xdfb501c8  ld          $s5, 0x1C8($sp)
    ctx->pc = 0x3625ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x3625d0: 0xdfb601d0  ld          $s6, 0x1D0($sp)
    ctx->pc = 0x3625d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3625d4: 0xdfb701d8  ld          $s7, 0x1D8($sp)
    ctx->pc = 0x3625d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x3625d8: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x3625d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3625dc: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x3625dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x3625e0: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x3625e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3625e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3625E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3625E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625E4u;
        // 0x3625e8: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3625ECu;
    // 0x3625ec: 0x0  nop
    ctx->pc = 0x3625ecu;
    // NOP
    ctx->pc = 0x3625f0u;
}
