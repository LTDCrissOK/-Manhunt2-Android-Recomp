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

// Function: sub_003907A8
// Address: 0x3907a8 - 0x390cb0
void sub_003907A8_0x3907a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003907A8_0x3907a8");
#endif

    switch (ctx->pc) {
        case 0x3907e0u: goto label_3907e0;
        case 0x3907f8u: goto label_3907f8;
        case 0x390808u: goto label_390808;
        case 0x390840u: goto label_390840;
        case 0x39084cu: goto label_39084c;
        case 0x390858u: goto label_390858;
        case 0x390868u: goto label_390868;
        case 0x390880u: goto label_390880;
        case 0x390890u: goto label_390890;
        case 0x3908d4u: goto label_3908d4;
        case 0x3908e0u: goto label_3908e0;
        case 0x3908f8u: goto label_3908f8;
        case 0x390908u: goto label_390908;
        case 0x390918u: goto label_390918;
        case 0x39094cu: goto label_39094c;
        case 0x390958u: goto label_390958;
        case 0x39097cu: goto label_39097c;
        case 0x390998u: goto label_390998;
        case 0x3909a8u: goto label_3909a8;
        case 0x3909b8u: goto label_3909b8;
        case 0x3909c8u: goto label_3909c8;
        case 0x3909d8u: goto label_3909d8;
        case 0x3909e8u: goto label_3909e8;
        case 0x390a0cu: goto label_390a0c;
        case 0x390a18u: goto label_390a18;
        case 0x390a50u: goto label_390a50;
        case 0x390a60u: goto label_390a60;
        case 0x390a84u: goto label_390a84;
        case 0x390a90u: goto label_390a90;
        case 0x390aacu: goto label_390aac;
        case 0x390abcu: goto label_390abc;
        case 0x390ac4u: goto label_390ac4;
        case 0x390ad0u: goto label_390ad0;
        case 0x390adcu: goto label_390adc;
        case 0x390aecu: goto label_390aec;
        case 0x390af4u: goto label_390af4;
        case 0x390b00u: goto label_390b00;
        case 0x390b0cu: goto label_390b0c;
        case 0x390b3cu: goto label_390b3c;
        case 0x390b4cu: goto label_390b4c;
        case 0x390b54u: goto label_390b54;
        case 0x390b60u: goto label_390b60;
        case 0x390b6cu: goto label_390b6c;
        case 0x390b7cu: goto label_390b7c;
        case 0x390b84u: goto label_390b84;
        case 0x390b90u: goto label_390b90;
        case 0x390b9cu: goto label_390b9c;
        case 0x390bacu: goto label_390bac;
        case 0x390bd8u: goto label_390bd8;
        case 0x390be8u: goto label_390be8;
        case 0x390c0cu: goto label_390c0c;
        case 0x390c18u: goto label_390c18;
        case 0x390c3cu: goto label_390c3c;
        case 0x390c4cu: goto label_390c4c;
        case 0x390c68u: goto label_390c68;
        case 0x390c78u: goto label_390c78;
        default: break;
    }

    ctx->pc = 0x3907a8u;

    // 0x3907a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3907a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3907ac: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x3907acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3907b0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3907b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3907b4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3907b4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3907b8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3907b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3907bc: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x3907bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x3907c0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3907c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3907c4: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x3907c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3907c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3907c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3907cc: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x3907ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x3907d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3907d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3907d4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3907d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3907d8: 0xc0e4742  jal         func_391D08
    ctx->pc = 0x3907D8u;
    SET_GPR_U32(ctx, 31, 0x3907E0u);
    ctx->pc = 0x3907DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907D8u;
    // 0x3907dc: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D08u, 0x3907D8u, 0x3907E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907E0u;
label_3907e0:
    // 0x3907e0: 0x8e70a478  lw          $s0, -0x5B88($s3)
    ctx->pc = 0x3907e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x3907e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3907e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3907e8: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x3907E8u;
    {
        const bool branch_taken_0x3907e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3907ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907E8u;
        // 0x3907ec: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907e8) {
            ctx->pc = 0x390C80u;
            goto label_390c80;
        }
    }
    ctx->pc = 0x3907F0u;
    // 0x3907f0: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x3907F0u;
    SET_GPR_U32(ctx, 31, 0x3907F8u);
    ctx->pc = 0x3907F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3907F0u;
    // 0x3907f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x3907F0u, 0x3907F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3907F8u;
