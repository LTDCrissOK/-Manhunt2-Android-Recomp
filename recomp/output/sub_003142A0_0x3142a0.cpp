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

// Function: sub_003142A0
// Address: 0x3142a0 - 0x314530
void sub_003142A0_0x3142a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003142A0_0x3142a0");
#endif

    switch (ctx->pc) {
        case 0x314318u: goto label_314318;
        case 0x3143a0u: goto label_3143a0;
        case 0x3143b0u: goto label_3143b0;
        case 0x3143d8u: goto label_3143d8;
        case 0x314454u: goto label_314454;
        case 0x31447cu: goto label_31447c;
        case 0x3144a0u: goto label_3144a0;
        case 0x3144ccu: goto label_3144cc;
        default: break;
    }

    ctx->pc = 0x3142a0u;

    // 0x3142a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3142a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3142a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3142a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3142a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3142a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3142ac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3142acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3142b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3142b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142b4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3142b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3142b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3142b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3142bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3142bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3142c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3142c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3142c4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3142c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3142c8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3142c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3142cc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3142ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3142d0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3142d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3142d4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3142d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3142d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3142d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3142dc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3142dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3142e0: 0x8c7ebd48  lw          $fp, -0x42B8($v1)
    ctx->pc = 0x3142e0u;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3142e4: 0x13c00085  beqz        $fp, . + 4 + (0x85 << 2)
    ctx->pc = 0x3142E4u;
    {
        const bool branch_taken_0x3142e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3142E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E4u;
        // 0x3142e8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142e4) {
            ctx->pc = 0x3144FCu;
            goto label_3144fc;
        }
    }
    ctx->pc = 0x3142ECu;
    // 0x3142ec: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3142ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3142f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3142f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142f4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3142f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3142f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3142f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3142fc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x314300: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x314300u;
    {
        const bool branch_taken_0x314300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314300u;
        // 0x314304: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314300) {
            ctx->pc = 0x3144FCu;
            goto label_3144fc;
        }
    }
    ctx->pc = 0x314308u;
    // 0x314308: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x314308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x31430c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x31430cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x314310: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x314310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x314314: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x314314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_314318:
    // 0x314318: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x314318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x31431c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x314320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x314320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314328: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x314328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x31432c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x31432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x314330: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314330u;
    {
        const bool branch_taken_0x314330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314330u;
        // 0x314334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314330) {
            ctx->pc = 0x314348u;
            goto label_314348;
        }
    }
    ctx->pc = 0x314338u;
    // 0x314338: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314338u;
    {
        const bool branch_taken_0x314338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314338u;
        // 0x31433c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314338) {
            ctx->pc = 0x314348u;
            goto label_314348;
        }
    }
    ctx->pc = 0x314340u;
    // 0x314340: 0x54620028  bnel        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x314340u;
    {
        const bool branch_taken_0x314340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x314340) {
            ctx->pc = 0x314344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314340u;
            // 0x314344: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3143E4u;
            goto label_3143e4;
        }
    }
    ctx->pc = 0x314348u;
label_314348:
    // 0x314348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x314348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31434c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x31434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x314350: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x314350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x314354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x314354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314358: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x314358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x31435c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x31435cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314360: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x314360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x314364: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x314364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x314368: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x314368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x31436c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x31436cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x314370: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x314370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x314374: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x314374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314378: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x314378u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x31437c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x31437cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x314380: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x314380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x314384: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x314384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314388: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x314388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31438c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31438cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314390: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x314390u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x314394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314398: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x314398u;
    SET_GPR_U32(ctx, 31, 0x3143A0u);
    ctx->pc = 0x31439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314398u;
    // 0x31439c: 0x46011500  add.s       $f20, $f2, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x314398u, 0x3143A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3143A0u;
label_3143a0:
    // 0x3143a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3143A0u;
    {
        const bool branch_taken_0x3143a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3143a0) {
            ctx->pc = 0x3143B0u;
            goto label_3143b0;
        }
    }
    ctx->pc = 0x3143A8u;
    // 0x3143a8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3143A8u;
    SET_GPR_U32(ctx, 31, 0x3143B0u);
    ctx->pc = 0x3143ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3143A8u;
    // 0x3143ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3143A8u, 0x3143B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3143B0u;
label_3143b0:
    // 0x3143b0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x3143b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x3143b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3143b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3143b8: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x3143b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3143bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3143bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3143c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3143c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3143c4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x3143c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x3143c8: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x3143c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3143cc: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x3143ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3143d0: 0xc0c2c94  jal         func_30B250
    ctx->pc = 0x3143D0u;
    SET_GPR_U32(ctx, 31, 0x3143D8u);
    ctx->pc = 0x3143D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3143D0u;
    // 0x3143d4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B250u, 0x3143D0u, 0x3143D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3143D8u;
