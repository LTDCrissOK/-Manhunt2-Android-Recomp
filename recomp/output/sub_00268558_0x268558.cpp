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

// Function: sub_00268558
// Address: 0x268558 - 0x268800
void sub_00268558_0x268558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268558_0x268558");
#endif

    switch (ctx->pc) {
        case 0x2685c8u: goto label_2685c8;
        case 0x2685fcu: goto label_2685fc;
        case 0x2686b4u: goto label_2686b4;
        case 0x268750u: goto label_268750;
        case 0x268780u: goto label_268780;
        case 0x2687c4u: goto label_2687c4;
        default: break;
    }

    ctx->pc = 0x268558u;

    // 0x268558: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x268558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26855c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x268560: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x268560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x268564: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x268564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x268568: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x268568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26856c: 0x8c629dbc  lw          $v0, -0x6244($v1)
    ctx->pc = 0x26856cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DBCu));
    // 0x268570: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x268570u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268574: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x268574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x268578: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x268578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26857c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x26857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x268580: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x268580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x268584: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x268584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x268588: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x268588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x26858c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x26858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x268590: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x268590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x268594: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x268594u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x268598: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x268598u;
    {
        const bool branch_taken_0x268598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268598u;
        // 0x26859c: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x268598) {
            ctx->pc = 0x2687BCu;
            goto label_2687bc;
        }
    }
    ctx->pc = 0x2685A0u;
    // 0x2685a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2685a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2685a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2685a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2685a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2685ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2685acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2685b0: 0x2454ae80  addiu       $s4, $v0, -0x5180
    ctx->pc = 0x2685b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x2685b4: 0x2473ae30  addiu       $s3, $v1, -0x51D0
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946352));
    // 0x2685b8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2685b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x2685bc: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x2685c0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2685c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2685c4: 0x0  nop
    ctx->pc = 0x2685c4u;
    // NOP
label_2685c8:
    // 0x2685c8: 0xc6940000  lwc1        $f20, 0x0($s4)
    ctx->pc = 0x2685c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2685cc: 0xc6e09db0  lwc1        $f0, -0x6250($s7)
    ctx->pc = 0x2685ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294942128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2685d0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2685d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2685d4: 0x0  nop
    ctx->pc = 0x2685d4u;
    // NOP
    // 0x2685d8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x2685D8u;
    {
        const bool branch_taken_0x2685d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685D8u;
        // 0x2685dc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685d8) {
            ctx->pc = 0x2686E4u;
            goto label_2686e4;
        }
    }
    ctx->pc = 0x2685E0u;
    // 0x2685e0: 0x92020297  lbu         $v0, 0x297($s0)
    ctx->pc = 0x2685e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 663)));
    // 0x2685e4: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2685E4u;
    {
        const bool branch_taken_0x2685e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2685e4) {
            ctx->pc = 0x2685E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685E4u;
            // 0x2685e8: 0x92020245  lbu         $v0, 0x245($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 581)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686E8u;
            goto label_2686e8;
        }
    }
    ctx->pc = 0x2685ECu;
    // 0x2685ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2685ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2685f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2685f4: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2685F4u;
    SET_GPR_U32(ctx, 31, 0x2685FCu);
    ctx->pc = 0x2685F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685F4u;
    // 0x2685f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2685F4u, 0x2685FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685FCu;
