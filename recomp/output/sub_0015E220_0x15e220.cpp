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

// Function: sub_0015E220
// Address: 0x15e220 - 0x15e548
void sub_0015E220_0x15e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E220_0x15e220");
#endif

    switch (ctx->pc) {
        case 0x15e284u: goto label_15e284;
        case 0x15e2b8u: goto label_15e2b8;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2d4u: goto label_15e2d4;
        case 0x15e2f4u: goto label_15e2f4;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e378u: goto label_15e378;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c8u: goto label_15e3c8;
        case 0x15e3dcu: goto label_15e3dc;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e500u: goto label_15e500;
        case 0x15e518u: goto label_15e518;
        default: break;
    }

    ctx->pc = 0x15e220u;

    // 0x15e220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15e224: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15e228: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x15e22c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15e22cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15e230: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15e230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x15e234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e238: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x15e238u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15e23c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x15e240: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x15e240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15e244: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x15e248: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15e248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x15e24c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15e24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15e250: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x15e254: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x15e258: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x15e25c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x15e260: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x15e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x15e264: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15e264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15e268: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x15e268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x15e26c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15e270: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x15e270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15e274: 0x8c560320  lw          $s6, 0x320($v0)
    ctx->pc = 0x15e274u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15e278: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x15e278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x15e27c: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15E27Cu;
    SET_GPR_U32(ctx, 31, 0x15E284u);
    ctx->pc = 0x15E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E27Cu;
    // 0x15e280: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15E27Cu, 0x15E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E284u;
label_15e284:
    // 0x15e284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e288: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x15E288u;
    {
        const bool branch_taken_0x15e288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E288u;
        // 0x15e28c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e288) {
            ctx->pc = 0x15E518u;
            goto label_15e518;
        }
    }
    ctx->pc = 0x15E290u;
    // 0x15e290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15e294: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15e298: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x15e298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x15e29c: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15e2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15e2a4: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15e2a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E2A8u;
    {
        const bool branch_taken_0x15e2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2A8u;
        // 0x15e2ac: 0x8e17000c  lw          $s7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2a8) {
            ctx->pc = 0x15E2BCu;
            goto label_15e2bc;
        }
    }
    ctx->pc = 0x15E2B0u;
    // 0x15e2b0: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x15E2B0u;
    SET_GPR_U32(ctx, 31, 0x15E2B8u);
    ctx->pc = 0x15E2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2B0u;
    // 0x15e2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x15E2B0u, 0x15E2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2B8u;
label_15e2b8:
    // 0x15e2b8: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x15e2b8u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15e2bc:
    // 0x15e2bc: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15E2BCu;
    SET_GPR_U32(ctx, 31, 0x15E2C4u);
    ctx->pc = 0x15E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2BCu;
    // 0x15e2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15E2BCu, 0x15E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2C4u;
label_15e2c4:
    // 0x15e2c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15e2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2cc: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15E2CCu;
    SET_GPR_U32(ctx, 31, 0x15E2D4u);
    ctx->pc = 0x15E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2CCu;
    // 0x15e2d0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15E2CCu, 0x15E2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2D4u;
