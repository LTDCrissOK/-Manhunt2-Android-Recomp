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

// Function: sub_002F31A8
// Address: 0x2f31a8 - 0x2f3478
void sub_002F31A8_0x2f31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F31A8_0x2f31a8");
#endif

    switch (ctx->pc) {
        case 0x2f31fcu: goto label_2f31fc;
        case 0x2f3270u: goto label_2f3270;
        case 0x2f32e8u: goto label_2f32e8;
        case 0x2f3374u: goto label_2f3374;
        case 0x2f33ecu: goto label_2f33ec;
        default: break;
    }

    ctx->pc = 0x2f31a8u;

    // 0x2f31a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f31a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f31ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f31acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f31b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f31b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f31b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f31b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f31b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f31bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f31bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f31c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f31c4: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2f31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x2f31c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2f31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2f31cc: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2F31CCu;
    {
        const bool branch_taken_0x2f31cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31CCu;
        // 0x2f31d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31cc) {
            ctx->pc = 0x2F345Cu;
            goto label_2f345c;
        }
    }
    ctx->pc = 0x2F31D4u;
    // 0x2f31d4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2f31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2f31d8: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2f31d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2f31dc: 0xc4401b68  lwc1        $f0, 0x1B68($v0)
    ctx->pc = 0x2f31dcu;
    { uint32_t bits = FAST_READ32(0x471B68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f31e0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2f31e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2f31e4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2f31e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f31e8: 0x0  nop
    ctx->pc = 0x2f31e8u;
    // NOP
    // 0x2f31ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F31ECu;
    {
        const bool branch_taken_0x2f31ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31ECu;
        // 0x2f31f0: 0xae2311c0  sw          $v1, 0x11C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31ec) {
            ctx->pc = 0x2F3204u;
            goto label_2f3204;
        }
    }
    ctx->pc = 0x2F31F4u;
    // 0x2f31f4: 0xc0bcd1e  jal         func_2F3478
    ctx->pc = 0x2F31F4u;
    SET_GPR_U32(ctx, 31, 0x2F31FCu);
    ctx->pc = 0x2F3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3478u, 0x2F31F4u, 0x2F31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F31FCu;
label_2f31fc:
    // 0x2f31fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F31FCu;
    {
        const bool branch_taken_0x2f31fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F31FCu;
        // 0x2f3200: 0xe6201264  swc1        $f0, 0x1264($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f31fc) {
            ctx->pc = 0x2F3208u;
            goto label_2f3208;
        }
    }
    ctx->pc = 0x2F3204u;
label_2f3204:
    // 0x2f3204: 0xe62c1264  swc1        $f12, 0x1264($s1)
    ctx->pc = 0x2f3204u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4708), bits); }
label_2f3208:
    // 0x2f3208: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2f3208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2f320c: 0xc6221264  lwc1        $f2, 0x1264($s1)
    ctx->pc = 0x2f320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3210: 0xc460b7d0  lwc1        $f0, -0x4830($v1)
    ctx->pc = 0x2f3210u;
    { uint32_t bits = FAST_READ32(0x3FB7D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3214: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f3214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f3218: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2f3218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f321c: 0x0  nop
    ctx->pc = 0x2f321cu;
    // NOP
    // 0x2f3220: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3220u;
    {
        const bool branch_taken_0x2f3220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3220u;
        // 0x2f3224: 0xc441b7d4  lwc1        $f1, -0x482C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3220) {
            ctx->pc = 0x2F3230u;
            goto label_2f3230;
        }
    }
    ctx->pc = 0x2F3228u;
    // 0x2f3228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3228u;
    {
        const bool branch_taken_0x2f3228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3228u;
        // 0x2f322c: 0xe6201264  swc1        $f0, 0x1264($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4708), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3228) {
            ctx->pc = 0x2F3240u;
            goto label_2f3240;
        }
    }
    ctx->pc = 0x2F3230u;
label_2f3230:
    // 0x2f3230: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2f3230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3234: 0x0  nop
    ctx->pc = 0x2f3234u;
    // NOP
    // 0x2f3238: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3238u;
    {
        const bool branch_taken_0x2f3238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f3238) {
            ctx->pc = 0x2F323Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3238u;
            // 0x2f323c: 0xe6211264  swc1        $f1, 0x1264($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4708), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3240u;
            goto label_2f3240;
        }
    }
    ctx->pc = 0x2F3240u;
