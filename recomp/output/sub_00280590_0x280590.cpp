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

// Function: sub_00280590
// Address: 0x280590 - 0x280ce8
void sub_00280590_0x280590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280590_0x280590");
#endif

    switch (ctx->pc) {
        case 0x2805c0u: goto label_2805c0;
        case 0x2805f0u: goto label_2805f0;
        case 0x280684u: goto label_280684;
        case 0x2806a4u: goto label_2806a4;
        case 0x2806acu: goto label_2806ac;
        case 0x280710u: goto label_280710;
        case 0x280724u: goto label_280724;
        case 0x28072cu: goto label_28072c;
        case 0x280734u: goto label_280734;
        case 0x280790u: goto label_280790;
        case 0x280814u: goto label_280814;
        case 0x28084cu: goto label_28084c;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808ecu: goto label_2808ec;
        case 0x2808f8u: goto label_2808f8;
        case 0x280998u: goto label_280998;
        case 0x280ab0u: goto label_280ab0;
        case 0x280ac4u: goto label_280ac4;
        case 0x280ae0u: goto label_280ae0;
        default: break;
    }

    ctx->pc = 0x280590u;

    // 0x280590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x280590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x280594: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x280594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x280598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28059c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x28059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2805a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2805a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2805a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2805a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2805a8: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x2805a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
    // 0x2805ac: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2805acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2805b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2805b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2805b4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2805b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2805b8: 0xc0a8770  jal         func_2A1DC0
    ctx->pc = 0x2805B8u;
    SET_GPR_U32(ctx, 31, 0x2805C0u);
    ctx->pc = 0x2805BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805B8u;
    // 0x2805bc: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1DC0u, 0x2805B8u, 0x2805C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805C0u;
label_2805c0:
    // 0x2805c0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2805c4: 0x8c822b34  lw          $v0, 0x2B34($a0)
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B34u));
    // 0x2805c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2805c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2805cc: 0x2843001e  slti        $v1, $v0, 0x1E
    ctx->pc = 0x2805ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2805d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2805D0u;
    {
        const bool branch_taken_0x2805d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2805D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805D0u;
        // 0x2805d4: 0xac822b34  sw          $v0, 0x2B34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805d0) {
            ctx->pc = 0x2805E0u;
            goto label_2805e0;
        }
    }
    ctx->pc = 0x2805D8u;
    // 0x2805d8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2805dc: 0xac822b34  sw          $v0, 0x2B34($a0)
    ctx->pc = 0x2805dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11060), GPR_U32(ctx, 2));
label_2805e0:
    // 0x2805e0: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x2805e4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2805e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805e8: 0x2665b0b0  addiu       $a1, $s3, -0x4F50
    ctx->pc = 0x2805e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x2805ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2805ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2805f0:
    // 0x2805f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2805f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2805f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2805f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2805fc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2805fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x280600: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x280600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x280604: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x280604u;
    {
        const bool branch_taken_0x280604 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x280608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280604u;
        // 0x280608: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280604) {
            ctx->pc = 0x2805F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2805f0;
        }
    }
    ctx->pc = 0x28060Cu;
    // 0x28060c: 0x2662b0b0  addiu       $v0, $s3, -0x4F50
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x280610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280618: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x280618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28061c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280620: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x280620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x280624: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280628: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280628u;
    {
        const bool branch_taken_0x280628 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280628u;
        // 0x28062c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280628) {
            ctx->pc = 0x280644u;
            goto label_280644;
        }
    }
    ctx->pc = 0x280630u;
    // 0x280630: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x280630u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280634: 0x0  nop
    ctx->pc = 0x280634u;
    // NOP
    // 0x280638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28063c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28063Cu;
    {
        const bool branch_taken_0x28063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28063c) {
            ctx->pc = 0x280660u;
            goto label_280660;
        }
    }
    ctx->pc = 0x280644u;
