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

// Function: sub_0026A5A8
// Address: 0x26a5a8 - 0x26a958
void sub_0026A5A8_0x26a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A5A8_0x26a5a8");
#endif

    switch (ctx->pc) {
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a610u: goto label_26a610;
        case 0x26a6f4u: goto label_26a6f4;
        case 0x26a6fcu: goto label_26a6fc;
        case 0x26a740u: goto label_26a740;
        case 0x26a748u: goto label_26a748;
        case 0x26a7e0u: goto label_26a7e0;
        case 0x26a7fcu: goto label_26a7fc;
        case 0x26a90cu: goto label_26a90c;
        default: break;
    }

    ctx->pc = 0x26a5a8u;

    // 0x26a5a8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x26a5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x26a5ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x26a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x26a5b0: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x26a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x26a5b4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x26a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x26a5b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5bc: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x26a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x26a5c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26a5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a5c4: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x26a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x26a5c8: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x26a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
    // 0x26a5cc: 0x24535b40  addiu       $s3, $v0, 0x5B40
    ctx->pc = 0x26a5ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x26a5d0: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x26a5d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x26a5d4: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x26a5d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x26a5d8: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x26a5d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x26a5dc: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x26a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x26a5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26a5e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x26a5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26a5e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A5E8u;
    {
        const bool branch_taken_0x26a5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E8u;
        // 0x26a5ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5e8) {
            ctx->pc = 0x26A600u;
            goto label_26a600;
        }
    }
    ctx->pc = 0x26A5F0u;
    // 0x26a5f0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x26A5F0u;
    SET_GPR_U32(ctx, 31, 0x26A5F8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26A5F0u, 0x26A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5F8u;
label_26a5f8:
    // 0x26a5f8: 0x38420067  xori        $v0, $v0, 0x67
    ctx->pc = 0x26a5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)103);
    // 0x26a5fc: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x26a5fcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26a600:
    // 0x26a600: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A600u;
    {
        const bool branch_taken_0x26a600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A600u;
        // 0x26a604: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a600) {
            ctx->pc = 0x26A61Cu;
            goto label_26a61c;
        }
    }
    ctx->pc = 0x26A608u;
    // 0x26a608: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x26A608u;
    SET_GPR_U32(ctx, 31, 0x26A610u);
    ctx->pc = 0x26A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A608u;
    // 0x26a60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x26A608u, 0x26A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A610u;
label_26a610:
    // 0x26a610: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x26a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26a614: 0x104300c5  beq         $v0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x26A614u;
    {
        const bool branch_taken_0x26a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A614u;
        // 0x26a618: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a614) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A61Cu;
label_26a61c:
    // 0x26a61c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a620: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x26a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a624: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x26a624u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x26a628: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x26a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a62c: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x26a62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a630: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x26a630u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x26a634: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x26a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a638: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x26a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a63c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x26a63cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x26a640: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26a640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x26a644: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a644u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26a648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a64c: 0x0  nop
    ctx->pc = 0x26a64cu;
    // NOP
    // 0x26a650: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26a650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a654: 0x0  nop
    ctx->pc = 0x26a654u;
    // NOP
    // 0x26a658: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26A658u;
    {
        const bool branch_taken_0x26a658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A658u;
        // 0x26a65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a658) {
            ctx->pc = 0x26A664u;
            goto label_26a664;
        }
    }
    ctx->pc = 0x26A660u;
    // 0x26a660: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x26a660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
