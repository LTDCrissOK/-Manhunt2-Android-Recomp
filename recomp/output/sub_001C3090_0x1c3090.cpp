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

// Function: sub_001C3090
// Address: 0x1c3090 - 0x1c34c0
void sub_001C3090_0x1c3090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3090_0x1c3090");
#endif

    switch (ctx->pc) {
        case 0x1c31e8u: goto label_1c31e8;
        case 0x1c31f8u: goto label_1c31f8;
        case 0x1c3204u: goto label_1c3204;
        case 0x1c326cu: goto label_1c326c;
        case 0x1c3314u: goto label_1c3314;
        case 0x1c3418u: goto label_1c3418;
        case 0x1c3434u: goto label_1c3434;
        case 0x1c3440u: goto label_1c3440;
        case 0x1c3448u: goto label_1c3448;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3480u: goto label_1c3480;
        default: break;
    }

    ctx->pc = 0x1c3090u;

    // 0x1c3090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c3094: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c3098: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c3098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c309c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c30a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c30a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c30a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30a8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1c30a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1c30ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c30acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30b0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1c30b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c30b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1c30b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c30bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c30bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c30c0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c30c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c30c8: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x1c30cc: 0x144000f0  bnez        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1C30CCu;
    {
        const bool branch_taken_0x1c30cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30CCu;
        // 0x1c30d0: 0x8e710fe8  lw          $s1, 0xFE8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30cc) {
            ctx->pc = 0x1C3490u;
            goto label_1c3490;
        }
    }
    ctx->pc = 0x1C30D4u;
    // 0x1c30d4: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1c30d8: 0x144000ee  bnez        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x1C30D8u;
    {
        const bool branch_taken_0x1c30d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30D8u;
        // 0x1c30dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30d8) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C30E0u;
    // 0x1c30e0: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
    // 0x1c30e4: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1c30e8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1c30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c30ec: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C30ECu;
    {
        const bool branch_taken_0x1c30ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c30ec) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C30F4u;
    // 0x1c30f4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30f8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C30F8u;
    {
        const bool branch_taken_0x1c30f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c30f8) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C3100u;
    // 0x1c3100: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3100u;
    {
        const bool branch_taken_0x1c3100 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3100u;
        // 0x1c3104: 0xc621033c  lwc1        $f1, 0x33C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3100) {
            ctx->pc = 0x1C3118u;
            goto label_1c3118;
        }
    }
    ctx->pc = 0x1C3108u;
    // 0x1c3108: 0xc640033c  lwc1        $f0, 0x33C($s2)
    ctx->pc = 0x1c3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c310c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3110u;
    {
        const bool branch_taken_0x1c3110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3110) {
            ctx->pc = 0x1C3120u;
            goto label_1c3120;
        }
    }
    ctx->pc = 0x1C3118u;
