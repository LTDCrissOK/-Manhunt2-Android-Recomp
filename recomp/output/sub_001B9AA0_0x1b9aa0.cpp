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

// Function: sub_001B9AA0
// Address: 0x1b9aa0 - 0x1ba2a0
void sub_001B9AA0_0x1b9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9AA0_0x1b9aa0");
#endif

    switch (ctx->pc) {
        case 0x1b9afcu: goto label_1b9afc;
        case 0x1b9b04u: goto label_1b9b04;
        case 0x1b9b70u: goto label_1b9b70;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba210u: goto label_1ba210;
        default: break;
    }

    ctx->pc = 0x1b9aa0u;

    // 0x1b9aa0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1b9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1b9aa4: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1b9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x1b9aa8: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x1b9aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x1b9aac: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1b9aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9ab0: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1b9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x1b9ab4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b9ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ab8: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x1b9ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x1b9abc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b9abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ac0: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1b9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x1b9ac4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1b9ac4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ac8: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1b9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x1b9acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ad0: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x1b9ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x1b9ad4: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x1b9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x1b9ad8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x1b9ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x1b9adc: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x1b9adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x1b9ae0: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x1b9ae0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x1b9ae4: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1b9ae4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x1b9ae8: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1b9ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x1b9aec: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b9aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1b9af0: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x1b9af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
    // 0x1b9af4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9AF4u;
    SET_GPR_U32(ctx, 31, 0x1B9AFCu);
    ctx->pc = 0x1B9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AF4u;
    // 0x1b9af8: 0xafa70148  sw          $a3, 0x148($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9AF4u, 0x1B9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AFCu;
label_1b9afc:
    // 0x1b9afc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9AFCu;
    SET_GPR_U32(ctx, 31, 0x1B9B04u);
    ctx->pc = 0x1B9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AFCu;
    // 0x1b9b00: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9AFCu, 0x1B9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B04u;
label_1b9b04:
    // 0x1b9b04: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1b9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1b9b08: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1b9b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b9b0c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1b9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1b9b10: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b9b14: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1b9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1b9b18: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1b9b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b9b1c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1b9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1b9b20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b9b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b9b24: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b9b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1b9b28: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1b9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1b9b2c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b9b30: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1b9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1b9b34: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b9b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9b38: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1b9b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9b3c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1b9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1b9b40: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1b9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1b9b44: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b9b48: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1b9b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x1b9b4c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1b9b4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9b50: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9b54: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b9b58: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1b9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1b9b5c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1b9b5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b60: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1b9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1b9b64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b9b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b68: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1B9B68u;
    SET_GPR_U32(ctx, 31, 0x1B9B70u);
    ctx->pc = 0x1B9B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B68u;
    // 0x1b9b6c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1B9B68u, 0x1B9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B70u;
label_1b9b70:
    // 0x1b9b70: 0x8e630ff8  lw          $v1, 0xFF8($s3)
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4088)));
    // 0x1b9b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9b78: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b9b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b9b7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9b80: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1b9b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1b9b84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9B84u;
    {
        const bool branch_taken_0x1b9b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9B84u;
        // 0x1b9b88: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9b84) {
            ctx->pc = 0x1B9B94u;
            goto label_1b9b94;
        }
    }
    ctx->pc = 0x1B9B8Cu;
    // 0x1b9b8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9B8Cu;
    {
        const bool branch_taken_0x1b9b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b8c) {
            ctx->pc = 0x1B9B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B8Cu;
            // 0x1b9b90: 0xc66203b0  lwc1        $f2, 0x3B0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9BA0u;
            goto label_1b9ba0;
        }
    }
    ctx->pc = 0x1B9B94u;
