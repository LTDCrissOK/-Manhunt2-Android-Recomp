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

// Function: sub_001B7458
// Address: 0x1b7458 - 0x1b7bb8
void sub_001B7458_0x1b7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7458_0x1b7458");
#endif

    switch (ctx->pc) {
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b7840u: goto label_1b7840;
        case 0x1b7880u: goto label_1b7880;
        case 0x1b7954u: goto label_1b7954;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7a08u: goto label_1b7a08;
        case 0x1b7a94u: goto label_1b7a94;
        case 0x1b7ad4u: goto label_1b7ad4;
        default: break;
    }

    ctx->pc = 0x1b7458u;

    // 0x1b7458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b745c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b7460: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b7460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b7464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7468: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b746c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1b7470: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b7470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b7474: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x1b7474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1b7478: 0x104001c6  beqz        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x1B7478u;
    {
        const bool branch_taken_0x1b7478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7478u;
        // 0x1b747c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7478) {
            ctx->pc = 0x1B7B94u;
            goto label_1b7b94;
        }
    }
    ctx->pc = 0x1B7480u;
    // 0x1b7480: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1b7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
    // 0x1b7484: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b7488: 0x144001c3  bnez        $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1B7488u;
    {
        const bool branch_taken_0x1b7488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7488u;
        // 0x1b748c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7488) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7490u;
    // 0x1b7490: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b7494: 0x8c441004  lw          $a0, 0x1004($v0)
    ctx->pc = 0x1b7494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b7498: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B7498u;
    {
        const bool branch_taken_0x1b7498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7498u;
        // 0x1b749c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7498) {
            ctx->pc = 0x1B74DCu;
            goto label_1b74dc;
        }
    }
    ctx->pc = 0x1B74A0u;
    // 0x1b74a0: 0x8c850334  lw          $a1, 0x334($a0)
    ctx->pc = 0x1b74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x1b74a4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1b74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b74a8: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x1b74ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B74ACu;
    {
        const bool branch_taken_0x1b74ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74ACu;
        // 0x1b74b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74ac) {
            ctx->pc = 0x1B74C0u;
            goto label_1b74c0;
        }
    }
    ctx->pc = 0x1B74B4u;
    // 0x1b74b4: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1b74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1b74b8: 0x2442f948  addiu       $v0, $v0, -0x6B8
    ctx->pc = 0x1b74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965576));
    // 0x1b74bc: 0x2c4700d3  sltiu       $a3, $v0, 0xD3
    ctx->pc = 0x1b74bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)211) ? 1 : 0);