label_1c3118:
    // 0x1c3118: 0xc640033c  lwc1        $f0, 0x33C($s2)
    ctx->pc = 0x1c3118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c311c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c311cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c3120:
    // 0x1c3120: 0x0  nop
    ctx->pc = 0x1c3120u;
    // NOP
    // 0x1c3124: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x1C3124u;
    {
        const bool branch_taken_0x1c3124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3124) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C312Cu;
    // 0x1c312c: 0xc6420240  lwc1        $f2, 0x240($s2)
    ctx->pc = 0x1c312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c3130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3134: 0x0  nop
    ctx->pc = 0x1c3134u;
    // NOP
    // 0x1c3138: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c3138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c313c: 0x0  nop
    ctx->pc = 0x1c313cu;
    // NOP
    // 0x1c3140: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3140u;
    {
        const bool branch_taken_0x1c3140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3140u;
        // 0x1c3144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3140) {
            ctx->pc = 0x1C314Cu;
            goto label_1c314c;
        }
    }
    ctx->pc = 0x1C3148u;
    // 0x1c3148: 0x26420220  addiu       $v0, $s2, 0x220
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1c314c:
    // 0x1c314c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x1c3154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c315c: 0x0  nop
    ctx->pc = 0x1c315cu;
    // NOP
    // 0x1c3160: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3160u;
    {
        const bool branch_taken_0x1c3160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3160u;
        // 0x1c3164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3160) {
            ctx->pc = 0x1C316Cu;
            goto label_1c316c;
        }
    }
    ctx->pc = 0x1C3168u;
    // 0x1c3168: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1c3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1c316c:
    // 0x1c316c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C316Cu;
    {
        const bool branch_taken_0x1c316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c316c) {
            ctx->pc = 0x1C31E0u;
            goto label_1c31e0;
        }
    }
    ctx->pc = 0x1C3174u;
    // 0x1c3174: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c3174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3178: 0x0  nop
    ctx->pc = 0x1c3178u;
    // NOP
    // 0x1c317c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C317Cu;
    {
        const bool branch_taken_0x1c317c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C317Cu;
        // 0x1c3180: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c317c) {
            ctx->pc = 0x1C3188u;
            goto label_1c3188;
        }
    }
    ctx->pc = 0x1C3184u;
    // 0x1c3184: 0x26430220  addiu       $v1, $s2, 0x220
    ctx->pc = 0x1c3184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1c3188:
    // 0x1c3188: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c318c: 0x0  nop
    ctx->pc = 0x1c318cu;
    // NOP
    // 0x1c3190: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3190u;
    {
        const bool branch_taken_0x1c3190 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3190u;
        // 0x1c3194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3190) {
            ctx->pc = 0x1C319Cu;
            goto label_1c319c;
        }
    }
    ctx->pc = 0x1C3198u;
    // 0x1c3198: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1c3198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1c319c:
    // 0x1c319c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c31a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1c31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c31a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c31a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c31a8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1c31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c31ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c31acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c31b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c31b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c31b4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1c31b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c31b8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1c31b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c31bc: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c31bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c31c0: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1c31c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x1c31c4: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1c31c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1c31c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c31c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c31cc: 0x0  nop
    ctx->pc = 0x1c31ccu;
    // NOP
    // 0x1c31d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c31d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c31d4: 0x0  nop
    ctx->pc = 0x1c31d4u;
    // NOP
    // 0x1c31d8: 0x450100ae  bc1t        . + 4 + (0xAE << 2)
    ctx->pc = 0x1C31D8u;
    {
        const bool branch_taken_0x1c31d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D8u;
        // 0x1c31dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31d8) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C31E0u;
    SET_GPR_U32(ctx, 31, 0x1C31E8u);
    ctx->pc = 0x1C31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31E0u;
    // 0x1c31e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C31E0u, 0x1C31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31E8u;
label_1c31e8:
    // 0x1c31e8: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1C31E8u;
    {
        const bool branch_taken_0x1c31e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31E8u;
        // 0x1c31ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31e8) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C31F0u;
    // 0x1c31f0: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C31F0u;
    SET_GPR_U32(ctx, 31, 0x1C31F8u);
    ctx->pc = 0x1C31F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F0u;
    // 0x1c31f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C31F0u, 0x1C31F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31F8u;
label_1c31f8:
    // 0x1c31f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c31f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31fc: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C31FCu;
    SET_GPR_U32(ctx, 31, 0x1C3204u);
    ctx->pc = 0x1C3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31FCu;
    // 0x1c3200: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C31FCu, 0x1C3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3204u;
label_1c3204:
    // 0x1c3204: 0x560200a3  bnel        $s0, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C3204u;
    {
        const bool branch_taken_0x1c3204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3204) {
            ctx->pc = 0x1C3208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3204u;
            // 0x1c3208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C320Cu;
    // 0x1c320c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C320Cu;
    {
        const bool branch_taken_0x1c320c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C320Cu;
        // 0x1c3210: 0xc6200358  lwc1        $f0, 0x358($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c320c) {
            ctx->pc = 0x1C3230u;
            goto label_1c3230;
        }
    }
    ctx->pc = 0x1C3214u;
    // 0x1c3214: 0xc6410358  lwc1        $f1, 0x358($s2)
    ctx->pc = 0x1c3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c321c: 0x0  nop
    ctx->pc = 0x1c321cu;
    // NOP
    // 0x1c3220: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3220u;
    {
        const bool branch_taken_0x1c3220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3220u;
        // 0x1c3224: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3220) {
            ctx->pc = 0x1C3244u;
            goto label_1c3244;
        }
    }
    ctx->pc = 0x1C3228u;
    // 0x1c3228: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1C3228u;
    {
        const bool branch_taken_0x1c3228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3228u;
        // 0x1c322c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3228) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C3230u;
label_1c3230:
    // 0x1c3230: 0xc6410358  lwc1        $f1, 0x358($s2)
    ctx->pc = 0x1c3230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3238: 0x0  nop
    ctx->pc = 0x1c3238u;
    // NOP
    // 0x1c323c: 0x45010094  bc1t        . + 4 + (0x94 << 2)
    ctx->pc = 0x1C323Cu;
    {
        const bool branch_taken_0x1c323c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C323Cu;
        // 0x1c3240: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c323c) {
            ctx->pc = 0x1C3490u;
            goto label_1c3490;
        }
    }
    ctx->pc = 0x1C3244u;
label_1c3244:
    // 0x1c3244: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x1c3244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3248: 0x0  nop
    ctx->pc = 0x1c3248u;
    // NOP
    // 0x1c324c: 0x4500006d  bc1f        . + 4 + (0x6D << 2)
    ctx->pc = 0x1C324Cu;
    {
        const bool branch_taken_0x1c324c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C324Cu;
        // 0x1c3250: 0x26500310  addiu       $s0, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c324c) {
            ctx->pc = 0x1C3404u;
            goto label_1c3404;
        }
    }
    ctx->pc = 0x1C3254u;
    // 0x1c3254: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1c3254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3258: 0x0  nop
    ctx->pc = 0x1c3258u;
    // NOP
    // 0x1c325c: 0x4502006a  bc1fl       . + 4 + (0x6A << 2)
    ctx->pc = 0x1C325Cu;
    {
        const bool branch_taken_0x1c325c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c325c) {
            ctx->pc = 0x1C3260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C325Cu;
            // 0x1c3260: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3408u;
            goto label_1c3408;
        }
    }
    ctx->pc = 0x1C3264u;
    // 0x1c3264: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C3264u;
    SET_GPR_U32(ctx, 31, 0x1C326Cu);
    ctx->pc = 0x1C3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3264u;
    // 0x1c3268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C3264u, 0x1C326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C326Cu;
