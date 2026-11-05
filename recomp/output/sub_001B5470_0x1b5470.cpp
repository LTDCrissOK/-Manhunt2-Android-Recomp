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

// Function: sub_001B5470
// Address: 0x1b5470 - 0x1b5690
void sub_001B5470_0x1b5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5470_0x1b5470");
#endif

    switch (ctx->pc) {
        case 0x1b55fcu: goto label_1b55fc;
        default: break;
    }

    ctx->pc = 0x1b5470u;

    // 0x1b5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5474: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b5474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b5478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b547c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b5488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b548c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b548cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b5490: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1b5490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5494: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1b5494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5498: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5498u;
    {
        const bool branch_taken_0x1b5498 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5498u;
        // 0x1b549c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5498) {
            ctx->pc = 0x1B54B4u;
            goto label_1b54b4;
        }
    }
    ctx->pc = 0x1B54A0u;
    // 0x1b54a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b54a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b54a4: 0x0  nop
    ctx->pc = 0x1b54a4u;
    // NOP
    // 0x1b54a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b54a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b54ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B54ACu;
    {
        const bool branch_taken_0x1b54ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b54ac) {
            ctx->pc = 0x1B54D0u;
            goto label_1b54d0;
        }
    }
    ctx->pc = 0x1B54B4u;
label_1b54b4:
    // 0x1b54b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b54b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b54b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b54b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b54bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b54bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b54c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b54c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b54c4: 0x0  nop
    ctx->pc = 0x1b54c4u;
    // NOP
    // 0x1b54c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b54c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b54cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b54ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b54d0:
    // 0x1b54d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b54d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b54d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b54d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b54d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b54d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b54dc: 0x0  nop
    ctx->pc = 0x1b54dcu;
    // NOP
    // 0x1b54e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b54e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b54e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b54e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b54e8: 0x0  nop
    ctx->pc = 0x1b54e8u;
    // NOP
    // 0x1b54ec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B54ECu;
    {
        const bool branch_taken_0x1b54ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54ECu;
        // 0x1b54f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54ec) {
            ctx->pc = 0x1B5500u;
            goto label_1b5500;
        }
    }
    ctx->pc = 0x1B54F4u;
    // 0x1b54f4: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1b54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x1b54f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B54F8u;
    {
        const bool branch_taken_0x1b54f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54F8u;
        // 0x1b54fc: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54f8) {
            ctx->pc = 0x1B5504u;
            goto label_1b5504;
        }
    }
    ctx->pc = 0x1B5500u;
label_1b5500:
    // 0x1b5500: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1b5500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_1b5504:
    // 0x1b5504: 0xc60100f4  lwc1        $f1, 0xF4($s0)
    ctx->pc = 0x1b5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5508: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b5508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b550c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b5510: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5510u;
    {
        const bool branch_taken_0x1b5510 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5510u;
        // 0x1b5514: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5510) {
            ctx->pc = 0x1B552Cu;
            goto label_1b552c;
        }
    }
    ctx->pc = 0x1B5518u;
    // 0x1b5518: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b551c: 0x0  nop
    ctx->pc = 0x1b551cu;
    // NOP
    // 0x1b5520: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5524: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5524u;
    {
        const bool branch_taken_0x1b5524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5524) {
            ctx->pc = 0x1B5548u;
            goto label_1b5548;
        }
    }
    ctx->pc = 0x1B552Cu;
label_1b552c:
    // 0x1b552c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b552cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b5530: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5534: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5538: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b553c: 0x0  nop
    ctx->pc = 0x1b553cu;
    // NOP
    // 0x1b5540: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5544: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5544u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5548:
    // 0x1b5548: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b554c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b554cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5554: 0x0  nop
    ctx->pc = 0x1b5554u;
    // NOP
    // 0x1b5558: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b555c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b555cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5560: 0x0  nop
    ctx->pc = 0x1b5560u;
    // NOP
    // 0x1b5564: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5564u;
    {
        const bool branch_taken_0x1b5564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5564u;
        // 0x1b5568: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5564) {
            ctx->pc = 0x1B5578u;
            goto label_1b5578;
        }
    }
    ctx->pc = 0x1B556Cu;
    // 0x1b556c: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1b556cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1b5570: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5570u;
    {
        const bool branch_taken_0x1b5570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5570u;
        // 0x1b5574: 0xae0200cc  sw          $v0, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5570) {
            ctx->pc = 0x1B557Cu;
            goto label_1b557c;
        }
    }
    ctx->pc = 0x1B5578u;
