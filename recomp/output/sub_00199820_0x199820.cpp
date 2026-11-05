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

// Function: sub_00199820
// Address: 0x199820 - 0x199a38
void sub_00199820_0x199820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199820_0x199820");
#endif

    ctx->pc = 0x199820u;

    // 0x199820: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x199820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x199824: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x199824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x199828: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x199828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19982c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19982cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x199830: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199830u;
    {
        const bool branch_taken_0x199830 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x199834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199830u;
        // 0x199834: 0x246408ec  addiu       $a0, $v1, 0x8EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199830) {
            ctx->pc = 0x19984Cu;
            goto label_19984c;
        }
    }
    ctx->pc = 0x199838u;
    // 0x199838: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19983c: 0x0  nop
    ctx->pc = 0x19983cu;
    // NOP
    // 0x199840: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199844: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199844u;
    {
        const bool branch_taken_0x199844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199844) {
            ctx->pc = 0x199868u;
            goto label_199868;
        }
    }
    ctx->pc = 0x19984Cu;
label_19984c:
    // 0x19984c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19984cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x199850: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x199854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199858: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19985c: 0x0  nop
    ctx->pc = 0x19985cu;
    // NOP
    // 0x199860: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199864: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199864u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199868:
    // 0x199868: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19986c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19986cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199874: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x199874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199878: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19987c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19987cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199880: 0x0  nop
    ctx->pc = 0x199880u;
    // NOP
    // 0x199884: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x199884u;
    {
        const bool branch_taken_0x199884 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199884u;
        // 0x199888: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199884) {
            ctx->pc = 0x199890u;
            goto label_199890;
        }
    }
    ctx->pc = 0x19988Cu;
    // 0x19988c: 0xac4008d8  sw          $zero, 0x8D8($v0)
    ctx->pc = 0x19988cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2264), GPR_U32(ctx, 0));
label_199890:
    // 0x199890: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x199894: 0x8cc42b00  lw          $a0, 0x2B00($a2)
    ctx->pc = 0x199894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
    // 0x199898: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199898u;
    {
        const bool branch_taken_0x199898 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199898u;
        // 0x19989c: 0x244508f4  addiu       $a1, $v0, 0x8F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199898) {
            ctx->pc = 0x1998B4u;
            goto label_1998b4;
        }
    }
    ctx->pc = 0x1998A0u;
    // 0x1998a0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1998a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1998a4: 0x0  nop
    ctx->pc = 0x1998a4u;
    // NOP
    // 0x1998a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1998a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1998ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1998ACu;
    {
        const bool branch_taken_0x1998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998ac) {
            ctx->pc = 0x1998D0u;
            goto label_1998d0;
        }
    }
    ctx->pc = 0x1998B4u;
label_1998b4:
    // 0x1998b4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1998b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1998b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1998bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1998bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1998c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1998c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1998c4: 0x0  nop
    ctx->pc = 0x1998c4u;
    // NOP
    // 0x1998c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1998c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1998cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1998ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1998d0:
    // 0x1998d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1998d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1998d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1998d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1998d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1998dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1998e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1998e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1998e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1998e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1998e8: 0x0  nop
    ctx->pc = 0x1998e8u;
    // NOP
    // 0x1998ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1998ECu;
    {
        const bool branch_taken_0x1998ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1998ECu;
        // 0x1998f0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998ec) {
            ctx->pc = 0x1998F8u;
            goto label_1998f8;
        }
    }
    ctx->pc = 0x1998F4u;
    // 0x1998f4: 0xac4008dc  sw          $zero, 0x8DC($v0)
    ctx->pc = 0x1998f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2268), GPR_U32(ctx, 0));
label_1998f8:
    // 0x1998f8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1998fc: 0x8cc42b00  lw          $a0, 0x2B00($a2)
    ctx->pc = 0x1998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
    // 0x199900: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199900u;
    {
        const bool branch_taken_0x199900 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x199904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199900u;
        // 0x199904: 0x244508fc  addiu       $a1, $v0, 0x8FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199900) {
            ctx->pc = 0x19991Cu;
            goto label_19991c;
        }
    }
    ctx->pc = 0x199908u;
    // 0x199908: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x199908u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19990c: 0x0  nop
    ctx->pc = 0x19990cu;
    // NOP
    // 0x199910: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199914u;
    {
        const bool branch_taken_0x199914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199914) {
            ctx->pc = 0x199938u;
            goto label_199938;
        }
    }
    ctx->pc = 0x19991Cu;