label_2685fc:
    // 0x2685fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x268600: 0xc6e19db0  lwc1        $f1, -0x6250($s7)
    ctx->pc = 0x268600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294942128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268604: 0xc4409db4  lwc1        $f0, -0x624C($v0)
    ctx->pc = 0x268604u;
    { uint32_t bits = FAST_READ32(0x3F9DB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268608: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x268608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26860c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26860cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268610: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x268610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x268614: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x268614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x268618: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x268618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26861c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x26861cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x268620: 0xc6020258  lwc1        $f2, 0x258($s0)
    ctx->pc = 0x268620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268624: 0x0  nop
    ctx->pc = 0x268624u;
    // NOP
    // 0x268628: 0x0  nop
    ctx->pc = 0x268628u;
    // NOP
    // 0x26862c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26862cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x268630: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x268630u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x268634: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x268634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x268638: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x268638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26863c: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x26863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268640: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x268640u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268644: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x268644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268648: 0xc6000260  lwc1        $f0, 0x260($s0)
    ctx->pc = 0x268648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26864c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26864cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x268650: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x268650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268654: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x268654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268658: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x268658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26865c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x26865cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x268660: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x268660u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x268664: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x268664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268668: 0x0  nop
    ctx->pc = 0x268668u;
    // NOP
    // 0x26866c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26866Cu;
    {
        const bool branch_taken_0x26866c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x268670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26866Cu;
        // 0x268670: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26866c) {
            ctx->pc = 0x2686ACu;
            goto label_2686ac;
        }
    }
    ctx->pc = 0x268674u;
    // 0x268674: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x268674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268678: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x268678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x26867c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x26867cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x268680: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x268680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268684: 0x0  nop
    ctx->pc = 0x268684u;
    // NOP
    // 0x268688: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x268688u;
    {
        const bool branch_taken_0x268688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268688) {
            ctx->pc = 0x2686ACu;
            goto label_2686ac;
        }
    }
    ctx->pc = 0x268690u;
    // 0x268690: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x268690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x268694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x268698: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x268698u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x26869c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x26869cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2686a0: 0x0  nop
    ctx->pc = 0x2686a0u;
    // NOP
    // 0x2686a4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2686A4u;
    {
        const bool branch_taken_0x2686a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2686a4) {
            ctx->pc = 0x2686A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2686A4u;
            // 0x2686a8: 0xaed5bce4  sw          $s5, -0x431C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4294950116), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686BCu;
            goto label_2686bc;
        }
    }
    ctx->pc = 0x2686ACu;
label_2686ac:
    // 0x2686ac: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x2686ACu;
    SET_GPR_U32(ctx, 31, 0x2686B4u);
    ctx->pc = 0x2686B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2686ACu;
    // 0x2686b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x2686ACu, 0x2686B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686B4u;
label_2686b4:
    // 0x2686b4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2686b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2686b8: 0xaed5bce4  sw          $s5, -0x431C($s6)
    ctx->pc = 0x2686b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294950116), GPR_U32(ctx, 21));
label_2686bc:
    // 0x2686bc: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2686bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2686c0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2686c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2686c4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x2686c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2686c8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x2686c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2686cc: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x2686ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2686d0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x2686d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2686d4: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x2686d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2686d8: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x2686d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2686dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2686DCu;
    {
        const bool branch_taken_0x2686dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2686dc) {
            ctx->pc = 0x268778u;
            goto label_268778;
        }
    }
    ctx->pc = 0x2686E4u;
label_2686e4:
    // 0x2686e4: 0x92020245  lbu         $v0, 0x245($s0)
    ctx->pc = 0x2686e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 581)));
label_2686e8:
    // 0x2686e8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2686E8u;
    {
        const bool branch_taken_0x2686e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2686e8) {
            ctx->pc = 0x268778u;
            goto label_268778;
        }
    }
    ctx->pc = 0x2686F0u;
    // 0x2686f0: 0x92020246  lbu         $v0, 0x246($s0)
    ctx->pc = 0x2686f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x2686f4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2686F4u;
    {
        const bool branch_taken_0x2686f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2686F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686F4u;
        // 0x2686f8: 0x26110258  addiu       $s1, $s0, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686f4) {
            ctx->pc = 0x268778u;
            goto label_268778;
        }
    }
    ctx->pc = 0x2686FCu;
    // 0x2686fc: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2686fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268700: 0xc6010258  lwc1        $f1, 0x258($s0)
    ctx->pc = 0x268700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268704: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x268704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268708: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268708u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26870c: 0x0  nop
    ctx->pc = 0x26870cu;
    // NOP
    // 0x268710: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x268710u;
    {
        const bool branch_taken_0x268710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268710u;
        // 0x268714: 0x24430010  addiu       $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268710) {
            ctx->pc = 0x268748u;
            goto label_268748;
        }
    }
    ctx->pc = 0x268718u;
    // 0x268718: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x268718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26871c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268720: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x268720u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268724: 0x0  nop
    ctx->pc = 0x268724u;
    // NOP
    // 0x268728: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x268728u;
    {
        const bool branch_taken_0x268728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268728) {
            ctx->pc = 0x268748u;
            goto label_268748;
        }
    }
    ctx->pc = 0x268730u;
    // 0x268730: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x268730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268734: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x268734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268738: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26873c: 0x0  nop
    ctx->pc = 0x26873cu;
    // NOP
    // 0x268740: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x268740u;
    {
        const bool branch_taken_0x268740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268740) {
            ctx->pc = 0x268744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268740u;
            // 0x268744: 0xaed5bce4  sw          $s5, -0x431C($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4294950116), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268758u;
            goto label_268758;
        }
    }
    ctx->pc = 0x268748u;
