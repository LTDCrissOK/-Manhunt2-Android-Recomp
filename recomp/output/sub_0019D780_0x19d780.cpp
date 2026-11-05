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

// Function: sub_0019D780
// Address: 0x19d780 - 0x19d888
void sub_0019D780_0x19d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D780_0x19d780");
#endif

    switch (ctx->pc) {
        case 0x19d780u: goto label_19d780;
        case 0x19d784u: goto label_19d784;
        case 0x19d788u: goto label_19d788;
        case 0x19d78cu: goto label_19d78c;
        case 0x19d790u: goto label_19d790;
        case 0x19d794u: goto label_19d794;
        case 0x19d798u: goto label_19d798;
        case 0x19d79cu: goto label_19d79c;
        case 0x19d7a0u: goto label_19d7a0;
        case 0x19d7a4u: goto label_19d7a4;
        case 0x19d7a8u: goto label_19d7a8;
        case 0x19d7acu: goto label_19d7ac;
        case 0x19d7b0u: goto label_19d7b0;
        case 0x19d7b4u: goto label_19d7b4;
        case 0x19d7b8u: goto label_19d7b8;
        case 0x19d7bcu: goto label_19d7bc;
        case 0x19d7c0u: goto label_19d7c0;
        case 0x19d7c4u: goto label_19d7c4;
        case 0x19d7c8u: goto label_19d7c8;
        case 0x19d7ccu: goto label_19d7cc;
        case 0x19d7d0u: goto label_19d7d0;
        case 0x19d7d4u: goto label_19d7d4;
        case 0x19d7d8u: goto label_19d7d8;
        case 0x19d7dcu: goto label_19d7dc;
        case 0x19d7e0u: goto label_19d7e0;
        case 0x19d7e4u: goto label_19d7e4;
        case 0x19d7e8u: goto label_19d7e8;
        case 0x19d7ecu: goto label_19d7ec;
        case 0x19d7f0u: goto label_19d7f0;
        case 0x19d7f4u: goto label_19d7f4;
        case 0x19d7f8u: goto label_19d7f8;
        case 0x19d7fcu: goto label_19d7fc;
        case 0x19d800u: goto label_19d800;
        case 0x19d804u: goto label_19d804;
        case 0x19d808u: goto label_19d808;
        case 0x19d80cu: goto label_19d80c;
        case 0x19d810u: goto label_19d810;
        case 0x19d814u: goto label_19d814;
        case 0x19d818u: goto label_19d818;
        case 0x19d81cu: goto label_19d81c;
        case 0x19d820u: goto label_19d820;
        case 0x19d824u: goto label_19d824;
        case 0x19d828u: goto label_19d828;
        case 0x19d82cu: goto label_19d82c;
        case 0x19d830u: goto label_19d830;
        case 0x19d834u: goto label_19d834;
        case 0x19d838u: goto label_19d838;
        case 0x19d83cu: goto label_19d83c;
        case 0x19d840u: goto label_19d840;
        case 0x19d844u: goto label_19d844;
        case 0x19d848u: goto label_19d848;
        case 0x19d84cu: goto label_19d84c;
        case 0x19d850u: goto label_19d850;
        case 0x19d854u: goto label_19d854;
        case 0x19d858u: goto label_19d858;
        case 0x19d85cu: goto label_19d85c;
        case 0x19d860u: goto label_19d860;
        case 0x19d864u: goto label_19d864;
        case 0x19d868u: goto label_19d868;
        case 0x19d86cu: goto label_19d86c;
        case 0x19d870u: goto label_19d870;
        case 0x19d874u: goto label_19d874;
        case 0x19d878u: goto label_19d878;
        case 0x19d87cu: goto label_19d87c;
        case 0x19d880u: goto label_19d880;
        case 0x19d884u: goto label_19d884;
        default: break;
    }

    ctx->pc = 0x19d780u;

label_19d780:
    // 0x19d780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19d784:
    // 0x19d784: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x19d784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19d788:
    // 0x19d788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19d78c:
    // 0x19d78c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19d790:
    // 0x19d790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19d794:
    // 0x19d794: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19d794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19d798:
    // 0x19d798: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19d798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19d79c:
    // 0x19d79c: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19d79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19d7a0:
    // 0x19d7a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19d7a4:
    // 0x19d7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19d7a8:
    // 0x19d7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d7ac:
    // 0x19d7ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19d7b0:
    // 0x19d7b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19d7b4:
    // 0x19d7b4: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19d7b8:
    // 0x19d7b8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x19d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_19d7bc:
    // 0x19d7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d7c0:
    // 0x19d7c0: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x19d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_19d7c4:
    // 0x19d7c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19d7c8:
    // 0x19d7c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19d7cc:
    if (ctx->pc == 0x19D7CCu) {
        ctx->pc = 0x19D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7C8u;
        // 0x19d7cc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7D0u;
        goto label_19d7d0;
    }
    ctx->pc = 0x19D7C8u;
    {
        const bool branch_taken_0x19d7c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d7c8) {
            ctx->pc = 0x19D7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D7C8u;
            // 0x19d7cc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D7E4u;
            goto label_19d7e4;
        }
    }
    ctx->pc = 0x19D7D0u;
