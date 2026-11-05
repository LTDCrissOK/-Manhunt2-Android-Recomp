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

// Function: sub_002E5588
// Address: 0x2e5588 - 0x2e62c0
void sub_002E5588_0x2e5588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5588_0x2e5588");
#endif

    switch (ctx->pc) {
        case 0x2e5618u: goto label_2e5618;
        case 0x2e563cu: goto label_2e563c;
        case 0x2e5794u: goto label_2e5794;
        case 0x2e584cu: goto label_2e584c;
        case 0x2e588cu: goto label_2e588c;
        case 0x2e58ccu: goto label_2e58cc;
        case 0x2e58dcu: goto label_2e58dc;
        case 0x2e591cu: goto label_2e591c;
        case 0x2e592cu: goto label_2e592c;
        case 0x2e598cu: goto label_2e598c;
        case 0x2e59a4u: goto label_2e59a4;
        case 0x2e59f4u: goto label_2e59f4;
        case 0x2e5a04u: goto label_2e5a04;
        case 0x2e5a1cu: goto label_2e5a1c;
        case 0x2e5a2cu: goto label_2e5a2c;
        case 0x2e5a44u: goto label_2e5a44;
        case 0x2e5a54u: goto label_2e5a54;
        case 0x2e5a74u: goto label_2e5a74;
        case 0x2e5a84u: goto label_2e5a84;
        case 0x2e5a94u: goto label_2e5a94;
        case 0x2e5aa4u: goto label_2e5aa4;
        case 0x2e5af4u: goto label_2e5af4;
        case 0x2e5b28u: goto label_2e5b28;
        case 0x2e5cf0u: goto label_2e5cf0;
        case 0x2e5d1cu: goto label_2e5d1c;
        case 0x2e5d68u: goto label_2e5d68;
        case 0x2e5e54u: goto label_2e5e54;
        case 0x2e5e80u: goto label_2e5e80;
        case 0x2e604cu: goto label_2e604c;
        case 0x2e60ccu: goto label_2e60cc;
        case 0x2e61f0u: goto label_2e61f0;
        case 0x2e621cu: goto label_2e621c;
        default: break;
    }

    ctx->pc = 0x2e5588u;

    // 0x2e5588: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e5588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e558c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5590: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e5590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e5594: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e5594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e5598: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2e5598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2e559c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2e559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2e55a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e55a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55a4: 0xe7bc00b0  swc1        $f28, 0xB0($sp)
    ctx->pc = 0x2e55a4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e55a8: 0xe7bb00a8  swc1        $f27, 0xA8($sp)
    ctx->pc = 0x2e55a8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e55ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e55acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55b0: 0xe7ba00a0  swc1        $f26, 0xA0($sp)
    ctx->pc = 0x2e55b0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e55b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e55b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e55b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2e55b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2e55bc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2e55bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2e55c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e55c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e55c4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2e55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2e55c8: 0xe7b90098  swc1        $f25, 0x98($sp)
    ctx->pc = 0x2e55c8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e55cc: 0xe7b80090  swc1        $f24, 0x90($sp)
    ctx->pc = 0x2e55ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e55d0: 0xe7b70088  swc1        $f23, 0x88($sp)
    ctx->pc = 0x2e55d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e55d4: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2e55d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e55d8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2e55d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e55dc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2e55dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e55e0: 0xc45b96b4  lwc1        $f27, -0x694C($v0)
    ctx->pc = 0x2e55e0u;
    { uint32_t bits = FAST_READ32(0x3F96B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2e55e4: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x2e55e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e55e8: 0xc6210528  lwc1        $f1, 0x528($s1)
    ctx->pc = 0x2e55e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e55ec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2e55ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e55f0: 0x8e3400b8  lw          $s4, 0xB8($s1)
    ctx->pc = 0x2e55f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2e55f4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2e55f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e55f8: 0xc47c96b8  lwc1        $f28, -0x6948($v1)
    ctx->pc = 0x2e55f8u;
    { uint32_t bits = FAST_READ32(0x3F96B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2e55fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e5600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5604: 0x0  nop
    ctx->pc = 0x2e5604u;
    // NOP
    // 0x2e5608: 0x0  nop
    ctx->pc = 0x2e5608u;
    // NOP
    // 0x2e560c: 0x46000684  c1          0x684
    ctx->pc = 0x2e560cu;
    ctx->f[26] = FPU_SQRT_S(ctx->f[0]);
    // 0x2e5610: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2E5610u;
    SET_GPR_U32(ctx, 31, 0x2E5618u);
    ctx->pc = 0x2E5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5610u;
    // 0x2e5614: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2E5610u, 0x2E5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5618u;
label_2e5618:
    // 0x2e5618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e561c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E561Cu;
    {
        const bool branch_taken_0x2e561c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e561c) {
            ctx->pc = 0x2E5620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E561Cu;
            // 0x2e5620: 0xc6200528  lwc1        $f0, 0x528($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5650u;
            goto label_2e5650;
        }
    }
    ctx->pc = 0x2E5624u;
    // 0x2e5624: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2e5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2e5628: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2e5628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2e562c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E562Cu;
    {
        const bool branch_taken_0x2e562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e562c) {
            ctx->pc = 0x2E5630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E562Cu;
            // 0x2e5630: 0xc6200528  lwc1        $f0, 0x528($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5650u;
            goto label_2e5650;
        }
    }
    ctx->pc = 0x2E5634u;
    // 0x2e5634: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2E5634u;
    SET_GPR_U32(ctx, 31, 0x2E563Cu);
    ctx->pc = 0x2E5638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5634u;
    // 0x2e5638: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2E5634u, 0x2E563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E563Cu;
label_2e563c:
    // 0x2e563c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2e563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2e5640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5640u;
    {
        const bool branch_taken_0x2e5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5640u;
        // 0x2e5644: 0xc6200528  lwc1        $f0, 0x528($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5640) {
            ctx->pc = 0x2E5650u;
            goto label_2e5650;
        }
    }
    ctx->pc = 0x2E5648u;
    // 0x2e5648: 0x8e130274  lw          $s3, 0x274($s0)
    ctx->pc = 0x2e5648u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2e564c: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x2e564cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5650:
    // 0x2e5650: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2e5650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2e5654: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e5654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e5658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e565c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e565cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e5660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5664: 0x0  nop
    ctx->pc = 0x2e5664u;
    // NOP
    // 0x2e5668: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5668u;
    {
        const bool branch_taken_0x2e5668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5668u;
        // 0x2e566c: 0x8e2411c0  lw          $a0, 0x11C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5668) {
            ctx->pc = 0x2E5688u;
            goto label_2e5688;
        }
    }
    ctx->pc = 0x2E5670u;
    // 0x2e5670: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x2e5670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2e5674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5674u;
    {
        const bool branch_taken_0x2e5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5674u;
        // 0x2e5678: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5674) {
            ctx->pc = 0x2E568Cu;
            goto label_2e568c;
        }
    }
    ctx->pc = 0x2E567Cu;
    // 0x2e567c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e5680: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5680u;
    {
        const bool branch_taken_0x2e5680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5680) {
            ctx->pc = 0x2E5684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5680u;
            // 0x2e5684: 0x8e220590  lw          $v0, 0x590($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5698u;
            goto label_2e5698;
        }
    }
    ctx->pc = 0x2E5688u;
label_2e5688:
    // 0x2e5688: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x2e5688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2e568c:
    // 0x2e568c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2e568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2e5690: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
    // 0x2e5694: 0x8e220590  lw          $v0, 0x590($s1)
    ctx->pc = 0x2e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