label_1b74c0:
    // 0x1b74c0: 0x14e001b5  bnez        $a3, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x1B74C0u;
    {
        const bool branch_taken_0x1b74c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C0u;
        // 0x1b74c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74c0) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B74C8u;
    // 0x1b74c8: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x1b74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x1b74cc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1b74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1b74d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b74d4: 0x104301b0  beq         $v0, $v1, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x1B74D4u;
    {
        const bool branch_taken_0x1b74d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74D4u;
        // 0x1b74d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74d4) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B74DCu;
label_1b74dc:
    // 0x1b74dc: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1b74e0: 0x104001ac  beqz        $v0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x1B74E0u;
    {
        const bool branch_taken_0x1b74e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E0u;
        // 0x1b74e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74e0) {
            ctx->pc = 0x1B7B94u;
            goto label_1b7b94;
        }
    }
    ctx->pc = 0x1B74E8u;
    // 0x1b74e8: 0xc4c01074  lwc1        $f0, 0x1074($a2)
    ctx->pc = 0x1b74e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b74ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b74ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74f0: 0xc6210214  lwc1        $f1, 0x214($s1)
    ctx->pc = 0x1b74f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b74f4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x1b74f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B74F8u;
    {
        const bool branch_taken_0x1b74f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74F8u;
        // 0x1b74fc: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74f8) {
            ctx->pc = 0x1B7514u;
            goto label_1b7514;
        }
    }
    ctx->pc = 0x1B7500u;
    // 0x1b7500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7504: 0x0  nop
    ctx->pc = 0x1b7504u;
    // NOP
    // 0x1b7508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b750c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B750Cu;
    {
        const bool branch_taken_0x1b750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b750c) {
            ctx->pc = 0x1B7530u;
            goto label_1b7530;
        }
    }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b7514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b7518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b751c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7524: 0x0  nop
    ctx->pc = 0x1b7524u;
    // NOP
    // 0x1b7528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b752c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b752cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b7530:
    // 0x1b7530: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7534: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b753c: 0x0  nop
    ctx->pc = 0x1b753cu;
    // NOP
    // 0x1b7540: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b7544: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b7544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7548: 0x0  nop
    ctx->pc = 0x1b7548u;
    // NOP
    // 0x1b754c: 0x45010192  bc1t        . + 4 + (0x192 << 2)
    ctx->pc = 0x1B754Cu;
    {
        const bool branch_taken_0x1b754c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B754Cu;
        // 0x1b7550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b754c) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7554u;
    // 0x1b7554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b7554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b7558: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b755c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b7560: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b7560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b7564: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b7564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b7568: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B7568u;
    SET_GPR_U32(ctx, 31, 0x1B7570u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B7568u, 0x1B7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7570u;
label_1b7570:
    // 0x1b7570: 0xc62200bc  lwc1        $f2, 0xBC($s1)
    ctx->pc = 0x1b7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7574: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1b7574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1b7578: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b757c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b757cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7580: 0x0  nop
    ctx->pc = 0x1b7580u;
    // NOP
    // 0x1b7584: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b7584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7588: 0x0  nop
    ctx->pc = 0x1b7588u;
    // NOP
    // 0x1b758c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B758Cu;
    {
        const bool branch_taken_0x1b758c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B758Cu;
        // 0x1b7590: 0xe6200214  swc1        $f0, 0x214($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b758c) {
            ctx->pc = 0x1B75D8u;
            goto label_1b75d8;
        }
    }
    ctx->pc = 0x1B7594u;
    // 0x1b7594: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x1b7598: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7598u;
    {
        const bool branch_taken_0x1b7598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7598) {
            ctx->pc = 0x1B759Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7598u;
            // 0x1b759c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B75C0u;
            goto label_1b75c0;
        }
    }
    ctx->pc = 0x1B75A0u;
    // 0x1b75a0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b75a4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1b75a8: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b75ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b75b0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b75b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b75b4: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B75B4u;
    {
        const bool branch_taken_0x1b75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b75b4) {
            ctx->pc = 0x1B75B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B75B4u;
            // 0x1b75b8: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B75DCu;
            goto label_1b75dc;
        }
    }
    ctx->pc = 0x1B75BCu;
    // 0x1b75bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1b75c0:
    // 0x1b75c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B75C0u;
    {
        const bool branch_taken_0x1b75c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b75c0) {
            ctx->pc = 0x1B75C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B75C0u;
            // 0x1b75c4: 0xae200224  sw          $zero, 0x224($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B75DCu;
            goto label_1b75dc;
        }
    }
    ctx->pc = 0x1B75C8u;
    // 0x1b75c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b75cc: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x1b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x1b75d0: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x1B75D0u;
    {
        const bool branch_taken_0x1b75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D0u;
        // 0x1b75d4: 0xae220224  sw          $v0, 0x224($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75d0) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B75D8u;
label_1b75d8:
    // 0x1b75d8: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x1b75d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
label_1b75dc:
    // 0x1b75dc: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x1b75dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1b75e0: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b75e4: 0x8c420334  lw          $v0, 0x334($v0)
    ctx->pc = 0x1b75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b75e8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1b75ec: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B75ECu;
    {
        const bool branch_taken_0x1b75ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b75ec) {
            ctx->pc = 0x1B7610u;
            goto label_1b7610;
        }
    }
    ctx->pc = 0x1B75F4u;
    // 0x1b75f4: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x1b75f8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B75F8u;
    {
        const bool branch_taken_0x1b75f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75F8u;
        // 0x1b75fc: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75f8) {
            ctx->pc = 0x1B7610u;
            goto label_1b7610;
        }
    }
    ctx->pc = 0x1B7600u;
    // 0x1b7600: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7600u;
    {
        const bool branch_taken_0x1b7600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7600u;
        // 0x1b7604: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7600) {
            ctx->pc = 0x1B7610u;
            goto label_1b7610;
        }
    }
    ctx->pc = 0x1B7608u;
    // 0x1b7608: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7608u;
    {
        const bool branch_taken_0x1b7608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7608) {
            ctx->pc = 0x1B760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7608u;
            // 0x1b760c: 0xc62100bc  lwc1        $f1, 0xBC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7620u;
            goto label_1b7620;
        }
    }
    ctx->pc = 0x1B7610u;
