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

// Function: sub_002BF728
// Address: 0x2bf728 - 0x2bf900
void sub_002BF728_0x2bf728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF728_0x2bf728");
#endif

    switch (ctx->pc) {
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf834u: goto label_2bf834;
        default: break;
    }

    ctx->pc = 0x2bf728u;

    // 0x2bf728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bf728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bf72c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf730: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bf730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bf734: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf738: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2bf738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bf73c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf740: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2bf740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2bf744: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF744u;
    SET_GPR_U32(ctx, 31, 0x2BF74Cu);
    ctx->pc = 0x2BF748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF744u;
    // 0x2bf748: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF744u, 0x2BF74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF74Cu;
label_2bf74c:
    // 0x2bf74c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF74Cu;
    SET_GPR_U32(ctx, 31, 0x2BF754u);
    ctx->pc = 0x2BF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF74Cu;
    // 0x2bf750: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF74Cu, 0x2BF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF754u;
label_2bf754:
    // 0x2bf754: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BF754u;
    SET_GPR_U32(ctx, 31, 0x2BF75Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BF754u, 0x2BF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF75Cu;
label_2bf75c:
    // 0x2bf75c: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bf75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bf760: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bf760u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf764: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF764u;
    {
        const bool branch_taken_0x2bf764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf764) {
            ctx->pc = 0x2BF768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF764u;
            // 0x2bf768: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF76Cu;
            goto label_2bf76c;
        }
    }
    ctx->pc = 0x2BF76Cu;
label_2bf76c:
    // 0x2bf76c: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf76cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf770: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF770u;
    {
        const bool branch_taken_0x2bf770 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF770u;
        // 0x2bf774: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf770) {
            ctx->pc = 0x2BF78Cu;
            goto label_2bf78c;
        }
    }
    ctx->pc = 0x2BF778u;
    // 0x2bf778: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf77c: 0x0  nop
    ctx->pc = 0x2bf77cu;
    // NOP
    // 0x2bf780: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF784u;
    {
        const bool branch_taken_0x2bf784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf784) {
            ctx->pc = 0x2BF7A4u;
            goto label_2bf7a4;
        }
    }
    ctx->pc = 0x2BF78Cu;
label_2bf78c:
    // 0x2bf78c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf794: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf798: 0x0  nop
    ctx->pc = 0x2bf798u;
    // NOP
    // 0x2bf79c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf79cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf7a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bf7a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bf7a4:
    // 0x2bf7a4: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bf7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bf7a8: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bf7a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bf7ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf7b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf7b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf7b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bf7b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bf7bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bf7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bf7c0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BF7C0u;
    SET_GPR_U32(ctx, 31, 0x2BF7C8u);
    ctx->pc = 0x2BF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF7C0u;
    // 0x2bf7c4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BF7C0u, 0x2BF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF7C8u;
label_2bf7c8:
    // 0x2bf7c8: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bf7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bf7cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bf7ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf7d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF7D0u;
    {
        const bool branch_taken_0x2bf7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7d0) {
            ctx->pc = 0x2BF7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF7D0u;
            // 0x2bf7d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF7D8u;
            goto label_2bf7d8;
        }
    }
    ctx->pc = 0x2BF7D8u;
label_2bf7d8:
    // 0x2bf7d8: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf7d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf7dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF7DCu;
    {
        const bool branch_taken_0x2bf7dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7DCu;
        // 0x2bf7e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7dc) {
            ctx->pc = 0x2BF7F8u;
            goto label_2bf7f8;
        }
    }
    ctx->pc = 0x2BF7E4u;
    // 0x2bf7e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf7e8: 0x0  nop
    ctx->pc = 0x2bf7e8u;
    // NOP
    // 0x2bf7ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf7ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF7F0u;
    {
        const bool branch_taken_0x2bf7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf7f0) {
            ctx->pc = 0x2BF810u;
            goto label_2bf810;
        }
    }
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf800: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf804: 0x0  nop
    ctx->pc = 0x2bf804u;
    // NOP
    // 0x2bf808: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf80c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bf80cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bf810:
    // 0x2bf810: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bf814: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bf814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bf818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf824: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bf824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bf828: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bf828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bf82c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BF82Cu;
    SET_GPR_U32(ctx, 31, 0x2BF834u);
    ctx->pc = 0x2BF830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF82Cu;
    // 0x2bf830: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BF82Cu, 0x2BF834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF834u;
label_2bf834:
    // 0x2bf834: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x2bf834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2bf838: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2bf838u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bf83c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BF83Cu;
    {
        const bool branch_taken_0x2bf83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf83c) {
            ctx->pc = 0x2BF840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF83Cu;
            // 0x2bf840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF844u;
            goto label_2bf844;
        }
    }
    ctx->pc = 0x2BF844u;
label_2bf844:
    // 0x2bf844: 0x1010  mfhi        $v0
    ctx->pc = 0x2bf844u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bf848: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BF848u;
    {
        const bool branch_taken_0x2bf848 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF848u;
        // 0x2bf84c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf848) {
            ctx->pc = 0x2BF864u;
            goto label_2bf864;
        }
    }
    ctx->pc = 0x2BF850u;
    // 0x2bf850: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf854: 0x0  nop
    ctx->pc = 0x2bf854u;
    // NOP
    // 0x2bf858: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf858u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf85c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BF85Cu;
    {
        const bool branch_taken_0x2bf85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf85c) {
            ctx->pc = 0x2BF87Cu;
            goto label_2bf87c;
        }
    }
    ctx->pc = 0x2BF864u;
label_2bf864:
    // 0x2bf864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bf864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bf868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bf868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bf86c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2bf86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bf870: 0x0  nop
    ctx->pc = 0x2bf870u;
    // NOP
    // 0x2bf874: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2bf874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2bf878: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2bf878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2bf87c:
    // 0x2bf87c: 0x3c013951  lui         $at, 0x3951
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14673 << 16));
    // 0x2bf880: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bf880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bf884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf888: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bf88c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bf890: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bf890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf894: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2bf894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2bf898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bf898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bf89c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bf89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bf8a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf8a4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bf8a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8a8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bf8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8ac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bf8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8b0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bf8b0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bf8b4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bf8b4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bf8b8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bf8b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8bc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bf8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf8c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bf8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf8c4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bf8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bf8c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bf8c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bf8cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf8d0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2bf8d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2bf8d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bf8d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bf8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf8dc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bf8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf8e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2bf8e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf8e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf8e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf8e8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bf8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf8ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bf8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bf8f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2bf8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bf8f4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2bf8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF900u;
}