label_280644:
    // 0x280644: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x280644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x280648: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x280648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x28064c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x280650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280654: 0x0  nop
    ctx->pc = 0x280654u;
    // NOP
    // 0x280658: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28065c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x28065cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_280660:
    // 0x280660: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x280664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280668: 0x0  nop
    ctx->pc = 0x280668u;
    // NOP
    // 0x28066c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28066cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280670: 0x0  nop
    ctx->pc = 0x280670u;
    // NOP
    // 0x280674: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x280674u;
    {
        const bool branch_taken_0x280674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280674u;
        // 0x280678: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280674) {
            ctx->pc = 0x2806B0u;
            goto label_2806b0;
        }
    }
    ctx->pc = 0x28067Cu;
    // 0x28067c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x28067Cu;
    SET_GPR_U32(ctx, 31, 0x280684u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x28067Cu, 0x280684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280684u;
label_280684:
    // 0x280684: 0x2664b0b0  addiu       $a0, $s3, -0x4F50
    ctx->pc = 0x280684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x280688: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x280688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28068c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x280690: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x280690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x280694: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x280694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280698: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x280698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x28069c: 0xc0cf3fc  jal         func_33CFF0
    ctx->pc = 0x28069Cu;
    SET_GPR_U32(ctx, 31, 0x2806A4u);
    ctx->pc = 0x2806A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28069Cu;
    // 0x2806a0: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFF0u, 0x28069Cu, 0x2806A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806A4u;
label_2806a4:
    // 0x2806a4: 0xc09ffa4  jal         func_27FE90
    ctx->pc = 0x2806A4u;
    SET_GPR_U32(ctx, 31, 0x2806ACu);
    ctx->pc = 0x27FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FE90u, 0x2806A4u, 0x2806ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2806ACu;
label_2806ac:
    // 0x2806ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2806acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2806b0:
    // 0x2806b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2806B0u;
    {
        const bool branch_taken_0x2806b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2806B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806B0u;
        // 0x2806b4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806b0) {
            ctx->pc = 0x2806CCu;
            goto label_2806cc;
        }
    }
    ctx->pc = 0x2806B8u;
    // 0x2806b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2806b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2806bc: 0x0  nop
    ctx->pc = 0x2806bcu;
    // NOP
    // 0x2806c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2806c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2806c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2806C4u;
    {
        const bool branch_taken_0x2806c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2806c4) {
            ctx->pc = 0x2806E8u;
            goto label_2806e8;
        }
    }
    ctx->pc = 0x2806CCu;
label_2806cc:
    // 0x2806cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2806ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2806d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2806d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2806d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2806d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2806d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2806d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2806dc: 0x0  nop
    ctx->pc = 0x2806dcu;
    // NOP
    // 0x2806e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2806e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2806e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2806e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2806e8:
    // 0x2806e8: 0x3c014205  lui         $at, 0x4205
    ctx->pc = 0x2806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16901 << 16));
    // 0x2806ec: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x2806ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x2806f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2806f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2806f4: 0x0  nop
    ctx->pc = 0x2806f4u;
    // NOP
    // 0x2806f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2806f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2806fc: 0x0  nop
    ctx->pc = 0x2806fcu;
    // NOP
    // 0x280700: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x280700u;
    {
        const bool branch_taken_0x280700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280700) {
            ctx->pc = 0x28072Cu;
            goto label_28072c;
        }
    }
    ctx->pc = 0x280708u;
    // 0x280708: 0xc076100  jal         func_1D8400
    ctx->pc = 0x280708u;
    SET_GPR_U32(ctx, 31, 0x280710u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x280708u, 0x280710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280710u;
label_280710:
    // 0x280710: 0x2664b0b0  addiu       $a0, $s3, -0x4F50
    ctx->pc = 0x280710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x280714: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x280714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28071c: 0xc0a011e  jal         func_280478
    ctx->pc = 0x28071Cu;
    SET_GPR_U32(ctx, 31, 0x280724u);
    ctx->pc = 0x280720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28071Cu;
    // 0x280720: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280478u, 0x28071Cu, 0x280724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280724u;
label_280724:
    // 0x280724: 0xc0a1ad2  jal         func_286B48
    ctx->pc = 0x280724u;
    SET_GPR_U32(ctx, 31, 0x28072Cu);
    ctx->pc = 0x286B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B48u, 0x280724u, 0x28072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28072Cu;
label_28072c:
    // 0x28072c: 0xc0cebd4  jal         func_33AF50
    ctx->pc = 0x28072Cu;
    SET_GPR_U32(ctx, 31, 0x280734u);
    ctx->pc = 0x280730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28072Cu;
    // 0x280730: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AF50u, 0x28072Cu, 0x280734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280734u;
label_280734:
    // 0x280734: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x280738: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280738u;
    {
        const bool branch_taken_0x280738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280738u;
        // 0x28073c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280738) {
            ctx->pc = 0x280754u;
            goto label_280754;
        }
    }
    ctx->pc = 0x280740u;
    // 0x280740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x280740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280744: 0x0  nop
    ctx->pc = 0x280744u;
    // NOP
    // 0x280748: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28074c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28074Cu;
    {
        const bool branch_taken_0x28074c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28074c) {
            ctx->pc = 0x28076Cu;
            goto label_28076c;
        }
    }
    ctx->pc = 0x280754u;