label_1b7610:
    // 0x1b7610: 0xc06d5ae  jal         func_1B56B8
    ctx->pc = 0x1B7610u;
    SET_GPR_U32(ctx, 31, 0x1B7618u);
    ctx->pc = 0x1B7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7610u;
    // 0x1b7614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B56B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56B8u, 0x1B7610u, 0x1B7618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7618u;
label_1b7618:
    // 0x1b7618: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1B7618u;
    {
        const bool branch_taken_0x1b7618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7618u;
        // 0x1b761c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7618) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7620u;
label_1b7620:
    // 0x1b7620: 0x3c014290  lui         $at, 0x4290
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17040 << 16));
    // 0x1b7624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7628: 0x0  nop
    ctx->pc = 0x1b7628u;
    // NOP
    // 0x1b762c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b762cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7630: 0x0  nop
    ctx->pc = 0x1b7630u;
    // NOP
    // 0x1b7634: 0x45010158  bc1t        . + 4 + (0x158 << 2)
    ctx->pc = 0x1B7634u;
    {
        const bool branch_taken_0x1b7634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7634u;
        // 0x1b7638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7634) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B763Cu;
    // 0x1b763c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1b7640: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1b7640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b7644: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b7644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7648: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b7648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b764c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b7650: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7654: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7658: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b765c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1b765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b7660: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b7660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b7664: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b7664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b7668: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b766c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1b766cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b7670: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7674: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1b7674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b7678: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1b7678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b767c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b767cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b7680: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b7680u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b7684: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1b7684u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b7688: 0x46010044  c1          0x10044
    ctx->pc = 0x1b7688u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b768c: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x1b768cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x1b7690: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1b7690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1b7694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7698: 0x0  nop
    ctx->pc = 0x1b7698u;
    // NOP
    // 0x1b769c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b769cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b76a0: 0x0  nop
    ctx->pc = 0x1b76a0u;
    // NOP
    // 0x1b76a4: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x1B76A4u;
    {
        const bool branch_taken_0x1b76a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76A4u;
        // 0x1b76a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76a4) {
            ctx->pc = 0x1B778Cu;
            goto label_1b778c;
        }
    }
    ctx->pc = 0x1B76ACu;
    // 0x1b76ac: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b76acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b76b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b76b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b76b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b76b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b76b8: 0xc44089a0  lwc1        $f0, -0x7660($v0)
    ctx->pc = 0x1b76b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b76bc: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1b76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1b76c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B76C0u;
    {
        const bool branch_taken_0x1b76c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C0u;
        // 0x1b76c4: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76c0) {
            ctx->pc = 0x1B76DCu;
            goto label_1b76dc;
        }
    }
    ctx->pc = 0x1B76C8u;
    // 0x1b76c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b76c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b76cc: 0x0  nop
    ctx->pc = 0x1b76ccu;
    // NOP
    // 0x1b76d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b76d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b76d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B76D4u;
    {
        const bool branch_taken_0x1b76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b76d4) {
            ctx->pc = 0x1B76F8u;
            goto label_1b76f8;
        }
    }
    ctx->pc = 0x1B76DCu;
