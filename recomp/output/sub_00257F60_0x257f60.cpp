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

// Function: sub_00257F60
// Address: 0x257f60 - 0x2580c8
void sub_00257F60_0x257f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257F60_0x257f60");
#endif

    switch (ctx->pc) {
        case 0x257f84u: goto label_257f84;
        case 0x25805cu: goto label_25805c;
        case 0x25806cu: goto label_25806c;
        case 0x25807cu: goto label_25807c;
        case 0x2580b4u: goto label_2580b4;
        default: break;
    }

    ctx->pc = 0x257f60u;

    // 0x257f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x257f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x257f64: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x257f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x257f68: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x257f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x257f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x257f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x257f74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x257f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257f78: 0x8e220ffc  lw          $v0, 0xFFC($s1)
    ctx->pc = 0x257f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
    // 0x257f7c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x257F7Cu;
    SET_GPR_U32(ctx, 31, 0x257F84u);
    ctx->pc = 0x257F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257F7Cu;
    // 0x257f80: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x257F7Cu, 0x257F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F84u;
label_257f84:
    // 0x257f84: 0x8e221050  lw          $v0, 0x1050($s1)
    ctx->pc = 0x257f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4176)));
    // 0x257f88: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x257F88u;
    {
        const bool branch_taken_0x257f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257f88) {
            ctx->pc = 0x257F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257F88u;
            // 0x257f8c: 0x8e220fe4  lw          $v0, 0xFE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258050u;
            goto label_258050;
        }
    }
    ctx->pc = 0x257F90u;
    // 0x257f90: 0x8e261004  lw          $a2, 0x1004($s1)
    ctx->pc = 0x257f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x257f94: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x257f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x257f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257f9c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x257f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x257fa0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x257fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257fa4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x257fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x257fa8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x257fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x257fac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x257facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257fb0: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x257fb0u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257fb4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x257fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x257fb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x257fb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x257fbc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x257fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x257fc0: 0x8cc5036c  lw          $a1, 0x36C($a2)
    ctx->pc = 0x257fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 876)));
    // 0x257fc4: 0xa41024  and         $v0, $a1, $a0
    ctx->pc = 0x257fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x257fc8: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x257FC8u;
    {
        const bool branch_taken_0x257fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x257FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FC8u;
        // 0x257fcc: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fc8) {
            ctx->pc = 0x257FF4u;
            goto label_257ff4;
        }
    }
    ctx->pc = 0x257FD0u;
    // 0x257fd0: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x257fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x257fd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x257fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x257fd8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x257fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x257fdc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x257fdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257fe0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x257fe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257fe4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x257fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x257fe8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x257fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x257fec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x257FECu;
    {
        const bool branch_taken_0x257fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FECu;
        // 0x257ff0: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x257fec) {
            ctx->pc = 0x258020u;
            goto label_258020;
        }
    }
    ctx->pc = 0x257FF4u;
label_257ff4:
    // 0x257ff4: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x257ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x257ff8: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x257FF8u;
    {
        const bool branch_taken_0x257ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x257ff8) {
            ctx->pc = 0x257FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257FF8u;
            // 0x257ffc: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x258000u;
    // 0x258000: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x258000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x258004: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258008: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x258008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x25800c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25800cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258010: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x258010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258014: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x258014u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x258018: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x258018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25801c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x25801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_258020:
    // 0x258020: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x258020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x258024: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x258024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258028: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x258028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25802c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x25802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258030: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x258030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x258034: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x258034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x258038: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x258038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25803c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x25803cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x258040: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x258040u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258044: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x258044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x258048: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x258048u;
    {
        const bool branch_taken_0x258048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258048u;
        // 0x25804c: 0x8e240ffc  lw          $a0, 0xFFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258048) {
            ctx->pc = 0x2580ACu;
            goto label_2580ac;
        }
    }
    ctx->pc = 0x258050u;
label_258050:
    // 0x258050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258054: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x258054u;
    SET_GPR_U32(ctx, 31, 0x25805Cu);
    ctx->pc = 0x258058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258054u;
    // 0x258058: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x258054u, 0x25805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25805Cu;
label_25805c:
    // 0x25805c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25805Cu;
    {
        const bool branch_taken_0x25805c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25805c) {
            ctx->pc = 0x258074u;
            goto label_258074;
        }
    }
    ctx->pc = 0x258064u;
    // 0x258064: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x258064u;
    SET_GPR_U32(ctx, 31, 0x25806Cu);
    ctx->pc = 0x258068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258064u;
    // 0x258068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x258064u, 0x25806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25806Cu;
label_25806c:
    // 0x25806c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25806Cu;
    {
        const bool branch_taken_0x25806c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25806Cu;
        // 0x258070: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25806c) {
            ctx->pc = 0x258080u;
            goto label_258080;
        }
    }
    ctx->pc = 0x258074u;
label_258074:
    // 0x258074: 0xc09531c  jal         func_254C70
    ctx->pc = 0x258074u;
    SET_GPR_U32(ctx, 31, 0x25807Cu);
    ctx->pc = 0x258078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258074u;
    // 0x258078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x258074u, 0x25807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25807Cu;
label_25807c:
    // 0x25807c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x25807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_258080:
    // 0x258080: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x258080u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x258084: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x258084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x258088: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x25808c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x25808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258090: 0xc462c6a4  lwc1        $f2, -0x395C($v1)
    ctx->pc = 0x258090u;
    { uint32_t bits = FAST_READ32(0x45C6A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258094: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x258094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x258098: 0xc441c61c  lwc1        $f1, -0x39E4($v0)
    ctx->pc = 0x258098u;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25809c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25809cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2580a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2580a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2580a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2580a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2580a8: 0x8e240ffc  lw          $a0, 0xFFC($s1)
    ctx->pc = 0x2580a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4092)));
label_2580ac:
    // 0x2580ac: 0xc0715aa  jal         func_1C56A8
    ctx->pc = 0x2580ACu;
    SET_GPR_U32(ctx, 31, 0x2580B4u);
    ctx->pc = 0x2580B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2580ACu;
    // 0x2580b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C56A8u, 0x2580ACu, 0x2580B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2580B4u;
label_2580b4:
    // 0x2580b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2580b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580b8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2580b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2580bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2580bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2580c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2580C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2580C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580C0u;
        // 0x2580c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2580C8u;
}