label_1b9b94:
    // 0x1b9b94: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9b98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b9b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b9b9c: 0xc66203b0  lwc1        $f2, 0x3B0($s3)
    ctx->pc = 0x1b9b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b9ba0:
    // 0x1b9ba0: 0x266203b0  addiu       $v0, $s3, 0x3B0
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 944));
    // 0x1b9ba4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b9ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b9ba8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b9ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b9bac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b9bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1b9bb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b9bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bb4: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x1b9bb4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x1b9bb8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9bbc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1b9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9bc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9bc4: 0x46060836  c.le.s      $f1, $f6
    ctx->pc = 0x1b9bc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9bc8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1b9bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b9bcc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b9bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b9bd0: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x1b9bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b9bd4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1B9BD4u;
    {
        const bool branch_taken_0x1b9bd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BD4u;
        // 0x1b9bd8: 0xe7a40068  swc1        $f4, 0x68($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bd4) {
            ctx->pc = 0x1B9C04u;
            goto label_1b9c04;
        }
    }
    ctx->pc = 0x1B9BDCu;
    // 0x1b9bdc: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x1b9bdcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x1b9be0: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1b9be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9be4: 0x0  nop
    ctx->pc = 0x1b9be4u;
    // NOP
    // 0x1b9be8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9BE8u;
    {
        const bool branch_taken_0x1b9be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9be8) {
            ctx->pc = 0x1B9C04u;
            goto label_1b9c04;
        }
    }
    ctx->pc = 0x1B9BF0u;
    // 0x1b9bf0: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1b9bf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1b9bf4: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x1b9bf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9bf8: 0x0  nop
    ctx->pc = 0x1b9bf8u;
    // NOP
    // 0x1b9bfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9BFCu;
    {
        const bool branch_taken_0x1b9bfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9bfc) {
            ctx->pc = 0x1B9C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9BFCu;
            // 0x1b9c00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C04u;
            goto label_1b9c04;
        }
    }
    ctx->pc = 0x1B9C04u;
label_1b9c04:
    // 0x1b9c04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9C04u;
    {
        const bool branch_taken_0x1b9c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C04u;
        // 0x1b9c08: 0x266210b0  addiu       $v0, $s3, 0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c04) {
            ctx->pc = 0x1B9C14u;
            goto label_1b9c14;
        }
    }
    ctx->pc = 0x1B9C0Cu;
    // 0x1b9c0c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b9c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9c10: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1b9c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b9c14:
    // 0x1b9c14: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x1b9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1b9c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9c1c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1b9c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b9c20: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1b9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c24: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1b9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9c28: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b9c28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b9c2c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1b9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c30: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1b9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9c34: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b9c34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b9c38: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1b9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c3c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1b9c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9c40: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b9c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b9c44: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1b9c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b9c48: 0x0  nop
    ctx->pc = 0x1b9c48u;
    // NOP
    // 0x1b9c4c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1b9c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9c50: 0x0  nop
    ctx->pc = 0x1b9c50u;
    // NOP
    // 0x1b9c54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9C54u;
    {
        const bool branch_taken_0x1b9c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9c54) {
            ctx->pc = 0x1B9C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9C54u;
            // 0x1b9c58: 0x46002947  neg.s       $f5, $f5 (Delay Slot)
            ctx->f[5] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C5Cu;
            goto label_1b9c5c;
        }
    }
    ctx->pc = 0x1B9C5Cu;