label_26a664:
    // 0x26a664: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x26a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26a668: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26a668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x26a66c: 0x544000b0  bnel        $v0, $zero, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26A66Cu;
    {
        const bool branch_taken_0x26a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a66c) {
            ctx->pc = 0x26A670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A66Cu;
            // 0x26a670: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A674u;
    // 0x26a674: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x26a678: 0x3862000a  xori        $v0, $v1, 0xA
    ctx->pc = 0x26a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x26a67c: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x26A67Cu;
    {
        const bool branch_taken_0x26a67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A67Cu;
        // 0x26a680: 0x38620008  xori        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a67c) {
            ctx->pc = 0x26A914u;
            goto label_26a914;
        }
    }
    ctx->pc = 0x26A684u;
    // 0x26a684: 0x524000aa  beql        $s2, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x26A684u;
    {
        const bool branch_taken_0x26a684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a684) {
            ctx->pc = 0x26A688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A684u;
            // 0x26a688: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A68Cu;
    // 0x26a68c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x26a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x26a690: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x26a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x26a694: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a698: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x26a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a69c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x26a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a6a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26a6a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26a6a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26a6a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26a6a8: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x26a6a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26a6ac: 0x46140504  c1          0x140504
    ctx->pc = 0x26a6acu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x26a6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a6b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26a6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26a6b8: 0x0  nop
    ctx->pc = 0x26a6b8u;
    // NOP
    // 0x26a6bc: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x26a6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a6c0: 0x0  nop
    ctx->pc = 0x26a6c0u;
    // NOP
    // 0x26a6c4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x26A6C4u;
    {
        const bool branch_taken_0x26a6c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a6c4) {
            ctx->pc = 0x26A6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A6C4u;
            // 0x26a6c8: 0x8e020248  lw          $v0, 0x248($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A6E0u;
            goto label_26a6e0;
        }
    }
    ctx->pc = 0x26A6CCu;
    // 0x26a6cc: 0x8e020244  lw          $v0, 0x244($s0)
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x26a6d0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26a6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a6d4: 0x50400096  beql        $v0, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x26A6D4u;
    {
        const bool branch_taken_0x26a6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a6d4) {
            ctx->pc = 0x26A6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A6D4u;
            // 0x26a6d8: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A6DCu;
    // 0x26a6dc: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x26a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
label_26a6e0:
    // 0x26a6e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26a6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26a6e4: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x26A6E4u;
    {
        const bool branch_taken_0x26a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A6E4u;
        // 0x26a6e8: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a6e4) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A6ECu;
    // 0x26a6ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26A6ECu;
    SET_GPR_U32(ctx, 31, 0x26A6F4u);
    ctx->pc = 0x26A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A6ECu;
    // 0x26a6f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A6ECu, 0x26A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6F4u;
label_26a6f4:
    // 0x26a6f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26A6F4u;
    SET_GPR_U32(ctx, 31, 0x26A6FCu);
    ctx->pc = 0x26A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A6F4u;
    // 0x26a6f8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A6F4u, 0x26A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A6FCu;
label_26a6fc:
    // 0x26a6fc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x26a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x26a700: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x26a700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a704: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x26a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a708: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x26a708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x26a70c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26a70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26a710: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26a710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a714: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26a714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26a718: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a71c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x26a71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26a720: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a724: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x26a724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x26a728: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26a728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26a72c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a730: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26a730u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26a734: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x26a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a738: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26A738u;
    SET_GPR_U32(ctx, 31, 0x26A740u);
    ctx->pc = 0x26A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A738u;
    // 0x26a73c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A738u, 0x26A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A740u;
label_26a740:
    // 0x26a740: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26A740u;
    SET_GPR_U32(ctx, 31, 0x26A748u);
    ctx->pc = 0x26A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A740u;
    // 0x26a744: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A740u, 0x26A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A748u;
label_26a748:
    // 0x26a748: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x26a748u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a74c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x26a74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26a750: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x26a750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a754: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26a758: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x26a758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x26a75c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a760: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x26a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x26a764: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26a764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26a768: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x26a768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26a76c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26a76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a770: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x26a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a774: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a778: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x26a778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a77c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x26a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26a780: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26a780u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26a784: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26a784u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26a788: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26a788u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26a78c: 0x0  nop
    ctx->pc = 0x26a78cu;
    // NOP
    // 0x26a790: 0x0  nop
    ctx->pc = 0x26a790u;
    // NOP
    // 0x26a794: 0x46000044  c1          0x44
    ctx->pc = 0x26a794u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x26a798: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x26a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x26a79c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x26a79cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x26a7a0: 0x0  nop
    ctx->pc = 0x26a7a0u;
    // NOP
    // 0x26a7a4: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x26a7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a7a8: 0x0  nop
    ctx->pc = 0x26a7a8u;
    // NOP
    // 0x26a7ac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x26A7ACu;
    {
        const bool branch_taken_0x26a7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7ACu;
        // 0x26a7b0: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7ac) {
            ctx->pc = 0x26A7D4u;
            goto label_26a7d4;
        }
    }
    ctx->pc = 0x26A7B4u;
    // 0x26a7b4: 0x0  nop
    ctx->pc = 0x26a7b4u;
    // NOP
    // 0x26a7b8: 0x0  nop
    ctx->pc = 0x26a7b8u;
    // NOP
    // 0x26a7bc: 0x4601a803  div.s       $f0, $f21, $f1
    ctx->pc = 0x26a7bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x26a7c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a7c4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x26a7c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26a7c8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26a7c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x26a7cc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26a7ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a7d0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x26a7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_26a7d4:
    // 0x26a7d4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x26a7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26a7d8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x26A7D8u;
    SET_GPR_U32(ctx, 31, 0x26A7E0u);
    ctx->pc = 0x26A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7D8u;
    // 0x26a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x26A7D8u, 0x26A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7E0u;
label_26a7e0:
    // 0x26a7e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x26a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x26a7e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a7e8: 0xc4607b6c  lwc1        $f0, 0x7B6C($v1)
    ctx->pc = 0x26a7e8u;
    { uint32_t bits = FAST_READ32(0x467B6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a7ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a7f0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x26a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x26a7f4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x26A7F4u;
    SET_GPR_U32(ctx, 31, 0x26A7FCu);
    ctx->pc = 0x26A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A7F4u;
    // 0x26a7f8: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x26A7F4u, 0x26A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7FCu;
label_26a7fc:
    // 0x26a7fc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x26A7FCu;
    {
        const bool branch_taken_0x26a7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A7FCu;
        // 0x26a800: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a7fc) {
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A804u;
    // 0x26a804: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x26a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26a808: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x26a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a80c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x26a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a810: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x26a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a814: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x26a814u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26a818: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26a818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26a81c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x26a81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26a820: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x26a820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x26a824: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26a824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26a828: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26a828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a82c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26a82cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a830: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x26a830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a834: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x26a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a838: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x26a83c: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x26a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a840: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x26a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26a844: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x26a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26a848: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x26a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x26a84c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x26a84cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x26a850: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x26a850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x26a854: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x26a854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x26a858: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26a858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26a85c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26a85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x26a860: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26a860u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x26a864: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26a864u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x26a868: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26a868u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x26a86c: 0x4a0003bf  vwaitq
    ctx->pc = 0x26a86cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x26a870: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26a870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26a874: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x26a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26a878: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x26a87c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a880: 0x0  nop
    ctx->pc = 0x26a880u;
    // NOP
    // 0x26a884: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26a884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a888: 0x0  nop
    ctx->pc = 0x26a888u;
    // NOP
    // 0x26a88c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26A88Cu;
    {
        const bool branch_taken_0x26a88c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a88c) {
            ctx->pc = 0x26A890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A88Cu;
            // 0x26a890: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A894u;
            goto label_26a894;
        }
    }
    ctx->pc = 0x26A894u;
label_26a894:
    // 0x26a894: 0x4615a301  sub.s       $f12, $f20, $f21
    ctx->pc = 0x26a894u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x26a898: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26a898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x26a89c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a8a0: 0x3c013dba  lui         $at, 0x3DBA
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15802 << 16));
    // 0x26a8a4: 0x34212e8c  ori         $at, $at, 0x2E8C
    ctx->pc = 0x26a8a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11916);
    // 0x26a8a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a8ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a8b0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26a8b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26a8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26a8b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a8bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8c0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26a8c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x26a8c4: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x26a8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x26a8c8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x26a8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x26a8cc: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x26a8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x26a8d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26a8d4: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x26a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x26a8d8: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x26a8d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x26a8dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26a8e0: 0x4600ac46  mov.s       $f17, $f21
    ctx->pc = 0x26a8e0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[21]);
    // 0x26a8e4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x26a8e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x26a8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x26a8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a8f0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x26a8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a8f4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26a8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a8f8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a8fc: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x26a8fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x26a900: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x26a900u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a904: 0xc0cf430  jal         func_33D0C0
    ctx->pc = 0x26A904u;
    SET_GPR_U32(ctx, 31, 0x26A90Cu);
    ctx->pc = 0x26A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A904u;
    // 0x26a908: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D0C0u, 0x26A904u, 0x26A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A90Cu;