label_15e2d4:
    // 0x15e2d4: 0x12a00091  beqz        $s5, . + 4 + (0x91 << 2)
    ctx->pc = 0x15E2D4u;
    {
        const bool branch_taken_0x15e2d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D4u;
        // 0x15e2d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2d4) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E2DCu;
    // 0x15e2dc: 0x12e0008f  beqz        $s7, . + 4 + (0x8F << 2)
    ctx->pc = 0x15E2DCu;
    {
        const bool branch_taken_0x15e2dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2DCu;
        // 0x15e2e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2dc) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E2E4u;
    // 0x15e2e4: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x15e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x15e2e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2ec: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15E2ECu;
    SET_GPR_U32(ctx, 31, 0x15E2F4u);
    ctx->pc = 0x15E2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2ECu;
    // 0x15e2f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15E2ECu, 0x15E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2F4u;
label_15e2f4:
    // 0x15e2f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15e2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e2f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e2fc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15e2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e300: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e300u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e304: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e304u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e308: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15e308u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e30c: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x15e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e310: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e314: 0x0  nop
    ctx->pc = 0x15e314u;
    // NOP
    // 0x15e318: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15E318u;
    {
        const bool branch_taken_0x15e318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15e318) {
            ctx->pc = 0x15E31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E318u;
            // 0x15e31c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E320u;
            goto label_15e320;
        }
    }
    ctx->pc = 0x15E320u;
label_15e320:
    // 0x15e320: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15E320u;
    {
        const bool branch_taken_0x15e320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E320u;
        // 0x15e324: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e320) {
            ctx->pc = 0x15E380u;
            goto label_15e380;
        }
    }
    ctx->pc = 0x15E328u;
    // 0x15e328: 0x12630002  beq         $s3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E328u;
    {
        const bool branch_taken_0x15e328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E328u;
        // 0x15e32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e328) {
            ctx->pc = 0x15E334u;
            goto label_15e334;
        }
    }
    ctx->pc = 0x15E330u;
    // 0x15e330: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x15e330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_15e334:
    // 0x15e334: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E334u;
    {
        const bool branch_taken_0x15e334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E334u;
        // 0x15e338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e334) {
            ctx->pc = 0x15E354u;
            goto label_15e354;
        }
    }
    ctx->pc = 0x15E33Cu;
    // 0x15e33c: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E33Cu;
    {
        const bool branch_taken_0x15e33c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e33c) {
            ctx->pc = 0x15E34Cu;
            goto label_15e34c;
        }
    }
    ctx->pc = 0x15E344u;
    // 0x15e344: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x15e344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15e348: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e34c:
    // 0x15e34c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15E34Cu;
    {
        const bool branch_taken_0x15e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E34Cu;
        // 0x15e350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e34c) {
            ctx->pc = 0x15E380u;
            goto label_15e380;
        }
    }
    ctx->pc = 0x15E354u;
label_15e354:
    // 0x15e354: 0xc056f6a  jal         func_15BDA8
    ctx->pc = 0x15E354u;
    SET_GPR_U32(ctx, 31, 0x15E35Cu);
    ctx->pc = 0x15E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E354u;
    // 0x15e358: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BDA8u, 0x15E354u, 0x15E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E35Cu;
label_15e35c:
    // 0x15e35c: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x15E35Cu;
    {
        const bool branch_taken_0x15e35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E35Cu;
        // 0x15e360: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e35c) {
            ctx->pc = 0x15E518u;
            goto label_15e518;
        }
    }
    ctx->pc = 0x15E364u;
    // 0x15e364: 0xc0573f8  jal         func_15CFE0
    ctx->pc = 0x15E364u;
    SET_GPR_U32(ctx, 31, 0x15E36Cu);
    ctx->pc = 0x15E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E364u;
    // 0x15e368: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFE0u, 0x15E364u, 0x15E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E36Cu;
label_15e36c:
    // 0x15e36c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e370: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x15E370u;
    SET_GPR_U32(ctx, 31, 0x15E378u);
    ctx->pc = 0x15E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E370u;
    // 0x15e374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C340u, 0x15E370u, 0x15E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E378u;
label_15e378:
    // 0x15e378: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15E378u;
    {
        const bool branch_taken_0x15e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E378u;
        // 0x15e37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e378) {
            ctx->pc = 0x15E3CCu;
            goto label_15e3cc;
        }
    }
    ctx->pc = 0x15E380u;