label_1b76dc:
    // 0x1b76dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b76e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b76e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b76e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b76e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b76e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b76e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b76ec: 0x0  nop
    ctx->pc = 0x1b76ecu;
    // NOP
    // 0x1b76f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b76f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b76f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b76f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b76f8:
    // 0x1b76f8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b76f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b76fc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b76fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7704: 0x0  nop
    ctx->pc = 0x1b7704u;
    // NOP
    // 0x1b7708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b770c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b770cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7710: 0x0  nop
    ctx->pc = 0x1b7710u;
    // NOP
    // 0x1b7714: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B7714u;
    {
        const bool branch_taken_0x1b7714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7714u;
        // 0x1b7718: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7714) {
            ctx->pc = 0x1B778Cu;
            goto label_1b778c;
        }
    }
    ctx->pc = 0x1B771Cu;
    // 0x1b771c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x1b771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7720: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x1b7720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7724: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b7724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b7728: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b772c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b772cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7730: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7730u;
    {
        const bool branch_taken_0x1b7730 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7730u;
        // 0x1b7734: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7730) {
            ctx->pc = 0x1B774Cu;
            goto label_1b774c;
        }
    }
    ctx->pc = 0x1B7738u;
    // 0x1b7738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b773c: 0x0  nop
    ctx->pc = 0x1b773cu;
    // NOP
    // 0x1b7740: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7744u;
    {
        const bool branch_taken_0x1b7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7744) {
            ctx->pc = 0x1B7768u;
            goto label_1b7768;
        }
    }
    ctx->pc = 0x1B774Cu;
label_1b774c:
    // 0x1b774c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b774cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b7750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7754: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b7758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b775c: 0x0  nop
    ctx->pc = 0x1b775cu;
    // NOP
    // 0x1b7760: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b7760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b7764: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b7764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b7768:
    // 0x1b7768: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b776c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b776cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7774: 0x0  nop
    ctx->pc = 0x1b7774u;
    // NOP
    // 0x1b7778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b7778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b777c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b777cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7780: 0x0  nop
    ctx->pc = 0x1b7780u;
    // NOP
    // 0x1b7784: 0x45010104  bc1t        . + 4 + (0x104 << 2)
    ctx->pc = 0x1B7784u;
    {
        const bool branch_taken_0x1b7784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7784u;
        // 0x1b7788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7784) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B778Cu;
label_1b778c:
    // 0x1b778c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x1b778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7790: 0xc62100f0  lwc1        $f1, 0xF0($s1)
    ctx->pc = 0x1b7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7794: 0xc6220150  lwc1        $f2, 0x150($s1)
    ctx->pc = 0x1b7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b779c: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1b77a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B77A0u;
    {
        const bool branch_taken_0x1b77a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77A0u;
        // 0x1b77a4: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77a0) {
            ctx->pc = 0x1B77BCu;
            goto label_1b77bc;
        }
    }
    ctx->pc = 0x1B77A8u;
    // 0x1b77a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b77a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b77ac: 0x0  nop
    ctx->pc = 0x1b77acu;
    // NOP
    // 0x1b77b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b77b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b77b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B77B4u;
    {
        const bool branch_taken_0x1b77b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b77b4) {
            ctx->pc = 0x1B77D8u;
            goto label_1b77d8;
        }
    }
    ctx->pc = 0x1B77BCu;