label_1c326c:
    // 0x1c326c: 0x262301e0  addiu       $v1, $s1, 0x1E0
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1c3270: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c3270u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3274: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c3274u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3278: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c3278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c327c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3280: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c3280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3288: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c3288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c328c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c328cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c3290: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c3290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3294: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x1c3294u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x1c3298: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1c3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c329c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1c329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c32a0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1c32a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c32a4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1c32a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c32a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c32a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c32ac: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1c32acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c32b0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1c32b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c32b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C32B4u;
    {
        const bool branch_taken_0x1c32b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32B4u;
        // 0x1c32b8: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32b4) {
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32BCu;
    // 0x1c32bc: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1c32bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1c32c0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c32c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c32c4: 0x0  nop
    ctx->pc = 0x1c32c4u;
    // NOP
    // 0x1c32c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C32C8u;
    {
        const bool branch_taken_0x1c32c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c32c8) {
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32D0u;
    // 0x1c32d0: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x1c32d0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x1c32d4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c32d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c32d8: 0x0  nop
    ctx->pc = 0x1c32d8u;
    // NOP
    // 0x1c32dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C32DCu;
    {
        const bool branch_taken_0x1c32dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c32dc) {
            ctx->pc = 0x1C32E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C32DCu;
            // 0x1c32e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C32E4u;
            goto label_1c32e4;
        }
    }
    ctx->pc = 0x1C32E4u;
label_1c32e4:
    // 0x1c32e4: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C32E4u;
    {
        const bool branch_taken_0x1c32e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32E4u;
        // 0x1c32e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32e4) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C32ECu;
    // 0x1c32ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c32ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c32f0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c32f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32f4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c32f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32f8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c32f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c32fc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c32fcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c3300: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c3300u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c3304: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c3304u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3308: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c330c: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x1C330Cu;
    SET_GPR_U32(ctx, 31, 0x1C3314u);
    ctx->pc = 0x1C3310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C330Cu;
    // 0x1c3310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x1C330Cu, 0x1C3314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3314u;
label_1c3314:
    // 0x1c3314: 0x264301e0  addiu       $v1, $s2, 0x1E0
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c3318: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c3318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c331c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c331cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3320: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c3320u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c3324: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3328: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1c3328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c332c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c332cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3330: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1c3330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1c3334: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1c3334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1c3338: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c3338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c333c: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x1c333cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x1c3340: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1c3340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c3344: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x1c3344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c3348: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1c3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c334c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x1c334cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3350: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c3350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c3354: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x1c3354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c3358: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1c3358u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c335c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C335Cu;
    {
        const bool branch_taken_0x1c335c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C335Cu;
        // 0x1c3360: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c335c) {
            ctx->pc = 0x1C338Cu;
            goto label_1c338c;
        }
    }
    ctx->pc = 0x1C3364u;
    // 0x1c3364: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x1c3364u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x1c3368: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c3368u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c336c: 0x0  nop
    ctx->pc = 0x1c336cu;
    // NOP
    // 0x1c3370: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3370u;
    {
        const bool branch_taken_0x1c3370 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3370) {
            ctx->pc = 0x1C338Cu;
            goto label_1c338c;
        }
    }
    ctx->pc = 0x1C3378u;
    // 0x1c3378: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x1c3378u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x1c337c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c337cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3380: 0x0  nop
    ctx->pc = 0x1c3380u;
    // NOP
    // 0x1c3384: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C3384u;
    {
        const bool branch_taken_0x1c3384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3384) {
            ctx->pc = 0x1C3388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3384u;
            // 0x1c3388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C338Cu;
            goto label_1c338c;
        }
    }
    ctx->pc = 0x1C338Cu;