label_15e380:
    // 0x15e380: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15e384: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E384u;
    {
        const bool branch_taken_0x15e384 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E384u;
        // 0x15e388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e384) {
            ctx->pc = 0x15E394u;
            goto label_15e394;
        }
    }
    ctx->pc = 0x15E38Cu;
    // 0x15e38c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x15e38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e390: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e394:
    // 0x15e394: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E394u;
    {
        const bool branch_taken_0x15e394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E394u;
        // 0x15e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e394) {
            ctx->pc = 0x15E3B4u;
            goto label_15e3b4;
        }
    }
    ctx->pc = 0x15E39Cu;
    // 0x15e39c: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E39Cu;
    {
        const bool branch_taken_0x15e39c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e39c) {
            ctx->pc = 0x15E3ACu;
            goto label_15e3ac;
        }
    }
    ctx->pc = 0x15E3A4u;
    // 0x15e3a4: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x15e3a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e3ac:
    // 0x15e3ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15E3ACu;
    {
        const bool branch_taken_0x15e3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3ACu;
        // 0x15e3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3ac) {
            ctx->pc = 0x15E3E4u;
            goto label_15e3e4;
        }
    }
    ctx->pc = 0x15E3B4u;
label_15e3b4:
    // 0x15e3b4: 0xc0573f8  jal         func_15CFE0
    ctx->pc = 0x15E3B4u;
    SET_GPR_U32(ctx, 31, 0x15E3BCu);
    ctx->pc = 0x15E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3B4u;
    // 0x15e3b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFE0u, 0x15E3B4u, 0x15E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3BCu;
label_15e3bc:
    // 0x15e3bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3c0: 0xc057150  jal         func_15C540
    ctx->pc = 0x15E3C0u;
    SET_GPR_U32(ctx, 31, 0x15E3C8u);
    ctx->pc = 0x15E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3C0u;
    // 0x15e3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C540u, 0x15E3C0u, 0x15E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C8u;
label_15e3c8:
    // 0x15e3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e3cc:
    // 0x15e3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3d0: 0xae220b70  sw          $v0, 0xB70($s1)
    ctx->pc = 0x15e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2928), GPR_U32(ctx, 2));
    // 0x15e3d4: 0xc058064  jal         func_160190
    ctx->pc = 0x15E3D4u;
    SET_GPR_U32(ctx, 31, 0x15E3DCu);
    ctx->pc = 0x15E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3D4u;
    // 0x15e3d8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160190u, 0x15E3D4u, 0x15E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3DCu;
label_15e3dc:
    // 0x15e3dc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15E3DCu;
    {
        const bool branch_taken_0x15e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3DCu;
        // 0x15e3e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3dc) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E3E4u;
label_15e3e4:
    // 0x15e3e4: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E3E4u;
    {
        const bool branch_taken_0x15e3e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x15E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3E4u;
        // 0x15e3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e3e4) {
            ctx->pc = 0x15E3F4u;
            goto label_15e3f4;
        }
    }
    ctx->pc = 0x15E3ECu;
    // 0x15e3ec: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x15e3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15e3f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e3f4:
    // 0x15e3f4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E3F4u;
    {
        const bool branch_taken_0x15e3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e3f4) {
            ctx->pc = 0x15E3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E3F4u;
            // 0x15e3f8: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E414u;
            goto label_15e414;
        }
    }
    ctx->pc = 0x15E3FCu;
    // 0x15e3fc: 0x12830003  beq         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E3FCu;
    {
        const bool branch_taken_0x15e3fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e3fc) {
            ctx->pc = 0x15E40Cu;
            goto label_15e40c;
        }
    }
    ctx->pc = 0x15E404u;
    // 0x15e404: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x15e404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e408: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15e40c:
    // 0x15e40c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x15E40Cu;
    {
        const bool branch_taken_0x15e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E40Cu;
        // 0x15e410: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e40c) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E414u;
label_15e414:
    // 0x15e414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e418: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x15e418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x15e41c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e420: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15e420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e424: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x15e428: 0xac670330  sw          $a3, 0x330($v1)
    ctx->pc = 0x15e428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 7));
    // 0x15e42c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15e42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e430: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x15e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x15e434: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e438: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15e438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e43c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15e43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15e440: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15e440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e444: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15e444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15e448: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15e448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e44c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15e44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15e450: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x15e450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e454: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15E454u;
    SET_GPR_U32(ctx, 31, 0x15E45Cu);
    ctx->pc = 0x15E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E454u;
    // 0x15e458: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15E454u, 0x15E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E45Cu;