label_3907f8:
    // 0x3907f8: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x3907F8u;
    {
        const bool branch_taken_0x3907f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3907FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3907F8u;
        // 0x3907fc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3907f8) {
            ctx->pc = 0x390C84u;
            goto label_390c84;
        }
    }
    ctx->pc = 0x390800u;
    // 0x390800: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x390800u;
    SET_GPR_U32(ctx, 31, 0x390808u);
    ctx->pc = 0x390804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390800u;
    // 0x390804: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x390800u, 0x390808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390808u;
label_390808:
    // 0x390808: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x390808u;
    {
        const bool branch_taken_0x390808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390808) {
            ctx->pc = 0x390898u;
            goto label_390898;
        }
    }
    ctx->pc = 0x390810u;
    // 0x390810: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390810u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x390814: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x390814u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390818: 0x0  nop
    ctx->pc = 0x390818u;
    // NOP
    // 0x39081c: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x39081Cu;
    {
        const bool branch_taken_0x39081c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x390820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39081Cu;
        // 0x390820: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39081c) {
            ctx->pc = 0x390C80u;
            goto label_390c80;
        }
    }
    ctx->pc = 0x390824u;
    // 0x390824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390828: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x390828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x39082c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x39082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x390830: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390834: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x390834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x390838: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390838u;
    SET_GPR_U32(ctx, 31, 0x390840u);
    ctx->pc = 0x39083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390838u;
    // 0x39083c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390838u, 0x390840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390840u;
label_390840:
    // 0x390840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390844: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390844u;
    SET_GPR_U32(ctx, 31, 0x39084Cu);
    ctx->pc = 0x390848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390844u;
    // 0x390848: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390844u, 0x39084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39084Cu;
label_39084c:
    // 0x39084c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x39084cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x390850: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390850u;
    SET_GPR_U32(ctx, 31, 0x390858u);
    ctx->pc = 0x390854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390850u;
    // 0x390854: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390850u, 0x390858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390858u;
label_390858:
    // 0x390858: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x390858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x39085c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390860: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390860u;
    {
        const bool branch_taken_0x390860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x390860) {
            ctx->pc = 0x390878u;
            goto label_390878;
        }
    }
    ctx->pc = 0x390868u;
label_390868:
    // 0x390868: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x390868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x39086c: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x39086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x390870: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x390870u;
    {
        const bool branch_taken_0x390870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390870u;
        // 0x390874: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390870) {
            ctx->pc = 0x390C54u;
            goto label_390c54;
        }
    }
    ctx->pc = 0x390878u;
label_390878:
    // 0x390878: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390878u;
    SET_GPR_U32(ctx, 31, 0x390880u);
    ctx->pc = 0x39087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390878u;
    // 0x39087c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390878u, 0x390880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390880u;
label_390880:
    // 0x390880: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x390880u;
    {
        const bool branch_taken_0x390880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390880u;
        // 0x390884: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390880) {
            ctx->pc = 0x390C58u;
            goto label_390c58;
        }
    }
    ctx->pc = 0x390888u;
    // 0x390888: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390888u;
    SET_GPR_U32(ctx, 31, 0x390890u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390888u, 0x390890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390890u;
label_390890:
    // 0x390890: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x390890u;
    {
        const bool branch_taken_0x390890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390890u;
        // 0x390894: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390890) {
            ctx->pc = 0x390C50u;
            goto label_390c50;
        }
    }
    ctx->pc = 0x390898u;