label_1b9c5c:
    // 0x1b9c5c: 0xc4430060  lwc1        $f3, 0x60($v0)
    ctx->pc = 0x1b9c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9c60: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b9c64: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x1b9c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9c68: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1b9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b9c6c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1b9c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c70: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x1b9c70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1b9c74: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1b9c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9c78: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b9c78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1b9c7c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1b9c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1b9c80: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b9c80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b9c84: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1b9c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b9c88: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x1b9c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1b9c8c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1b9c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1b9c90: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1b9c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b9c94: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b9c94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9c98: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1b9c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b9c9c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9ca0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x1b9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9ca4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ca8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1b9ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9cac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1b9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9cb0: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x1b9cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9cb4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1b9cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b9cb8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1b9cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1b9cbc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1b9cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b9cc0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x1b9cc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1b9cc4: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1b9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1b9cc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b9cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b9ccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1b9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9cd0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b9cd4: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1b9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9cd8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1b9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9cdc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1b9cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9ce0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1b9ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1b9ce4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ce8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1b9ce8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1b9cec: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1b9cecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1b9cf0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b9cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b9cf4: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1b9cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b9cf8: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x1b9cf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1b9cfc: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1b9cfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1b9d00: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1b9d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1b9d04: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b9d04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b9d08: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1b9d08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b9d0c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9d10: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1b9d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9d14: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x1b9d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9d18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9d1c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1b9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9d20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b9d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b9d24: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1b9d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d28: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1b9d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9d2c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1b9d2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b9d30: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1b9d30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1b9d34: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1b9d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b9d38: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x1b9d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1b9d3c: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x1b9d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9d40: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1b9d40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b9d44: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1b9d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1b9d48: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1b9d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1b9d4c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b9d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9d50: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b9d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9d54: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9d54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9d58: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9d5c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1b9d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9d60: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1b9d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9d64: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1b9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9d68: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b9d68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b9d6c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b9d6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b9d70: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1b9d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b9d74: 0x0  nop
    ctx->pc = 0x1b9d74u;
    // NOP
    // 0x1b9d78: 0x0  nop
    ctx->pc = 0x1b9d78u;
    // NOP
    // 0x1b9d7c: 0x46000044  c1          0x44
    ctx->pc = 0x1b9d7cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9d80: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1b9d80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b9d88: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1b9d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9d8c: 0x0  nop
    ctx->pc = 0x1b9d8cu;
    // NOP
    // 0x1b9d90: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B9D90u;
    {
        const bool branch_taken_0x1b9d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D90u;
        // 0x1b9d94: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d90) {
            ctx->pc = 0x1B9DBCu;
            goto label_1b9dbc;
        }
    }
    ctx->pc = 0x1B9D98u;
    // 0x1b9d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9da0: 0x0  nop
    ctx->pc = 0x1b9da0u;
    // NOP
    // 0x1b9da4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b9da4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b9da8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b9da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b9dac: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1b9dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b9db0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b9db0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b9db4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b9db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9db8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1b9db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b9dbc:
    // 0x1b9dbc: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b9dc0: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x1b9dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dc8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1B9DC8u;
    SET_GPR_U32(ctx, 31, 0x1B9DD0u);
    ctx->pc = 0x1B9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DC8u;
    // 0x1b9dcc: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1B9DC8u, 0x1B9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DD0u;
label_1b9dd0:
    // 0x1b9dd0: 0x4600b5c6  mov.s       $f23, $f22
    ctx->pc = 0x1b9dd0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[22]);
    // 0x1b9dd4: 0xc640c664  lwc1        $f0, -0x399C($s2)
    ctx->pc = 0x1b9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294952548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9dd8: 0x27b10140  addiu       $s1, $sp, 0x140
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1b9ddc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b9ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1b9de0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9de4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9de8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dec: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1b9decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1b9df0: 0xc077912  jal         func_1DE448
    ctx->pc = 0x1B9DF0u;
    SET_GPR_U32(ctx, 31, 0x1B9DF8u);
    ctx->pc = 0x1B9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DF0u;
    // 0x1b9df4: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x1B9DF0u, 0x1B9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DF8u;
label_1b9df8:
    // 0x1b9df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b9df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9dfc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9DFCu;
    {
        const bool branch_taken_0x1b9dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DFCu;
        // 0x1b9e00: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dfc) {
            ctx->pc = 0x1B9E34u;
            goto label_1b9e34;
        }
    }
    ctx->pc = 0x1B9E04u;
    // 0x1b9e04: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1b9e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e08: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b9e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1b9e0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b9e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b9e10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9e14: 0x0  nop
    ctx->pc = 0x1b9e14u;
    // NOP
    // 0x1b9e18: 0x0  nop
    ctx->pc = 0x1b9e18u;
    // NOP
    // 0x1b9e1c: 0x46000004  c1          0x4
    ctx->pc = 0x1b9e1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9e20: 0x460105c1  sub.s       $f23, $f0, $f1
    ctx->pc = 0x1b9e20u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9e24: 0x4615b834  c.lt.s      $f23, $f21
    ctx->pc = 0x1b9e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9e28: 0x0  nop
    ctx->pc = 0x1b9e28u;
    // NOP
    // 0x1b9e2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9E2Cu;
    {
        const bool branch_taken_0x1b9e2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9e2c) {
            ctx->pc = 0x1B9E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9E2Cu;
            // 0x1b9e30: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9E34u;
            goto label_1b9e34;
        }
    }
    ctx->pc = 0x1B9E34u;