label_15e45c:
    // 0x15e45c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x15e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e460: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x15e460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e464: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x15e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e468: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x15e468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e46c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e46cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e470: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e470u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e474: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15e474u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e478: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x15e47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15e47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e480: 0x0  nop
    ctx->pc = 0x15e480u;
    // NOP
    // 0x15e484: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15e484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e488: 0x0  nop
    ctx->pc = 0x15e488u;
    // NOP
    // 0x15e48c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x15E48Cu;
    {
        const bool branch_taken_0x15e48c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E48Cu;
        // 0x15e490: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e48c) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E494u;
    // 0x15e494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e498: 0xc0573f8  jal         func_15CFE0
    ctx->pc = 0x15E498u;
    SET_GPR_U32(ctx, 31, 0x15E4A0u);
    ctx->pc = 0x15E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E498u;
    // 0x15e49c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CFE0u, 0x15E498u, 0x15E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4A0u;
label_15e4a0:
    // 0x15e4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4a8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15e4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4ac: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15e4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4b0: 0xc05730e  jal         func_15CC38
    ctx->pc = 0x15E4B0u;
    SET_GPR_U32(ctx, 31, 0x15E4B8u);
    ctx->pc = 0x15E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4B0u;
    // 0x15e4b4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC38u, 0x15E4B0u, 0x15E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4B8u;
label_15e4b8:
    // 0x15e4b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15E4B8u;
    {
        const bool branch_taken_0x15e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4B8u;
        // 0x15e4bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4b8) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E4C0u;
label_15e4c0:
    // 0x15e4c0: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x15e4c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15e4c4: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15e4c8: 0x8e11033c  lw          $s1, 0x33C($s0)
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
    // 0x15e4cc: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x15E4CCu;
    {
        const bool branch_taken_0x15e4cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4cc) {
            ctx->pc = 0x15E4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E4CCu;
            // 0x15e4d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E4D4u;
    // 0x15e4d4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15E4D4u;
    SET_GPR_U32(ctx, 31, 0x15E4DCu);
    ctx->pc = 0x15E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4D4u;
    // 0x15e4d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15E4D4u, 0x15E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4DCu;
label_15e4dc:
    // 0x15e4dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4e0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15E4E0u;
    SET_GPR_U32(ctx, 31, 0x15E4E8u);
    ctx->pc = 0x15E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4E0u;
    // 0x15e4e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15E4E0u, 0x15E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4E8u;
label_15e4e8:
    // 0x15e4e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15E4E8u;
    {
        const bool branch_taken_0x15e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E8u;
        // 0x15e4ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e8) {
            ctx->pc = 0x15E508u;
            goto label_15e508;
        }
    }
    ctx->pc = 0x15E4F0u;
    // 0x15e4f0: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x15e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x15e4f4: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x15e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x15e4f8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15E4F8u;
    SET_GPR_U32(ctx, 31, 0x15E500u);
    ctx->pc = 0x15E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4F8u;
    // 0x15e4fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15E4F8u, 0x15E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E500u;
label_15e500:
    // 0x15e500: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E500u;
    {
        const bool branch_taken_0x15e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E500u;
        // 0x15e504: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e500) {
            ctx->pc = 0x15E51Cu;
            goto label_15e51c;
        }
    }
    ctx->pc = 0x15E508u;
label_15e508:
    // 0x15e508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e50c: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x15e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
    // 0x15e510: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15E510u;
    SET_GPR_U32(ctx, 31, 0x15E518u);
    ctx->pc = 0x15E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E510u;
    // 0x15e514: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15E510u, 0x15E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E518u;
label_15e518:
    // 0x15e518: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15e518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15e51c:
    // 0x15e51c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15e51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e520: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15e520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e524: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15e524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e528: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15e528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e52c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15e52cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15e530: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15e530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e534: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15e534u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15e538: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x15e538u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e53c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x15e53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15e540: 0x3e00008  jr          $ra
    ctx->pc = 0x15E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E540u;
        // 0x15e544: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E548u;
}