label_280754:
    // 0x280754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x280754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x280758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x280758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28075c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28075cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280760: 0x0  nop
    ctx->pc = 0x280760u;
    // NOP
    // 0x280764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x280764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x280768: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x280768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28076c:
    // 0x28076c: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x28076cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x280770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280774: 0x0  nop
    ctx->pc = 0x280774u;
    // NOP
    // 0x280778: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28077c: 0x0  nop
    ctx->pc = 0x28077cu;
    // NOP
    // 0x280780: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x280780u;
    {
        const bool branch_taken_0x280780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280780u;
        // 0x280784: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280780) {
            ctx->pc = 0x2807B8u;
            goto label_2807b8;
        }
    }
    ctx->pc = 0x280788u;
    // 0x280788: 0xc076100  jal         func_1D8400
    ctx->pc = 0x280788u;
    SET_GPR_U32(ctx, 31, 0x280790u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x280788u, 0x280790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280790u;
label_280790:
    // 0x280790: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x280790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x280794: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280798: 0x24a5c2b8  addiu       $a1, $a1, -0x3D48
    ctx->pc = 0x280798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951608));
    // 0x28079c: 0x2666b0b0  addiu       $a2, $s3, -0x4F50
    ctx->pc = 0x28079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x2807a0: 0x8ca30288  lw          $v1, 0x288($a1)
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 648)));
    // 0x2807a4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2807a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2807a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2807a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2807ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2807acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2807b0: 0xaca30288  sw          $v1, 0x288($a1)
    ctx->pc = 0x2807b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 648), GPR_U32(ctx, 3));
    // 0x2807b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2807b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2807b8:
    // 0x2807b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2807B8u;
    {
        const bool branch_taken_0x2807b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2807BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2807B8u;
        // 0x2807bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2807b8) {
            ctx->pc = 0x2807D4u;
            goto label_2807d4;
        }
    }
    ctx->pc = 0x2807C0u;
    // 0x2807c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2807c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2807c4: 0x0  nop
    ctx->pc = 0x2807c4u;
    // NOP
    // 0x2807c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2807c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2807cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2807CCu;
    {
        const bool branch_taken_0x2807cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2807cc) {
            ctx->pc = 0x2807F0u;
            goto label_2807f0;
        }
    }
    ctx->pc = 0x2807D4u;
label_2807d4:
    // 0x2807d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2807d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2807d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2807d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2807dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2807dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2807e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2807e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2807e4: 0x0  nop
    ctx->pc = 0x2807e4u;
    // NOP
    // 0x2807e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2807e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2807ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2807ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2807f0:
    // 0x2807f0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x2807f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x2807f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2807f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2807f8: 0x0  nop
    ctx->pc = 0x2807f8u;
    // NOP
    // 0x2807fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2807fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280800: 0x0  nop
    ctx->pc = 0x280800u;
    // NOP
    // 0x280804: 0x45000112  bc1f        . + 4 + (0x112 << 2)
    ctx->pc = 0x280804u;
    {
        const bool branch_taken_0x280804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280804u;
        // 0x280808: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280804) {
            ctx->pc = 0x280C50u;
            goto label_280c50;
        }
    }
    ctx->pc = 0x28080Cu;
    // 0x28080c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x28080Cu;
    SET_GPR_U32(ctx, 31, 0x280814u);
    ctx->pc = 0x280810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28080Cu;
    // 0x280810: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x28080Cu, 0x280814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280814u;
label_280814:
    // 0x280814: 0x2611f130  addiu       $s1, $s0, -0xED0
    ctx->pc = 0x280814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963504));
    // 0x280818: 0x2664b0b0  addiu       $a0, $s3, -0x4F50
    ctx->pc = 0x280818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946992));
    // 0x28081c: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x28081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280820: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x280820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x280824: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x280824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x280828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28082c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28082cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x280830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280838: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x280838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28083c: 0xaca4a468  sw          $a0, -0x5B98($a1)
    ctx->pc = 0x28083cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FA468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA468u, _value); } while (0);
    // 0x280840: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x280840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280844: 0xc09f4e8  jal         func_27D3A0
    ctx->pc = 0x280844u;
    SET_GPR_U32(ctx, 31, 0x28084Cu);
    ctx->pc = 0x280848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280844u;
    // 0x280848: 0xe6200030  swc1        $f0, 0x30($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D3A0u, 0x280844u, 0x28084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28084Cu;