label_1b5578:
    // 0x1b5578: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x1b5578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_1b557c:
    // 0x1b557c: 0xc60100f8  lwc1        $f1, 0xF8($s0)
    ctx->pc = 0x1b557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5580: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5584: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b5584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b5588: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5588u;
    {
        const bool branch_taken_0x1b5588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5588u;
        // 0x1b558c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5588) {
            ctx->pc = 0x1B55A4u;
            goto label_1b55a4;
        }
    }
    ctx->pc = 0x1B5590u;
    // 0x1b5590: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5594: 0x0  nop
    ctx->pc = 0x1b5594u;
    // NOP
    // 0x1b5598: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b559c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B559Cu;
    {
        const bool branch_taken_0x1b559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b559c) {
            ctx->pc = 0x1B55C0u;
            goto label_1b55c0;
        }
    }
    ctx->pc = 0x1B55A4u;
label_1b55a4:
    // 0x1b55a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b55a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b55ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b55acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b55b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b55b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b55b4: 0x0  nop
    ctx->pc = 0x1b55b4u;
    // NOP
    // 0x1b55b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b55b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b55bc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b55bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b55c0:
    // 0x1b55c0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b55c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b55c4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b55c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b55c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b55c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b55cc: 0x0  nop
    ctx->pc = 0x1b55ccu;
    // NOP
    // 0x1b55d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b55d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b55d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b55d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b55d8: 0x0  nop
    ctx->pc = 0x1b55d8u;
    // NOP
    // 0x1b55dc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B55DCu;
    {
        const bool branch_taken_0x1b55dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55DCu;
        // 0x1b55e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55dc) {
            ctx->pc = 0x1B55ECu;
            goto label_1b55ec;
        }
    }
    ctx->pc = 0x1B55E4u;
    // 0x1b55e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B55E4u;
    {
        const bool branch_taken_0x1b55e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55E4u;
        // 0x1b55e8: 0xae0200d0  sw          $v0, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55e4) {
            ctx->pc = 0x1B55F0u;
            goto label_1b55f0;
        }
    }
    ctx->pc = 0x1B55ECu;
label_1b55ec:
    // 0x1b55ec: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1b55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1b55f0:
    // 0x1b55f0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1b55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1b55f4: 0xc06d498  jal         func_1B5260
    ctx->pc = 0x1B55F4u;
    SET_GPR_U32(ctx, 31, 0x1B55FCu);
    ctx->pc = 0x1B55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B55F4u;
    // 0x1b55f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5260u, 0x1B55F4u, 0x1B55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B55FCu;
label_1b55fc:
    // 0x1b55fc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B55FCu;
    {
        const bool branch_taken_0x1b55fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b55fc) {
            ctx->pc = 0x1B5600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B55FCu;
            // 0x1b5600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B567Cu;
            goto label_1b567c;
        }
    }
    ctx->pc = 0x1B5604u;
    // 0x1b5604: 0xc60100fc  lwc1        $f1, 0xFC($s0)
    ctx->pc = 0x1b5604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5608: 0xc60000ec  lwc1        $f0, 0xEC($s0)
    ctx->pc = 0x1b5608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b560c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1b560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b5610: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5610u;
    {
        const bool branch_taken_0x1b5610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5610u;
        // 0x1b5614: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5610) {
            ctx->pc = 0x1B562Cu;
            goto label_1b562c;
        }
    }
    ctx->pc = 0x1B5618u;
    // 0x1b5618: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b561c: 0x0  nop
    ctx->pc = 0x1b561cu;
    // NOP
    // 0x1b5620: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5624u;
    {
        const bool branch_taken_0x1b5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5624) {
            ctx->pc = 0x1B5648u;
            goto label_1b5648;
        }
    }
    ctx->pc = 0x1B562Cu;
label_1b562c:
    // 0x1b562c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b562cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b5630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5634: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5638: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b563c: 0x0  nop
    ctx->pc = 0x1b563cu;
    // NOP
    // 0x1b5640: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5644: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5648:
    // 0x1b5648: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b564c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b564cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5654: 0x0  nop
    ctx->pc = 0x1b5654u;
    // NOP
    // 0x1b5658: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b565c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b565cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5660: 0x0  nop
    ctx->pc = 0x1b5660u;
    // NOP
    // 0x1b5664: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5664u;
    {
        const bool branch_taken_0x1b5664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5664u;
        // 0x1b5668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5664) {
            ctx->pc = 0x1B5674u;
            goto label_1b5674;
        }
    }
    ctx->pc = 0x1B566Cu;
    // 0x1b566c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B566Cu;
    {
        const bool branch_taken_0x1b566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B566Cu;
        // 0x1b5670: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b566c) {
            ctx->pc = 0x1B5678u;
            goto label_1b5678;
        }
    }
    ctx->pc = 0x1B5674u;
label_1b5674:
    // 0x1b5674: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1b5674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1b5678:
    // 0x1b5678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b567c:
    // 0x1b567c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b567cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5684: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5684u;
        // 0x1b5688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B568Cu;
    // 0x1b568c: 0x0  nop
    ctx->pc = 0x1b568cu;
    // NOP
    ctx->pc = 0x1b5690u;
}
