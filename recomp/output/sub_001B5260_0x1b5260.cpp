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

// Function: sub_001B5260
// Address: 0x1b5260 - 0x1b5470
void sub_001B5260_0x1b5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5260_0x1b5260");
#endif

    switch (ctx->pc) {
        case 0x1b528cu: goto label_1b528c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b53b4u: goto label_1b53b4;
        case 0x1b5428u: goto label_1b5428;
        default: break;
    }

    ctx->pc = 0x1b5260u;

    // 0x1b5260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b526c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b526cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5274: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b5274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b5278: 0x8c421004  lw          $v0, 0x1004($v0)
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1b527c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B527Cu;
    {
        const bool branch_taken_0x1b527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B527Cu;
        // 0x1b5280: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b527c) {
            ctx->pc = 0x1B5290u;
            goto label_1b5290;
        }
    }
    ctx->pc = 0x1B5284u;
    // 0x1b5284: 0xc06c424  jal         func_1B1090
    ctx->pc = 0x1B5284u;
    SET_GPR_U32(ctx, 31, 0x1B528Cu);
    ctx->pc = 0x1B5288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5284u;
    // 0x1b5288: 0x8c440338  lw          $a0, 0x338($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1090u, 0x1B5284u, 0x1B528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B528Cu;
label_1b528c:
    // 0x1b528c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1b528cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b5290:
    // 0x1b5290: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5290u;
    {
        const bool branch_taken_0x1b5290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5290) {
            ctx->pc = 0x1B5294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5290u;
            // 0x1b5294: 0xc6010100  lwc1        $f1, 0x100($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B52B0u;
            goto label_1b52b0;
        }
    }
    ctx->pc = 0x1B5298u;
    // 0x1b5298: 0xc06dcc6  jal         func_1B7318
    ctx->pc = 0x1B5298u;
    SET_GPR_U32(ctx, 31, 0x1B52A0u);
    ctx->pc = 0x1B529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5298u;
    // 0x1b529c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7318u, 0x1B5298u, 0x1B52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52A0u;
label_1b52a0:
    // 0x1b52a0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B52A0u;
    {
        const bool branch_taken_0x1b52a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b52a0) {
            ctx->pc = 0x1B52A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B52A0u;
            // 0x1b52a4: 0xc6010100  lwc1        $f1, 0x100($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B533Cu;
            goto label_1b533c;
        }
    }
    ctx->pc = 0x1B52A8u;
    // 0x1b52a8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1B52A8u;
    {
        const bool branch_taken_0x1b52a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52A8u;
        // 0x1b52ac: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52a8) {
            ctx->pc = 0x1B5334u;
            goto label_1b5334;
        }
    }
    ctx->pc = 0x1B52B0u;
label_1b52b0:
    // 0x1b52b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b52b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b52b4: 0x0  nop
    ctx->pc = 0x1b52b4u;
    // NOP
    // 0x1b52b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b52b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b52bc: 0x0  nop
    ctx->pc = 0x1b52bcu;
    // NOP
    // 0x1b52c0: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1B52C0u;
    {
        const bool branch_taken_0x1b52c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52C0u;
        // 0x1b52c4: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52c0) {
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B52C8u;
    // 0x1b52c8: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1b52c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b52cc: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b52d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B52D0u;
    {
        const bool branch_taken_0x1b52d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52D0u;
        // 0x1b52d4: 0x46000880  add.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52d0) {
            ctx->pc = 0x1B52ECu;
            goto label_1b52ec;
        }
    }
    ctx->pc = 0x1B52D8u;
    // 0x1b52d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b52d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b52dc: 0x0  nop
    ctx->pc = 0x1b52dcu;
    // NOP
    // 0x1b52e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b52e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b52e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B52E4u;
    {
        const bool branch_taken_0x1b52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52e4) {
            ctx->pc = 0x1B5308u;
            goto label_1b5308;
        }
    }
    ctx->pc = 0x1B52ECu;
label_1b52ec:
    // 0x1b52ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b52f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b52f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b52f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b52f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b52fc: 0x0  nop
    ctx->pc = 0x1b52fcu;
    // NOP
    // 0x1b5300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5304: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b5304u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b5308:
    // 0x1b5308: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b530c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b530cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5314: 0x0  nop
    ctx->pc = 0x1b5314u;
    // NOP
    // 0x1b5318: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b5318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b531c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b531cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5320: 0x0  nop
    ctx->pc = 0x1b5320u;
    // NOP
    // 0x1b5324: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x1B5324u;
    {
        const bool branch_taken_0x1b5324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5324) {
            ctx->pc = 0x1B5328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5324u;
            // 0x1b5328: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B532Cu;
    // 0x1b532c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B532Cu;
    {
        const bool branch_taken_0x1b532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B532Cu;
        // 0x1b5330: 0xc6010100  lwc1        $f1, 0x100($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b532c) {
            ctx->pc = 0x1B53BCu;
            goto label_1b53bc;
        }
    }
    ctx->pc = 0x1B5334u;