label_28084c:
    // 0x28084c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x280850: 0x2444cb28  addiu       $a0, $v0, -0x34D8
    ctx->pc = 0x280850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x280854: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x280854u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CB74u));
    // 0x280858: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280858u;
    {
        const bool branch_taken_0x280858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x280858) {
            ctx->pc = 0x28085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280858u;
            // 0x28085c: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280870u;
            goto label_280870;
        }
    }
    ctx->pc = 0x280860u;
    // 0x280860: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x280860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x280864: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x280864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x280868: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x280868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
    // 0x28086c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x28086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_280870:
    // 0x280870: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x280870u;
    {
        const bool branch_taken_0x280870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280870) {
            ctx->pc = 0x280874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280870u;
            // 0x280874: 0xc6200058  lwc1        $f0, 0x58($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280888u;
            goto label_280888;
        }
    }
    ctx->pc = 0x280878u;
    // 0x280878: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x280878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x28087c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x28087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x280880: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x280880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x280884: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x280884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_280888:
    // 0x280888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28088c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28088cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280890: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x280894: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x280894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x280898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28089c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x28089cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2808a0: 0x0  nop
    ctx->pc = 0x2808a0u;
    // NOP
    // 0x2808a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2808A4u;
    {
        const bool branch_taken_0x2808a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2808A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808A4u;
        // 0x2808a8: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808a4) {
            ctx->pc = 0x2808B0u;
            goto label_2808b0;
        }
    }
    ctx->pc = 0x2808ACu;
    // 0x2808ac: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2808acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_2808b0:
    // 0x2808b0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2808b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2808b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2808B4u;
    {
        const bool branch_taken_0x2808b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808B4u;
        // 0x2808b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808b4) {
            ctx->pc = 0x2808D8u;
            goto label_2808d8;
        }
    }
    ctx->pc = 0x2808BCu;
    // 0x2808bc: 0x8c439190  lw          $v1, -0x6E70($v0)
    ctx->pc = 0x2808bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939024)));
    // 0x2808c0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2808C0u;
    {
        const bool branch_taken_0x2808c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2808C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808C0u;
        // 0x2808c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808c0) {
            ctx->pc = 0x2808ECu;
            goto label_2808ec;
        }
    }
    ctx->pc = 0x2808C8u;
    // 0x2808c8: 0xc075fb4  jal         func_1D7ED0
    ctx->pc = 0x2808C8u;
    SET_GPR_U32(ctx, 31, 0x2808D0u);
    ctx->pc = 0x1D7ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7ED0u, 0x2808C8u, 0x2808D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808D0u;
label_2808d0:
    // 0x2808d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2808D0u;
    {
        const bool branch_taken_0x2808d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808d0) {
            ctx->pc = 0x2808ECu;
            goto label_2808ec;
        }
    }
    ctx->pc = 0x2808D8u;
label_2808d8:
    // 0x2808d8: 0x8c439190  lw          $v1, -0x6E70($v0)
    ctx->pc = 0x2808d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939024)));
    // 0x2808dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2808DCu;
    {
        const bool branch_taken_0x2808dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808DCu;
        // 0x2808e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808dc) {
            ctx->pc = 0x2808ECu;
            goto label_2808ec;
        }
    }
    ctx->pc = 0x2808E4u;
    // 0x2808e4: 0xc075fc0  jal         func_1D7F00
    ctx->pc = 0x2808E4u;
    SET_GPR_U32(ctx, 31, 0x2808ECu);
    ctx->pc = 0x1D7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F00u, 0x2808E4u, 0x2808ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808ECu;
label_2808ec:
    // 0x2808ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2808ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2808f0: 0xc0a0344  jal         func_280D10
    ctx->pc = 0x2808F0u;
    SET_GPR_U32(ctx, 31, 0x2808F8u);
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x2808F0u, 0x2808F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2808F8u;
label_2808f8:
    // 0x2808f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2808F8u;
    {
        const bool branch_taken_0x2808f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2808FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2808F8u;
        // 0x2808fc: 0x2662f130  addiu       $v0, $s3, -0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2808f8) {
            ctx->pc = 0x280914u;
            goto label_280914;
        }
    }
    ctx->pc = 0x280900u;
    // 0x280900: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x280904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280908: 0xc455005c  lwc1        $f21, 0x5C($v0)
    ctx->pc = 0x280908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28090c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x28090cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x280910: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x280910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_280914:
    // 0x280914: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x280914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x280918: 0x2663f130  addiu       $v1, $s3, -0xED0
    ctx->pc = 0x280918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
    // 0x28091c: 0x90442be0  lbu         $a0, 0x2BE0($v0)
    ctx->pc = 0x28091cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x482BE0u));
    // 0x280920: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x280920u;
    {
        const bool branch_taken_0x280920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280920u;
        // 0x280924: 0xc474005c  lwc1        $f20, 0x5C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280920) {
            ctx->pc = 0x280964u;
            goto label_280964;
        }
    }
    ctx->pc = 0x280928u;
    // 0x280928: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x280928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28092c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28092cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x280930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280934: 0xc4402be4  lwc1        $f0, 0x2BE4($v0)
    ctx->pc = 0x280934u;
    { uint32_t bits = FAST_READ32(0x482BE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x280938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28093c: 0x0  nop
    ctx->pc = 0x28093cu;
    // NOP
    // 0x280940: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x280940u;
    {
        const bool branch_taken_0x280940 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280940u;
        // 0x280944: 0x2671f130  addiu       $s1, $s3, -0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280940) {
            ctx->pc = 0x280968u;
            goto label_280968;
        }
    }
    ctx->pc = 0x280948u;
    // 0x280948: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x280948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x28094c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28094cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x280950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x280954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x280958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28095c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x28095cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x280960: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x280960u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_280964:
    // 0x280964: 0x2671f130  addiu       $s1, $s3, -0xED0
    ctx->pc = 0x280964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
label_280968:
    // 0x280968: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x280968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28096c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x28096cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280970: 0x0  nop
    ctx->pc = 0x280970u;
    // NOP
    // 0x280974: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x280974u;
    {
        const bool branch_taken_0x280974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280974) {
            ctx->pc = 0x280978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280974u;
            // 0x280978: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28097Cu;
            goto label_28097c;
        }
    }
    ctx->pc = 0x28097Cu;