label_1c338c:
    // 0x1c338c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1C338Cu;
    {
        const bool branch_taken_0x1c338c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C338Cu;
        // 0x1c3390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c338c) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C3394u;
    // 0x1c3394: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c3394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c3398: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c3398u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c339c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c339cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c33a0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c33a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c33a4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c33a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c33a8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c33a8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c33ac: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c33acu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c33b0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c33b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c33b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c33b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c33b8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c33bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1c33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c33c0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c33c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c33c4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c33c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1c33c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c33cc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c33ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c33d0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c33d4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1c33d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c33d8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1c33d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c33dc: 0x3c013f70  lui         $at, 0x3F70
    ctx->pc = 0x1c33dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16240 << 16));
    // 0x1c33e0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1c33e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1c33e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c33e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c33e8: 0x0  nop
    ctx->pc = 0x1c33e8u;
    // NOP
    // 0x1c33ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c33ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c33f0: 0x0  nop
    ctx->pc = 0x1c33f0u;
    // NOP
    // 0x1c33f4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1C33F4u;
    {
        const bool branch_taken_0x1c33f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33F4u;
        // 0x1c33f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33f4) {
            ctx->pc = 0x1C3490u;
            goto label_1c3490;
        }
    }
    ctx->pc = 0x1C33FCu;
    // 0x1c33fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1C33FCu;
    {
        const bool branch_taken_0x1c33fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33FCu;
        // 0x1c3400: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33fc) {
            ctx->pc = 0x1C3498u;
            goto label_1c3498;
        }
    }
    ctx->pc = 0x1C3404u;
label_1c3404:
    // 0x1c3404: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c3408:
    // 0x1c3408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c340c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c340cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3410: 0xc041180  jal         func_104600
    ctx->pc = 0x1C3410u;
    SET_GPR_U32(ctx, 31, 0x1C3418u);
    ctx->pc = 0x1C3414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3410u;
    // 0x1c3414: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x1C3410u, 0x1C3418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3418u;