label_390898:
    // 0x390898: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x390898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x39089c: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x39089cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3908a0: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x3908A0u;
    {
        const bool branch_taken_0x3908a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3908a0) {
            ctx->pc = 0x3909B0u;
            goto label_3909b0;
        }
    }
    ctx->pc = 0x3908A8u;
    // 0x3908a8: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x3908a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3908ac: 0x0  nop
    ctx->pc = 0x3908acu;
    // NOP
    // 0x3908b0: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3908B0u;
    {
        const bool branch_taken_0x3908b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3908B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908B0u;
        // 0x3908b4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908b0) {
            ctx->pc = 0x390910u;
            goto label_390910;
        }
    }
    ctx->pc = 0x3908B8u;
    // 0x3908b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3908b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3908bc: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x3908bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x3908c0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3908c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3908c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3908c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3908c8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3908c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3908cc: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3908CCu;
    SET_GPR_U32(ctx, 31, 0x3908D4u);
    ctx->pc = 0x3908D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908CCu;
    // 0x3908d0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3908CCu, 0x3908D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908D4u;
label_3908d4:
    // 0x3908d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3908d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3908d8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3908D8u;
    SET_GPR_U32(ctx, 31, 0x3908E0u);
    ctx->pc = 0x3908DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908D8u;
    // 0x3908dc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3908D8u, 0x3908E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908E0u;
label_3908e0:
    // 0x3908e0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3908e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3908e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3908e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3908e8: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3908E8u;
    {
        const bool branch_taken_0x3908e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3908ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908E8u;
        // 0x3908ec: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908e8) {
            ctx->pc = 0x390868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390868;
        }
    }
    ctx->pc = 0x3908F0u;
    // 0x3908f0: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x3908F0u;
    SET_GPR_U32(ctx, 31, 0x3908F8u);
    ctx->pc = 0x3908F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3908F0u;
    // 0x3908f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x3908F0u, 0x3908F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3908F8u;
label_3908f8:
    // 0x3908f8: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x3908F8u;
    {
        const bool branch_taken_0x3908f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3908FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3908F8u;
        // 0x3908fc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3908f8) {
            ctx->pc = 0x390C58u;
            goto label_390c58;
        }
    }
    ctx->pc = 0x390900u;
    // 0x390900: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390900u;
    SET_GPR_U32(ctx, 31, 0x390908u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390900u, 0x390908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390908u;
label_390908:
    // 0x390908: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x390908u;
    {
        const bool branch_taken_0x390908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390908u;
        // 0x39090c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390908) {
            ctx->pc = 0x390C50u;
            goto label_390c50;
        }
    }
    ctx->pc = 0x390910u;
label_390910:
    // 0x390910: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x390910u;
    SET_GPR_U32(ctx, 31, 0x390918u);
    ctx->pc = 0x390914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390910u;
    // 0x390914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x390910u, 0x390918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390918u;
label_390918:
    // 0x390918: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x390918u;
    {
        const bool branch_taken_0x390918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390918u;
        // 0x39091c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390918) {
            ctx->pc = 0x390C84u;
            goto label_390c84;
        }
    }
    ctx->pc = 0x390920u;
    // 0x390920: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x390920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390924: 0x0  nop
    ctx->pc = 0x390924u;
    // NOP
    // 0x390928: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x390928u;
    {
        const bool branch_taken_0x390928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390928u;
        // 0x39092c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390928) {
            ctx->pc = 0x390C84u;
            goto label_390c84;
        }
    }
    ctx->pc = 0x390930u;
    // 0x390930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x390930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390934: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x390934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x390938: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x39093c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x39093cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390940: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x390940u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x390944: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390944u;
    SET_GPR_U32(ctx, 31, 0x39094Cu);
    ctx->pc = 0x390948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390944u;
    // 0x390948: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390944u, 0x39094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39094Cu;
label_39094c:
    // 0x39094c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x39094cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390950: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390950u;
    SET_GPR_U32(ctx, 31, 0x390958u);
    ctx->pc = 0x390954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390950u;
    // 0x390954: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390950u, 0x390958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390958u;
label_390958:
    // 0x390958: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390958u;
    {
        const bool branch_taken_0x390958 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390958u;
        // 0x39095c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390958) {
            ctx->pc = 0x39096Cu;
            goto label_39096c;
        }
    }
    ctx->pc = 0x390960u;
    // 0x390960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x390964u;
    {
        const bool branch_taken_0x390964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390964u;
        // 0x390968: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390964) {
            ctx->pc = 0x390980u;
            goto label_390980;
        }
    }
    ctx->pc = 0x39096Cu;