label_28097c:
    // 0x28097c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x28097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x280980: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x280980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280984: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x280984u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x280988: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x280988u;
    {
        const bool branch_taken_0x280988 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x280988) {
            ctx->pc = 0x280AA8u;
            goto label_280aa8;
        }
    }
    ctx->pc = 0x280990u;
    // 0x280990: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x280990u;
    SET_GPR_U32(ctx, 31, 0x280998u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x280990u, 0x280998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280998u;
label_280998:
    // 0x280998: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28099c: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28099Cu;
    {
        const bool branch_taken_0x28099c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2809A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28099Cu;
        // 0x2809a0: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28099c) {
            ctx->pc = 0x280AA8u;
            goto label_280aa8;
        }
    }
    ctx->pc = 0x2809A4u;
    // 0x2809a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2809a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2809a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2809a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2809ac: 0x24462228  addiu       $a2, $v0, 0x2228
    ctx->pc = 0x2809acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8744));
    // 0x2809b0: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2809b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2809b4: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2809b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2809b8: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2809b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2809bc: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2809bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2809c0: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2809c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2809c4: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2809c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2809c8: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2809c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2809cc: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2809ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2809d0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2809d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2809d4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2809d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2809d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2809d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2809dc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2809dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2809e0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2809e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2809e4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2809e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2809e8: 0xe6340060  swc1        $f20, 0x60($s1)
    ctx->pc = 0x2809e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x2809ec: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2809ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2809f0: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2809f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x2809f4: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x2809f4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x2809f8: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x2809f8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x2809fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2809fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x280a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x280a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x280a04: 0x460310a9  min.s       $f2, $f2, $f3
    ctx->pc = 0x280a04u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[3]);
    // 0x280a08: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x280a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x280a0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x280a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x280a10: 0x46040032  c.eq.s      $f0, $f4
    ctx->pc = 0x280a10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280a14: 0x0  nop
    ctx->pc = 0x280a14u;
    // NOP
    // 0x280a18: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x280A18u;
    {
        const bool branch_taken_0x280a18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x280A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A18u;
        // 0x280a1c: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a18) {
            ctx->pc = 0x280A68u;
            goto label_280a68;
        }
    }
    ctx->pc = 0x280A20u;
    // 0x280a20: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x280a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x280a24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x280a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x280a28: 0x8cc5bcec  lw          $a1, -0x4314($a2)
    ctx->pc = 0x280a28u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x280a2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x280a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x280a30: 0xac50bce4  sw          $s0, -0x431C($v0)
    ctx->pc = 0x280a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x280a34: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x280a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x280a38: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x280a38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x280a3c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x280a3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x280a40: 0x6ba8002f  ldl         $t0, 0x2F($sp)
    ctx->pc = 0x280a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x280a44: 0x6fa80028  ldr         $t0, 0x28($sp)
    ctx->pc = 0x280a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x280a48: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x280a48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a4c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x280a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a50: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x280a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a54: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x280a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a58: 0x8cc4bcec  lw          $a0, -0x4314($a2)
    ctx->pc = 0x280a58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x280a5c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x280a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x280a60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x280A60u;
    {
        const bool branch_taken_0x280a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280A60u;
        // 0x280a64: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280a60) {
            ctx->pc = 0x280AA4u;
            goto label_280aa4;
        }
    }
    ctx->pc = 0x280A68u;