label_26a90c:
    // 0x26a90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26A90Cu;
    {
        const bool branch_taken_0x26a90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A90Cu;
        // 0x26a910: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a90c) {
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A914u;
label_26a914:
    // 0x26a914: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A914u;
    {
        const bool branch_taken_0x26a914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a914) {
            ctx->pc = 0x26A918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A914u;
            // 0x26a918: 0xdfb00130  ld          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A930u;
            goto label_26a930;
        }
    }
    ctx->pc = 0x26A91Cu;
    // 0x26a91c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x26a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x26a920: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x26a924: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26A924u;
    {
        const bool branch_taken_0x26a924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a924) {
            ctx->pc = 0x26A928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A924u;
            // 0x26a928: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A92Cu;
            goto label_26a92c;
        }
    }
    ctx->pc = 0x26A92Cu;
label_26a92c:
    // 0x26a92c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x26a92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_26a930:
    // 0x26a930: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x26a930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x26a934: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x26a934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x26a938: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x26a938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x26a93c: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x26a93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x26a940: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x26a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x26a944: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x26a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a948: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x26a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A94Cu;
        // 0x26a950: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A954u;
    // 0x26a954: 0x0  nop
    ctx->pc = 0x26a954u;
    // NOP
    ctx->pc = 0x26a958u;
}