label_2f3240:
    // 0x2f3240: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f3240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f3244: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f3244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3248: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f3248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f324c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f3250: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f3250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f3254: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3254u;
    {
        const bool branch_taken_0x2f3254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3254u;
        // 0x2f3258: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3254) {
            ctx->pc = 0x2F3290u;
            goto label_2f3290;
        }
    }
    ctx->pc = 0x2F325Cu;
    // 0x2f325c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f3260: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3260u;
    {
        const bool branch_taken_0x2f3260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3260) {
            ctx->pc = 0x2F3264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3260u;
            // 0x2f3264: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3294u;
            goto label_2f3294;
        }
    }
    ctx->pc = 0x2F3268u;
    // 0x2f3268: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F3268u;
    SET_GPR_U32(ctx, 31, 0x2F3270u);
    ctx->pc = 0x2F326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3268u;
    // 0x2f326c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F3268u, 0x2F3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3270u;
label_2f3270:
    // 0x2f3270: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3270u;
    {
        const bool branch_taken_0x2f3270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3270) {
            ctx->pc = 0x2F3274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3270u;
            // 0x2f3274: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3294u;
            goto label_2f3294;
        }
    }
    ctx->pc = 0x2F3278u;
    // 0x2f3278: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f3278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f327c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f3280: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3280u;
    {
        const bool branch_taken_0x2f3280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3280u;
        // 0x2f3284: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3280) {
            ctx->pc = 0x2F3290u;
            goto label_2f3290;
        }
    }
    ctx->pc = 0x2F3288u;
    // 0x2f3288: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3288u;
    {
        const bool branch_taken_0x2f3288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3288) {
            ctx->pc = 0x2F3294u;
            goto label_2f3294;
        }
    }
    ctx->pc = 0x2F3290u;
label_2f3290:
    // 0x2f3290: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f3290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3294:
    // 0x2f3294: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3294u;
    {
        const bool branch_taken_0x2f3294 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3294) {
            ctx->pc = 0x2F32B4u;
            goto label_2f32b4;
        }
    }
    ctx->pc = 0x2F329Cu;
    // 0x2f329c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f32a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f32a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f32a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f32ac: 0x38630049  xori        $v1, $v1, 0x49
    ctx->pc = 0x2f32acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)73);
    // 0x2f32b0: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f32b0u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f32b4:
    // 0x2f32b4: 0x16600020  bnez        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F32B4u;
    {
        const bool branch_taken_0x2f32b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32B4u;
        // 0x2f32b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32b4) {
            ctx->pc = 0x2F3338u;
            goto label_2f3338;
        }
    }
    ctx->pc = 0x2F32BCu;
    // 0x2f32bc: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f32bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f32c0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f32c4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f32c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f32c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f32cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F32CCu;
    {
        const bool branch_taken_0x2f32cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32CCu;
        // 0x2f32d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32cc) {
            ctx->pc = 0x2F3308u;
            goto label_2f3308;
        }
    }
    ctx->pc = 0x2F32D4u;
    // 0x2f32d4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f32d8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F32D8u;
    {
        const bool branch_taken_0x2f32d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f32d8) {
            ctx->pc = 0x2F32DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F32D8u;
            // 0x2f32dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F330Cu;
            goto label_2f330c;
        }
    }
    ctx->pc = 0x2F32E0u;
    // 0x2f32e0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F32E0u;
    SET_GPR_U32(ctx, 31, 0x2F32E8u);
    ctx->pc = 0x2F32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F32E0u;
    // 0x2f32e4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F32E0u, 0x2F32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F32E8u;