label_2e5698:
    // 0x2e5698: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E5698u;
    {
        const bool branch_taken_0x2e5698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5698u;
        // 0x2e569c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5698) {
            ctx->pc = 0x2E5758u;
            goto label_2e5758;
        }
    }
    ctx->pc = 0x2E56A0u;
    // 0x2e56a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e56a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e56a4: 0x24432458  addiu       $v1, $v0, 0x2458
    ctx->pc = 0x2e56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x2e56a8: 0xc4402458  lwc1        $f0, 0x2458($v0)
    ctx->pc = 0x2e56a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e56ac: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2e56acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e56b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e56b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e56b4: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2e56b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e56b8: 0x0  nop
    ctx->pc = 0x2e56b8u;
    // NOP
    // 0x2e56bc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E56BCu;
    {
        const bool branch_taken_0x2e56bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56BCu;
        // 0x2e56c0: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56bc) {
            ctx->pc = 0x2E5700u;
            goto label_2e5700;
        }
    }
    ctx->pc = 0x2E56C4u;
    // 0x2e56c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e56c8: 0xc62111d4  lwc1        $f1, 0x11D4($s1)
    ctx->pc = 0x2e56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e56cc: 0xc440b9d4  lwc1        $f0, -0x462C($v0)
    ctx->pc = 0x2e56ccu;
    { uint32_t bits = FAST_READ32(0x3FB9D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e56d0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2e56d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2e56d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e56d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e56d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e56dc: 0xe62111d4  swc1        $f1, 0x11D4($s1)
    ctx->pc = 0x2e56dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
    // 0x2e56e0: 0xc442b7e0  lwc1        $f2, -0x4820($v0)
    ctx->pc = 0x2e56e0u;
    { uint32_t bits = FAST_READ32(0x3FB7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e56e4: 0xc4605860  lwc1        $f0, 0x5860($v1)
    ctx->pc = 0x2e56e4u;
    { uint32_t bits = FAST_READ32(0x595860u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e56e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e56e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e56ec: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e56ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e56f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e56f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2e56f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e56f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e56f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2E56F8u;
    {
        const bool branch_taken_0x2e56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56f8) {
            ctx->pc = 0x2E5744u;
            goto label_2e5744;
        }
    }
    ctx->pc = 0x2E5700u;
label_2e5700:
    // 0x2e5700: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2e5700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5704: 0x0  nop
    ctx->pc = 0x2e5704u;
    // NOP
    // 0x2e5708: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x2E5708u;
    {
        const bool branch_taken_0x2e5708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5708u;
        // 0x2e570c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5708) {
            ctx->pc = 0x2E588Cu;
            goto label_2e588c;
        }
    }
    ctx->pc = 0x2E5710u;
    // 0x2e5710: 0xc62211d4  lwc1        $f2, 0x11D4($s1)
    ctx->pc = 0x2e5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5714: 0xc440b9d4  lwc1        $f0, -0x462C($v0)
    ctx->pc = 0x2e5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5718: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2e5718u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2e571c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2e571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2e5720: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5724: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2e5724u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2e5728: 0xe62211d4  swc1        $f2, 0x11D4($s1)
    ctx->pc = 0x2e5728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
    // 0x2e572c: 0xc443b7e0  lwc1        $f3, -0x4820($v0)
    ctx->pc = 0x2e572cu;
    { uint32_t bits = FAST_READ32(0x3FB7E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5730: 0xc4605864  lwc1        $f0, 0x5864($v1)
    ctx->pc = 0x2e5730u;
    { uint32_t bits = FAST_READ32(0x595864u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5734: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2e5734u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2e5738: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e5738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e573c: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x2e573cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2e5740: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e5744:
    // 0x2e5744: 0x0  nop
    ctx->pc = 0x2e5744u;
    // NOP
    // 0x2e5748: 0x45030050  bc1tl       . + 4 + (0x50 << 2)
    ctx->pc = 0x2E5748u;
    {
        const bool branch_taken_0x2e5748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5748) {
            ctx->pc = 0x2E574Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5748u;
            // 0x2e574c: 0xe62011d4  swc1        $f0, 0x11D4($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E588Cu;
            goto label_2e588c;
        }
    }
    ctx->pc = 0x2E5750u;
    // 0x2e5750: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2E5750u;
    {
        const bool branch_taken_0x2e5750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5750u;
        // 0x2e5754: 0xc62012e8  lwc1        $f0, 0x12E8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5750) {
            ctx->pc = 0x2E5890u;
            goto label_2e5890;
        }
    }
    ctx->pc = 0x2E5758u;
label_2e5758:
    // 0x2e5758: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e575c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e5760: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E5760u;
    {
        const bool branch_taken_0x2e5760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5760) {
            ctx->pc = 0x2E5764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5760u;
            // 0x2e5764: 0xc62012e8  lwc1        $f0, 0x12E8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5890u;
            goto label_2e5890;
        }
    }
    ctx->pc = 0x2E5768u;
    // 0x2e5768: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2e5768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2e576c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e5770: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e5770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2e5774: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e5774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e5778: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E5778u;
    {
        const bool branch_taken_0x2e5778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5778u;
        // 0x2e577c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5778) {
            ctx->pc = 0x2E57B4u;
            goto label_2e57b4;
        }
    }
    ctx->pc = 0x2E5780u;
    // 0x2e5780: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e5784: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5784u;
    {
        const bool branch_taken_0x2e5784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5784) {
            ctx->pc = 0x2E5788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5784u;
            // 0x2e5788: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57B8u;
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E578Cu;
    // 0x2e578c: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E578Cu;
    SET_GPR_U32(ctx, 31, 0x2E5794u);
    ctx->pc = 0x2E5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E578Cu;
    // 0x2e5790: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E578Cu, 0x2E5794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5794u;
label_2e5794:
    // 0x2e5794: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5794u;
    {
        const bool branch_taken_0x2e5794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5794) {
            ctx->pc = 0x2E5798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5794u;
            // 0x2e5798: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57B8u;
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E579Cu;
    // 0x2e579c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e57a0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e57a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E57A4u;
    {
        const bool branch_taken_0x2e57a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57A4u;
        // 0x2e57a8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57a4) {
            ctx->pc = 0x2E57B4u;
            goto label_2e57b4;
        }
    }
    ctx->pc = 0x2E57ACu;
    // 0x2e57ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E57ACu;
    {
        const bool branch_taken_0x2e57ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e57ac) {
            ctx->pc = 0x2E57B8u;
            goto label_2e57b8;
        }
    }
    ctx->pc = 0x2E57B4u;
label_2e57b4:
    // 0x2e57b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e57b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e57b8:
    // 0x2e57b8: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E57B8u;
    {
        const bool branch_taken_0x2e57b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57b8) {
            ctx->pc = 0x2E57BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57B8u;
            // 0x2e57bc: 0xc6241264  lwc1        $f4, 0x1264($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E57D8u;
            goto label_2e57d8;
        }
    }
    ctx->pc = 0x2E57C0u;
    // 0x2e57c0: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e57c4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e57c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e57c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e57cc: 0x54430030  bnel        $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E57CCu;
    {
        const bool branch_taken_0x2e57cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e57cc) {
            ctx->pc = 0x2E57D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57CCu;
            // 0x2e57d0: 0xc62012e8  lwc1        $f0, 0x12E8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5890u;
            goto label_2e5890;
        }
    }
    ctx->pc = 0x2E57D4u;
    // 0x2e57d4: 0xc6241264  lwc1        $f4, 0x1264($s1)
    ctx->pc = 0x2e57d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e57d8:
    // 0x2e57d8: 0xc62311d4  lwc1        $f3, 0x11D4($s1)
    ctx->pc = 0x2e57d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e57dc: 0x3c013bb6  lui         $at, 0x3BB6
    ctx->pc = 0x2e57dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15286 << 16));
    // 0x2e57e0: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x2e57e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x2e57e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e57e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e57e8: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x2e57e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2e57ec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2e57ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2e57f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2e57f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2e57f4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e57f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e57f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e57f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e57fc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2e57fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5800: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x2e5800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5804: 0x0  nop
    ctx->pc = 0x2e5804u;
    // NOP
    // 0x2e5808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5808u;
    {
        const bool branch_taken_0x2e5808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5808) {
            ctx->pc = 0x2E580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5808u;
            // 0x2e580c: 0x46002886  mov.s       $f2, $f5 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5810u;
            goto label_2e5810;
        }
    }
    ctx->pc = 0x2E5810u;
label_2e5810:
    // 0x2e5810: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2e5810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5814: 0x0  nop
    ctx->pc = 0x2e5814u;
    // NOP
    // 0x2e5818: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2E5818u;
    {
        const bool branch_taken_0x2e5818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5818u;
        // 0x2e581c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5818) {
            ctx->pc = 0x2E5854u;
            goto label_2e5854;
        }
    }
    ctx->pc = 0x2E5820u;
    // 0x2e5820: 0xc6201268  lwc1        $f0, 0x1268($s1)
    ctx->pc = 0x2e5820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5824: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2e5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5828: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e582c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e582cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5830: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2e5830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2e5834: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2e5834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5838: 0x0  nop
    ctx->pc = 0x2e5838u;
    // NOP
    // 0x2e583c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E583Cu;
    {
        const bool branch_taken_0x2e583c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E583Cu;
        // 0x2e5840: 0xe62011d4  swc1        $f0, 0x11D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e583c) {
            ctx->pc = 0x2E588Cu;
            goto label_2e588c;
        }
    }
    ctx->pc = 0x2E5844u;
    // 0x2e5844: 0xc0b9558  jal         func_2E5560
    ctx->pc = 0x2E5844u;
    SET_GPR_U32(ctx, 31, 0x2E584Cu);
    ctx->pc = 0x2E5848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5844u;
    // 0x2e5848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5560u, 0x2E5844u, 0x2E584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E584Cu;
label_2e584c:
    // 0x2e584c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E584Cu;
    {
        const bool branch_taken_0x2e584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E584Cu;
        // 0x2e5850: 0xc62012e8  lwc1        $f0, 0x12E8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e584c) {
            ctx->pc = 0x2E5890u;
            goto label_2e5890;
        }
    }
    ctx->pc = 0x2E5854u;
label_2e5854:
    // 0x2e5854: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x2e5854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5858: 0x0  nop
    ctx->pc = 0x2e5858u;
    // NOP
    // 0x2e585c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2E585Cu;
    {
        const bool branch_taken_0x2e585c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E585Cu;
        // 0x2e5860: 0xc4412b30  lwc1        $f1, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e585c) {
            ctx->pc = 0x2E588Cu;
            goto label_2e588c;
        }
    }
    ctx->pc = 0x2E5864u;
    // 0x2e5864: 0xc6201268  lwc1        $f0, 0x1268($s1)
    ctx->pc = 0x2e5864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5868: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e586c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e586cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5870: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2e5870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2e5874: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2e5874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5878: 0x0  nop
    ctx->pc = 0x2e5878u;
    // NOP
    // 0x2e587c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E587Cu;
    {
        const bool branch_taken_0x2e587c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E587Cu;
        // 0x2e5880: 0xe62011d4  swc1        $f0, 0x11D4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e587c) {
            ctx->pc = 0x2E588Cu;
            goto label_2e588c;
        }
    }
    ctx->pc = 0x2E5884u;
    // 0x2e5884: 0xc0b9558  jal         func_2E5560
    ctx->pc = 0x2E5884u;
    SET_GPR_U32(ctx, 31, 0x2E588Cu);
    ctx->pc = 0x2E5888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5884u;
    // 0x2e5888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5560u, 0x2E5884u, 0x2E588Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E588Cu;
label_2e588c:
    // 0x2e588c: 0xc62012e8  lwc1        $f0, 0x12E8($s1)
    ctx->pc = 0x2e588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5890:
    // 0x2e5890: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2e5890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e5894: 0x0  nop
    ctx->pc = 0x2e5894u;
    // NOP
    // 0x2e5898: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2e5898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e589c: 0x0  nop
    ctx->pc = 0x2e589cu;
    // NOP
    // 0x2e58a0: 0x4500009f  bc1f        . + 4 + (0x9F << 2)
    ctx->pc = 0x2E58A0u;
    {
        const bool branch_taken_0x2e58a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e58a0) {
            ctx->pc = 0x2E5B20u;
            goto label_2e5b20;
        }
    }
    ctx->pc = 0x2E58A8u;
    // 0x2e58a8: 0xc62c12e4  lwc1        $f12, 0x12E4($s1)
    ctx->pc = 0x2e58a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e58ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e58acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e58b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e58b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e58b4: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2e58b4u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2e58b8: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2e58b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2e58bc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2e58bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2e58c0: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2e58c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2e58c4: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E58C4u;
    SET_GPR_U32(ctx, 31, 0x2E58CCu);
    ctx->pc = 0x2E58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58C4u;
    // 0x2e58c8: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E58C4u, 0x2E58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58CCu;