label_1b9e34:
    // 0x1b9e34: 0x7fa000d0  sq          $zero, 0xD0($sp)
    ctx->pc = 0x1b9e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 0));
    // 0x1b9e38: 0x7fa000e0  sq          $zero, 0xE0($sp)
    ctx->pc = 0x1b9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 0));
    // 0x1b9e3c: 0xc640c664  lwc1        $f0, -0x399C($s2)
    ctx->pc = 0x1b9e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294952548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9e44: 0xacc20044  sw          $v0, 0x44($a2)
    ctx->pc = 0x1b9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 2));
    // 0x1b9e48: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b9e4c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b9e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b9e50: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x1b9e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9e58: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x1b9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1b9e5c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x1b9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x1b9e60: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x1b9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x1b9e64: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1b9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1b9e68: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1b9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x1b9e6c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1b9e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1b9e70: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1b9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1b9e74: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x1b9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x1b9e78: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1b9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1b9e7c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1b9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x1b9e80: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1b9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x1b9e84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9e88: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1b9e8c: 0xc4620040  lwc1        $f2, 0x40($v1)
    ctx->pc = 0x1b9e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9e90: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b9e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9e94: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1b9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9e98: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b9e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b9e9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ea0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b9ea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b9ea4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b9ea4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b9ea8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9eac: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x1b9eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b9eb0: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x1b9eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1b9eb4: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x1b9eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1b9eb8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1b9eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1b9ebc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b9ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9ec0: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1b9ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b9ec4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9ec8: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1b9ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9ecc: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1b9eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ed0: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1b9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ed4: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x1b9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9ed8: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x1b9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9edc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1b9edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b9ee0: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1b9ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1b9ee4: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1b9ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1b9ee8: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x1b9ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1b9eec: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1b9eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1b9ef0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1b9ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9ef4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1b9ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b9ef8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b9efc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b9efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1b9f00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b9f04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1b9f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9f08: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b9f08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9f0c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9f10: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9f14: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1b9f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9f18: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1b9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b9f1c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1b9f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b9f20: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b9f20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b9f24: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b9f24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b9f28: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1b9f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b9f2c: 0x0  nop
    ctx->pc = 0x1b9f2cu;
    // NOP
    // 0x1b9f30: 0x0  nop
    ctx->pc = 0x1b9f30u;
    // NOP
    // 0x1b9f34: 0x46000044  c1          0x44
    ctx->pc = 0x1b9f34u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9f38: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b9f3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b9f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b9f40: 0x0  nop
    ctx->pc = 0x1b9f40u;
    // NOP
    // 0x1b9f44: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1b9f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f48: 0x0  nop
    ctx->pc = 0x1b9f48u;
    // NOP
    // 0x1b9f4c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B9F4Cu;
    {
        const bool branch_taken_0x1b9f4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F4Cu;
        // 0x1b9f50: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f4c) {
            ctx->pc = 0x1B9F78u;
            goto label_1b9f78;
        }
    }
    ctx->pc = 0x1B9F54u;
    // 0x1b9f54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f5c: 0x0  nop
    ctx->pc = 0x1b9f5cu;
    // NOP
    // 0x1b9f60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b9f60u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b9f64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b9f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b9f68: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1b9f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b9f6c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b9f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b9f70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b9f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9f74: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1b9f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b9f78:
    // 0x1b9f78: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1b9f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f80: 0xc077912  jal         func_1DE448
    ctx->pc = 0x1B9F80u;
    SET_GPR_U32(ctx, 31, 0x1B9F88u);
    ctx->pc = 0x1B9F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F80u;
    // 0x1b9f84: 0x34a5fffe  ori         $a1, $a1, 0xFFFE (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x1B9F80u, 0x1B9F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F88u;