label_19991c:
    // 0x19991c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x19991cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x199920: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x199920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x199924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199928: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19992c: 0x0  nop
    ctx->pc = 0x19992cu;
    // NOP
    // 0x199930: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199934: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199934u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199938:
    // 0x199938: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19993c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19993cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199944: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x199944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199948: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19994c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19994cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199950: 0x0  nop
    ctx->pc = 0x199950u;
    // NOP
    // 0x199954: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x199954u;
    {
        const bool branch_taken_0x199954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199954u;
        // 0x199958: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199954) {
            ctx->pc = 0x199960u;
            goto label_199960;
        }
    }
    ctx->pc = 0x19995Cu;
    // 0x19995c: 0xac4008e0  sw          $zero, 0x8E0($v0)
    ctx->pc = 0x19995cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2272), GPR_U32(ctx, 0));
label_199960:
    // 0x199960: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x199964: 0x8cc42b00  lw          $a0, 0x2B00($a2)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
    // 0x199968: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199968u;
    {
        const bool branch_taken_0x199968 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199968u;
        // 0x19996c: 0x24450904  addiu       $a1, $v0, 0x904 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199968) {
            ctx->pc = 0x199984u;
            goto label_199984;
        }
    }
    ctx->pc = 0x199970u;
    // 0x199970: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x199970u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199974: 0x0  nop
    ctx->pc = 0x199974u;
    // NOP
    // 0x199978: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19997c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19997Cu;
    {
        const bool branch_taken_0x19997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19997c) {
            ctx->pc = 0x1999A0u;
            goto label_1999a0;
        }
    }
    ctx->pc = 0x199984u;
label_199984:
    // 0x199984: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x199984u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x199988: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x199988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19998c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19998cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x199990: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x199990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x199994: 0x0  nop
    ctx->pc = 0x199994u;
    // NOP
    // 0x199998: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19999c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19999cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1999a0:
    // 0x1999a0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1999a4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1999a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1999a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1999a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1999ac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1999acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1999b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1999b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1999b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1999b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1999b8: 0x0  nop
    ctx->pc = 0x1999b8u;
    // NOP
    // 0x1999bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1999BCu;
    {
        const bool branch_taken_0x1999bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999BCu;
        // 0x1999c0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999bc) {
            ctx->pc = 0x1999C8u;
            goto label_1999c8;
        }
    }
    ctx->pc = 0x1999C4u;
    // 0x1999c4: 0xac4008e4  sw          $zero, 0x8E4($v0)
    ctx->pc = 0x1999c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2276), GPR_U32(ctx, 0));
label_1999c8:
    // 0x1999c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1999cc: 0x8cc42b00  lw          $a0, 0x2B00($a2)
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11008)));
    // 0x1999d0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1999D0u;
    {
        const bool branch_taken_0x1999d0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999D0u;
        // 0x1999d4: 0x24450908  addiu       $a1, $v0, 0x908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999d0) {
            ctx->pc = 0x1999ECu;
            goto label_1999ec;
        }
    }
    ctx->pc = 0x1999D8u;
    // 0x1999d8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1999d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1999dc: 0x0  nop
    ctx->pc = 0x1999dcu;
    // NOP
    // 0x1999e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1999e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1999e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1999E4u;
    {
        const bool branch_taken_0x1999e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999e4) {
            ctx->pc = 0x199A08u;
            goto label_199a08;
        }
    }
    ctx->pc = 0x1999ECu;
label_1999ec:
    // 0x1999ec: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1999f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1999f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1999f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1999f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1999f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1999f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1999fc: 0x0  nop
    ctx->pc = 0x1999fcu;
    // NOP
    // 0x199a00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x199a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x199a04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x199a04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_199a08:
    // 0x199a08: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x199a0c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x199a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x199a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199a14: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x199a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a18: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x199a18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x199a1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199a20: 0x0  nop
    ctx->pc = 0x199a20u;
    // NOP
    // 0x199a24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x199A24u;
    {
        const bool branch_taken_0x199a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x199A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A24u;
        // 0x199a28: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a24) {
            ctx->pc = 0x199A30u;
            goto label_199a30;
        }
    }
    ctx->pc = 0x199A2Cu;
    // 0x199a2c: 0xac4008e8  sw          $zero, 0x8E8($v0)
    ctx->pc = 0x199a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2280), GPR_U32(ctx, 0));
label_199a30:
    // 0x199a30: 0x3e00008  jr          $ra
    ctx->pc = 0x199A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199A38u;
}