label_2e58cc:
    // 0x2e58cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e58ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e58d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e58d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e58d4: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E58D4u;
    SET_GPR_U32(ctx, 31, 0x2E58DCu);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E58D4u, 0x2E58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58DCu;
label_2e58dc:
    // 0x2e58dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e58dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e58e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e58e4: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2e58e4u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e58e8: 0xc62012e8  lwc1        $f0, 0x12E8($s1)
    ctx->pc = 0x2e58e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e58ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e58ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e58f0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2e58f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58f4: 0x0  nop
    ctx->pc = 0x2e58f4u;
    // NOP
    // 0x2e58f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E58F8u;
    {
        const bool branch_taken_0x2e58f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58F8u;
        // 0x2e58fc: 0xe62012e8  swc1        $f0, 0x12E8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4840), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58f8) {
            ctx->pc = 0x2E5904u;
            goto label_2e5904;
        }
    }
    ctx->pc = 0x2E5900u;
    // 0x2e5900: 0xe63512e8  swc1        $f21, 0x12E8($s1)
    ctx->pc = 0x2e5900u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4840), bits); }
label_2e5904:
    // 0x2e5904: 0xc62c12e8  lwc1        $f12, 0x12E8($s1)
    ctx->pc = 0x2e5904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5908: 0xc62012e4  lwc1        $f0, 0x12E4($s1)
    ctx->pc = 0x2e5908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e590c: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2e590cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x2e5910: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2e5910u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2e5914: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E5914u;
    SET_GPR_U32(ctx, 31, 0x2E591Cu);
    ctx->pc = 0x2E5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5914u;
    // 0x2e5918: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E5914u, 0x2E591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E591Cu;
label_2e591c:
    // 0x2e591c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e591cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5920: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5924: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E5924u;
    SET_GPR_U32(ctx, 31, 0x2E592Cu);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E5924u, 0x2E592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E592Cu;
label_2e592c:
    // 0x2e592c: 0x922211c0  lbu         $v0, 0x11C0($s1)
    ctx->pc = 0x2e592cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5930: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2e5930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2e5934: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E5934u;
    {
        const bool branch_taken_0x2e5934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5934u;
        // 0x2e5938: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5934) {
            ctx->pc = 0x2E5A64u;
            goto label_2e5a64;
        }
    }
    ctx->pc = 0x2E593Cu;
    // 0x2e593c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e593cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e5940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e5940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5944: 0x0  nop
    ctx->pc = 0x2e5944u;
    // NOP
    // 0x2e5948: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x2e5948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e594c: 0x0  nop
    ctx->pc = 0x2e594cu;
    // NOP
    // 0x2e5950: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x2E5950u;
    {
        const bool branch_taken_0x2e5950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5950) {
            ctx->pc = 0x2E5954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5950u;
            // 0x2e5954: 0x4616b300  add.s       $f12, $f22, $f22 (Delay Slot)
            ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5A34u;
            goto label_2e5a34;
        }
    }
    ctx->pc = 0x2E5958u;
    // 0x2e5958: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2e5958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e595c: 0x0  nop
    ctx->pc = 0x2e595cu;
    // NOP
    // 0x2e5960: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x2E5960u;
    {
        const bool branch_taken_0x2e5960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5960) {
            ctx->pc = 0x2E5964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5960u;
            // 0x2e5964: 0x4617b601  sub.s       $f24, $f22, $f23 (Delay Slot)
            ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59C8u;
            goto label_2e59c8;
        }
    }
    ctx->pc = 0x2E5968u;
    // 0x2e5968: 0x52600015  beql        $s3, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5968u;
    {
        const bool branch_taken_0x2e5968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5968) {
            ctx->pc = 0x2E596Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5968u;
            // 0x2e596c: 0x4600b841  sub.s       $f1, $f23, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59C0u;
            goto label_2e59c0;
        }
    }
    ctx->pc = 0x2E5970u;
    // 0x2e5970: 0xc6ac0090  lwc1        $f12, 0x90($s5)
    ctx->pc = 0x2e5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5974: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x2e5974u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5978: 0x0  nop
    ctx->pc = 0x2e5978u;
    // NOP
    // 0x2e597c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2E597Cu;
    {
        const bool branch_taken_0x2e597c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e597c) {
            ctx->pc = 0x2E5980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E597Cu;
            // 0x2e5980: 0x4600b841  sub.s       $f1, $f23, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59C0u;
            goto label_2e59c0;
        }
    }
    ctx->pc = 0x2E5984u;
    // 0x2e5984: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x2E5984u;
    SET_GPR_U32(ctx, 31, 0x2E598Cu);
    ctx->pc = 0x2E5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5984u;
    // 0x2e5988: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x2E5984u, 0x2E598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E598Cu;
label_2e598c:
    // 0x2e598c: 0xc62112ec  lwc1        $f1, 0x12EC($s1)
    ctx->pc = 0x2e598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5990: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e5990u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e5994: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e5994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5998: 0xe62112ec  swc1        $f1, 0x12EC($s1)
    ctx->pc = 0x2e5998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4844), bits); }
    // 0x2e599c: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x2E599Cu;
    SET_GPR_U32(ctx, 31, 0x2E59A4u);
    ctx->pc = 0x2E59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E599Cu;
    // 0x2e59a0: 0xc6ac0090  lwc1        $f12, 0x90($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x2E599Cu, 0x2E59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59A4u;
label_2e59a4:
    // 0x2e59a4: 0xc62112f0  lwc1        $f1, 0x12F0($s1)
    ctx->pc = 0x2e59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e59a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e59a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e59ac: 0xe62112f0  swc1        $f1, 0x12F0($s1)
    ctx->pc = 0x2e59acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4848), bits); }
    // 0x2e59b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e59b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e59b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e59b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e59b8: 0x0  nop
    ctx->pc = 0x2e59b8u;
    // NOP
    // 0x2e59bc: 0x4600b841  sub.s       $f1, $f23, $f0
    ctx->pc = 0x2e59bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_2e59c0:
    // 0x2e59c0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2e59c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2e59c4: 0x46010601  sub.s       $f24, $f0, $f1
    ctx->pc = 0x2e59c4u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e59c8:
    // 0x2e59c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e59c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e59cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e59ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e59d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e59d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e59d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e59d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e59d8: 0x4614b301  sub.s       $f12, $f22, $f20
    ctx->pc = 0x2e59d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x2e59dc: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2e59dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2e59e0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2e59e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2e59e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2e59e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2e59e8: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x2e59e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
    // 0x2e59ec: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E59ECu;
    SET_GPR_U32(ctx, 31, 0x2E59F4u);
    ctx->pc = 0x2E59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E59ECu;
    // 0x2e59f0: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E59ECu, 0x2E59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E59F4u;
label_2e59f4:
    // 0x2e59f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e59f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e59f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e59f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e59fc: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E59FCu;
    SET_GPR_U32(ctx, 31, 0x2E5A04u);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E59FCu, 0x2E5A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A04u;
label_2e5a04:
    // 0x2e5a04: 0x4614bd01  sub.s       $f20, $f23, $f20
    ctx->pc = 0x2e5a04u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
    // 0x2e5a08: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e5a08u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5a0c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2e5a0cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2e5a10: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x2e5a10u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2e5a14: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E5A14u;
    SET_GPR_U32(ctx, 31, 0x2E5A1Cu);
    ctx->pc = 0x2E5A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A14u;
    // 0x2e5a18: 0x4616ab02  mul.s       $f12, $f21, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E5A14u, 0x2E5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A1Cu;
label_2e5a1c:
    // 0x2e5a1c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5a1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5a20: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5a24: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E5A24u;
    SET_GPR_U32(ctx, 31, 0x2E5A2Cu);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E5A24u, 0x2E5A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A2Cu;
label_2e5a2c:
    // 0x2e5a2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E5A2Cu;
    {
        const bool branch_taken_0x2e5a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A2Cu;
        // 0x2e5a30: 0x4600b881  sub.s       $f2, $f23, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a2c) {
            ctx->pc = 0x2E5AA8u;
            goto label_2e5aa8;
        }
    }
    ctx->pc = 0x2E5A34u;
label_2e5a34:
    // 0x2e5a34: 0x4616be01  sub.s       $f24, $f23, $f22
    ctx->pc = 0x2e5a34u;
    ctx->f[24] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x2e5a38: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x2e5a38u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x2e5a3c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E5A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A44u);
    ctx->pc = 0x2E5A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A3Cu;
    // 0x2e5a40: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E5A3Cu, 0x2E5A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A44u;
label_2e5a44:
    // 0x2e5a44: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5a44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5a48: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5a4c: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E5A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A54u);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E5A4Cu, 0x2E5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A54u;
label_2e5a54:
    // 0x2e5a54: 0x4617bb00  add.s       $f12, $f23, $f23
    ctx->pc = 0x2e5a54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x2e5a58: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e5a58u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5a5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E5A5Cu;
    {
        const bool branch_taken_0x2e5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A5Cu;
        // 0x2e5a60: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a5c) {
            ctx->pc = 0x2E5A8Cu;
            goto label_2e5a8c;
        }
    }
    ctx->pc = 0x2E5A64u;
label_2e5a64:
    // 0x2e5a64: 0x4616a301  sub.s       $f12, $f20, $f22
    ctx->pc = 0x2e5a64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2e5a68: 0x4616be01  sub.s       $f24, $f23, $f22
    ctx->pc = 0x2e5a68u;
    ctx->f[24] = FPU_SUB_S(ctx->f[23], ctx->f[22]);
    // 0x2e5a6c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E5A6Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A74u);
    ctx->pc = 0x2E5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A6Cu;
    // 0x2e5a70: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E5A6Cu, 0x2E5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A74u;
label_2e5a74:
    // 0x2e5a74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5a74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5a78: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5a7c: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E5A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A84u);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E5A7Cu, 0x2E5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A84u;