label_1b77bc:
    // 0x1b77bc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b77c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b77c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b77c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b77c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b77c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b77cc: 0x0  nop
    ctx->pc = 0x1b77ccu;
    // NOP
    // 0x1b77d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b77d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b77d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b77d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b77d8:
    // 0x1b77d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b77d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b77dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b77dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b77e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b77e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b77e4: 0x0  nop
    ctx->pc = 0x1b77e4u;
    // NOP
    // 0x1b77e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b77e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b77ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b77ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b77f0: 0x0  nop
    ctx->pc = 0x1b77f0u;
    // NOP
    // 0x1b77f4: 0x450100e8  bc1t        . + 4 + (0xE8 << 2)
    ctx->pc = 0x1B77F4u;
    {
        const bool branch_taken_0x1b77f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B77F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77F4u;
        // 0x1b77f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b77f4) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B77FCu;
    // 0x1b77fc: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x1b77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b7800: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x1b7804: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7804u;
    {
        const bool branch_taken_0x1b7804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7804u;
        // 0x1b7808: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7804) {
            ctx->pc = 0x1B7898u;
            goto label_1b7898;
        }
    }
    ctx->pc = 0x1B780Cu;
    // 0x1b780c: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1b7810: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B7810u;
    {
        const bool branch_taken_0x1b7810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7810) {
            ctx->pc = 0x1B7814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7810u;
            // 0x1b7814: 0x8cc21004  lw          $v0, 0x1004($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B789Cu;
            goto label_1b789c;
        }
    }
    ctx->pc = 0x1B7818u;
    // 0x1b7818: 0x8cc31060  lw          $v1, 0x1060($a2)
    ctx->pc = 0x1b7818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4192)));
    // 0x1b781c: 0x38620012  xori        $v0, $v1, 0x12
    ctx->pc = 0x1b781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
    // 0x1b7820: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B7820u;
    {
        const bool branch_taken_0x1b7820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7820u;
        // 0x1b7824: 0x38620013  xori        $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7820) {
            ctx->pc = 0x1B7898u;
            goto label_1b7898;
        }
    }
    ctx->pc = 0x1B7828u;
    // 0x1b7828: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7828u;
    {
        const bool branch_taken_0x1b7828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7828u;
        // 0x1b782c: 0x38620014  xori        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7828) {
            ctx->pc = 0x1B7898u;
            goto label_1b7898;
        }
    }
    ctx->pc = 0x1B7830u;
    // 0x1b7830: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B7830u;
    {
        const bool branch_taken_0x1b7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7830u;
        // 0x1b7834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7830) {
            ctx->pc = 0x1B7898u;
            goto label_1b7898;
        }
    }
    ctx->pc = 0x1B7838u;
    // 0x1b7838: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1B7838u;
    SET_GPR_U32(ctx, 31, 0x1B7840u);
    ctx->pc = 0x1B783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7838u;
    // 0x1b783c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1B7838u, 0x1B7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7840u;
label_1b7840:
    // 0x1b7840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7844: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7844u;
    {
        const bool branch_taken_0x1b7844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7844) {
            ctx->pc = 0x1B7860u;
            goto label_1b7860;
        }
    }
    ctx->pc = 0x1B784Cu;
    // 0x1b784c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b7850: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b7850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b7854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7858: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7858u;
    {
        const bool branch_taken_0x1b7858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7858u;
        // 0x1b785c: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7858) {
            ctx->pc = 0x1B7884u;
            goto label_1b7884;
        }
    }
    ctx->pc = 0x1B7860u;
label_1b7860:
    // 0x1b7860: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b7860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b7864: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7868: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b786c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b7870: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b7870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b7874: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b7874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b7878: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B7878u;
    SET_GPR_U32(ctx, 31, 0x1B7880u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B7878u, 0x1B7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7880u;
label_1b7880:
    // 0x1b7880: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1b7880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
label_1b7884:
    // 0x1b7884: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1b7884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1b7888: 0x4410096  bgez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1B7888u;
    {
        const bool branch_taken_0x1b7888 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7888u;
        // 0x1b788c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7888) {
            ctx->pc = 0x1B7AE4u;
            goto label_1b7ae4;
        }
    }
    ctx->pc = 0x1B7890u;
    // 0x1b7890: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1B7890u;
    {
        const bool branch_taken_0x1b7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7890u;
        // 0x1b7894: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7890) {
            ctx->pc = 0x1B7AFCu;
            goto label_1b7afc;
        }
    }
    ctx->pc = 0x1B7898u;