label_39096c:
    // 0x39096c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x39096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390974: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390974u;
    SET_GPR_U32(ctx, 31, 0x39097Cu);
    ctx->pc = 0x390978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390974u;
    // 0x390978: 0xdc45a470  ld          $a1, -0x5B90($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294943856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390974u, 0x39097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39097Cu;
label_39097c:
    // 0x39097c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x39097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_390980:
    // 0x390980: 0x8e63a478  lw          $v1, -0x5B88($s3)
    ctx->pc = 0x390980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x390984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390988: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390988u;
    {
        const bool branch_taken_0x390988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390988) {
            ctx->pc = 0x3909A0u;
            goto label_3909a0;
        }
    }
    ctx->pc = 0x390990u;
    // 0x390990: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390990u;
    SET_GPR_U32(ctx, 31, 0x390998u);
    ctx->pc = 0x390994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390990u;
    // 0x390994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390990u, 0x390998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390998u;
label_390998:
    // 0x390998: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x390998u;
    {
        const bool branch_taken_0x390998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390998u;
        // 0x39099c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390998) {
            ctx->pc = 0x390C58u;
            goto label_390c58;
        }
    }
    ctx->pc = 0x3909A0u;
label_3909a0:
    // 0x3909a0: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3909A0u;
    SET_GPR_U32(ctx, 31, 0x3909A8u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3909A0u, 0x3909A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909A8u;
label_3909a8:
    // 0x3909a8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3909A8u;
    {
        const bool branch_taken_0x3909a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909A8u;
        // 0x3909ac: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909a8) {
            ctx->pc = 0x390C50u;
            goto label_390c50;
        }
    }
    ctx->pc = 0x3909B0u;
label_3909b0:
    // 0x3909b0: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x3909B0u;
    SET_GPR_U32(ctx, 31, 0x3909B8u);
    ctx->pc = 0x3909B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909B0u;
    // 0x3909b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x3909B0u, 0x3909B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909B8u;
label_3909b8:
    // 0x3909b8: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3909B8u;
    {
        const bool branch_taken_0x3909b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3909b8) {
            ctx->pc = 0x390BBCu;
            goto label_390bbc;
        }
    }
    ctx->pc = 0x3909C0u;
    // 0x3909c0: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x3909C0u;
    SET_GPR_U32(ctx, 31, 0x3909C8u);
    ctx->pc = 0x3909C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909C0u;
    // 0x3909c4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x3909C0u, 0x3909C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909C8u;
label_3909c8:
    // 0x3909c8: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3909C8u;
    {
        const bool branch_taken_0x3909c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3909c8) {
            ctx->pc = 0x390BBCu;
            goto label_390bbc;
        }
    }
    ctx->pc = 0x3909D0u;
    // 0x3909d0: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x3909D0u;
    SET_GPR_U32(ctx, 31, 0x3909D8u);
    ctx->pc = 0x3909D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909D0u;
    // 0x3909d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x3909D0u, 0x3909D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909D8u;
label_3909d8:
    // 0x3909d8: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3909D8u;
    {
        const bool branch_taken_0x3909d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3909d8) {
            ctx->pc = 0x390BBCu;
            goto label_390bbc;
        }
    }
    ctx->pc = 0x3909E0u;
    // 0x3909e0: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x3909E0u;
    SET_GPR_U32(ctx, 31, 0x3909E8u);
    ctx->pc = 0x3909E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3909E0u;
    // 0x3909e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x3909E0u, 0x3909E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3909E8u;
label_3909e8:
    // 0x3909e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3909E8u;
    {
        const bool branch_taken_0x3909e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3909ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909E8u;
        // 0x3909ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3909e8) {
            ctx->pc = 0x390A68u;
            goto label_390a68;
        }
    }
    ctx->pc = 0x3909F0u;
    // 0x3909f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3909f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3909f4: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x3909f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x3909f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3909f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3909fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3909fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390a00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x390a00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x390a04: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390A04u;
    SET_GPR_U32(ctx, 31, 0x390A0Cu);
    ctx->pc = 0x390A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A04u;
    // 0x390a08: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390A04u, 0x390A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A0Cu;