label_2e5a84:
    // 0x2e5a84: 0x4617a301  sub.s       $f12, $f20, $f23
    ctx->pc = 0x2e5a84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x2e5a88: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e5a88u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_2e5a8c:
    // 0x2e5a8c: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x2E5A8Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A94u);
    ctx->pc = 0x2E5A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A8Cu;
    // 0x2e5a90: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x2E5A8Cu, 0x2E5A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A94u;
label_2e5a94:
    // 0x2e5a94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5a98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2e5a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5a9c: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x2E5A9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5AA4u);
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x2E5A9Cu, 0x2E5AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AA4u;
label_2e5aa4:
    // 0x2e5aa4: 0x46170081  sub.s       $f2, $f0, $f23
    ctx->pc = 0x2e5aa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_2e5aa8:
    // 0x2e5aa8: 0xc62112e8  lwc1        $f1, 0x12E8($s1)
    ctx->pc = 0x2e5aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5ab0: 0x0  nop
    ctx->pc = 0x2e5ab0u;
    // NOP
    // 0x2e5ab4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ab8: 0x0  nop
    ctx->pc = 0x2e5ab8u;
    // NOP
    // 0x2e5abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5ABCu;
    {
        const bool branch_taken_0x2e5abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5ABCu;
        // 0x2e5ac0: 0x2403ff7f  addiu       $v1, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5abc) {
            ctx->pc = 0x2E5AD0u;
            goto label_2e5ad0;
        }
    }
    ctx->pc = 0x2E5AC4u;
    // 0x2e5ac4: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5ac8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e5acc: 0xae2211c0  sw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4544), GPR_U32(ctx, 2));
label_2e5ad0:
    // 0x2e5ad0: 0xc62112ec  lwc1        $f1, 0x12EC($s1)
    ctx->pc = 0x2e5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ad8: 0xc62011d4  lwc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2e5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5adc: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2e5adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2e5ae0: 0xc62c12f0  lwc1        $f12, 0x12F0($s1)
    ctx->pc = 0x2e5ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5ae4: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x2e5ae4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2e5ae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5aec: 0xc08bcbe  jal         func_22F2F8
    ctx->pc = 0x2E5AECu;
    SET_GPR_U32(ctx, 31, 0x2E5AF4u);
    ctx->pc = 0x2E5AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5AECu;
    // 0x2e5af0: 0xe62011d4  swc1        $f0, 0x11D4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2F8u, 0x2E5AECu, 0x2E5AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5AF4u;
label_2e5af4:
    // 0x2e5af4: 0xc62011d4  lwc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2e5af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5af8: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x2e5af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5afc: 0x0  nop
    ctx->pc = 0x2e5afcu;
    // NOP
    // 0x2e5b00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B00u;
    {
        const bool branch_taken_0x2e5b00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5b00) {
            ctx->pc = 0x2E5B10u;
            goto label_2e5b10;
        }
    }
    ctx->pc = 0x2E5B08u;
    // 0x2e5b08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5B08u;
    {
        const bool branch_taken_0x2e5b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B08u;
        // 0x2e5b0c: 0xe63b11d4  swc1        $f27, 0x11D4($s1) (Delay Slot)
        { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b08) {
            ctx->pc = 0x2E5B20u;
            goto label_2e5b20;
        }
    }
    ctx->pc = 0x2E5B10u;
label_2e5b10:
    // 0x2e5b10: 0x4600e034  c.lt.s      $f28, $f0
    ctx->pc = 0x2e5b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b14: 0x0  nop
    ctx->pc = 0x2e5b14u;
    // NOP
    // 0x2e5b18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5B18u;
    {
        const bool branch_taken_0x2e5b18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5b18) {
            ctx->pc = 0x2E5B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5B18u;
            // 0x2e5b1c: 0xe63c11d4  swc1        $f28, 0x11D4($s1) (Delay Slot)
            { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B20u;
            goto label_2e5b20;
        }
    }
    ctx->pc = 0x2E5B20u;
label_2e5b20:
    // 0x2e5b20: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2E5B20u;
    SET_GPR_U32(ctx, 31, 0x2E5B28u);
    ctx->pc = 0x2E5B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5B20u;
    // 0x2e5b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2E5B20u, 0x2E5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B28u;
label_2e5b28:
    // 0x2e5b28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5b2c: 0x0  nop
    ctx->pc = 0x2e5b2cu;
    // NOP
    // 0x2e5b30: 0x461a0834  c.lt.s      $f1, $f26
    ctx->pc = 0x2e5b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b34: 0x0  nop
    ctx->pc = 0x2e5b34u;
    // NOP
    // 0x2e5b38: 0x450001c7  bc1f        . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2E5B38u;
    {
        const bool branch_taken_0x2e5b38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B38u;
        // 0x2e5b3c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b38) {
            ctx->pc = 0x2E6258u;
            goto label_2e6258;
        }
    }
    ctx->pc = 0x2E5B40u;
    // 0x2e5b40: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2e5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
    // 0x2e5b44: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E5B44u;
    {
        const bool branch_taken_0x2e5b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b44) {
            ctx->pc = 0x2E5B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5B44u;
            // 0x2e5b48: 0x8e2211c0  lw          $v0, 0x11C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B88u;
            goto label_2e5b88;
        }
    }
    ctx->pc = 0x2E5B4Cu;
    // 0x2e5b4c: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x2e5b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5b50: 0xc6340528  lwc1        $f20, 0x528($s1)
    ctx->pc = 0x2e5b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5b54: 0x12c0019f  beqz        $s6, . + 4 + (0x19F << 2)
    ctx->pc = 0x2E5B54u;
    {
        const bool branch_taken_0x2e5b54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B54u;
        // 0x2e5b58: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b54) {
            ctx->pc = 0x2E61D4u;
            goto label_2e61d4;
        }
    }
    ctx->pc = 0x2E5B5Cu;
    // 0x2e5b5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e5b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e5b64: 0xc441b9cc  lwc1        $f1, -0x4634($v0)
    ctx->pc = 0x2e5b64u;
    { uint32_t bits = FAST_READ32(0x3FB9CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b68: 0xc460b9d0  lwc1        $f0, -0x4630($v1)
    ctx->pc = 0x2e5b68u;
    { uint32_t bits = FAST_READ32(0x3FB9D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5b6c: 0xc62212e0  lwc1        $f2, 0x12E0($s1)
    ctx->pc = 0x2e5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5b70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e5b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e5b74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e5b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e5b78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2e5b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5b7c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2e5b7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2e5b80: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x2E5B80u;
    {
        const bool branch_taken_0x2e5b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B80u;
        // 0x2e5b84: 0x4601b582  mul.s       $f22, $f22, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b80) {
            ctx->pc = 0x2E61D0u;
            goto label_2e61d0;
        }
    }
    ctx->pc = 0x2E5B88u;
label_2e5b88:
    // 0x2e5b88: 0x26921448  addiu       $s2, $s4, 0x1448
    ctx->pc = 0x2e5b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 5192));
    // 0x2e5b8c: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x2e5b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b94: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x2e5b94u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x2e5b98: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2e5b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2e5b9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5B9Cu;
    {
        const bool branch_taken_0x2e5b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B9Cu;
        // 0x2e5ba0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b9c) {
            ctx->pc = 0x2E5BBCu;
            goto label_2e5bbc;
        }
    }
    ctx->pc = 0x2E5BA4u;
    // 0x2e5ba4: 0x8e220604  lw          $v0, 0x604($s1)
    ctx->pc = 0x2e5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x2e5ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5BA8u;
    {
        const bool branch_taken_0x2e5ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BA8u;
        // 0x2e5bac: 0x26831470  addiu       $v1, $s4, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 5232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ba8) {
            ctx->pc = 0x2E5BBCu;
            goto label_2e5bbc;
        }
    }
    ctx->pc = 0x2E5BB0u;
    // 0x2e5bb0: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2e5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x2e5bb4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e5bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e5bb8: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2e5bb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_2e5bbc:
    // 0x2e5bbc: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5BBCu;
    {
        const bool branch_taken_0x2e5bbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BBCu;
        // 0x2e5bc0: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bbc) {
            ctx->pc = 0x2E5BE4u;
            goto label_2e5be4;
        }
    }
    ctx->pc = 0x2E5BC4u;
    // 0x2e5bc4: 0xc68014f8  lwc1        $f0, 0x14F8($s4)
    ctx->pc = 0x2e5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5bc8: 0xc68114fc  lwc1        $f1, 0x14FC($s4)
    ctx->pc = 0x2e5bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5bcc: 0xc62212e0  lwc1        $f2, 0x12E0($s1)
    ctx->pc = 0x2e5bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5bd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e5bd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5bd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e5bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e5bd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5bdc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E5BDCu;
    {
        const bool branch_taken_0x2e5bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BDCu;
        // 0x2e5be0: 0x4600d542  mul.s       $f21, $f26, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bdc) {
            ctx->pc = 0x2E5C3Cu;
            goto label_2e5c3c;
        }
    }
    ctx->pc = 0x2E5BE4u;
label_2e5be4:
    // 0x2e5be4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E5BE4u;
    {
        const bool branch_taken_0x2e5be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5be4) {
            ctx->pc = 0x2E5C1Cu;
            goto label_2e5c1c;
        }
    }
    ctx->pc = 0x2E5BECu;
    // 0x2e5bec: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2e5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
    // 0x2e5bf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5BF0u;
    {
        const bool branch_taken_0x2e5bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BF0u;
        // 0x2e5bf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bf0) {
            ctx->pc = 0x2E5C08u;
            goto label_2e5c08;
        }
    }
    ctx->pc = 0x2E5BF8u;
    // 0x2e5bf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e5bfc: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x2e5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x2e5c00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e5c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e5c04: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2e5c04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e5c08:
    // 0x2e5c08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C08u;
    {
        const bool branch_taken_0x2e5c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C08u;
        // 0x2e5c0c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c08) {
            ctx->pc = 0x2E5C1Cu;
            goto label_2e5c1c;
        }
    }
    ctx->pc = 0x2E5C10u;
    // 0x2e5c10: 0x9043b837  lbu         $v1, -0x47C9($v0)
    ctx->pc = 0x2e5c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948919)));
    // 0x2e5c14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5C14u;
    {
        const bool branch_taken_0x2e5c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c14) {
            ctx->pc = 0x2E5C2Cu;
            goto label_2e5c2c;
        }
    }
    ctx->pc = 0x2E5C1Cu;