label_1b7898:
    // 0x1b7898: 0x8cc21004  lw          $v0, 0x1004($a2)
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
label_1b789c:
    // 0x1b789c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B789Cu;
    {
        const bool branch_taken_0x1b789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b789c) {
            ctx->pc = 0x1B78A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B789Cu;
            // 0x1b78a0: 0x8e22021c  lw          $v0, 0x21C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B78C4u;
            goto label_1b78c4;
        }
    }
    ctx->pc = 0x1B78A4u;
    // 0x1b78a4: 0x8c420ff8  lw          $v0, 0xFF8($v0)
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b78a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b78ac: 0x44000b9  bltz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1B78ACu;
    {
        const bool branch_taken_0x1b78ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B78B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78ACu;
        // 0x1b78b0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78ac) {
            ctx->pc = 0x1B7B94u;
            goto label_1b7b94;
        }
    }
    ctx->pc = 0x1B78B4u;
    // 0x1b78b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b78b8: 0x104300b7  beq         $v0, $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1B78B8u;
    {
        const bool branch_taken_0x1b78b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78B8u;
        // 0x1b78bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78b8) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B78C0u;
    // 0x1b78c0: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x1b78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_1b78c4:
    // 0x1b78c4: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1B78C4u;
    {
        const bool branch_taken_0x1b78c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C4u;
        // 0x1b78c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78c4) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B78CCu;
    // 0x1b78cc: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x1b78ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78d0: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x1b78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1b78d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b78d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b78d8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b78d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b78dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78e0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1b78e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b78e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b78e8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1b78e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b78ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b78ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b78f0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b78f4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1b78f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b78f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1b78f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b78fc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b78fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b7900: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b7900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b7904: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b7904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b7908: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b7908u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b790c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b790cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b7910: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b7910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b7914: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b7914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b7918: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x1b7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b791c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b791cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7920: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1b7920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1b7924: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b7928: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7928u;
    {
        const bool branch_taken_0x1b7928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7928u;
        // 0x1b792c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7928) {
            ctx->pc = 0x1B793Cu;
            goto label_1b793c;
        }
    }
    ctx->pc = 0x1B7930u;
    // 0x1b7930: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b7930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b7934: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7934u;
    {
        const bool branch_taken_0x1b7934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7934) {
            ctx->pc = 0x1B7940u;
            goto label_1b7940;
        }
    }
    ctx->pc = 0x1B793Cu;
label_1b793c:
    // 0x1b793c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7940:
    // 0x1b7940: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7940u;
    {
        const bool branch_taken_0x1b7940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7940) {
            ctx->pc = 0x1B7944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7940u;
            // 0x1b7944: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7978u;
            goto label_1b7978;
        }
    }
    ctx->pc = 0x1B7948u;
    // 0x1b7948: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b794c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1B794Cu;
    SET_GPR_U32(ctx, 31, 0x1B7954u);
    ctx->pc = 0x1B7950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B794Cu;
    // 0x1b7950: 0x24050446  addiu       $a1, $zero, 0x446 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1094));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1B794Cu, 0x1B7954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7954u;
label_1b7954:
    // 0x1b7954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b7954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7958: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1B7958u, 0x1B7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7960u;
    {
        const bool branch_taken_0x1b7960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7960) {
            ctx->pc = 0x1B7964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7960u;
            // 0x1b7964: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B79A8u;
            goto label_1b79a8;
        }
    }
    ctx->pc = 0x1B7968u;
    // 0x1b7968: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1B7968u;
    SET_GPR_U32(ctx, 31, 0x1B7970u);
    ctx->pc = 0x1B796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7968u;
    // 0x1b796c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1B7968u, 0x1B7970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7970u;
label_1b7970:
    // 0x1b7970: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B7970u;
    {
        const bool branch_taken_0x1b7970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7970u;
        // 0x1b7974: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7970) {
            ctx->pc = 0x1B79A8u;
            goto label_1b79a8;
        }
    }
    ctx->pc = 0x1B7978u;
label_1b7978:
    // 0x1b7978: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b797c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7980: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b7980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7984: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b7984u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b7988: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b798c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b798cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1b7990: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b7990u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1b7994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7998: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b799c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b799cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b79a0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1b79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b79a4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1b79a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1b79a8:
    // 0x1b79a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1b79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1b79ac: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b79acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b79b0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x1b79b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b79b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b79b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b79b8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1b79b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b79bc: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x1b79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b79c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b79c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b79c4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b79c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b79c8: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x1b79c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b79cc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b79ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b79d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b79d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b79d4: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x1b79d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x1b79d8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b79d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b79dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b79dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b79e0: 0x0  nop
    ctx->pc = 0x1b79e0u;
    // NOP
    // 0x1b79e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b79e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b79e8: 0x0  nop
    ctx->pc = 0x1b79e8u;
    // NOP
    // 0x1b79ec: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x1B79ECu;
    {
        const bool branch_taken_0x1b79ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79ECu;
        // 0x1b79f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79ec) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B79F4u;
    // 0x1b79f4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x1b79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x1b79f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B79F8u;
    {
        const bool branch_taken_0x1b79f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F8u;
        // 0x1b79fc: 0x26230190  addiu       $v1, $s1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f8) {
            ctx->pc = 0x1B7A0Cu;
            goto label_1b7a0c;
        }
    }
    ctx->pc = 0x1B7A00u;
    // 0x1b7a00: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x1B7A00u;
    SET_GPR_U32(ctx, 31, 0x1B7A08u);
    ctx->pc = 0x1B7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A00u;
    // 0x1b7a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x1B7A00u, 0x1B7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A08u;