label_19d7d0:
    // 0x19d7d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19d7d4:
    // 0x19d7d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19d7d8:
    // 0x19d7d8: 0x40f809  jalr        $v0
label_19d7dc:
    if (ctx->pc == 0x19D7DCu) {
        ctx->pc = 0x19D7E0u;
        goto label_19d7e0;
    }
    ctx->pc = 0x19D7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D7E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7D8u, 0x19D7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D7E0u;
label_19d7e0:
    // 0x19d7e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19d7e4:
    // 0x19d7e4: 0xc061a12  jal         func_186848
label_19d7e8:
    if (ctx->pc == 0x19D7E8u) {
        ctx->pc = 0x19D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7E4u;
        // 0x19d7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D7ECu;
        goto label_19d7ec;
    }
    ctx->pc = 0x19D7E4u;
    SET_GPR_U32(ctx, 31, 0x19D7ECu);
    ctx->pc = 0x19D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7E4u;
    // 0x19d7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19D7E4u, 0x19D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7ECu;
label_19d7ec:
    // 0x19d7ec: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19d7f0:
    // 0x19d7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d7f4:
    // 0x19d7f4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19d7f8:
    // 0x19d7f8: 0x40f809  jalr        $v0
label_19d7fc:
    if (ctx->pc == 0x19D7FCu) {
        ctx->pc = 0x19D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7F8u;
        // 0x19d7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D800u;
        goto label_19d800;
    }
    ctx->pc = 0x19D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D800u);
        ctx->pc = 0x19D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7F8u;
        // 0x19d7fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7F8u, 0x19D800u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D800u;
label_19d800:
    // 0x19d800: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x19d800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_19d804:
    // 0x19d804: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x19d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_19d808:
    // 0x19d808: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19d80c:
    if (ctx->pc == 0x19D80Cu) {
        ctx->pc = 0x19D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D808u;
        // 0x19d80c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D810u;
        goto label_19d810;
    }
    ctx->pc = 0x19D808u;
    {
        const bool branch_taken_0x19d808 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D808u;
        // 0x19d80c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d808) {
            ctx->pc = 0x19D824u;
            goto label_19d824;
        }
    }
    ctx->pc = 0x19D810u;
label_19d810:
    // 0x19d810: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d814:
    // 0x19d814: 0x0  nop
    ctx->pc = 0x19d814u;
    // NOP
label_19d818:
    // 0x19d818: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d81c:
    // 0x19d81c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19d820:
    if (ctx->pc == 0x19D820u) {
        ctx->pc = 0x19D824u;
        goto label_19d824;
    }
    ctx->pc = 0x19D81Cu;
    {
        const bool branch_taken_0x19d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d81c) {
            ctx->pc = 0x19D83Cu;
            goto label_19d83c;
        }
    }
    ctx->pc = 0x19D824u;
label_19d824:
    // 0x19d824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19d824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19d828:
    // 0x19d828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19d82c:
    // 0x19d82c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19d830:
    // 0x19d830: 0x0  nop
    ctx->pc = 0x19d830u;
    // NOP
label_19d834:
    // 0x19d834: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19d834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19d838:
    // 0x19d838: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19d838u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19d83c:
    // 0x19d83c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19d83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19d840:
    // 0x19d840: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19d840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19d844:
    // 0x19d844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d848:
    // 0x19d848: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x19d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19d84c:
    // 0x19d84c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x19d84cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19d850:
    // 0x19d850: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x19d850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19d854:
    // 0x19d854: 0x0  nop
    ctx->pc = 0x19d854u;
    // NOP
label_19d858:
    // 0x19d858: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_19d85c:
    if (ctx->pc == 0x19D85Cu) {
        ctx->pc = 0x19D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D858u;
        // 0x19d85c: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D860u;
        goto label_19d860;
    }
    ctx->pc = 0x19D858u;
    {
        const bool branch_taken_0x19d858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19d858) {
            ctx->pc = 0x19D85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D858u;
            // 0x19d85c: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D878u;
            goto label_19d878;
        }
    }
    ctx->pc = 0x19D860u;
label_19d860:
    // 0x19d860: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19d860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_19d864:
    // 0x19d864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19d864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19d868:
    // 0x19d868: 0x0  nop
    ctx->pc = 0x19d868u;
    // NOP
label_19d86c:
    // 0x19d86c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x19d86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_19d870:
    // 0x19d870: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x19d870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_19d874:
    // 0x19d874: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x19d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_19d878:
    // 0x19d878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d87c:
    // 0x19d87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19d880:
    // 0x19d880: 0x3e00008  jr          $ra
label_19d884:
    if (ctx->pc == 0x19D884u) {
        ctx->pc = 0x19D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D880u;
        // 0x19d884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D888u;
        goto label_fallthrough_0x19d880;
    }
    ctx->pc = 0x19D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D880u;
        // 0x19d884: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19d880:
    ctx->pc = 0x19D888u;
}