label_2e5c1c:
    // 0x2e5c1c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e5c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e5c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e5c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5C24u;
    {
        const bool branch_taken_0x2e5c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C24u;
        // 0x2e5c28: 0x4600d542  mul.s       $f21, $f26, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c24) {
            ctx->pc = 0x2E5C3Cu;
            goto label_2e5c3c;
        }
    }
    ctx->pc = 0x2E5C2Cu;
label_2e5c2c:
    // 0x2e5c2c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e5c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e5c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e5c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c34: 0x0  nop
    ctx->pc = 0x2e5c34u;
    // NOP
    // 0x2e5c38: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x2e5c38u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e5c3c:
    // 0x2e5c3c: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e5c40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e5c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5c44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e5c44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c48: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e5c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c50: 0x0  nop
    ctx->pc = 0x2e5c50u;
    // NOP
    // 0x2e5c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5c58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C58u;
    {
        const bool branch_taken_0x2e5c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C58u;
        // 0x2e5c5c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c58) {
            ctx->pc = 0x2E5C6Cu;
            goto label_2e5c6c;
        }
    }
    ctx->pc = 0x2E5C60u;
    // 0x2e5c60: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2e5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E5C64u;
    {
        const bool branch_taken_0x2e5c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C64u;
        // 0x2e5c68: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c64) {
            ctx->pc = 0x2E5CA0u;
            goto label_2e5ca0;
        }
    }
    ctx->pc = 0x2E5C6Cu;
label_2e5c6c:
    // 0x2e5c6c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e5c70: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5C70u;
    {
        const bool branch_taken_0x2e5c70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C70u;
        // 0x2e5c74: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c70) {
            ctx->pc = 0x2E5C80u;
            goto label_2e5c80;
        }
    }
    ctx->pc = 0x2E5C78u;
    // 0x2e5c78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5C78u;
    {
        const bool branch_taken_0x2e5c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C78u;
        // 0x2e5c7c: 0xc6540024  lwc1        $f20, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c78) {
            ctx->pc = 0x2E5CA0u;
            goto label_2e5ca0;
        }
    }
    ctx->pc = 0x2E5C80u;
label_2e5c80:
    // 0x2e5c80: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2e5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2e5c84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e5c88: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e5c8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e5c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5c90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e5c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e5c98: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e5c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e5c9c: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2e5c9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e5ca0:
    // 0x2e5ca0: 0x52c0000a  beql        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E5CA0u;
    {
        const bool branch_taken_0x2e5ca0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ca0) {
            ctx->pc = 0x2E5CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5CA0u;
            // 0x2e5ca4: 0x8e22036c  lw          $v0, 0x36C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5CCCu;
            goto label_2e5ccc;
        }
    }
    ctx->pc = 0x2E5CA8u;
    // 0x2e5ca8: 0xc68014f0  lwc1        $f0, 0x14F0($s4)
    ctx->pc = 0x2e5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5cac: 0xc68114f4  lwc1        $f1, 0x14F4($s4)
    ctx->pc = 0x2e5cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5cb0: 0xc62212e0  lwc1        $f2, 0x12E0($s1)
    ctx->pc = 0x2e5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5cb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e5cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5cb8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2e5cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e5cbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5cc0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e5cc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e5cc4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E5CC4u;
    {
        const bool branch_taken_0x2e5cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CC4u;
        // 0x2e5cc8: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cc4) {
            ctx->pc = 0x2E5D54u;
            goto label_2e5d54;
        }
    }
    ctx->pc = 0x2E5CCCu;
label_2e5ccc:
    // 0x2e5ccc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e5cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e5cd0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5CD0u;
    {
        const bool branch_taken_0x2e5cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CD0u;
        // 0x2e5cd4: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cd0) {
            ctx->pc = 0x2E5CE8u;
            goto label_2e5ce8;
        }
    }
    ctx->pc = 0x2E5CD8u;
    // 0x2e5cd8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5cdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e5ce0: 0x5443001d  bnel        $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E5CE0u;
    {
        const bool branch_taken_0x2e5ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5ce0) {
            ctx->pc = 0x2E5CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5CE0u;
            // 0x2e5ce4: 0xc6200528  lwc1        $f0, 0x528($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D58u;
            goto label_2e5d58;
        }
    }
    ctx->pc = 0x2E5CE8u;
label_2e5ce8:
    // 0x2e5ce8: 0xc0b911e  jal         func_2E4478
    ctx->pc = 0x2E5CE8u;
    SET_GPR_U32(ctx, 31, 0x2E5CF0u);
    ctx->pc = 0x2E5CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5CE8u;
    // 0x2e5cec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4478u, 0x2E5CE8u, 0x2E5CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CF0u;
label_2e5cf0:
    // 0x2e5cf0: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2e5cf4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e5cf8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2e5cfc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e5cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e5d00: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E5D00u;
    {
        const bool branch_taken_0x2e5d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D00u;
        // 0x2e5d04: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d00) {
            ctx->pc = 0x2E5D3Cu;
            goto label_2e5d3c;
        }
    }
    ctx->pc = 0x2E5D08u;
    // 0x2e5d08: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e5d0c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5D0Cu;
    {
        const bool branch_taken_0x2e5d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5d0c) {
            ctx->pc = 0x2E5D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5D0Cu;
            // 0x2e5d10: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D40u;
            goto label_2e5d40;
        }
    }
    ctx->pc = 0x2E5D14u;
    // 0x2e5d14: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E5D14u;
    SET_GPR_U32(ctx, 31, 0x2E5D1Cu);
    ctx->pc = 0x2E5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D14u;
    // 0x2e5d18: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E5D14u, 0x2E5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D1Cu;
label_2e5d1c:
    // 0x2e5d1c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5D1Cu;
    {
        const bool branch_taken_0x2e5d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d1c) {
            ctx->pc = 0x2E5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5D1Cu;
            // 0x2e5d20: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D40u;
            goto label_2e5d40;
        }
    }
    ctx->pc = 0x2E5D24u;
    // 0x2e5d24: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e5d28: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e5d2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D2Cu;
    {
        const bool branch_taken_0x2e5d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D2Cu;
        // 0x2e5d30: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d2c) {
            ctx->pc = 0x2E5D3Cu;
            goto label_2e5d3c;
        }
    }
    ctx->pc = 0x2E5D34u;
    // 0x2e5d34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5D34u;
    {
        const bool branch_taken_0x2e5d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5d34) {
            ctx->pc = 0x2E5D40u;
            goto label_2e5d40;
        }
    }
    ctx->pc = 0x2E5D3Cu;
label_2e5d3c:
    // 0x2e5d3c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2e5d3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5d40:
    // 0x2e5d40: 0x52a00002  beql        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5D40u;
    {
        const bool branch_taken_0x2e5d40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5d40) {
            ctx->pc = 0x2E5D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5D40u;
            // 0x2e5d44: 0xc68014dc  lwc1        $f0, 0x14DC($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D4Cu;
            goto label_2e5d4c;
        }
    }
    ctx->pc = 0x2E5D48u;
    // 0x2e5d48: 0xc68014e0  lwc1        $f0, 0x14E0($s4)
    ctx->pc = 0x2e5d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5d4c:
    // 0x2e5d4c: 0xc6230524  lwc1        $f3, 0x524($s1)
    ctx->pc = 0x2e5d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5d50: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e5d50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e5d54:
    // 0x2e5d54: 0xc6200528  lwc1        $f0, 0x528($s1)
    ctx->pc = 0x2e5d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5d58:
    // 0x2e5d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d5c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2e5d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e5d60: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x2E5D60u;
    SET_GPR_U32(ctx, 31, 0x2E5D68u);
    ctx->pc = 0x2E5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5D60u;
    // 0x2e5d64: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x2E5D60u, 0x2E5D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D68u;
label_2e5d68:
    // 0x2e5d68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5d6c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5d70: 0x0  nop
    ctx->pc = 0x2e5d70u;
    // NOP
    // 0x2e5d74: 0x0  nop
    ctx->pc = 0x2e5d74u;
    // NOP
    // 0x2e5d78: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2e5d78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e5d7c: 0x0  nop
    ctx->pc = 0x2e5d7cu;
    // NOP
    // 0x2e5d80: 0x0  nop
    ctx->pc = 0x2e5d80u;
    // NOP
    // 0x2e5d84: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e5d84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e5d88: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2e5d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e5d8c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e5d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e5d90: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2e5d90u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2e5d94: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2e5d94u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2e5d98: 0xc68314a0  lwc1        $f3, 0x14A0($s4)
    ctx->pc = 0x2e5d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5d9c: 0x46141582  mul.s       $f22, $f2, $f20
    ctx->pc = 0x2e5d9cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2e5da0: 0x16c00044  bnez        $s6, . + 4 + (0x44 << 2)
    ctx->pc = 0x2E5DA0u;
    {
        const bool branch_taken_0x2e5da0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DA0u;
        // 0x2e5da4: 0x46011842  mul.s       $f1, $f3, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5da0) {
            ctx->pc = 0x2E5EB4u;
            goto label_2e5eb4;
        }
    }
    ctx->pc = 0x2E5DA8u;
    // 0x2e5da8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2e5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e5dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5db0: 0x0  nop
    ctx->pc = 0x2e5db0u;
    // NOP
    // 0x2e5db4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5db4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5db8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2e5db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2e5dbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5dc0: 0x0  nop
    ctx->pc = 0x2e5dc0u;
    // NOP
    // 0x2e5dc4: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2E5DC4u;
    {
        const bool branch_taken_0x2e5dc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DC4u;
        // 0x2e5dc8: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dc4) {
            ctx->pc = 0x2E5EB4u;
            goto label_2e5eb4;
        }
    }
    ctx->pc = 0x2E5DCCu;
    // 0x2e5dcc: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e5dd0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e5dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e5dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5dd8: 0x0  nop
    ctx->pc = 0x2e5dd8u;
    // NOP
    // 0x2e5ddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5de0: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x2e5de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e5de4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5DE4u;
    {
        const bool branch_taken_0x2e5de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DE4u;
        // 0x2e5de8: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5de4) {
            ctx->pc = 0x2E5DF8u;
            goto label_2e5df8;
        }
    }
    ctx->pc = 0x2E5DECu;
    // 0x2e5dec: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2e5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5df0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E5DF0u;
    {
        const bool branch_taken_0x2e5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DF0u;
        // 0x2e5df4: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5df0) {
            ctx->pc = 0x2E5E2Cu;
            goto label_2e5e2c;
        }
    }
    ctx->pc = 0x2E5DF8u;
