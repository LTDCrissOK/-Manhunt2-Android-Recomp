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

// Function: sub_001957D8
// Address: 0x1957d8 - 0x195a70
void sub_001957D8_0x1957d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001957D8_0x1957d8");
#endif

    switch (ctx->pc) {
        case 0x195810u: goto label_195810;
        case 0x195838u: goto label_195838;
        case 0x1958e8u: goto label_1958e8;
        case 0x19591cu: goto label_19591c;
        case 0x195930u: goto label_195930;
        case 0x195990u: goto label_195990;
        case 0x1959b8u: goto label_1959b8;
        case 0x1959c0u: goto label_1959c0;
        case 0x195a18u: goto label_195a18;
        case 0x195a20u: goto label_195a20;
        default: break;
    }

    ctx->pc = 0x1957d8u;

    // 0x1957d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1957d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1957dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1957dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1957e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1957e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1957e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1957e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1957e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1957ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1957f0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1957f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1957f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1957f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957f8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1957f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1957fc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1957fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x195800: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x195800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x195804: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x195804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x195808: 0xc0414a2  jal         func_105288
    ctx->pc = 0x195808u;
    SET_GPR_U32(ctx, 31, 0x195810u);
    ctx->pc = 0x19580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195808u;
    // 0x19580c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x195808u, 0x195810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195810u;
label_195810:
    // 0x195810: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x195810u;
    {
        const bool branch_taken_0x195810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195810u;
        // 0x195814: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195810) {
            ctx->pc = 0x195A40u;
            goto label_195a40;
        }
    }
    ctx->pc = 0x195818u;
    // 0x195818: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x195818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x19581c: 0x50a20089  beql        $a1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x19581Cu;
    {
        const bool branch_taken_0x19581c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x19581c) {
            ctx->pc = 0x195820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19581Cu;
            // 0x195820: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A44u;
            goto label_195a44;
        }
    }
    ctx->pc = 0x195824u;
    // 0x195824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195828: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x195828u;
    {
        const bool branch_taken_0x195828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195828u;
        // 0x19582c: 0x2612006c  addiu       $s2, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195828) {
            ctx->pc = 0x195854u;
            goto label_195854;
        }
    }
    ctx->pc = 0x195830u;
    // 0x195830: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x195830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195834: 0x0  nop
    ctx->pc = 0x195834u;
    // NOP
label_195838:
    // 0x195838: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19583c: 0x50510081  beql        $v0, $s1, . + 4 + (0x81 << 2)
    ctx->pc = 0x19583Cu;
    {
        const bool branch_taken_0x19583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x19583c) {
            ctx->pc = 0x195840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19583Cu;
            // 0x195840: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A44u;
            goto label_195a44;
        }
    }
    ctx->pc = 0x195844u;
    // 0x195844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195848: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x195848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19584c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19584Cu;
    {
        const bool branch_taken_0x19584c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19584Cu;
        // 0x195850: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19584c) {
            ctx->pc = 0x195838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195838;
        }
    }
    ctx->pc = 0x195854u;
label_195854:
    // 0x195854: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x195858: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x19585c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195860: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x195864: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x195864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x195868: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x19586c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19586Cu;
    {
        const bool branch_taken_0x19586c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x195870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19586Cu;
        // 0x195870: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19586c) {
            ctx->pc = 0x195888u;
            goto label_195888;
        }
    }
    ctx->pc = 0x195874u;
    // 0x195874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195878: 0x0  nop
    ctx->pc = 0x195878u;
    // NOP
    // 0x19587c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19587cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195880u;
    {
        const bool branch_taken_0x195880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195880) {
            ctx->pc = 0x1958A4u;
            goto label_1958a4;
        }
    }
    ctx->pc = 0x195888u;
label_195888:
    // 0x195888: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19588c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195890: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195898: 0x0  nop
    ctx->pc = 0x195898u;
    // NOP
    // 0x19589c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19589cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1958a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1958a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1958a4:
    // 0x1958a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1958a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1958a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1958ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1958acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1958b0: 0x2603008c  addiu       $v1, $s0, 0x8C
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1958b4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1958b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1958b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1958bc: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1958bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958c0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1958c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1958c4: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x1958c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1958c8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1958cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1958ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1958d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1958d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1958d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1958dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1958dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1958e0: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x1958E0u;
    SET_GPR_U32(ctx, 31, 0x1958E8u);
    ctx->pc = 0x1958E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958E0u;
    // 0x1958e4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x1958E0u, 0x1958E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E8u;
label_1958e8:
    // 0x1958e8: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1958e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1958ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1958ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1958f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1958f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1958f4: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1958F4u;
    {
        const bool branch_taken_0x1958f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1958F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F4u;
        // 0x1958f8: 0xae0300ac  sw          $v1, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f4) {
            ctx->pc = 0x195A40u;
            goto label_195a40;
        }
    }
    ctx->pc = 0x1958FCu;
    // 0x1958fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1958fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195900: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x195900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x195904: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x195904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x195908: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x195908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19590c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x195910: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x195914: 0xc0414b2  jal         func_1052C8
    ctx->pc = 0x195914u;
    SET_GPR_U32(ctx, 31, 0x19591Cu);
    ctx->pc = 0x195918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195914u;
    // 0x195918: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052C8u, 0x195914u, 0x19591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19591Cu;
label_19591c:
    // 0x19591c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x19591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195920: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195924: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x195924u;
    {
        const bool branch_taken_0x195924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195924u;
        // 0x195928: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195924) {
            ctx->pc = 0x1959D8u;
            goto label_1959d8;
        }
    }
    ctx->pc = 0x19592Cu;
    // 0x19592c: 0x0  nop
    ctx->pc = 0x19592cu;
    // NOP