label_390a0c:
    // 0x390a0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390a10: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390A10u;
    SET_GPR_U32(ctx, 31, 0x390A18u);
    ctx->pc = 0x390A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A10u;
    // 0x390a14: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390A10u, 0x390A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A18u;
label_390a18:
    // 0x390a18: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390A18u;
    {
        const bool branch_taken_0x390a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A18u;
        // 0x390a1c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a18) {
            ctx->pc = 0x390A2Cu;
            goto label_390a2c;
        }
    }
    ctx->pc = 0x390A20u;
    // 0x390a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x390a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390A24u;
    {
        const bool branch_taken_0x390a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A24u;
        // 0x390a28: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a24) {
            ctx->pc = 0x390A38u;
            goto label_390a38;
        }
    }
    ctx->pc = 0x390A2Cu;
label_390a2c:
    // 0x390a2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390a30: 0xdc439948  ld          $v1, -0x66B8($v0)
    ctx->pc = 0x390a30u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x479948u));
    // 0x390a34: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x390a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_390a38:
    // 0x390a38: 0x8e63a478  lw          $v1, -0x5B88($s3)
    ctx->pc = 0x390a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x390a3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390a40: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390A40u;
    {
        const bool branch_taken_0x390a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390a40) {
            ctx->pc = 0x390A58u;
            goto label_390a58;
        }
    }
    ctx->pc = 0x390A48u;
    // 0x390a48: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390A48u;
    SET_GPR_U32(ctx, 31, 0x390A50u);
    ctx->pc = 0x390A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A48u;
    // 0x390a4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390A48u, 0x390A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A50u;
label_390a50:
    // 0x390a50: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x390A50u;
    {
        const bool branch_taken_0x390a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A50u;
        // 0x390a54: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a50) {
            ctx->pc = 0x390C58u;
            goto label_390c58;
        }
    }
    ctx->pc = 0x390A58u;
label_390a58:
    // 0x390a58: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390A58u;
    SET_GPR_U32(ctx, 31, 0x390A60u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390A58u, 0x390A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A60u;
label_390a60:
    // 0x390a60: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x390A60u;
    {
        const bool branch_taken_0x390a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A60u;
        // 0x390a64: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a60) {
            ctx->pc = 0x390C50u;
            goto label_390c50;
        }
    }
    ctx->pc = 0x390A68u;
label_390a68:
    // 0x390a68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x390a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x390a6c: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x390a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x390a70: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x390a74: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390a78: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x390a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x390a7c: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390A7Cu;
    SET_GPR_U32(ctx, 31, 0x390A84u);
    ctx->pc = 0x390A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A7Cu;
    // 0x390a80: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390A7Cu, 0x390A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A84u;
label_390a84:
    // 0x390a84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390a84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390a88: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390A88u;
    SET_GPR_U32(ctx, 31, 0x390A90u);
    ctx->pc = 0x390A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390A88u;
    // 0x390a8c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390A88u, 0x390A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390A90u;
label_390a90:
    // 0x390a90: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x390A90u;
    {
        const bool branch_taken_0x390a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x390A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A90u;
        // 0x390a94: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a90) {
            ctx->pc = 0x390B24u;
            goto label_390b24;
        }
    }
    ctx->pc = 0x390A98u;
    // 0x390a98: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390a9c: 0xdc229950  ld          $v0, -0x66B0($at)
    ctx->pc = 0x390a9cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x479950u));
    // 0x390aa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390aa4: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390AA4u;
    SET_GPR_U32(ctx, 31, 0x390AACu);
    ctx->pc = 0x390AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AA4u;
    // 0x390aa8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390AA4u, 0x390AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AACu;