label_2f32e8:
    // 0x2f32e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F32E8u;
    {
        const bool branch_taken_0x2f32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f32e8) {
            ctx->pc = 0x2F32ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F32E8u;
            // 0x2f32ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F330Cu;
            goto label_2f330c;
        }
    }
    ctx->pc = 0x2F32F0u;
    // 0x2f32f0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f32f4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f32f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F32F8u;
    {
        const bool branch_taken_0x2f32f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F32F8u;
        // 0x2f32fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f32f8) {
            ctx->pc = 0x2F3308u;
            goto label_2f3308;
        }
    }
    ctx->pc = 0x2F3300u;
    // 0x2f3300: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3300u;
    {
        const bool branch_taken_0x2f3300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3300) {
            ctx->pc = 0x2F330Cu;
            goto label_2f330c;
        }
    }
    ctx->pc = 0x2F3308u;
label_2f3308:
    // 0x2f3308: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f3308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f330c:
    // 0x2f330c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F330Cu;
    {
        const bool branch_taken_0x2f330c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f330c) {
            ctx->pc = 0x2F3330u;
            goto label_2f3330;
        }
    }
    ctx->pc = 0x2F3314u;
    // 0x2f3314: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f3314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f3318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f3318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f331c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f3320: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3324: 0x2843001d  slti        $v1, $v0, 0x1D
    ctx->pc = 0x2f3324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2f3328: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3328u;
    {
        const bool branch_taken_0x2f3328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3328) {
            ctx->pc = 0x2F332Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3328u;
            // 0x2f332c: 0x2853003d  slti        $s3, $v0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3330u;
            goto label_2f3330;
        }
    }
    ctx->pc = 0x2F3330u;
label_2f3330:
    // 0x2f3330: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3330u;
    {
        const bool branch_taken_0x2f3330 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3330) {
            ctx->pc = 0x2F3334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3330u;
            // 0x2f3334: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3348u;
            goto label_2f3348;
        }
    }
    ctx->pc = 0x2F3338u;
label_2f3338:
    // 0x2f3338: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x2f3338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x2f333c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f333cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3340: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2F3340u;
    {
        const bool branch_taken_0x2f3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3340u;
        // 0x2f3344: 0xe6201268  swc1        $f0, 0x1268($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3340) {
            ctx->pc = 0x2F3458u;
            goto label_2f3458;
        }
    }
    ctx->pc = 0x2F3348u;
label_2f3348:
    // 0x2f3348: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f3348u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f334c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f3350: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f3350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f3354: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f3354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f3358: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3358u;
    {
        const bool branch_taken_0x2f3358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3358u;
        // 0x2f335c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3358) {
            ctx->pc = 0x2F3394u;
            goto label_2f3394;
        }
    }
    ctx->pc = 0x2F3360u;
    // 0x2f3360: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f3364: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3364u;
    {
        const bool branch_taken_0x2f3364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3364) {
            ctx->pc = 0x2F3368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3364u;
            // 0x2f3368: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3398u;
            goto label_2f3398;
        }
    }
    ctx->pc = 0x2F336Cu;
    // 0x2f336c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F336Cu;
    SET_GPR_U32(ctx, 31, 0x2F3374u);
    ctx->pc = 0x2F3370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F336Cu;
    // 0x2f3370: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F336Cu, 0x2F3374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3374u;
label_2f3374:
    // 0x2f3374: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3374u;
    {
        const bool branch_taken_0x2f3374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3374) {
            ctx->pc = 0x2F3378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3374u;
            // 0x2f3378: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3398u;
            goto label_2f3398;
        }
    }
    ctx->pc = 0x2F337Cu;
    // 0x2f337c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f3380: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f3384: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3384u;
    {
        const bool branch_taken_0x2f3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3384u;
        // 0x2f3388: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3384) {
            ctx->pc = 0x2F3394u;
            goto label_2f3394;
        }
    }
    ctx->pc = 0x2F338Cu;
    // 0x2f338c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F338Cu;
    {
        const bool branch_taken_0x2f338c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f338c) {
            ctx->pc = 0x2F3398u;
            goto label_2f3398;
        }
    }
    ctx->pc = 0x2F3394u;