label_3143d8:
    // 0x3143d8: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x3143D8u;
    {
        const bool branch_taken_0x3143d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3143d8) {
            ctx->pc = 0x3143DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3143D8u;
            // 0x3143dc: 0x8ee30000  lw          $v1, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3144E0u;
            goto label_3144e0;
        }
    }
    ctx->pc = 0x3143E0u;
    // 0x3143e0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3143e4:
    // 0x3143e4: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x3143e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3143e8: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3143E8u;
    {
        const bool branch_taken_0x3143e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143E8u;
        // 0x3143ec: 0x3a0b02d  daddu       $s6, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143e8) {
            ctx->pc = 0x314410u;
            goto label_314410;
        }
    }
    ctx->pc = 0x3143F0u;
    // 0x3143f0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3143F0u;
    {
        const bool branch_taken_0x3143f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143F0u;
        // 0x3143f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143f0) {
            ctx->pc = 0x3143FCu;
            goto label_3143fc;
        }
    }
    ctx->pc = 0x3143F8u;
    // 0x3143f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3143f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3143fc:
    // 0x3143fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x314400: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x314400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x314404: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x314404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x314408: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x314408u;
    {
        const bool branch_taken_0x314408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314408u;
        // 0x31440c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314408) {
            ctx->pc = 0x3144DCu;
            goto label_3144dc;
        }
    }
    ctx->pc = 0x314410u;
label_314410:
    // 0x314410: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x314410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x314414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314418: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x314418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x31441c: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x31441cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x314420: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x314420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x314424: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x314424u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x314428: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x314428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31442c: 0x2c820001  sltiu       $v0, $a0, 0x1
    ctx->pc = 0x31442cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x314430: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x314430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x314434: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x314434u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x314438: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x314438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31443c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x31443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x314440: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314440u;
    {
        const bool branch_taken_0x314440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314440u;
        // 0x314444: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314440) {
            ctx->pc = 0x31445Cu;
            goto label_31445c;
        }
    }
    ctx->pc = 0x314448u;
    // 0x314448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31444c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x31444Cu;
    SET_GPR_U32(ctx, 31, 0x314454u);
    ctx->pc = 0x314450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31444Cu;
    // 0x314450: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x31444Cu, 0x314454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314454u;
label_314454:
    // 0x314454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314454u;
    {
        const bool branch_taken_0x314454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314454u;
        // 0x314458: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314454) {
            ctx->pc = 0x314464u;
            goto label_314464;
        }
    }
    ctx->pc = 0x31445Cu;
label_31445c:
    // 0x31445c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31445cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314460: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x314460u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314464:
    // 0x314464: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x314464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x314468: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x314468u;
    {
        const bool branch_taken_0x314468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x31446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314468u;
        // 0x31446c: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314468) {
            ctx->pc = 0x314484u;
            goto label_314484;
        }
    }
    ctx->pc = 0x314470u;
    // 0x314470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314474: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x314474u;
    SET_GPR_U32(ctx, 31, 0x31447Cu);
    ctx->pc = 0x314478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314474u;
    // 0x314478: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x314474u, 0x31447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31447Cu;
label_31447c:
    // 0x31447c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31447Cu;
    {
        const bool branch_taken_0x31447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31447Cu;
        // 0x314480: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31447c) {
            ctx->pc = 0x314488u;
            goto label_314488;
        }
    }
    ctx->pc = 0x314484u;
label_314484:
    // 0x314484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314488:
    // 0x314488: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x314488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31448c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314490: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314494: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x314494u;
    {
        const bool branch_taken_0x314494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314494u;
        // 0x314498: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314494) {
            ctx->pc = 0x3144B8u;
            goto label_3144b8;
        }
    }
    ctx->pc = 0x31449Cu;
    // 0x31449c: 0x0  nop
    ctx->pc = 0x31449cu;
    // NOP
label_3144a0:
    // 0x3144a0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3144a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3144a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3144a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3144a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3144ac: 0x0  nop
    ctx->pc = 0x3144acu;
    // NOP
    // 0x3144b0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3144B0u;
    {
        const bool branch_taken_0x3144b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3144B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144B0u;
        // 0x3144b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144b0) {
            ctx->pc = 0x3144A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3144a0;
        }
    }
    ctx->pc = 0x3144B8u;
label_3144b8:
    // 0x3144b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3144bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3144BCu;
    {
        const bool branch_taken_0x3144bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144BCu;
        // 0x3144c0: 0x2b11021  addu        $v0, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144bc) {
            ctx->pc = 0x3144D0u;
            goto label_3144d0;
        }
    }
    ctx->pc = 0x3144C4u;
    // 0x3144c4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3144C4u;
    SET_GPR_U32(ctx, 31, 0x3144CCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3144C4u, 0x3144CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3144CCu;
label_3144cc:
    // 0x3144cc: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_3144d0:
    // 0x3144d0: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3144d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3144d4: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x3144d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x3144d8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3144d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_3144dc:
    // 0x3144dc: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x3144dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3144e0:
    // 0x3144e0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3144e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3144e4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3144e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3144e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3144e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3144ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3144ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3144f0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3144f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3144f4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
    ctx->pc = 0x3144F4u;
    {
        const bool branch_taken_0x3144f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3144F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F4u;
        // 0x3144f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144f4) {
            ctx->pc = 0x314318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314318;
        }
    }
    ctx->pc = 0x3144FCu;
label_3144fc:
    // 0x3144fc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3144fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314500: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x314500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x314504: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x314504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314508: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x314508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31450c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x31450cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314510: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x314510u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x314514: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x314514u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314518: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x314518u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31451c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x31451cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314520: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x314520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x314524: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x314524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314528: 0x3e00008  jr          $ra
    ctx->pc = 0x314528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314528u;
        // 0x31452c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314530u;
}