label_280a68:
    // 0x280a68: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x280a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x280a6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x280a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x280a70: 0x8ca3bcec  lw          $v1, -0x4314($a1)
    ctx->pc = 0x280a70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x280a74: 0xac50bce4  sw          $s0, -0x431C($v0)
    ctx->pc = 0x280a74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x280a78: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x280a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x280a7c: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x280a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x280a80: 0x6ba7002f  ldl         $a3, 0x2F($sp)
    ctx->pc = 0x280a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x280a84: 0x6fa70028  ldr         $a3, 0x28($sp)
    ctx->pc = 0x280a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x280a88: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x280a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a8c: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x280a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a90: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x280a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a94: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x280a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280a98: 0x8ca4bcec  lw          $a0, -0x4314($a1)
    ctx->pc = 0x280a98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x280a9c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x280a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x280aa0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x280aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_280aa4:
    // 0x280aa4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x280aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_280aa8:
    // 0x280aa8: 0xc0a0344  jal         func_280D10
    ctx->pc = 0x280AA8u;
    SET_GPR_U32(ctx, 31, 0x280AB0u);
    ctx->pc = 0x280D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D10u, 0x280AA8u, 0x280AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AB0u;
label_280ab0:
    // 0x280ab0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280AB0u;
    {
        const bool branch_taken_0x280ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AB0u;
        // 0x280ab4: 0x2662f130  addiu       $v0, $s3, -0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ab0) {
            ctx->pc = 0x280ABCu;
            goto label_280abc;
        }
    }
    ctx->pc = 0x280AB8u;
    // 0x280ab8: 0xe455005c  swc1        $f21, 0x5C($v0)
    ctx->pc = 0x280ab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_280abc:
    // 0x280abc: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x280ABCu;
    SET_GPR_U32(ctx, 31, 0x280AC4u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x280ABCu, 0x280AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280AC4u;
label_280ac4:
    // 0x280ac4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x280ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x280ac8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x280ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x280acc: 0x2442af50  addiu       $v0, $v0, -0x50B0
    ctx->pc = 0x280accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946640));
    // 0x280ad0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x280ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x280ad4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x280ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x280ad8: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x280ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x280adc: 0x0  nop
    ctx->pc = 0x280adcu;
    // NOP
label_280ae0:
    // 0x280ae0: 0x8c62ffe8  lw          $v0, -0x18($v1)
    ctx->pc = 0x280ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967272)));
    // 0x280ae4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280AE4u;
    {
        const bool branch_taken_0x280ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AE4u;
        // 0x280ae8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ae4) {
            ctx->pc = 0x280AF8u;
            goto label_280af8;
        }
    }
    ctx->pc = 0x280AECu;
    // 0x280aec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x280aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280af4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x280af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_280af8:
    // 0x280af8: 0x481fff9  bgez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x280AF8u;
    {
        const bool branch_taken_0x280af8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x280AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280AF8u;
        // 0x280afc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280af8) {
            ctx->pc = 0x280AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280ae0;
        }
    }
    ctx->pc = 0x280B00u;
    // 0x280b00: 0x24c4b768  addiu       $a0, $a2, -0x4898
    ctx->pc = 0x280b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948712));
    // 0x280b04: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x280b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x280b08: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x280b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x280b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x280b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280b10: 0xc48007f0  lwc1        $f0, 0x7F0($a0)
    ctx->pc = 0x280b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280b14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280b18: 0x8c8207e0  lw          $v0, 0x7E0($a0)
    ctx->pc = 0x280b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
    // 0x280b1c: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x280B1Cu;
    {
        const bool branch_taken_0x280b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B1Cu;
        // 0x280b20: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b1c) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280B24u;
    // 0x280b24: 0x8c8207e8  lw          $v0, 0x7E8($a0)
    ctx->pc = 0x280b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2024)));
    // 0x280b28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x280B28u;
    {
        const bool branch_taken_0x280b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280b28) {
            ctx->pc = 0x280B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B28u;
            // 0x280b2c: 0xc48007ec  lwc1        $f0, 0x7EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B54u;
            goto label_280b54;
        }
    }
    ctx->pc = 0x280B30u;
    // 0x280b30: 0xc48107ec  lwc1        $f1, 0x7EC($a0)
    ctx->pc = 0x280b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280b38: 0x0  nop
    ctx->pc = 0x280b38u;
    // NOP
    // 0x280b3c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x280b3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280b40: 0x0  nop
    ctx->pc = 0x280b40u;
    // NOP
    // 0x280b44: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x280B44u;
    {
        const bool branch_taken_0x280b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280b44) {
            ctx->pc = 0x280B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280B44u;
            // 0x280b48: 0xc48007ec  lwc1        $f0, 0x7EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280B54u;
            goto label_280b54;
        }
    }
    ctx->pc = 0x280B4Cu;
    // 0x280b4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x280B4Cu;
    {
        const bool branch_taken_0x280b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B4Cu;
        // 0x280b50: 0xac8007e0  sw          $zero, 0x7E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b4c) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280B54u;
label_280b54:
    // 0x280b54: 0x8c8207e4  lw          $v0, 0x7E4($a0)
    ctx->pc = 0x280b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2020)));
    // 0x280b58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x280b58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x280b5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280b60: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x280b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280b64: 0xac8207e4  sw          $v0, 0x7E4($a0)
    ctx->pc = 0x280b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2020), GPR_U32(ctx, 2));
    // 0x280b68: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x280B68u;
    {
        const bool branch_taken_0x280b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B68u;
        // 0x280b6c: 0xe48007ec  swc1        $f0, 0x7EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b68) {
            ctx->pc = 0x280BACu;
            goto label_280bac;
        }
    }
    ctx->pc = 0x280B70u;
    // 0x280b70: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x280b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280b74: 0xac8007e0  sw          $zero, 0x7E0($a0)
    ctx->pc = 0x280b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2016), GPR_U32(ctx, 0));
    // 0x280b78: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x280b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280b7c: 0xac8007e4  sw          $zero, 0x7E4($a0)
    ctx->pc = 0x280b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2020), GPR_U32(ctx, 0));
    // 0x280b80: 0xac8007ec  sw          $zero, 0x7EC($a0)
    ctx->pc = 0x280b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 0));
    // 0x280b84: 0x286201f4  slti        $v0, $v1, 0x1F4
    ctx->pc = 0x280b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x280b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280B88u;
    {
        const bool branch_taken_0x280b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B88u;
        // 0x280b8c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b88) {
            ctx->pc = 0x280B98u;
            goto label_280b98;
        }
    }
    ctx->pc = 0x280B90u;
    // 0x280b90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280B90u;
    {
        const bool branch_taken_0x280b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280B90u;
        // 0x280b94: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280b90) {
            ctx->pc = 0x280BACu;
            goto label_280bac;
        }
    }
    ctx->pc = 0x280B98u;