label_1b9f88:
    // 0x1b9f88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9F88u;
    {
        const bool branch_taken_0x1b9f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F88u;
        // 0x1b9f8c: 0xc7a00140  lwc1        $f0, 0x140($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f88) {
            ctx->pc = 0x1B9FBCu;
            goto label_1b9fbc;
        }
    }
    ctx->pc = 0x1B9F90u;
    // 0x1b9f90: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b9f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1b9f94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b9f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b9f98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9f9c: 0x0  nop
    ctx->pc = 0x1b9f9cu;
    // NOP
    // 0x1b9fa0: 0x0  nop
    ctx->pc = 0x1b9fa0u;
    // NOP
    // 0x1b9fa4: 0x46000004  c1          0x4
    ctx->pc = 0x1b9fa4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b9fa8: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x1b9fa8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9fac: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x1b9facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9fb0: 0x0  nop
    ctx->pc = 0x1b9fb0u;
    // NOP
    // 0x1b9fb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9FB4u;
    {
        const bool branch_taken_0x1b9fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9fb4) {
            ctx->pc = 0x1B9FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9FB4u;
            // 0x1b9fb8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9FBCu;
            goto label_1b9fbc;
        }
    }
    ctx->pc = 0x1B9FBCu;
label_1b9fbc:
    // 0x1b9fbc: 0xc680040c  lwc1        $f0, 0x40C($s4)
    ctx->pc = 0x1b9fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fc0: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1b9fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9fc4: 0x0  nop
    ctx->pc = 0x1b9fc4u;
    // NOP
    // 0x1b9fc8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1B9FC8u;
    {
        const bool branch_taken_0x1b9fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC8u;
        // 0x1b9fcc: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fc8) {
            ctx->pc = 0x1BA038u;
            goto label_1ba038;
        }
    }
    ctx->pc = 0x1B9FD0u;
    // 0x1b9fd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b9fd4: 0xe697040c  swc1        $f23, 0x40C($s4)
    ctx->pc = 0x1b9fd4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1036), bits); }
    // 0x1b9fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b9fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fdc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b9fe0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9FE0u;
    {
        const bool branch_taken_0x1b9fe0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FE0u;
        // 0x1b9fe4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fe0) {
            ctx->pc = 0x1B9FFCu;
            goto label_1b9ffc;
        }
    }
    ctx->pc = 0x1B9FE8u;
    // 0x1b9fe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b9fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9fec: 0x0  nop
    ctx->pc = 0x1b9fecu;
    // NOP
    // 0x1b9ff0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9ff4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9FF4u;
    {
        const bool branch_taken_0x1b9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ff4) {
            ctx->pc = 0x1BA014u;
            goto label_1ba014;
        }
    }
    ctx->pc = 0x1B9FFCu;
label_1b9ffc:
    // 0x1b9ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b9ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba000: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba008: 0x0  nop
    ctx->pc = 0x1ba008u;
    // NOP
    // 0x1ba00c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba010: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ba010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ba014:
    // 0x1ba014: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ba018: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ba018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ba01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba020: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1ba024: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba028: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ba028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ba02c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba030: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BA030u;
    {
        const bool branch_taken_0x1ba030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA030u;
        // 0x1ba034: 0xe6800410  swc1        $f0, 0x410($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba030) {
            ctx->pc = 0x1BA0A0u;
            goto label_1ba0a0;
        }
    }
    ctx->pc = 0x1BA038u;