label_390aac:
    // 0x390aac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x390aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390ab0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390ab4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390AB4u;
    SET_GPR_U32(ctx, 31, 0x390ABCu);
    ctx->pc = 0x390AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AB4u;
    // 0x390ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390AB4u, 0x390ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390ABCu;
label_390abc:
    // 0x390abc: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390ABCu;
    SET_GPR_U32(ctx, 31, 0x390AC4u);
    ctx->pc = 0x390AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390ABCu;
    // 0x390ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390ABCu, 0x390AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AC4u;
label_390ac4:
    // 0x390ac4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x390ac4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x390ac8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390AC8u;
    SET_GPR_U32(ctx, 31, 0x390AD0u);
    ctx->pc = 0x390ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AC8u;
    // 0x390acc: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390AC8u, 0x390AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AD0u;
label_390ad0:
    // 0x390ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ad4: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390AD4u;
    SET_GPR_U32(ctx, 31, 0x390ADCu);
    ctx->pc = 0x390AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AD4u;
    // 0x390ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390AD4u, 0x390ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390ADCu;
label_390adc:
    // 0x390adc: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x390ADCu;
    {
        const bool branch_taken_0x390adc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x390AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390ADCu;
        // 0x390ae0: 0x8e63a478  lw          $v1, -0x5B88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390adc) {
            ctx->pc = 0x390BB4u;
            goto label_390bb4;
        }
    }
    ctx->pc = 0x390AE4u;
    // 0x390ae4: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390AE4u;
    SET_GPR_U32(ctx, 31, 0x390AECu);
    ctx->pc = 0x390AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AE4u;
    // 0x390ae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390AE4u, 0x390AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AECu;
label_390aec:
    // 0x390aec: 0xc0e4e54  jal         func_393950
    ctx->pc = 0x390AECu;
    SET_GPR_U32(ctx, 31, 0x390AF4u);
    ctx->pc = 0x390AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AECu;
    // 0x390af0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393950u, 0x390AECu, 0x390AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390AF4u;
label_390af4:
    // 0x390af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390af8: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390AF8u;
    SET_GPR_U32(ctx, 31, 0x390B00u);
    ctx->pc = 0x390AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390AF8u;
    // 0x390afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390AF8u, 0x390B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B00u;
label_390b00:
    // 0x390b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b04: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390B04u;
    SET_GPR_U32(ctx, 31, 0x390B0Cu);
    ctx->pc = 0x390B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B04u;
    // 0x390b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390B04u, 0x390B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B0Cu;
label_390b0c:
    // 0x390b0c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x390B0Cu;
    {
        const bool branch_taken_0x390b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B0Cu;
        // 0x390b10: 0x8e63a478  lw          $v1, -0x5B88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b0c) {
            ctx->pc = 0x390BB4u;
            goto label_390bb4;
        }
    }
    ctx->pc = 0x390B14u;
    // 0x390b14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390b18: 0xdc229958  ld          $v0, -0x66A8($at)
    ctx->pc = 0x390b18u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x479958u));
    // 0x390b1c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x390B1Cu;
    {
        const bool branch_taken_0x390b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B1Cu;
        // 0x390b20: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b1c) {
            ctx->pc = 0x390BB4u;
            goto label_390bb4;
        }
    }
    ctx->pc = 0x390B24u;
label_390b24:
    // 0x390b24: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390b28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390b28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390b2c: 0xdc51a470  ld          $s1, -0x5B90($v0)
    ctx->pc = 0x390b2cu;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x47A470u));
    // 0x390b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x390b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b34: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390B34u;
    SET_GPR_U32(ctx, 31, 0x390B3Cu);
    ctx->pc = 0x390B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B34u;
    // 0x390b38: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390B34u, 0x390B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B3Cu;
label_390b3c:
    // 0x390b3c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x390b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x390b40: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x390b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x390b44: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390B44u;
    SET_GPR_U32(ctx, 31, 0x390B4Cu);
    ctx->pc = 0x390B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B44u;
    // 0x390b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390B44u, 0x390B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B4Cu;
label_390b4c:
    // 0x390b4c: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390B4Cu;
    SET_GPR_U32(ctx, 31, 0x390B54u);
    ctx->pc = 0x390B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B4Cu;
    // 0x390b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390B4Cu, 0x390B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B54u;
