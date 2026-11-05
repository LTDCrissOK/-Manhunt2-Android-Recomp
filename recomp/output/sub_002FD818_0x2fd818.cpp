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

// Function: sub_002FD818
// Address: 0x2fd818 - 0x2fd988
void sub_002FD818_0x2fd818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD818_0x2fd818");
#endif

    switch (ctx->pc) {
        case 0x2fd854u: goto label_2fd854;
        case 0x2fd86cu: goto label_2fd86c;
        case 0x2fd884u: goto label_2fd884;
        case 0x2fd89cu: goto label_2fd89c;
        case 0x2fd8a8u: goto label_2fd8a8;
        case 0x2fd8b0u: goto label_2fd8b0;
        case 0x2fd8d8u: goto label_2fd8d8;
        case 0x2fd8e0u: goto label_2fd8e0;
        case 0x2fd940u: goto label_2fd940;
        case 0x2fd948u: goto label_2fd948;
        default: break;
    }

    ctx->pc = 0x2fd818u;

    // 0x2fd818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fd818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fd81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fd81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd82c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fd82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fd830: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fd830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fd834: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fd834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fd838: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2fd838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2fd83c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2fd83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2fd840: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2fd840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2fd844: 0x8e0213c4  lw          $v0, 0x13C4($s0)
    ctx->pc = 0x2fd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd848: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fd84c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD84Cu;
    SET_GPR_U32(ctx, 31, 0x2FD854u);
    ctx->pc = 0x2FD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD84Cu;
    // 0x2fd850: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD84Cu, 0x2FD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD854u;
label_2fd854:
    // 0x2fd854: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fd858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd85c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fd85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd860: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd864: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD864u;
    SET_GPR_U32(ctx, 31, 0x2FD86Cu);
    ctx->pc = 0x2FD868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD864u;
    // 0x2fd868: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD864u, 0x2FD86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD86Cu;
label_2fd86c:
    // 0x2fd86c: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd870: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fd870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fd874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd878: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2fd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fd87c: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD87Cu;
    SET_GPR_U32(ctx, 31, 0x2FD884u);
    ctx->pc = 0x2FD880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD87Cu;
    // 0x2fd880: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD87Cu, 0x2FD884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD884u;
label_2fd884:
    // 0x2fd884: 0x8e0313c4  lw          $v1, 0x13C4($s0)
    ctx->pc = 0x2fd884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd888: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fd888u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd88c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fd88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd890: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd894: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD894u;
    SET_GPR_U32(ctx, 31, 0x2FD89Cu);
    ctx->pc = 0x2FD898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD894u;
    // 0x2fd898: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD894u, 0x2FD89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD89Cu;
label_2fd89c:
    // 0x2fd89c: 0x8e0413c4  lw          $a0, 0x13C4($s0)
    ctx->pc = 0x2fd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    // 0x2fd8a0: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD8A0u;
    SET_GPR_U32(ctx, 31, 0x2FD8A8u);
    ctx->pc = 0x2FD8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8A0u;
    // 0x2fd8a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD8A0u, 0x2FD8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8A8u;
label_2fd8a8:
    // 0x2fd8a8: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD8A8u;
    SET_GPR_U32(ctx, 31, 0x2FD8B0u);
    ctx->pc = 0x2FD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8A8u;
    // 0x2fd8ac: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD8A8u, 0x2FD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8B0u;
label_2fd8b0:
    // 0x2fd8b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fd8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd8b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd8b8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2fd8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd8bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fd8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd8c0: 0x0  nop
    ctx->pc = 0x2fd8c0u;
    // NOP
    // 0x2fd8c4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x2FD8C4u;
    {
        const bool branch_taken_0x2fd8c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8C4u;
        // 0x2fd8c8: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8c4) {
            ctx->pc = 0x2FD95Cu;
            goto label_2fd95c;
        }
    }
    ctx->pc = 0x2FD8CCu;
    // 0x2fd8cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2fd8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2fd8d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fd8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fd8d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fd8d8:
    // 0x2fd8d8: 0xc0bf530  jal         func_2FD4C0
    ctx->pc = 0x2FD8D8u;
    SET_GPR_U32(ctx, 31, 0x2FD8E0u);
    ctx->pc = 0x2FD8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD8D8u;
    // 0x2fd8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD4C0u, 0x2FD8D8u, 0x2FD8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8E0u;
label_2fd8e0:
    // 0x2fd8e0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FD8E0u;
    {
        const bool branch_taken_0x2fd8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8E0u;
        // 0x2fd8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8e0) {
            ctx->pc = 0x2FD960u;
            goto label_2fd960;
        }
    }
    ctx->pc = 0x2FD8E8u;
    // 0x2fd8e8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2fd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd8ec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd8ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd8f0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd8f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd8f4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2fd8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2fd8f8: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x2fd8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2fd8fc: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x2fd8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd900: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd904: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd908: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x2fd908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x2fd90c: 0xe6810030  swc1        $f1, 0x30($s4)
    ctx->pc = 0x2fd90cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x2fd910: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2fd910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd914: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd918: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd91c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x2fd91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x2fd920: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x2fd920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x2fd924: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2fd924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd928: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd92c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd930: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2fd930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2fd934: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x2fd934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2fd938: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD938u;
    SET_GPR_U32(ctx, 31, 0x2FD940u);
    ctx->pc = 0x2FD93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD938u;
    // 0x2fd93c: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD938u, 0x2FD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD940u;
label_2fd940:
    // 0x2fd940: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD940u;
    SET_GPR_U32(ctx, 31, 0x2FD948u);
    ctx->pc = 0x2FD944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD940u;
    // 0x2fd944: 0x8e0413c4  lw          $a0, 0x13C4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD940u, 0x2FD948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD948u;
label_2fd948:
    // 0x2fd948: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2fd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd94c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2fd94cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd950: 0x0  nop
    ctx->pc = 0x2fd950u;
    // NOP
    // 0x2fd954: 0x4501ffe0  bc1t        . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FD954u;
    {
        const bool branch_taken_0x2fd954 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd954) {
            ctx->pc = 0x2FD8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd8d8;
        }
    }
    ctx->pc = 0x2FD95Cu;
label_2fd95c:
    // 0x2fd95c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd960:
    // 0x2fd960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fd968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd96c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fd96cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fd970: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fd970u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd974: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fd974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fd978: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2fd978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fd97c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2fd97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd980: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD980u;
        // 0x2fd984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD988u;
}