label_1ba038:
    // 0x1ba038: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ba038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ba03c: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x1ba03cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x1ba040: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA040u;
    {
        const bool branch_taken_0x1ba040 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1BA044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA040u;
        // 0x1ba044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba040) {
            ctx->pc = 0x1BA05Cu;
            goto label_1ba05c;
        }
    }
    ctx->pc = 0x1BA048u;
    // 0x1ba048: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1ba048u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba04c: 0x0  nop
    ctx->pc = 0x1ba04cu;
    // NOP
    // 0x1ba050: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA054u;
    {
        const bool branch_taken_0x1ba054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba054) {
            ctx->pc = 0x1BA078u;
            goto label_1ba078;
        }
    }
    ctx->pc = 0x1BA05Cu;
label_1ba05c:
    // 0x1ba05c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1ba060: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1ba060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1ba064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba068: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba06c: 0x0  nop
    ctx->pc = 0x1ba06cu;
    // NOP
    // 0x1ba070: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba074: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ba074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ba078:
    // 0x1ba078: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ba07c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ba07cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ba080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba084: 0xc6810410  lwc1        $f1, 0x410($s4)
    ctx->pc = 0x1ba084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba088: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ba088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ba08c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ba08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba090: 0x0  nop
    ctx->pc = 0x1ba090u;
    // NOP
    // 0x1ba094: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA094u;
    {
        const bool branch_taken_0x1ba094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba094) {
            ctx->pc = 0x1BA098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA094u;
            // 0x1ba098: 0xe697040c  swc1        $f23, 0x40C($s4) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1036), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA0A0u;
            goto label_1ba0a0;
        }
    }
    ctx->pc = 0x1BA09Cu;
    // 0x1ba09c: 0x46001dc6  mov.s       $f23, $f3
    ctx->pc = 0x1ba09cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[3]);
label_1ba0a0:
    // 0x1ba0a0: 0xc6800414  lwc1        $f0, 0x414($s4)
    ctx->pc = 0x1ba0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba0a4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1ba0a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba0a8: 0x0  nop
    ctx->pc = 0x1ba0a8u;
    // NOP
    // 0x1ba0ac: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA0ACu;
    {
        const bool branch_taken_0x1ba0ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0ACu;
        // 0x1ba0b0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0ac) {
            ctx->pc = 0x1BA114u;
            goto label_1ba114;
        }
    }
    ctx->pc = 0x1BA0B4u;
    // 0x1ba0b4: 0xe6960414  swc1        $f22, 0x414($s4)
    ctx->pc = 0x1ba0b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1044), bits); }
    // 0x1ba0b8: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
    // 0x1ba0bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA0BCu;
    {
        const bool branch_taken_0x1ba0bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0BCu;
        // 0x1ba0c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0bc) {
            ctx->pc = 0x1BA0D8u;
            goto label_1ba0d8;
        }
    }
    ctx->pc = 0x1BA0C4u;
    // 0x1ba0c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba0c8: 0x0  nop
    ctx->pc = 0x1ba0c8u;
    // NOP
    // 0x1ba0cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba0ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba0d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA0D0u;
    {
        const bool branch_taken_0x1ba0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0d0) {
            ctx->pc = 0x1BA0F0u;
            goto label_1ba0f0;
        }
    }
    ctx->pc = 0x1BA0D8u;
label_1ba0d8:
    // 0x1ba0d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba0dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba0e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba0e4: 0x0  nop
    ctx->pc = 0x1ba0e4u;
    // NOP
    // 0x1ba0e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba0e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba0ec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ba0ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ba0f0:
    // 0x1ba0f0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ba0f4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ba0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ba0f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba0fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1ba100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba104: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ba104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ba108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ba108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ba10c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA10Cu;
    {
        const bool branch_taken_0x1ba10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA10Cu;
        // 0x1ba110: 0xe6800418  swc1        $f0, 0x418($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba10c) {
            ctx->pc = 0x1BA174u;
            goto label_1ba174;
        }
    }
    ctx->pc = 0x1BA114u;