label_390b54:
    // 0x390b54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x390b54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x390b58: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390B58u;
    SET_GPR_U32(ctx, 31, 0x390B60u);
    ctx->pc = 0x390B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B58u;
    // 0x390b5c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390B58u, 0x390B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B60u;
label_390b60:
    // 0x390b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b64: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390B64u;
    SET_GPR_U32(ctx, 31, 0x390B6Cu);
    ctx->pc = 0x390B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B64u;
    // 0x390b68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390B64u, 0x390B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B6Cu;
label_390b6c:
    // 0x390b6c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x390B6Cu;
    {
        const bool branch_taken_0x390b6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x390B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B6Cu;
        // 0x390b70: 0x8e63a478  lw          $v1, -0x5B88($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b6c) {
            ctx->pc = 0x390BB4u;
            goto label_390bb4;
        }
    }
    ctx->pc = 0x390B74u;
    // 0x390b74: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390B74u;
    SET_GPR_U32(ctx, 31, 0x390B7Cu);
    ctx->pc = 0x390B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B74u;
    // 0x390b78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390B74u, 0x390B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B7Cu;
label_390b7c:
    // 0x390b7c: 0xc0e4e54  jal         func_393950
    ctx->pc = 0x390B7Cu;
    SET_GPR_U32(ctx, 31, 0x390B84u);
    ctx->pc = 0x390B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B7Cu;
    // 0x390b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393950u, 0x390B7Cu, 0x390B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B84u;
label_390b84:
    // 0x390b84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b88: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390B88u;
    SET_GPR_U32(ctx, 31, 0x390B90u);
    ctx->pc = 0x390B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B88u;
    // 0x390b8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390B88u, 0x390B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B90u;
label_390b90:
    // 0x390b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390b94: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390B94u;
    SET_GPR_U32(ctx, 31, 0x390B9Cu);
    ctx->pc = 0x390B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390B94u;
    // 0x390b98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390B94u, 0x390B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390B9Cu;
label_390b9c:
    // 0x390b9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390B9Cu;
    {
        const bool branch_taken_0x390b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B9Cu;
        // 0x390ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b9c) {
            ctx->pc = 0x390BB0u;
            goto label_390bb0;
        }
    }
    ctx->pc = 0x390BA4u;
    // 0x390ba4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390BA4u;
    SET_GPR_U32(ctx, 31, 0x390BACu);
    ctx->pc = 0x390BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BA4u;
    // 0x390ba8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390BA4u, 0x390BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BACu;
label_390bac:
    // 0x390bac: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x390bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_390bb0:
    // 0x390bb0: 0x8e63a478  lw          $v1, -0x5B88($s3)
    ctx->pc = 0x390bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
label_390bb4:
    // 0x390bb4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x390BB4u;
    {
        const bool branch_taken_0x390bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BB4u;
        // 0x390bb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bb4) {
            ctx->pc = 0x390C2Cu;
            goto label_390c2c;
        }
    }
    ctx->pc = 0x390BBCu;
label_390bbc:
    // 0x390bbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x390bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x390bc0: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x390bc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390bc4: 0x0  nop
    ctx->pc = 0x390bc4u;
    // NOP
    // 0x390bc8: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x390BC8u;
    {
        const bool branch_taken_0x390bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x390BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BC8u;
        // 0x390bcc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bc8) {
            ctx->pc = 0x390C84u;
            goto label_390c84;
        }
    }
    ctx->pc = 0x390BD0u;
    // 0x390bd0: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x390BD0u;
    SET_GPR_U32(ctx, 31, 0x390BD8u);
    ctx->pc = 0x390BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BD0u;
    // 0x390bd4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x390BD0u, 0x390BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BD8u;