label_2f3394:
    // 0x2f3394: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f3394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3398:
    // 0x2f3398: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3398u;
    {
        const bool branch_taken_0x2f3398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3398) {
            ctx->pc = 0x2F33B8u;
            goto label_2f33b8;
        }
    }
    ctx->pc = 0x2F33A0u;
    // 0x2f33a0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f33a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f33a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f33ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f33acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f33b0: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2f33b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x2f33b4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f33b4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f33b8:
    // 0x2f33b8: 0x1660001f  bnez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F33B8u;
    {
        const bool branch_taken_0x2f33b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33B8u;
        // 0x2f33bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33b8) {
            ctx->pc = 0x2F3438u;
            goto label_2f3438;
        }
    }
    ctx->pc = 0x2F33C0u;
    // 0x2f33c0: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2f33c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2f33c4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f33c8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2f33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2f33cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f33ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f33d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F33D0u;
    {
        const bool branch_taken_0x2f33d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33D0u;
        // 0x2f33d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33d0) {
            ctx->pc = 0x2F340Cu;
            goto label_2f340c;
        }
    }
    ctx->pc = 0x2F33D8u;
    // 0x2f33d8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2f33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2f33dc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F33DCu;
    {
        const bool branch_taken_0x2f33dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f33dc) {
            ctx->pc = 0x2F33E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F33DCu;
            // 0x2f33e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3410u;
            goto label_2f3410;
        }
    }
    ctx->pc = 0x2F33E4u;
    // 0x2f33e4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2F33E4u;
    SET_GPR_U32(ctx, 31, 0x2F33ECu);
    ctx->pc = 0x2F33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F33E4u;
    // 0x2f33e8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2F33E4u, 0x2F33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F33ECu;
label_2f33ec:
    // 0x2f33ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F33ECu;
    {
        const bool branch_taken_0x2f33ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f33ec) {
            ctx->pc = 0x2F33F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F33ECu;
            // 0x2f33f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3410u;
            goto label_2f3410;
        }
    }
    ctx->pc = 0x2F33F4u;
    // 0x2f33f4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2f33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f33f8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2f33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2f33fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F33FCu;
    {
        const bool branch_taken_0x2f33fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F33FCu;
        // 0x2f3400: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f33fc) {
            ctx->pc = 0x2F340Cu;
            goto label_2f340c;
        }
    }
    ctx->pc = 0x2F3404u;
    // 0x2f3404: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3404u;
    {
        const bool branch_taken_0x2f3404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3404) {
            ctx->pc = 0x2F3410u;
            goto label_2f3410;
        }
    }
    ctx->pc = 0x2F340Cu;
label_2f340c:
    // 0x2f340c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f340cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3410:
    // 0x2f3410: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3410u;
    {
        const bool branch_taken_0x2f3410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3410) {
            ctx->pc = 0x2F3430u;
            goto label_2f3430;
        }
    }
    ctx->pc = 0x2F3418u;
    // 0x2f3418: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f3418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2f341c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f3420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f3424: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f3424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3428: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2f3428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x2f342c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2f342cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f3430:
    // 0x2f3430: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3430u;
    {
        const bool branch_taken_0x2f3430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3430) {
            ctx->pc = 0x2F3448u;
            goto label_2f3448;
        }
    }
    ctx->pc = 0x2F3438u;
label_2f3438:
    // 0x2f3438: 0x3c01442f  lui         $at, 0x442F
    ctx->pc = 0x2f3438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17455 << 16));
    // 0x2f343c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f343cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3440: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3440u;
    {
        const bool branch_taken_0x2f3440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3440u;
        // 0x2f3444: 0xe6201268  swc1        $f0, 0x1268($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3440) {
            ctx->pc = 0x2F3458u;
            goto label_2f3458;
        }
    }
    ctx->pc = 0x2F3448u;
label_2f3448:
    // 0x2f3448: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2f344c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f344cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3450: 0x0  nop
    ctx->pc = 0x2f3450u;
    // NOP
    // 0x2f3454: 0xe6201268  swc1        $f0, 0x1268($s1)
    ctx->pc = 0x2f3454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4712), bits); }
label_2f3458:
    // 0x2f3458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f345c:
    // 0x2f345c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f345cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3460: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f3460u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3464: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f3464u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3468: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f346c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F346Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F346Cu;
        // 0x2f3470: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F346Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3474u;
    // 0x2f3474: 0x0  nop
    ctx->pc = 0x2f3474u;
    // NOP
    ctx->pc = 0x2f3478u;
}