label_1b7a08:
    // 0x1b7a08: 0x26230190  addiu       $v1, $s1, 0x190
    ctx->pc = 0x1b7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
label_1b7a0c:
    // 0x1b7a0c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1b7a10: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B7A10u;
    {
        const bool branch_taken_0x1b7a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a10) {
            ctx->pc = 0x1B7A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A10u;
            // 0x1b7a14: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A80u;
            goto label_1b7a80;
        }
    }
    ctx->pc = 0x1B7A18u;
    // 0x1b7a18: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1b7a1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A1Cu;
    {
        const bool branch_taken_0x1b7a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a1c) {
            ctx->pc = 0x1B7A30u;
            goto label_1b7a30;
        }
    }
    ctx->pc = 0x1B7A24u;
    // 0x1b7a24: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1b7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1b7a28: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B7A28u;
    {
        const bool branch_taken_0x1b7a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a28) {
            ctx->pc = 0x1B7A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A28u;
            // 0x1b7a2c: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A80u;
            goto label_1b7a80;
        }
    }
    ctx->pc = 0x1B7A30u;
label_1b7a30:
    // 0x1b7a30: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1b7a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1b7a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7a38: 0xc62001b0  lwc1        $f0, 0x1B0($s1)
    ctx->pc = 0x1b7a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b7a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7a40: 0x0  nop
    ctx->pc = 0x1b7a40u;
    // NOP
    // 0x1b7a44: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x1B7A44u;
    {
        const bool branch_taken_0x1b7a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7a44) {
            ctx->pc = 0x1B7A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A44u;
            // 0x1b7a48: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A80u;
            goto label_1b7a80;
        }
    }
    ctx->pc = 0x1B7A4Cu;
    // 0x1b7a4c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1b7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1b7a50: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1b7a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1b7a54: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7A54u;
    {
        const bool branch_taken_0x1b7a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a54) {
            ctx->pc = 0x1B7A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A54u;
            // 0x1b7a58: 0xae20017c  sw          $zero, 0x17C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A78u;
            goto label_1b7a78;
        }
    }
    ctx->pc = 0x1B7A5Cu;
    // 0x1b7a5c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1b7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1b7a60: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b7a64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b7a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b7a68: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1b7a6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A6Cu;
    {
        const bool branch_taken_0x1b7a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a6c) {
            ctx->pc = 0x1B7A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A6Cu;
            // 0x1b7a70: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A80u;
            goto label_1b7a80;
        }
    }
    ctx->pc = 0x1B7A74u;
    // 0x1b7a74: 0xae20017c  sw          $zero, 0x17C($s1)
    ctx->pc = 0x1b7a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
label_1b7a78:
    // 0x1b7a78: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x1b7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x1b7a7c: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x1b7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1b7a80:
    // 0x1b7a80: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B7A80u;
    {
        const bool branch_taken_0x1b7a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A80u;
        // 0x1b7a84: 0x8e422b00  lw          $v0, 0x2B00($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a80) {
            ctx->pc = 0x1B7B34u;
            goto label_1b7b34;
        }
    }
    ctx->pc = 0x1B7A88u;
    // 0x1b7a88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7a8c: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1B7A8Cu;
    SET_GPR_U32(ctx, 31, 0x1B7A94u);
    ctx->pc = 0x1B7A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7A8Cu;
    // 0x1b7a90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1B7A8Cu, 0x1B7A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A94u;