label_390bd8:
    // 0x390bd8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x390BD8u;
    {
        const bool branch_taken_0x390bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BD8u;
        // 0x390bdc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bd8) {
            ctx->pc = 0x390C84u;
            goto label_390c84;
        }
    }
    ctx->pc = 0x390BE0u;
    // 0x390be0: 0xc0e4ed6  jal         func_393B58
    ctx->pc = 0x390BE0u;
    SET_GPR_U32(ctx, 31, 0x390BE8u);
    ctx->pc = 0x390BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390BE0u;
    // 0x390be4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B58u, 0x390BE0u, 0x390BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390BE8u;
label_390be8:
    // 0x390be8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x390BE8u;
    {
        const bool branch_taken_0x390be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BE8u;
        // 0x390bec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390be8) {
            ctx->pc = 0x390C80u;
            goto label_390c80;
        }
    }
    ctx->pc = 0x390BF0u;
    // 0x390bf0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x390bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x390bf4: 0x24429940  addiu       $v0, $v0, -0x66C0
    ctx->pc = 0x390bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940992));
    // 0x390bf8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x390bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x390bfc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x390bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x390c00: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x390c00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x390c04: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390C04u;
    SET_GPR_U32(ctx, 31, 0x390C0Cu);
    ctx->pc = 0x390C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C04u;
    // 0x390c08: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390C04u, 0x390C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C0Cu;
label_390c0c:
    // 0x390c0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x390c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x390c10: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x390C10u;
    SET_GPR_U32(ctx, 31, 0x390C18u);
    ctx->pc = 0x390C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C10u;
    // 0x390c14: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x390C10u, 0x390C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C18u;
label_390c18:
    // 0x390c18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390c1c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x390c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x390c20: 0x8e63a478  lw          $v1, -0x5B88($s3)
    ctx->pc = 0x390c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294943864)));
    // 0x390c24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x390c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x390c28: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x390c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_390c2c:
    // 0x390c2c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390C2Cu;
    {
        const bool branch_taken_0x390c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x390c2c) {
            ctx->pc = 0x390C44u;
            goto label_390c44;
        }
    }
    ctx->pc = 0x390C34u;
    // 0x390c34: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x390C34u;
    SET_GPR_U32(ctx, 31, 0x390C3Cu);
    ctx->pc = 0x390C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C34u;
    // 0x390c38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x390C34u, 0x390C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C3Cu;
label_390c3c:
    // 0x390c3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390C3Cu;
    {
        const bool branch_taken_0x390c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C3Cu;
        // 0x390c40: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c3c) {
            ctx->pc = 0x390C58u;
            goto label_390c58;
        }
    }
    ctx->pc = 0x390C44u;
label_390c44:
    // 0x390c44: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390C44u;
    SET_GPR_U32(ctx, 31, 0x390C4Cu);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390C44u, 0x390C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C4Cu;
label_390c4c:
    // 0x390c4c: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x390c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_390c50:
    // 0x390c50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_390c54:
    // 0x390c54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x390c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_390c58:
    // 0x390c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390C58u;
    {
        const bool branch_taken_0x390c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390c58) {
            ctx->pc = 0x390C70u;
            goto label_390c70;
        }
    }
    ctx->pc = 0x390C60u;
    // 0x390c60: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x390C60u;
    SET_GPR_U32(ctx, 31, 0x390C68u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x390C60u, 0x390C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C68u;
label_390c68:
    // 0x390c68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x390c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390c6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x390c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_390c70:
    // 0x390c70: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x390C70u;
    SET_GPR_U32(ctx, 31, 0x390C78u);
    ctx->pc = 0x390C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C70u;
    // 0x390c74: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x390C70u, 0x390C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C78u;
label_390c78:
    // 0x390c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x390C78u;
    {
        const bool branch_taken_0x390c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C78u;
        // 0x390c7c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c78) {
            ctx->pc = 0x390C88u;
            goto label_390c88;
        }
    }
    ctx->pc = 0x390C80u;
label_390c80:
    // 0x390c80: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x390c80u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_390c84:
    // 0x390c84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x390c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_390c88:
    // 0x390c88: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x390c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x390c8c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x390c8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390c90: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x390c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390c94: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x390c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390c98: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x390c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x390c9c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x390c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x390ca0: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x390ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x390ca4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x390ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x390ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x390CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CA8u;
        // 0x390cac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390CB0u;
}