label_1b5334:
    // 0x1b5334: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B5334u;
    {
        const bool branch_taken_0x1b5334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5334u;
        // 0x1b5338: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5334) {
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B533Cu;
label_1b533c:
    // 0x1b533c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b533cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5340: 0x0  nop
    ctx->pc = 0x1b5340u;
    // NOP
    // 0x1b5344: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1b5344u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5348: 0x0  nop
    ctx->pc = 0x1b5348u;
    // NOP
    // 0x1b534c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B534Cu;
    {
        const bool branch_taken_0x1b534c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B534Cu;
        // 0x1b5350: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b534c) {
            ctx->pc = 0x1B53B8u;
            goto label_1b53b8;
        }
    }
    ctx->pc = 0x1B5354u;
    // 0x1b5354: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b5358: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5358u;
    {
        const bool branch_taken_0x1b5358 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5358u;
        // 0x1b535c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5358) {
            ctx->pc = 0x1B5374u;
            goto label_1b5374;
        }
    }
    ctx->pc = 0x1B5360u;
    // 0x1b5360: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5364: 0x0  nop
    ctx->pc = 0x1b5364u;
    // NOP
    // 0x1b5368: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b536c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B536Cu;
    {
        const bool branch_taken_0x1b536c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b536c) {
            ctx->pc = 0x1B538Cu;
            goto label_1b538c;
        }
    }
    ctx->pc = 0x1B5374u;
label_1b5374:
    // 0x1b5374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5378: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b537c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b537cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5380: 0x0  nop
    ctx->pc = 0x1b5380u;
    // NOP
    // 0x1b5384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b5384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b5388: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b5388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b538c:
    // 0x1b538c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b538cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5390: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5398: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b5398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b539c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b539cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b53a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b53a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b53a4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b53a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1b53a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b53a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b53ac: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1B53ACu;
    SET_GPR_U32(ctx, 31, 0x1B53B4u);
    ctx->pc = 0x1B53B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B53ACu;
    // 0x1b53b0: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1B53ACu, 0x1B53B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B53B4u;
label_1b53b4:
    // 0x1b53b4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1b53b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1b53b8:
    // 0x1b53b8: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1b53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b53bc:
    // 0x1b53bc: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1b53bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b53c0: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b53c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B53C4u;
    {
        const bool branch_taken_0x1b53c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53C4u;
        // 0x1b53c8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53c4) {
            ctx->pc = 0x1B53E0u;
            goto label_1b53e0;
        }
    }
    ctx->pc = 0x1B53CCu;
    // 0x1b53cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b53ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b53d0: 0x0  nop
    ctx->pc = 0x1b53d0u;
    // NOP
    // 0x1b53d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b53d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b53d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B53D8u;
    {
        const bool branch_taken_0x1b53d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53d8) {
            ctx->pc = 0x1B53FCu;
            goto label_1b53fc;
        }
    }
    ctx->pc = 0x1B53E0u;
label_1b53e0:
    // 0x1b53e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b53e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b53e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b53e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b53ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b53ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b53f0: 0x0  nop
    ctx->pc = 0x1b53f0u;
    // NOP
    // 0x1b53f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b53f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b53f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b53f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b53fc:
    // 0x1b53fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b53fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b5400: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b5400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5404: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5408: 0x0  nop
    ctx->pc = 0x1b5408u;
    // NOP
    // 0x1b540c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b540cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b5410: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b5410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5414: 0x0  nop
    ctx->pc = 0x1b5414u;
    // NOP
    // 0x1b5418: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B5418u;
    {
        const bool branch_taken_0x1b5418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5418u;
        // 0x1b541c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5418) {
            ctx->pc = 0x1B5454u;
            goto label_1b5454;
        }
    }
    ctx->pc = 0x1B5420u;
    // 0x1b5420: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x1B5420u;
    SET_GPR_U32(ctx, 31, 0x1B5428u);
    ctx->pc = 0x1B5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5420u;
    // 0x1b5424: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x1B5420u, 0x1B5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5428u;
label_1b5428:
    // 0x1b5428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b542c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B542Cu;
    {
        const bool branch_taken_0x1b542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B542Cu;
        // 0x1b5430: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b542c) {
            ctx->pc = 0x1B5438u;
            goto label_1b5438;
        }
    }
    ctx->pc = 0x1B5434u;
    // 0x1b5434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5438:
    // 0x1b5438: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1b5438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1b543c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1b543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1b5440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5444: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1b5444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1b5448: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1b5448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1b544c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B544Cu;
    {
        const bool branch_taken_0x1b544c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B544Cu;
        // 0x1b5450: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b544c) {
            ctx->pc = 0x1B5458u;
            goto label_1b5458;
        }
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5458:
    // 0x1b5458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b545c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b545cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5464: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5464u;
        // 0x1b5468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B546Cu;
    // 0x1b546c: 0x0  nop
    ctx->pc = 0x1b546cu;
    // NOP
    ctx->pc = 0x1b5470u;
}