label_280b98:
    // 0x280b98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x280b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280b9c: 0x8c8307dc  lw          $v1, 0x7DC($a0)
    ctx->pc = 0x280b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2012)));
    // 0x280ba0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280ba4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x280ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x280ba8: 0xac8307d8  sw          $v1, 0x7D8($a0)
    ctx->pc = 0x280ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2008), GPR_U32(ctx, 3));
label_280bac:
    // 0x280bac: 0x24c4b768  addiu       $a0, $a2, -0x4898
    ctx->pc = 0x280bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948712));
label_280bb0:
    // 0x280bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280bb4: 0x8c8207e0  lw          $v0, 0x7E0($a0)
    ctx->pc = 0x280bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2016)));
    // 0x280bb8: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x280BB8u;
    {
        const bool branch_taken_0x280bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x280BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BB8u;
        // 0x280bbc: 0x8ce2a314  lw          $v0, -0x5CEC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280bb8) {
            ctx->pc = 0x280C44u;
            goto label_280c44;
        }
    }
    ctx->pc = 0x280BC0u;
    // 0x280bc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x280bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280bc4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x280BC4u;
    {
        const bool branch_taken_0x280bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280bc4) {
            ctx->pc = 0x280BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280BC4u;
            // 0x280bc8: 0xc48007ec  lwc1        $f0, 0x7EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280BF0u;
            goto label_280bf0;
        }
    }
    ctx->pc = 0x280BCCu;
    // 0x280bcc: 0xc48107ec  lwc1        $f1, 0x7EC($a0)
    ctx->pc = 0x280bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x280bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280bd4: 0x0  nop
    ctx->pc = 0x280bd4u;
    // NOP
    // 0x280bd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x280bd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280bdc: 0x0  nop
    ctx->pc = 0x280bdcu;
    // NOP
    // 0x280be0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x280BE0u;
    {
        const bool branch_taken_0x280be0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x280be0) {
            ctx->pc = 0x280BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280BE0u;
            // 0x280be4: 0xc48007ec  lwc1        $f0, 0x7EC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x280BF0u;
            goto label_280bf0;
        }
    }
    ctx->pc = 0x280BE8u;
    // 0x280be8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x280BE8u;
    {
        const bool branch_taken_0x280be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280BE8u;
        // 0x280bec: 0xac8007e0  sw          $zero, 0x7E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280be8) {
            ctx->pc = 0x280C40u;
            goto label_280c40;
        }
    }
    ctx->pc = 0x280BF0u;