label_1ba114:
    // 0x1ba114: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x1ba114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
    // 0x1ba118: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA118u;
    {
        const bool branch_taken_0x1ba118 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA118u;
        // 0x1ba11c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba118) {
            ctx->pc = 0x1BA134u;
            goto label_1ba134;
        }
    }
    ctx->pc = 0x1BA120u;
    // 0x1ba120: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba124: 0x0  nop
    ctx->pc = 0x1ba124u;
    // NOP
    // 0x1ba128: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba12c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA12Cu;
    {
        const bool branch_taken_0x1ba12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba12c) {
            ctx->pc = 0x1BA14Cu;
            goto label_1ba14c;
        }
    }
    ctx->pc = 0x1BA134u;
label_1ba134:
    // 0x1ba134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba13c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba140: 0x0  nop
    ctx->pc = 0x1ba140u;
    // NOP
    // 0x1ba144: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ba144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ba148: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ba148u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ba14c:
    // 0x1ba14c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ba150: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ba150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ba154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba158: 0xc6810418  lwc1        $f1, 0x418($s4)
    ctx->pc = 0x1ba158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba15c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ba15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ba160: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ba160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba164: 0x0  nop
    ctx->pc = 0x1ba164u;
    // NOP
    // 0x1ba168: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA168u;
    {
        const bool branch_taken_0x1ba168 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba168) {
            ctx->pc = 0x1BA16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA168u;
            // 0x1ba16c: 0xe6960414  swc1        $f22, 0x414($s4) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1044), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA174u;
            goto label_1ba174;
        }
    }
    ctx->pc = 0x1BA170u;
    // 0x1ba170: 0x46001d86  mov.s       $f22, $f3
    ctx->pc = 0x1ba170u;
    ctx->f[22] = FPU_MOV_S(ctx->f[3]);
label_1ba174:
    // 0x1ba174: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ba178: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ba178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ba17c: 0x0  nop
    ctx->pc = 0x1ba17cu;
    // NOP
    // 0x1ba180: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x1ba180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba184: 0x0  nop
    ctx->pc = 0x1ba184u;
    // NOP
    // 0x1ba188: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA188u;
    {
        const bool branch_taken_0x1ba188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA188u;
        // 0x1ba18c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba188) {
            ctx->pc = 0x1BA1ACu;
            goto label_1ba1ac;
        }
    }
    ctx->pc = 0x1BA190u;
    // 0x1ba190: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba198: 0x0  nop
    ctx->pc = 0x1ba198u;
    // NOP
    // 0x1ba19c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x1ba19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba1a0: 0x0  nop
    ctx->pc = 0x1ba1a0u;
    // NOP
    // 0x1ba1a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA1A4u;
    {
        const bool branch_taken_0x1ba1a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba1a4) {
            ctx->pc = 0x1BA1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA1A4u;
            // 0x1ba1a8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA1ACu;
            goto label_1ba1ac;
        }
    }
    ctx->pc = 0x1BA1ACu;
label_1ba1ac:
    // 0x1ba1ac: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1ba1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba1b4: 0x0  nop
    ctx->pc = 0x1ba1b4u;
    // NOP
    // 0x1ba1b8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1ba1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba1bc: 0x0  nop
    ctx->pc = 0x1ba1bcu;
    // NOP
    // 0x1ba1c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA1C0u;
    {
        const bool branch_taken_0x1ba1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba1c0) {
            ctx->pc = 0x1BA1E4u;
            goto label_1ba1e4;
        }
    }
    ctx->pc = 0x1BA1C8u;
    // 0x1ba1c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba1cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba1ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba1d0: 0x0  nop
    ctx->pc = 0x1ba1d0u;
    // NOP
    // 0x1ba1d4: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1ba1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba1d8: 0x0  nop
    ctx->pc = 0x1ba1d8u;
    // NOP
    // 0x1ba1dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BA1DCu;
    {
        const bool branch_taken_0x1ba1dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba1dc) {
            ctx->pc = 0x1BA1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA1DCu;
            // 0x1ba1e0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA1E4u;
            goto label_1ba1e4;
        }
    }
    ctx->pc = 0x1BA1E4u;