label_2e5df8:
    // 0x2e5df8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e5dfc: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5DFCu;
    {
        const bool branch_taken_0x2e5dfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DFCu;
        // 0x2e5e00: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dfc) {
            ctx->pc = 0x2E5E0Cu;
            goto label_2e5e0c;
        }
    }
    ctx->pc = 0x2E5E04u;
    // 0x2e5e04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5E04u;
    {
        const bool branch_taken_0x2e5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E04u;
        // 0x2e5e08: 0xc6540024  lwc1        $f20, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e04) {
            ctx->pc = 0x2E5E2Cu;
            goto label_2e5e2c;
        }
    }
    ctx->pc = 0x2E5E0Cu;
label_2e5e0c:
    // 0x2e5e0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e5e10: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e5e14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2e5e18: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2e5e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2e5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5e20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e5e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e5e24: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2e5e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e5e28: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2e5e28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e5e2c:
    // 0x2e5e2c: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2e5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x2e5e30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e5e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e5e34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5E34u;
    {
        const bool branch_taken_0x2e5e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E34u;
        // 0x2e5e38: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e34) {
            ctx->pc = 0x2E5E4Cu;
            goto label_2e5e4c;
        }
    }
    ctx->pc = 0x2E5E3Cu;
    // 0x2e5e3c: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x2e5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5e40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e5e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e5e44: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E5E44u;
    {
        const bool branch_taken_0x2e5e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E44u;
        // 0x2e5e48: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e44) {
            ctx->pc = 0x2E5EB8u;
            goto label_2e5eb8;
        }
    }
    ctx->pc = 0x2E5E4Cu;
label_2e5e4c:
    // 0x2e5e4c: 0xc0b911e  jal         func_2E4478
    ctx->pc = 0x2E5E4Cu;
    SET_GPR_U32(ctx, 31, 0x2E5E54u);
    ctx->pc = 0x2E5E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E4Cu;
    // 0x2e5e50: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4478u, 0x2E5E4Cu, 0x2E5E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E54u;
label_2e5e54:
    // 0x2e5e54: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2e5e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2e5e58: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e5e5c: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2e5e60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e5e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e5e64: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E5E64u;
    {
        const bool branch_taken_0x2e5e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E64u;
        // 0x2e5e68: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e64) {
            ctx->pc = 0x2E5EA0u;
            goto label_2e5ea0;
        }
    }
    ctx->pc = 0x2E5E6Cu;
    // 0x2e5e6c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e5e70: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5E70u;
    {
        const bool branch_taken_0x2e5e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5e70) {
            ctx->pc = 0x2E5E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5E70u;
            // 0x2e5e74: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5EA4u;
            goto label_2e5ea4;
        }
    }
    ctx->pc = 0x2E5E78u;
    // 0x2e5e78: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E5E78u;
    SET_GPR_U32(ctx, 31, 0x2E5E80u);
    ctx->pc = 0x2E5E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E78u;
    // 0x2e5e7c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E5E78u, 0x2E5E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E80u;
label_2e5e80:
    // 0x2e5e80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5E80u;
    {
        const bool branch_taken_0x2e5e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e80) {
            ctx->pc = 0x2E5E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5E80u;
            // 0x2e5e84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5EA4u;
            goto label_2e5ea4;
        }
    }
    ctx->pc = 0x2E5E88u;
    // 0x2e5e88: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e5e8c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e5e90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5E90u;
    {
        const bool branch_taken_0x2e5e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E90u;
        // 0x2e5e94: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e90) {
            ctx->pc = 0x2E5EA0u;
            goto label_2e5ea0;
        }
    }
    ctx->pc = 0x2E5E98u;
    // 0x2e5e98: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5E98u;
    {
        const bool branch_taken_0x2e5e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5e98) {
            ctx->pc = 0x2E5EA4u;
            goto label_2e5ea4;
        }
    }
    ctx->pc = 0x2E5EA0u;
label_2e5ea0:
    // 0x2e5ea0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e5ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5ea4:
    // 0x2e5ea4: 0x52400002  beql        $s2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5EA4u;
    {
        const bool branch_taken_0x2e5ea4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ea4) {
            ctx->pc = 0x2E5EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EA4u;
            // 0x2e5ea8: 0xc68014dc  lwc1        $f0, 0x14DC($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5EB0u;
            goto label_2e5eb0;
        }
    }
    ctx->pc = 0x2E5EACu;
    // 0x2e5eac: 0xc68014e0  lwc1        $f0, 0x14E0($s4)
    ctx->pc = 0x2e5eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5eb0:
    // 0x2e5eb0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e5eb0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e5eb4:
    // 0x2e5eb4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e5eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5eb8:
    // 0x2e5eb8: 0x8e2311c0  lw          $v1, 0x11C0($s1)
    ctx->pc = 0x2e5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5ebc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e5ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e5ec0: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E5EC0u;
    {
        const bool branch_taken_0x2e5ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC0u;
        // 0x2e5ec4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ec0) {
            ctx->pc = 0x2E5FB8u;
            goto label_2e5fb8;
        }
    }
    ctx->pc = 0x2E5EC8u;
    // 0x2e5ec8: 0x56c0003c  bnel        $s6, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x2E5EC8u;
    {
        const bool branch_taken_0x2e5ec8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ec8) {
            ctx->pc = 0x2E5ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EC8u;
            // 0x2e5ecc: 0xae20126c  sw          $zero, 0x126C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4716), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5FBCu;
            goto label_2e5fbc;
        }
    }
    ctx->pc = 0x2E5ED0u;
    // 0x2e5ed0: 0xc6200524  lwc1        $f0, 0x524($s1)
    ctx->pc = 0x2e5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5ed4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x2e5ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x2e5ed8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x2e5ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x2e5edc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5ee0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e5ee0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e5ee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ee8: 0x0  nop
    ctx->pc = 0x2e5ee8u;
    // NOP
    // 0x2e5eec: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2E5EECu;
    {
        const bool branch_taken_0x2e5eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EECu;
        // 0x2e5ef0: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5eec) {
            ctx->pc = 0x2E5FB8u;
            goto label_2e5fb8;
        }
    }
    ctx->pc = 0x2E5EF4u;
    // 0x2e5ef4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5EF4u;
    {
        const bool branch_taken_0x2e5ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ef4) {
            ctx->pc = 0x2E5EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5EF4u;
            // 0x2e5ef8: 0xc68014a4  lwc1        $f0, 0x14A4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F18u;
            goto label_2e5f18;
        }
    }
    ctx->pc = 0x2E5EFCu;
    // 0x2e5efc: 0x8e220604  lw          $v0, 0x604($s1)
    ctx->pc = 0x2e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x2e5f00: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5F00u;
    {
        const bool branch_taken_0x2e5f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f00) {
            ctx->pc = 0x2E5F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F00u;
            // 0x2e5f04: 0xc68014a4  lwc1        $f0, 0x14A4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F18u;
            goto label_2e5f18;
        }
    }
    ctx->pc = 0x2E5F08u;
    // 0x2e5f08: 0xc68014b0  lwc1        $f0, 0x14B0($s4)
    ctx->pc = 0x2e5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f0c: 0xc68414b4  lwc1        $f4, 0x14B4($s4)
    ctx->pc = 0x2e5f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e5f10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5F10u;
    {
        const bool branch_taken_0x2e5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F10u;
        // 0x2e5f14: 0xc68314b8  lwc1        $f3, 0x14B8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f10) {
            ctx->pc = 0x2E5F20u;
            goto label_2e5f20;
        }
    }
    ctx->pc = 0x2E5F18u;
label_2e5f18:
    // 0x2e5f18: 0xc68414a8  lwc1        $f4, 0x14A8($s4)
    ctx->pc = 0x2e5f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e5f1c: 0xc68314ac  lwc1        $f3, 0x14AC($s4)
    ctx->pc = 0x2e5f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e5f20:
    // 0x2e5f20: 0xc621126c  lwc1        $f1, 0x126C($s1)
    ctx->pc = 0x2e5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5f28: 0x0  nop
    ctx->pc = 0x2e5f28u;
    // NOP
    // 0x2e5f2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5F2Cu;
    {
        const bool branch_taken_0x2e5f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F2Cu;
        // 0x2e5f30: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f2c) {
            ctx->pc = 0x2E5F48u;
            goto label_2e5f48;
        }
    }
    ctx->pc = 0x2E5F34u;
    // 0x2e5f34: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e5f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f38: 0xae20127c  sw          $zero, 0x127C($s1)
    ctx->pc = 0x2e5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4732), GPR_U32(ctx, 0));
    // 0x2e5f3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5F40u;
    {
        const bool branch_taken_0x2e5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F40u;
        // 0x2e5f44: 0xe620126c  swc1        $f0, 0x126C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4716), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f40) {
            ctx->pc = 0x2E5FC0u;
            goto label_2e5fc0;
        }
    }
    ctx->pc = 0x2E5F48u;