label_195930:
    // 0x195930: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195934: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x195938: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x195938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19593c: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x19593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
    // 0x195940: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x195940u;
    {
        const bool branch_taken_0x195940 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x195944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195940u;
        // 0x195944: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195940) {
            ctx->pc = 0x19595Cu;
            goto label_19595c;
        }
    }
    ctx->pc = 0x195948u;
    // 0x195948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19594c: 0x0  nop
    ctx->pc = 0x19594cu;
    // NOP
    // 0x195950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195954u;
    {
        const bool branch_taken_0x195954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195954u;
        // 0x195958: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195954) {
            ctx->pc = 0x195978u;
            goto label_195978;
        }
    }
    ctx->pc = 0x19595Cu;
label_19595c:
    // 0x19595c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195960: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195968: 0x0  nop
    ctx->pc = 0x195968u;
    // NOP
    // 0x19596c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19596cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195970: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x195970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x195974: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_195978:
    // 0x195978: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x195978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19597c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195980: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195984: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x195988: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x195988u;
    SET_GPR_U32(ctx, 31, 0x195990u);
    ctx->pc = 0x19598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195988u;
    // 0x19598c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x195988u, 0x195990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195990u;
label_195990:
    // 0x195990: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x195994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x195998: 0x1475000f  bne         $v1, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x195998u;
    {
        const bool branch_taken_0x195998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x19599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195998u;
        // 0x19599c: 0xae0300ac  sw          $v1, 0xAC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195998) {
            ctx->pc = 0x1959D8u;
            goto label_1959d8;
        }
    }
    ctx->pc = 0x1959A0u;
    // 0x1959a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1959a4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1959a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959a8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1959A8u;
    {
        const bool branch_taken_0x1959a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A8u;
        // 0x1959ac: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959a8) {
            ctx->pc = 0x195A30u;
            goto label_195a30;
        }
    }
    ctx->pc = 0x1959B0u;
    // 0x1959b0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1959b4: 0x0  nop
    ctx->pc = 0x1959b4u;
    // NOP
label_1959b8:
    // 0x1959b8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1959B8u;
    SET_GPR_U32(ctx, 31, 0x1959C0u);
    ctx->pc = 0x1959BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959B8u;
    // 0x1959bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1959B8u, 0x1959C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959C0u;
label_1959c0:
    // 0x1959c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1959c4: 0x0  nop
    ctx->pc = 0x1959c4u;
    // NOP
    // 0x1959c8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1959C8u;
    {
        const bool branch_taken_0x1959c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1959c8) {
            ctx->pc = 0x1959CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1959C8u;
            // 0x1959cc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1959B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1959b8;
        }
    }
    ctx->pc = 0x1959D0u;
    // 0x1959d0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1959D0u;
    {
        const bool branch_taken_0x1959d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D0u;
        // 0x1959d4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959d0) {
            ctx->pc = 0x195A34u;
            goto label_195a34;
        }
    }
    ctx->pc = 0x1959D8u;
label_1959d8:
    // 0x1959d8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1959d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1959dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1959DCu;
    {
        const bool branch_taken_0x1959dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959DCu;
        // 0x1959e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959dc) {
            ctx->pc = 0x1959E8u;
            goto label_1959e8;
        }
    }
    ctx->pc = 0x1959E4u;
    // 0x1959e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1959e8:
    // 0x1959e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1959e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1959ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1959ECu;
    {
        const bool branch_taken_0x1959ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1959ec) {
            ctx->pc = 0x1959FCu;
            goto label_1959fc;
        }
    }
    ctx->pc = 0x1959F4u;
    // 0x1959f4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1959f8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1959f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1959fc:
    // 0x1959fc: 0x54a0ffcc  bnel        $a1, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1959FCu;
    {
        const bool branch_taken_0x1959fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1959fc) {
            ctx->pc = 0x195A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1959FCu;
            // 0x195a00: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195930;
        }
    }
    ctx->pc = 0x195A04u;
    // 0x195a04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x195a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x195a08: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x195a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195a0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x195A0Cu;
    {
        const bool branch_taken_0x195a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A0Cu;
        // 0x195a10: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a0c) {
            ctx->pc = 0x195A30u;
            goto label_195a30;
        }
    }
    ctx->pc = 0x195A14u;
    // 0x195a14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x195a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_195a18:
    // 0x195a18: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x195A18u;
    SET_GPR_U32(ctx, 31, 0x195A20u);
    ctx->pc = 0x195A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A18u;
    // 0x195a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x195A18u, 0x195A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A20u;
label_195a20:
    // 0x195a20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195a24: 0x0  nop
    ctx->pc = 0x195a24u;
    // NOP
    // 0x195a28: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x195A28u;
    {
        const bool branch_taken_0x195a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a28) {
            ctx->pc = 0x195A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195A28u;
            // 0x195a2c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195a18;
        }
    }
    ctx->pc = 0x195A30u;
label_195a30:
    // 0x195a30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x195a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_195a34:
    // 0x195a34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x195a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x195a38: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x195a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x195a3c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x195a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_195a40:
    // 0x195a40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x195a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_195a44:
    // 0x195a44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x195a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195a48: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x195a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195a4c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x195a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x195a50: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x195a50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195a54: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x195a54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x195a58: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x195a58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195a5c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x195a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x195a60: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x195a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195a64: 0x3e00008  jr          $ra
    ctx->pc = 0x195A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A64u;
        // 0x195a68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A6Cu;
    // 0x195a6c: 0x0  nop
    ctx->pc = 0x195a6cu;
    // NOP
    ctx->pc = 0x195a70u;
}
