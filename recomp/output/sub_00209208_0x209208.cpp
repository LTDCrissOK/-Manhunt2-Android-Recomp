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

// Function: sub_00209208
// Address: 0x209208 - 0x209370
void sub_00209208_0x209208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209208_0x209208");
#endif

    switch (ctx->pc) {
        case 0x209268u: goto label_209268;
        case 0x209330u: goto label_209330;
        default: break;
    }

    ctx->pc = 0x209208u;

    // 0x209208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20920c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209218: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x209218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20921c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x20921Cu;
    {
        const bool branch_taken_0x20921c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20921c) {
            ctx->pc = 0x20934Cu;
            goto label_20934c;
        }
    }
    ctx->pc = 0x209224u;
    // 0x209224: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x209224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209228: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20922c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20922cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209230: 0x0  nop
    ctx->pc = 0x209230u;
    // NOP
    // 0x209234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209238: 0x0  nop
    ctx->pc = 0x209238u;
    // NOP
    // 0x20923c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x20923Cu;
    {
        const bool branch_taken_0x20923c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x209240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20923Cu;
        // 0x209240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20923c) {
            ctx->pc = 0x209358u;
            goto label_209358;
        }
    }
    ctx->pc = 0x209244u;
    // 0x209244: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x209244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209248: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x209248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20924c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20924cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x209250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209254: 0x0  nop
    ctx->pc = 0x209254u;
    // NOP
    // 0x209258: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x209258u;
    {
        const bool branch_taken_0x209258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209258) {
            ctx->pc = 0x20934Cu;
            goto label_20934c;
        }
    }
    ctx->pc = 0x209260u;
    // 0x209260: 0xc076100  jal         func_1D8400
    ctx->pc = 0x209260u;
    SET_GPR_U32(ctx, 31, 0x209268u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x209260u, 0x209268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209268u;
label_209268:
    // 0x209268: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x209268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20926c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20926cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209270: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209270u;
    {
        const bool branch_taken_0x209270 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x209274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209270u;
        // 0x209274: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209270) {
            ctx->pc = 0x20928Cu;
            goto label_20928c;
        }
    }
    ctx->pc = 0x209278u;
    // 0x209278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20927c: 0x0  nop
    ctx->pc = 0x20927cu;
    // NOP
    // 0x209280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x209280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x209284: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x209284u;
    {
        const bool branch_taken_0x209284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x209284) {
            ctx->pc = 0x2092A4u;
            goto label_2092a4;
        }
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x209290: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x209290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x209294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209298: 0x0  nop
    ctx->pc = 0x209298u;
    // NOP
    // 0x20929c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20929cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2092a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2092a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2092a4:
    // 0x2092a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2092a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2092a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2092a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2092ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2092acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2092b0: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2092b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2092b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2092b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2092b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2092b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2092bc: 0x0  nop
    ctx->pc = 0x2092bcu;
    // NOP
    // 0x2092c0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2092c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2092c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2092c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2092c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2092c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2092cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2092CCu;
    {
        const bool branch_taken_0x2092cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2092D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2092CCu;
        // 0x2092d0: 0xe6010018  swc1        $f1, 0x18($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2092cc) {
            ctx->pc = 0x2092E0u;
            goto label_2092e0;
        }
    }
    ctx->pc = 0x2092D4u;
    // 0x2092d4: 0x0  nop
    ctx->pc = 0x2092d4u;
    // NOP
    // 0x2092d8: 0x0  nop
    ctx->pc = 0x2092d8u;
    // NOP
    // 0x2092dc: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x2092dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_2092e0:
    // 0x2092e0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2092e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2092e4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2092e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2092e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2092e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2092ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2092ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2092f0: 0x0  nop
    ctx->pc = 0x2092f0u;
    // NOP
    // 0x2092f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2092f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2092f8: 0x0  nop
    ctx->pc = 0x2092f8u;
    // NOP
    // 0x2092fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2092FCu;
    {
        const bool branch_taken_0x2092fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2092fc) {
            ctx->pc = 0x209300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2092FCu;
            // 0x209300: 0xc60d0014  lwc1        $f13, 0x14($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x209310u;
            goto label_209310;
        }
    }
    ctx->pc = 0x209304u;
    // 0x209304: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x209304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x209308: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x209308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20930c: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x20930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_209310:
    // 0x209310: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x209310u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209314: 0x0  nop
    ctx->pc = 0x209314u;
    // NOP
    // 0x209318: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x209318u;
    {
        const bool branch_taken_0x209318 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209318) {
            ctx->pc = 0x209328u;
            goto label_209328;
        }
    }
    ctx->pc = 0x209320u;
    // 0x209320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x209320u;
    {
        const bool branch_taken_0x209320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209320u;
        // 0x209324: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209320) {
            ctx->pc = 0x209330u;
            goto label_209330;
        }
    }
    ctx->pc = 0x209328u;
label_209328:
    // 0x209328: 0xc0e41ea  jal         func_3907A8
    ctx->pc = 0x209328u;
    SET_GPR_U32(ctx, 31, 0x209330u);
    ctx->pc = 0x20932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209328u;
    // 0x20932c: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3907A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3907A8u, 0x209328u, 0x209330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209330u;
label_209330:
    // 0x209330: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x209330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209334: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x209334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x209338: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x209338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20933c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20933cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x209340: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x209340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x209344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x209344u;
    {
        const bool branch_taken_0x209344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209344u;
        // 0x209348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209344) {
            ctx->pc = 0x209360u;
            goto label_209360;
        }
    }
    ctx->pc = 0x20934Cu;
label_20934c:
    // 0x20934c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209358:
    // 0x209358: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x209358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20935c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x20935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_209360:
    // 0x209360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209368: 0x3e00008  jr          $ra
    ctx->pc = 0x209368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209368u;
        // 0x20936c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209370u;
}