label_1c3418:
    // 0x1c3418: 0x8e620fe8  lw          $v0, 0xFE8($s3)
    ctx->pc = 0x1c3418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4072)));
    // 0x1c341c: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x1c341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x1c3420: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c3420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c3424: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c3424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c3428: 0x8e640fe8  lw          $a0, 0xFE8($s3)
    ctx->pc = 0x1c3428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4072)));
    // 0x1c342c: 0xc041180  jal         func_104600
    ctx->pc = 0x1C342Cu;
    SET_GPR_U32(ctx, 31, 0x1C3434u);
    ctx->pc = 0x1C3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C342Cu;
    // 0x1c3430: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104600u, 0x1C342Cu, 0x1C3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3434u;
label_1c3434:
    // 0x1c3434: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C3434u;
    {
        const bool branch_taken_0x1c3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3434u;
        // 0x1c3438: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3434) {
            ctx->pc = 0x1C3464u;
            goto label_1c3464;
        }
    }
    ctx->pc = 0x1C343Cu;
    // 0x1c343c: 0x0  nop
    ctx->pc = 0x1c343cu;
    // NOP
label_1c3440:
    // 0x1c3440: 0xc041162  jal         func_104588
    ctx->pc = 0x1C3440u;
    SET_GPR_U32(ctx, 31, 0x1C3448u);
    ctx->pc = 0x1C3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3440u;
    // 0x1c3444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1C3440u, 0x1C3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3448u;
label_1c3448:
    // 0x1c3448: 0x8e640fe8  lw          $a0, 0xFE8($s3)
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4072)));
    // 0x1c344c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c344cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3450: 0xc041162  jal         func_104588
    ctx->pc = 0x1C3450u;
    SET_GPR_U32(ctx, 31, 0x1C3458u);
    ctx->pc = 0x1C3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3450u;
    // 0x1c3454: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1C3450u, 0x1C3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3458u;
label_1c3458:
    // 0x1c3458: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3458u;
    {
        const bool branch_taken_0x1c3458 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3458u;
        // 0x1c345c: 0x255182b  sltu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3458) {
            ctx->pc = 0x1C3488u;
            goto label_1c3488;
        }
    }
    ctx->pc = 0x1C3460u;
    // 0x1c3460: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c3460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c3464:
    // 0x1c3464: 0xc041162  jal         func_104588
    ctx->pc = 0x1C3464u;
    SET_GPR_U32(ctx, 31, 0x1C346Cu);
    ctx->pc = 0x1C3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3464u;
    // 0x1c3468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1C3464u, 0x1C346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C346Cu;
    {
        const bool branch_taken_0x1c346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C346Cu;
        // 0x1c3470: 0x255182b  sltu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c346c) {
            ctx->pc = 0x1C3488u;
            goto label_1c3488;
        }
    }
    ctx->pc = 0x1C3474u;
    // 0x1c3474: 0x8e640fe8  lw          $a0, 0xFE8($s3)
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4072)));
    // 0x1c3478: 0xc041162  jal         func_104588
    ctx->pc = 0x1C3478u;
    SET_GPR_U32(ctx, 31, 0x1C3480u);
    ctx->pc = 0x1C347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3478u;
    // 0x1c347c: 0x24840310  addiu       $a0, $a0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104588u, 0x1C3478u, 0x1C3480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3480u;
label_1c3480:
    // 0x1c3480: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C3480u;
    {
        const bool branch_taken_0x1c3480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3480u;
        // 0x1c3484: 0x255182b  sltu        $v1, $s2, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3480) {
            ctx->pc = 0x1C3440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3440;
        }
    }
    ctx->pc = 0x1C3488u;
label_1c3488:
    // 0x1c3488: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3488u;
    {
        const bool branch_taken_0x1c3488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3488u;
        // 0x1c348c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3488) {
            ctx->pc = 0x1C3494u;
            goto label_1c3494;
        }
    }
    ctx->pc = 0x1C3490u;
label_1c3490:
    // 0x1c3490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3494:
    // 0x1c3494: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c3494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3498:
    // 0x1c3498: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c349c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c349cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c34a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c34a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c34a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c34a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c34a8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1c34a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c34ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c34acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c34b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1c34b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c34b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C34B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34B4u;
        // 0x1c34b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C34B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C34BCu;
    // 0x1c34bc: 0x0  nop
    ctx->pc = 0x1c34bcu;
    // NOP
    ctx->pc = 0x1c34c0u;
}