label_2e5f48:
    // 0x2e5f48: 0xc622127c  lwc1        $f2, 0x127C($s1)
    ctx->pc = 0x2e5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5f4c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x2e5f4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x2e5f50: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2e5f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5f54: 0x0  nop
    ctx->pc = 0x2e5f54u;
    // NOP
    // 0x2e5f58: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2E5F58u;
    {
        const bool branch_taken_0x2e5f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F58u;
        // 0x2e5f5c: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f58) {
            ctx->pc = 0x2E5FACu;
            goto label_2e5fac;
        }
    }
    ctx->pc = 0x2E5F60u;
    // 0x2e5f60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5f64: 0x0  nop
    ctx->pc = 0x2e5f64u;
    // NOP
    // 0x2e5f68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e5f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5f6c: 0x0  nop
    ctx->pc = 0x2e5f6cu;
    // NOP
    // 0x2e5f70: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5F70u;
    {
        const bool branch_taken_0x2e5f70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5f70) {
            ctx->pc = 0x2E5F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F70u;
            // 0x2e5f74: 0x46041001  sub.s       $f0, $f2, $f4 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F94u;
            goto label_2e5f94;
        }
    }
    ctx->pc = 0x2E5F78u;
    // 0x2e5f78: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x2e5f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2e5f7c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e5f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5f80: 0x0  nop
    ctx->pc = 0x2e5f80u;
    // NOP
    // 0x2e5f84: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5F84u;
    {
        const bool branch_taken_0x2e5f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F84u;
        // 0x2e5f88: 0xe620127c  swc1        $f0, 0x127C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f84) {
            ctx->pc = 0x2E5FACu;
            goto label_2e5fac;
        }
    }
    ctx->pc = 0x2E5F8Cu;
    // 0x2e5f8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5F8Cu;
    {
        const bool branch_taken_0x2e5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F8Cu;
        // 0x2e5f90: 0xe623127c  swc1        $f3, 0x127C($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f8c) {
            ctx->pc = 0x2E5FACu;
            goto label_2e5fac;
        }
    }
    ctx->pc = 0x2E5F94u;
label_2e5f94:
    // 0x2e5f94: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2e5f94u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2e5f98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e5f98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5f9c: 0x0  nop
    ctx->pc = 0x2e5f9cu;
    // NOP
    // 0x2e5fa0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5FA0u;
    {
        const bool branch_taken_0x2e5fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FA0u;
        // 0x2e5fa4: 0xe620127c  swc1        $f0, 0x127C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fa0) {
            ctx->pc = 0x2E5FACu;
            goto label_2e5fac;
        }
    }
    ctx->pc = 0x2E5FA8u;
    // 0x2e5fa8: 0xe621127c  swc1        $f1, 0x127C($s1)
    ctx->pc = 0x2e5fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
label_2e5fac:
    // 0x2e5fac: 0xc620127c  lwc1        $f0, 0x127C($s1)
    ctx->pc = 0x2e5facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5FB0u;
    {
        const bool branch_taken_0x2e5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FB0u;
        // 0x2e5fb4: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fb0) {
            ctx->pc = 0x2E5FC0u;
            goto label_2e5fc0;
        }
    }
    ctx->pc = 0x2E5FB8u;
label_2e5fb8:
    // 0x2e5fb8: 0xae20126c  sw          $zero, 0x126C($s1)
    ctx->pc = 0x2e5fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4716), GPR_U32(ctx, 0));
label_2e5fbc:
    // 0x2e5fbc: 0xae20127c  sw          $zero, 0x127C($s1)
    ctx->pc = 0x2e5fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4732), GPR_U32(ctx, 0));
label_2e5fc0:
    // 0x2e5fc0: 0x8e2411c0  lw          $a0, 0x11C0($s1)
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
    // 0x2e5fc4: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x2e5fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x2e5fc8: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x2E5FC8u;
    {
        const bool branch_taken_0x2e5fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fc8) {
            ctx->pc = 0x2E5FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5FC8u;
            // 0x2e5fcc: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61D4u;
            goto label_2e61d4;
        }
    }
    ctx->pc = 0x2E5FD0u;
    // 0x2e5fd0: 0x8e220604  lw          $v0, 0x604($s1)
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x2e5fd4: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x2E5FD4u;
    {
        const bool branch_taken_0x2e5fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fd4) {
            ctx->pc = 0x2E5FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5FD4u;
            // 0x2e5fd8: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61D4u;
            goto label_2e61d4;
        }
    }
    ctx->pc = 0x2E5FDCu;
    // 0x2e5fdc: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x2e5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x2e5fe0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2e5fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2e5fe4: 0x5440007b  bnel        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x2E5FE4u;
    {
        const bool branch_taken_0x2e5fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fe4) {
            ctx->pc = 0x2E5FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5FE4u;
            // 0x2e5fe8: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61D4u;
            goto label_2e61d4;
        }
    }
    ctx->pc = 0x2E5FECu;
    // 0x2e5fec: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2e5ff0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2e5ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e5ff4: 0x50430077  beql        $v0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2E5FF4u;
    {
        const bool branch_taken_0x2e5ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5ff4) {
            ctx->pc = 0x2E5FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5FF4u;
            // 0x2e5ff8: 0x8e2211d8  lw          $v0, 0x11D8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61D4u;
            goto label_2e61d4;
        }
    }
    ctx->pc = 0x2E5FFCu;
    // 0x2e5ffc: 0xc6210500  lwc1        $f1, 0x500($s1)
    ctx->pc = 0x2e5ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6004: 0x0  nop
    ctx->pc = 0x2e6004u;
    // NOP
    // 0x2e6008: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e6008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e600c: 0x0  nop
    ctx->pc = 0x2e600cu;
    // NOP
    // 0x2e6010: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6010u;
    {
        const bool branch_taken_0x2e6010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6010) {
            ctx->pc = 0x2E6014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6010u;
            // 0x2e6014: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6020u;
            goto label_2e6020;
        }
    }
    ctx->pc = 0x2E6018u;
    // 0x2e6018: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2E6018u;
    {
        const bool branch_taken_0x2e6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6018u;
        // 0x2e601c: 0xc68014c0  lwc1        $f0, 0x14C0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6018) {
            ctx->pc = 0x2E61CCu;
            goto label_2e61cc;
        }
    }
    ctx->pc = 0x2E6020u;
label_2e6020:
    // 0x2e6020: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e6020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6024: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e6028: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e6028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2e602c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e602cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e6030: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E6030u;
    {
        const bool branch_taken_0x2e6030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6030u;
        // 0x2e6034: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6030) {
            ctx->pc = 0x2E606Cu;
            goto label_2e606c;
        }
    }
    ctx->pc = 0x2E6038u;
    // 0x2e6038: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e603c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E603Cu;
    {
        const bool branch_taken_0x2e603c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e603c) {
            ctx->pc = 0x2E6040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E603Cu;
            // 0x2e6040: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6070u;
            goto label_2e6070;
        }
    }
    ctx->pc = 0x2E6044u;
    // 0x2e6044: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E6044u;
    SET_GPR_U32(ctx, 31, 0x2E604Cu);
    ctx->pc = 0x2E6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6044u;
    // 0x2e6048: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E6044u, 0x2E604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E604Cu;
label_2e604c:
    // 0x2e604c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E604Cu;
    {
        const bool branch_taken_0x2e604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e604c) {
            ctx->pc = 0x2E6050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E604Cu;
            // 0x2e6050: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6070u;
            goto label_2e6070;
        }
    }
    ctx->pc = 0x2E6054u;
    // 0x2e6054: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e6058: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e605c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E605Cu;
    {
        const bool branch_taken_0x2e605c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E605Cu;
        // 0x2e6060: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e605c) {
            ctx->pc = 0x2E606Cu;
            goto label_2e606c;
        }
    }
    ctx->pc = 0x2E6064u;
    // 0x2e6064: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6064u;
    {
        const bool branch_taken_0x2e6064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6064) {
            ctx->pc = 0x2E6070u;
            goto label_2e6070;
        }
    }
    ctx->pc = 0x2E606Cu;
label_2e606c:
    // 0x2e606c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e606cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e6070:
    // 0x2e6070: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6070u;
    {
        const bool branch_taken_0x2e6070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6070) {
            ctx->pc = 0x2E6090u;
            goto label_2e6090;
        }
    }
    ctx->pc = 0x2E6078u;
    // 0x2e6078: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2e6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e607c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e6080: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6088: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x2e6088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x2e608c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2e608cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e6090:
    // 0x2e6090: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6090u;
    {
        const bool branch_taken_0x2e6090 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6090) {
            ctx->pc = 0x2E6094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6090u;
            // 0x2e6094: 0x8e300334  lw          $s0, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E60A0u;
            goto label_2e60a0;
        }
    }
    ctx->pc = 0x2E6098u;
    // 0x2e6098: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E6098u;
    {
        const bool branch_taken_0x2e6098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6098u;
        // 0x2e609c: 0xc68014cc  lwc1        $f0, 0x14CC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6098) {
            ctx->pc = 0x2E611Cu;
            goto label_2e611c;
        }
    }
    ctx->pc = 0x2E60A0u;
label_2e60a0:
    // 0x2e60a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e60a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60a4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e60a8: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2e60ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e60acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e60b0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E60B0u;
    {
        const bool branch_taken_0x2e60b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60B0u;
        // 0x2e60b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60b0) {
            ctx->pc = 0x2E60ECu;
            goto label_2e60ec;
        }
    }
    ctx->pc = 0x2E60B8u;
    // 0x2e60b8: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e60bc: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E60BCu;
    {
        const bool branch_taken_0x2e60bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e60bc) {
            ctx->pc = 0x2E60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E60BCu;
            // 0x2e60c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E60F0u;
            goto label_2e60f0;
        }
    }
    ctx->pc = 0x2E60C4u;
    // 0x2e60c4: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E60C4u;
    SET_GPR_U32(ctx, 31, 0x2E60CCu);
    ctx->pc = 0x2E60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60C4u;
    // 0x2e60c8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E60C4u, 0x2E60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60CCu;