label_1ba1e4:
    // 0x1ba1e4: 0x0  nop
    ctx->pc = 0x1ba1e4u;
    // NOP
    // 0x1ba1e8: 0x0  nop
    ctx->pc = 0x1ba1e8u;
    // NOP
    // 0x1ba1ec: 0x4614bb03  div.s       $f12, $f23, $f20
    ctx->pc = 0x1ba1ecu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[23], ctx->f[20]); }
    // 0x1ba1f0: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1BA1F0u;
    SET_GPR_U32(ctx, 31, 0x1BA1F8u);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1BA1F0u, 0x1BA1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1F8u;
label_1ba1f8:
    // 0x1ba1f8: 0x0  nop
    ctx->pc = 0x1ba1f8u;
    // NOP
    // 0x1ba1fc: 0x0  nop
    ctx->pc = 0x1ba1fcu;
    // NOP
    // 0x1ba200: 0x4615b303  div.s       $f12, $f22, $f21
    ctx->pc = 0x1ba200u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[21]); }
    // 0x1ba204: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1ba208: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1BA208u;
    SET_GPR_U32(ctx, 31, 0x1BA210u);
    ctx->pc = 0x1BA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA208u;
    // 0x1ba20c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1BA208u, 0x1BA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA210u;
label_1ba210:
    // 0x1ba210: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x1ba210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1ba214: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA214u;
    {
        const bool branch_taken_0x1ba214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA214u;
        // 0x1ba218: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba214) {
            ctx->pc = 0x1BA224u;
            goto label_1ba224;
        }
    }
    ctx->pc = 0x1BA21Cu;
    // 0x1ba21c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BA21Cu;
    {
        const bool branch_taken_0x1ba21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA21Cu;
        // 0x1ba220: 0xe6d40000  swc1        $f20, 0x0($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba21c) {
            ctx->pc = 0x1BA254u;
            goto label_1ba254;
        }
    }
    ctx->pc = 0x1BA224u;
label_1ba224:
    // 0x1ba224: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x1ba224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x1ba228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba22c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA22Cu;
    {
        const bool branch_taken_0x1ba22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba22c) {
            ctx->pc = 0x1BA23Cu;
            goto label_1ba23c;
        }
    }
    ctx->pc = 0x1BA234u;
    // 0x1ba234: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA234u;
    {
        const bool branch_taken_0x1ba234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA234u;
        // 0x1ba238: 0xe6d50000  swc1        $f21, 0x0($s6) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba234) {
            ctx->pc = 0x1BA254u;
            goto label_1ba254;
        }
    }
    ctx->pc = 0x1BA23Cu;
label_1ba23c:
    // 0x1ba23c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1ba23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba240: 0x0  nop
    ctx->pc = 0x1ba240u;
    // NOP
    // 0x1ba244: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA244u;
    {
        const bool branch_taken_0x1ba244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA244u;
        // 0x1ba248: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba244) {
            ctx->pc = 0x1BA250u;
            goto label_1ba250;
        }
    }
    ctx->pc = 0x1BA24Cu;
    // 0x1ba24c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1ba24cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1ba250:
    // 0x1ba250: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1ba250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1ba254:
    // 0x1ba254: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ba254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ba258: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1ba258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1ba25c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1ba260: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1ba260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1ba264: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1ba264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1ba268: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1ba268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1ba26c: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1ba26cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1ba270: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1ba270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1ba274: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1ba274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1ba278: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x1ba278u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1ba27c: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1ba27cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1ba280: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1ba280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1ba284: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x1ba284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ba288: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x1ba288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ba28c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x1ba28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ba290: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1ba290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ba294: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1ba294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1ba298: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA298u;
        // 0x1ba29c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA2A0u;
}