label_268748:
    // 0x268748: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x268748u;
    SET_GPR_U32(ctx, 31, 0x268750u);
    ctx->pc = 0x26874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268748u;
    // 0x26874c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x268748u, 0x268750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268750u;
label_268750:
    // 0x268750: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x268750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268754: 0xaed5bce4  sw          $s5, -0x431C($s6)
    ctx->pc = 0x268754u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294950116), GPR_U32(ctx, 21));
label_268758:
    // 0x268758: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x268758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x26875c: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x26875cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x268760: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x268760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x268764: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x268764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x268768: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x268768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26876c: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x26876cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x268770: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x268770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x268774: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x268774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_268778:
    // 0x268778: 0xc099e8c  jal         func_267A30
    ctx->pc = 0x268778u;
    SET_GPR_U32(ctx, 31, 0x268780u);
    ctx->pc = 0x26877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268778u;
    // 0x26877c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A30u, 0x268778u, 0x268780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268780u;
label_268780:
    // 0x268780: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x268780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x268784: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x268784u;
    {
        const bool branch_taken_0x268784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268784) {
            ctx->pc = 0x268788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268784u;
            // 0x268788: 0x8e0302a4  lw          $v1, 0x2A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26879Cu;
            goto label_26879c;
        }
    }
    ctx->pc = 0x26878Cu;
    // 0x26878c: 0x92020295  lbu         $v0, 0x295($s0)
    ctx->pc = 0x26878cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 661)));
    // 0x268790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268790u;
    {
        const bool branch_taken_0x268790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268790u;
        // 0x268794: 0x8fc29dbc  lw          $v0, -0x6244($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268790) {
            ctx->pc = 0x2687A8u;
            goto label_2687a8;
        }
    }
    ctx->pc = 0x268798u;
    // 0x268798: 0x8e0302a4  lw          $v1, 0x2A4($s0)
    ctx->pc = 0x268798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_26879c:
    // 0x26879c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x26879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2687a0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2687a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2687a4: 0x8fc29dbc  lw          $v0, -0x6244($fp)
    ctx->pc = 0x2687a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294942140)));
label_2687a8:
    // 0x2687a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2687a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2687ac: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2687acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2687b0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2687b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2687b4: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x2687B4u;
    {
        const bool branch_taken_0x2687b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2687B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687B4u;
        // 0x2687b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687b4) {
            ctx->pc = 0x2685C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2685c8;
        }
    }
    ctx->pc = 0x2687BCu;
label_2687bc:
    // 0x2687bc: 0xc09a200  jal         func_268800
    ctx->pc = 0x2687BCu;
    SET_GPR_U32(ctx, 31, 0x2687C4u);
    ctx->pc = 0x268800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268800u, 0x2687BCu, 0x2687C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2687C4u;
label_2687c4:
    // 0x2687c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2687c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2687c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2687c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2687cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2687ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2687d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2687d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2687d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2687d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2687d8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2687d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2687dc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2687dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2687e0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2687e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2687e4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2687e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2687e8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2687e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2687ec: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2687ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2687f0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2687f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2687f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2687F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2687F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687F4u;
        // 0x2687f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2687F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2687FCu;
    // 0x2687fc: 0x0  nop
    ctx->pc = 0x2687fcu;
    // NOP
    ctx->pc = 0x268800u;
}