label_1b7a94:
    // 0x1b7a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7a98: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7A98u;
    {
        const bool branch_taken_0x1b7a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7a98) {
            ctx->pc = 0x1B7AB4u;
            goto label_1b7ab4;
        }
    }
    ctx->pc = 0x1B7AA0u;
    // 0x1b7aa0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1b7aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1b7aa4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b7aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b7aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7aac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B7AACu;
    {
        const bool branch_taken_0x1b7aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AACu;
        // 0x1b7ab0: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7aac) {
            ctx->pc = 0x1B7AD8u;
            goto label_1b7ad8;
        }
    }
    ctx->pc = 0x1B7AB4u;
label_1b7ab4:
    // 0x1b7ab4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b7ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b7ab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7abc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b7abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7ac0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b7ac4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b7ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b7ac8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b7ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b7acc: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B7ACCu;
    SET_GPR_U32(ctx, 31, 0x1B7AD4u);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B7ACCu, 0x1B7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AD4u;
label_1b7ad4:
    // 0x1b7ad4: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1b7ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
label_1b7ad8:
    // 0x1b7ad8: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x1b7ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
    // 0x1b7adc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7ADCu;
    {
        const bool branch_taken_0x1b7adc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7ADCu;
        // 0x1b7ae0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7adc) {
            ctx->pc = 0x1B7AF8u;
            goto label_1b7af8;
        }
    }
    ctx->pc = 0x1B7AE4u;
label_1b7ae4:
    // 0x1b7ae4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7ae8: 0x0  nop
    ctx->pc = 0x1b7ae8u;
    // NOP
    // 0x1b7aec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7af0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7AF0u;
    {
        const bool branch_taken_0x1b7af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7af0) {
            ctx->pc = 0x1B7B10u;
            goto label_1b7b10;
        }
    }
    ctx->pc = 0x1B7AF8u;
label_1b7af8:
    // 0x1b7af8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b7afc:
    // 0x1b7afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7b00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7b04: 0x0  nop
    ctx->pc = 0x1b7b04u;
    // NOP
    // 0x1b7b08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7b0c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7b0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7b10:
    // 0x1b7b10: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7b14: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b20: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x1b7b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7b24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1b7b24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b7b28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b7b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7b2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7B2Cu;
    {
        const bool branch_taken_0x1b7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B2Cu;
        // 0x1b7b30: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b2c) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7B34u;
label_1b7b34:
    // 0x1b7b34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7B34u;
    {
        const bool branch_taken_0x1b7b34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B34u;
        // 0x1b7b38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b34) {
            ctx->pc = 0x1B7B50u;
            goto label_1b7b50;
        }
    }
    ctx->pc = 0x1B7B3Cu;
    // 0x1b7b3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7b40: 0x0  nop
    ctx->pc = 0x1b7b40u;
    // NOP
    // 0x1b7b44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7b44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7b48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7B48u;
    {
        const bool branch_taken_0x1b7b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b48) {
            ctx->pc = 0x1B7B68u;
            goto label_1b7b68;
        }
    }
    ctx->pc = 0x1B7B50u;
label_1b7b50:
    // 0x1b7b50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7b54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7b58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b7b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7b5c: 0x0  nop
    ctx->pc = 0x1b7b5cu;
    // NOP
    // 0x1b7b60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b7b60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b7b64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b7b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b7b68:
    // 0x1b7b68: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b7b6c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b7b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b7b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7b74: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x1b7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7b78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b7b78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b7b7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7b80: 0x0  nop
    ctx->pc = 0x1b7b80u;
    // NOP
    // 0x1b7b84: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7B84u;
    {
        const bool branch_taken_0x1b7b84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B84u;
        // 0x1b7b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b84) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7B8Cu;
    // 0x1b7b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7B8Cu;
    {
        const bool branch_taken_0x1b7b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B8Cu;
        // 0x1b7b90: 0x2c820001  sltiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b8c) {
            ctx->pc = 0x1B7B98u;
            goto label_1b7b98;
        }
    }
    ctx->pc = 0x1B7B94u;
label_1b7b94:
    // 0x1b7b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7b98:
    // 0x1b7b98: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b7b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7b9c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b7b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b7ba0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b7ba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7ba4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b7ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b7ba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b7ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BACu;
        // 0x1b7bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7BB4u;
    // 0x1b7bb4: 0x0  nop
    ctx->pc = 0x1b7bb4u;
    // NOP
    ctx->pc = 0x1b7bb8u;
}
