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

// Function: sub_001CFE00
// Address: 0x1cfe00 - 0x1cff78
void sub_001CFE00_0x1cfe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFE00_0x1cfe00");
#endif

    switch (ctx->pc) {
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff5cu: goto label_1cff5c;
        default: break;
    }

    ctx->pc = 0x1cfe00u;

    // 0x1cfe00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfe04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfe0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfe0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe10: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1cfe10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cfe14: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1cfe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cfe18: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1cfe18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe1c: 0x0  nop
    ctx->pc = 0x1cfe1cu;
    // NOP
    // 0x1cfe20: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFE20u;
    {
        const bool branch_taken_0x1cfe20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE20u;
        // 0x1cfe24: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe20) {
            ctx->pc = 0x1CFE44u;
            goto label_1cfe44;
        }
    }
    ctx->pc = 0x1CFE28u;
    // 0x1cfe28: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1cfe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe30: 0x0  nop
    ctx->pc = 0x1cfe30u;
    // NOP
    // 0x1cfe34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfe34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe38: 0x0  nop
    ctx->pc = 0x1cfe38u;
    // NOP
    // 0x1cfe3c: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1CFE3Cu;
    {
        const bool branch_taken_0x1cfe3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe3c) {
            ctx->pc = 0x1CFE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFE3Cu;
            // 0x1cfe40: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFE74u;
            goto label_1cfe74;
        }
    }
    ctx->pc = 0x1CFE44u;
label_1cfe44:
    // 0x1cfe44: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1cfe44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe48: 0x0  nop
    ctx->pc = 0x1cfe48u;
    // NOP
    // 0x1cfe4c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1CFE4Cu;
    {
        const bool branch_taken_0x1cfe4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe4c) {
            ctx->pc = 0x1CFE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFE4Cu;
            // 0x1cfe50: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFE80u;
            goto label_1cfe80;
        }
    }
    ctx->pc = 0x1CFE54u;
    // 0x1cfe54: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1cfe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfe58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfe5c: 0x0  nop
    ctx->pc = 0x1cfe5cu;
    // NOP
    // 0x1cfe60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cfe60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfe64: 0x0  nop
    ctx->pc = 0x1cfe64u;
    // NOP
    // 0x1cfe68: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1CFE68u;
    {
        const bool branch_taken_0x1cfe68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfe68) {
            ctx->pc = 0x1CFE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFE68u;
            // 0x1cfe6c: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFE80u;
            goto label_1cfe80;
        }
    }
    ctx->pc = 0x1CFE70u;
    // 0x1cfe70: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1cfe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfe74:
    // 0x1cfe74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cfe74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cfe78: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1cfe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1cfe7c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x1cfe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cfe80:
    // 0x1cfe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe84: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1cfe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe88: 0x46046302  mul.s       $f12, $f12, $f4
    ctx->pc = 0x1cfe88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x1cfe8c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1CFE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE94u);
    ctx->pc = 0x1CFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE8Cu;
    // 0x1cfe90: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1CFE8Cu, 0x1CFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE94u;
label_1cfe94:
    // 0x1cfe94: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1cfe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cfe98: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cfe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cfe9c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cfe9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cfea0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1cfea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cfea4: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x1cfea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cfea8: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x1cfea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x1cfeac: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cfeacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfeb0: 0x0  nop
    ctx->pc = 0x1cfeb0u;
    // NOP
    // 0x1cfeb4: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1CFEB4u;
    {
        const bool branch_taken_0x1cfeb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfeb4) {
            ctx->pc = 0x1CFEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFEB4u;
            // 0x1cfeb8: 0x46041800  add.s       $f0, $f3, $f4 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFEDCu;
            goto label_1cfedc;
        }
    }
    ctx->pc = 0x1CFEBCu;
    // 0x1cfebc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1cfebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfec4: 0x0  nop
    ctx->pc = 0x1cfec4u;
    // NOP
    // 0x1cfec8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cfec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfecc: 0x0  nop
    ctx->pc = 0x1cfeccu;
    // NOP
    // 0x1cfed0: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1CFED0u;
    {
        const bool branch_taken_0x1cfed0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfed0) {
            ctx->pc = 0x1CFED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFED0u;
            // 0x1cfed4: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF0Cu;
            goto label_1cff0c;
        }
    }
    ctx->pc = 0x1CFED8u;
    // 0x1cfed8: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x1cfed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1cfedc:
    // 0x1cfedc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1cfedcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfee0: 0x0  nop
    ctx->pc = 0x1cfee0u;
    // NOP
    // 0x1cfee4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x1CFEE4u;
    {
        const bool branch_taken_0x1cfee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE4u;
        // 0x1cfee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfee4) {
            ctx->pc = 0x1CFF68u;
            goto label_1cff68;
        }
    }
    ctx->pc = 0x1CFEECu;
    // 0x1cfeec: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1cfeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfef4: 0x0  nop
    ctx->pc = 0x1cfef4u;
    // NOP
    // 0x1cfef8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cfef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfefc: 0x0  nop
    ctx->pc = 0x1cfefcu;
    // NOP
    // 0x1cff00: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1CFF00u;
    {
        const bool branch_taken_0x1cff00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff00) {
            ctx->pc = 0x1CFF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF00u;
            // 0x1cff04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF6Cu;
            goto label_1cff6c;
        }
    }
    ctx->pc = 0x1CFF08u;
    // 0x1cff08: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1cff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cff0c:
    // 0x1cff0c: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1CFF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF14u);
    ctx->pc = 0x1CFF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF0Cu;
    // 0x1cff10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1CFF0Cu, 0x1CFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF14u;
label_1cff14:
    // 0x1cff14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cff14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cff18: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1cff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1cff1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff20: 0x0  nop
    ctx->pc = 0x1cff20u;
    // NOP
    // 0x1cff24: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1CFF24u;
    {
        const bool branch_taken_0x1cff24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff24) {
            ctx->pc = 0x1CFF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF24u;
            // 0x1cff28: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF64u;
            goto label_1cff64;
        }
    }
    ctx->pc = 0x1CFF2Cu;
    // 0x1cff2c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1cff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cff30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff34: 0x0  nop
    ctx->pc = 0x1cff34u;
    // NOP
    // 0x1cff38: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1CFF38u;
    {
        const bool branch_taken_0x1cff38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff38) {
            ctx->pc = 0x1CFF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF38u;
            // 0x1cff3c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF64u;
            goto label_1cff64;
        }
    }
    ctx->pc = 0x1CFF40u;
    // 0x1cff40: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1cff40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1cff44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1cff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1cff48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFF48u;
    {
        const bool branch_taken_0x1cff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff48) {
            ctx->pc = 0x1CFF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF48u;
            // 0x1cff4c: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF64u;
            goto label_1cff64;
        }
    }
    ctx->pc = 0x1CFF50u;
    // 0x1cff50: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x1cff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1cff54: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x1CFF54u;
    SET_GPR_U32(ctx, 31, 0x1CFF5Cu);
    ctx->pc = 0x1CFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF54u;
    // 0x1cff58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1CFF54u, 0x1CFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF5Cu;
label_1cff5c:
    // 0x1cff5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFF5Cu;
    {
        const bool branch_taken_0x1cff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5Cu;
        // 0x1cff60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5c) {
            ctx->pc = 0x1CFF68u;
            goto label_1cff68;
        }
    }
    ctx->pc = 0x1CFF64u;
label_1cff64:
    // 0x1cff64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cff68:
    // 0x1cff68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cff6c:
    // 0x1cff6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF70u;
        // 0x1cff74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF78u;
}