label_280bf0:
    // 0x280bf0: 0x8c8207e4  lw          $v0, 0x7E4($a0)
    ctx->pc = 0x280bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2020)));
    // 0x280bf4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x280bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x280bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280bfc: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x280bfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x280c00: 0xac8207e4  sw          $v0, 0x7E4($a0)
    ctx->pc = 0x280c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2020), GPR_U32(ctx, 2));
    // 0x280c04: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x280C04u;
    {
        const bool branch_taken_0x280c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C04u;
        // 0x280c08: 0xe48007ec  swc1        $f0, 0x7EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2028), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c04) {
            ctx->pc = 0x280C40u;
            goto label_280c40;
        }
    }
    ctx->pc = 0x280C0Cu;
    // 0x280c0c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x280c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280c10: 0xac8007e0  sw          $zero, 0x7E0($a0)
    ctx->pc = 0x280c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2016), GPR_U32(ctx, 0));
    // 0x280c14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x280c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x280c18: 0xac8007e4  sw          $zero, 0x7E4($a0)
    ctx->pc = 0x280c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2020), GPR_U32(ctx, 0));
    // 0x280c1c: 0xac8007ec  sw          $zero, 0x7EC($a0)
    ctx->pc = 0x280c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 0));
    // 0x280c20: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x280C20u;
    {
        const bool branch_taken_0x280c20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x280C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C20u;
        // 0x280c24: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c20) {
            ctx->pc = 0x280C2Cu;
            goto label_280c2c;
        }
    }
    ctx->pc = 0x280C28u;
    // 0x280c28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x280c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_280c2c:
    // 0x280c2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x280c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x280c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x280c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x280c34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280c38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x280c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x280c3c: 0xac8307d8  sw          $v1, 0x7D8($a0)
    ctx->pc = 0x280c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2008), GPR_U32(ctx, 3));
label_280c40:
    // 0x280c40: 0x8ce2a314  lw          $v0, -0x5CEC($a3)
    ctx->pc = 0x280c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943508)));
label_280c44:
    // 0x280c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280c48: 0xace2a314  sw          $v0, -0x5CEC($a3)
    ctx->pc = 0x280c48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943508), GPR_U32(ctx, 2));
    // 0x280c4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x280c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_280c50:
    // 0x280c50: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x280c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x280c54: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x280C54u;
    {
        const bool branch_taken_0x280c54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C54u;
        // 0x280c58: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c54) {
            ctx->pc = 0x280C9Cu;
            goto label_280c9c;
        }
    }
    ctx->pc = 0x280C5Cu;
    // 0x280c5c: 0x2444f130  addiu       $a0, $v0, -0xED0
    ctx->pc = 0x280c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x280c60: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x280c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x280c64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280C64u;
    {
        const bool branch_taken_0x280c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C64u;
        // 0x280c68: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c64) {
            ctx->pc = 0x280C78u;
            goto label_280c78;
        }
    }
    ctx->pc = 0x280C6Cu;
    // 0x280c6c: 0x8ca211c0  lw          $v0, 0x11C0($a1)
    ctx->pc = 0x280c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4544)));
    // 0x280c70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x280C70u;
    {
        const bool branch_taken_0x280c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280C70u;
        // 0x280c74: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280c70) {
            ctx->pc = 0x280C84u;
            goto label_280c84;
        }
    }
    ctx->pc = 0x280C78u;
label_280c78:
    // 0x280c78: 0x8ca211c0  lw          $v0, 0x11C0($a1)
    ctx->pc = 0x280c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4544)));
    // 0x280c7c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x280c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x280c80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x280c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_280c84:
    // 0x280c84: 0xaca211c0  sw          $v0, 0x11C0($a1)
    ctx->pc = 0x280c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4544), GPR_U32(ctx, 2));
    // 0x280c88: 0x2662f130  addiu       $v0, $s3, -0xED0
    ctx->pc = 0x280c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
    // 0x280c8c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x280c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x280c90: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x280c94: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x280c94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x280c98: 0xa083aa84  sb          $v1, -0x557C($a0)
    ctx->pc = 0x280c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294945412), (uint8_t)GPR_U32(ctx, 3));
label_280c9c:
    // 0x280c9c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x280c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x280ca0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x280ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280ca4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x280ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x280ca8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x280ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x280cac: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x280cacu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x280cb0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x280cb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x280cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280cb8: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x280cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x280cbc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x280cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x280cc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x280cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x280cc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x280cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x280cc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x280cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x280ccc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x280cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x280cd0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x280cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x280cd4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x280cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x280cd8: 0xac43a358  sw          $v1, -0x5CA8($v0)
    ctx->pc = 0x280cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943576), GPR_U32(ctx, 3));
    // 0x280cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x280CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280CDCu;
        // 0x280ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280CE4u;
    // 0x280ce4: 0x0  nop
    ctx->pc = 0x280ce4u;
    // NOP
    ctx->pc = 0x280ce8u;
}