label_2e60cc:
    // 0x2e60cc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E60CCu;
    {
        const bool branch_taken_0x2e60cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e60cc) {
            ctx->pc = 0x2E60D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E60CCu;
            // 0x2e60d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E60F0u;
            goto label_2e60f0;
        }
    }
    ctx->pc = 0x2E60D4u;
    // 0x2e60d4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e60d8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e60dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E60DCu;
    {
        const bool branch_taken_0x2e60dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60DCu;
        // 0x2e60e0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60dc) {
            ctx->pc = 0x2E60ECu;
            goto label_2e60ec;
        }
    }
    ctx->pc = 0x2E60E4u;
    // 0x2e60e4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E60E4u;
    {
        const bool branch_taken_0x2e60e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e60e4) {
            ctx->pc = 0x2E60F0u;
            goto label_2e60f0;
        }
    }
    ctx->pc = 0x2E60ECu;
label_2e60ec:
    // 0x2e60ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e60ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e60f0:
    // 0x2e60f0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E60F0u;
    {
        const bool branch_taken_0x2e60f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60f0) {
            ctx->pc = 0x2E6110u;
            goto label_2e6110;
        }
    }
    ctx->pc = 0x2E60F8u;
    // 0x2e60f8: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e60fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e6100: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6104: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e6108: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x2e6108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x2e610c: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x2e610cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e6110:
    // 0x2e6110: 0x52600002  beql        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E6110u;
    {
        const bool branch_taken_0x2e6110 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6110) {
            ctx->pc = 0x2E6114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6110u;
            // 0x2e6114: 0xc68014c4  lwc1        $f0, 0x14C4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E611Cu;
            goto label_2e611c;
        }
    }
    ctx->pc = 0x2E6118u;
    // 0x2e6118: 0xc68014c8  lwc1        $f0, 0x14C8($s4)
    ctx->pc = 0x2e6118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 5320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e611c:
    // 0x2e611c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e6120: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x2e6120u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x2e6124: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E6124u;
    {
        const bool branch_taken_0x2e6124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6124u;
        // 0x2e6128: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6124) {
            ctx->pc = 0x2E61ACu;
            goto label_2e61ac;
        }
    }
    ctx->pc = 0x2E612Cu;
    // 0x2e612c: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2e6130: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e6130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6134: 0x8e2411d0  lw          $a0, 0x11D0($s1)
    ctx->pc = 0x2e6134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x2e6138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e613c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2e613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6140: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e6140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2e6144: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2e6144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6148: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e6148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e614c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e6150: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6154: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e6154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6158: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2e6158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e615c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e6160: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2e6164: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2e6168: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2e6168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e616c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2e616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6170: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e6170u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e6174: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2e6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6178: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e617c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e617cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2e6180: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2e6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6184: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2e6184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6188: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2e6188u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2e618c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e618cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6190: 0x0  nop
    ctx->pc = 0x2e6190u;
    // NOP
    // 0x2e6194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6198: 0x0  nop
    ctx->pc = 0x2e6198u;
    // NOP
    // 0x2e619c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E619Cu;
    {
        const bool branch_taken_0x2e619c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e619c) {
            ctx->pc = 0x2E61A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E619Cu;
            // 0x2e61a0: 0xc6210500  lwc1        $f1, 0x500($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E61B4u;
            goto label_2e61b4;
        }
    }
    ctx->pc = 0x2E61A4u;
    // 0x2e61a4: 0x46160802  mul.s       $f0, $f1, $f22
    ctx->pc = 0x2e61a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2e61a8: 0x46160580  add.s       $f22, $f0, $f22
    ctx->pc = 0x2e61a8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_2e61ac:
    // 0x2e61ac: 0xc6210500  lwc1        $f1, 0x500($s1)
    ctx->pc = 0x2e61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e61b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e61b4:
    // 0x2e61b4: 0x0  nop
    ctx->pc = 0x2e61b4u;
    // NOP
    // 0x2e61b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e61b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e61bc: 0x0  nop
    ctx->pc = 0x2e61bcu;
    // NOP
    // 0x2e61c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E61C0u;
    {
        const bool branch_taken_0x2e61c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61C0u;
        // 0x2e61c4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61c0) {
            ctx->pc = 0x2E61D0u;
            goto label_2e61d0;
        }
    }
    ctx->pc = 0x2E61C8u;
    // 0x2e61c8: 0xc440b9d8  lwc1        $f0, -0x4628($v0)
    ctx->pc = 0x2e61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e61cc:
    // 0x2e61cc: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2e61ccu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2e61d0:
    // 0x2e61d0: 0x8e2211d8  lw          $v0, 0x11D8($s1)
    ctx->pc = 0x2e61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4568)));
label_2e61d4:
    // 0x2e61d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E61D4u;
    {
        const bool branch_taken_0x2e61d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61D4u;
        // 0x2e61d8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61d4) {
            ctx->pc = 0x2E61E8u;
            goto label_2e61e8;
        }
    }
    ctx->pc = 0x2E61DCu;
    // 0x2e61dc: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x2e61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e61e0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e61e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e61e4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2e61e4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_2e61e8:
    // 0x2e61e8: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2E61E8u;
    SET_GPR_U32(ctx, 31, 0x2E61F0u);
    ctx->pc = 0x2E61ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E61E8u;
    // 0x2e61ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2E61E8u, 0x2E61F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61F0u;
label_2e61f0:
    // 0x2e61f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E61F0u;
    {
        const bool branch_taken_0x2e61f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e61f0) {
            ctx->pc = 0x2E6200u;
            goto label_2e6200;
        }
    }
    ctx->pc = 0x2E61F8u;
    // 0x2e61f8: 0x8e22053c  lw          $v0, 0x53C($s1)
    ctx->pc = 0x2e61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1340)));
    // 0x2e61fc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2e61fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e6200:
    // 0x2e6200: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6200u;
    {
        const bool branch_taken_0x2e6200 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6200u;
        // 0x2e6204: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6200) {
            ctx->pc = 0x2E6214u;
            goto label_2e6214;
        }
    }
    ctx->pc = 0x2E6208u;
    // 0x2e6208: 0xc62011d4  lwc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2e6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e620c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e620cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e6210: 0xe62011d4  swc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2e6210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
label_2e6214:
    // 0x2e6214: 0xc08bcbe  jal         func_22F2F8
    ctx->pc = 0x2E6214u;
    SET_GPR_U32(ctx, 31, 0x2E621Cu);
    ctx->pc = 0x2E6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6214u;
    // 0x2e6218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F2F8u, 0x2E6214u, 0x2E621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E621Cu;
label_2e621c:
    // 0x2e621c: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E621Cu;
    {
        const bool branch_taken_0x2e621c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E621Cu;
        // 0x2e6220: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e621c) {
            ctx->pc = 0x2E6274u;
            goto label_2e6274;
        }
    }
    ctx->pc = 0x2E6224u;
    // 0x2e6224: 0xc62011d4  lwc1        $f0, 0x11D4($s1)
    ctx->pc = 0x2e6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6228: 0x461b0034  c.lt.s      $f0, $f27
    ctx->pc = 0x2e6228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e622c: 0x0  nop
    ctx->pc = 0x2e622cu;
    // NOP
    // 0x2e6230: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6230u;
    {
        const bool branch_taken_0x2e6230 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6230) {
            ctx->pc = 0x2E6240u;
            goto label_2e6240;
        }
    }
    ctx->pc = 0x2E6238u;
    // 0x2e6238: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E6238u;
    {
        const bool branch_taken_0x2e6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6238u;
        // 0x2e623c: 0xe63b11d4  swc1        $f27, 0x11D4($s1) (Delay Slot)
        { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6238) {
            ctx->pc = 0x2E6274u;
            goto label_2e6274;
        }
    }
    ctx->pc = 0x2E6240u;
label_2e6240:
    // 0x2e6240: 0x4600e034  c.lt.s      $f28, $f0
    ctx->pc = 0x2e6240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6244: 0x0  nop
    ctx->pc = 0x2e6244u;
    // NOP
    // 0x2e6248: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6248u;
    {
        const bool branch_taken_0x2e6248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6248) {
            ctx->pc = 0x2E624Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6248u;
            // 0x2e624c: 0xe63c11d4  swc1        $f28, 0x11D4($s1) (Delay Slot)
            { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4564), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6270u;
            goto label_2e6270;
        }
    }
    ctx->pc = 0x2E6250u;
    // 0x2e6250: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6250u;
    {
        const bool branch_taken_0x2e6250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6250u;
        // 0x2e6254: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6250) {
            ctx->pc = 0x2E6274u;
            goto label_2e6274;
        }
    }
    ctx->pc = 0x2E6258u;
label_2e6258:
    // 0x2e6258: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e6258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e625c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e625cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e6260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6264: 0xe621127c  swc1        $f1, 0x127C($s1)
    ctx->pc = 0x2e6264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4732), bits); }
    // 0x2e6268: 0xe6201274  swc1        $f0, 0x1274($s1)
    ctx->pc = 0x2e6268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4724), bits); }
    // 0x2e626c: 0xe621126c  swc1        $f1, 0x126C($s1)
    ctx->pc = 0x2e626cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4716), bits); }
label_2e6270:
    // 0x2e6270: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e6270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e6274:
    // 0x2e6274: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2e6274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e6278: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e6278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e627c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2e627cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e6280: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2e6280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6284: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2e6284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6288: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e6288u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e628c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2e628cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e6290: 0xc7bc00b0  lwc1        $f28, 0xB0($sp)
    ctx->pc = 0x2e6290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2e6294: 0xc7bb00a8  lwc1        $f27, 0xA8($sp)
    ctx->pc = 0x2e6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2e6298: 0xc7ba00a0  lwc1        $f26, 0xA0($sp)
    ctx->pc = 0x2e6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2e629c: 0xc7b90098  lwc1        $f25, 0x98($sp)
    ctx->pc = 0x2e629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e62a0: 0xc7b80090  lwc1        $f24, 0x90($sp)
    ctx->pc = 0x2e62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e62a4: 0xc7b70088  lwc1        $f23, 0x88($sp)
    ctx->pc = 0x2e62a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e62a8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2e62a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e62ac: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2e62acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e62b0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2e62b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e62b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E62B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E62B4u;
        // 0x2e62b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E62B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E62BCu;
    // 0x2e62bc: 0x0  nop
    ctx->pc = 0x2e62bcu;
    // NOP
    ctx->pc = 0x2e62c0u;
}
