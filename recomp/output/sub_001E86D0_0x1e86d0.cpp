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

// Function: sub_001E86D0
// Address: 0x1e86d0 - 0x1e8828
void sub_001E86D0_0x1e86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E86D0_0x1e86d0");
#endif

    switch (ctx->pc) {
        case 0x1e8730u: goto label_1e8730;
        default: break;
    }

    ctx->pc = 0x1e86d0u;

    // 0x1e86d0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1e86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e86d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e86d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e86d8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1e86dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e86dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e86e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e86e4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e86e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e86e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e86ec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e86f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1e86f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e86f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e86f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e86f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e86fc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1e86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8700: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1e8700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e8704: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8708: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e8708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e870c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8710: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1e8710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e8714: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8718: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e8718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e871c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1e871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8720: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E8720u;
    {
        const bool branch_taken_0x1e8720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8720u;
        // 0x1e8724: 0xe7a1001c  swc1        $f1, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8720) {
            ctx->pc = 0x1E87E8u;
            goto label_1e87e8;
        }
    }
    ctx->pc = 0x1E8728u;
    // 0x1e8728: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e8728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e872c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e872cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8730:
    // 0x1e8730: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e8730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8734: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8738: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1e8738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e873c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1e873cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8740: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e8740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8744: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e8744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e8748: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1e8748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e874c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1e874cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e8750: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1e8750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8754: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E8754u;
    {
        const bool branch_taken_0x1e8754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8754u;
        // 0x1e8758: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8754) {
            ctx->pc = 0x1E8760u;
            goto label_1e8760;
        }
    }
    ctx->pc = 0x1E875Cu;
    // 0x1e875c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e875cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e8760:
    // 0x1e8760: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8764: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e8764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e876c: 0x0  nop
    ctx->pc = 0x1e876cu;
    // NOP
    // 0x1e8770: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8770u;
    {
        const bool branch_taken_0x1e8770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8770) {
            ctx->pc = 0x1E8774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8770u;
            // 0x1e8774: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8778u;
            goto label_1e8778;
        }
    }
    ctx->pc = 0x1E8778u;
label_1e8778:
    // 0x1e8778: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e8778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e877c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e8780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8784: 0x0  nop
    ctx->pc = 0x1e8784u;
    // NOP
    // 0x1e8788: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E8788u;
    {
        const bool branch_taken_0x1e8788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8788) {
            ctx->pc = 0x1E878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8788u;
            // 0x1e878c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8790u;
            goto label_1e8790;
        }
    }
    ctx->pc = 0x1E8790u;
label_1e8790:
    // 0x1e8790: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1e8790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8794: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e8794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8798: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e8798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e879c: 0x0  nop
    ctx->pc = 0x1e879cu;
    // NOP
    // 0x1e87a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E87A0u;
    {
        const bool branch_taken_0x1e87a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e87a0) {
            ctx->pc = 0x1E87A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E87A0u;
            // 0x1e87a4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E87A8u;
            goto label_1e87a8;
        }
    }
    ctx->pc = 0x1E87A8u;
label_1e87a8:
    // 0x1e87a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e87ac: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e87acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e87b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e87b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e87b4: 0x0  nop
    ctx->pc = 0x1e87b4u;
    // NOP
    // 0x1e87b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E87B8u;
    {
        const bool branch_taken_0x1e87b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e87b8) {
            ctx->pc = 0x1E87BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E87B8u;
            // 0x1e87bc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E87C0u;
            goto label_1e87c0;
        }
    }
    ctx->pc = 0x1E87C0u;
label_1e87c0:
    // 0x1e87c0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e87c4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1e87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e87c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e87c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e87cc: 0x0  nop
    ctx->pc = 0x1e87ccu;
    // NOP
    // 0x1e87d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E87D0u;
    {
        const bool branch_taken_0x1e87d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e87d0) {
            ctx->pc = 0x1E87D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E87D0u;
            // 0x1e87d4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E87D8u;
            goto label_1e87d8;
        }
    }
    ctx->pc = 0x1E87D8u;
label_1e87d8:
    // 0x1e87d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e87dc: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x1e87dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1e87e0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1E87E0u;
    {
        const bool branch_taken_0x1e87e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87E0u;
        // 0x1e87e4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87e0) {
            ctx->pc = 0x1E8730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8730;
        }
    }
    ctx->pc = 0x1E87E8u;
label_1e87e8:
    // 0x1e87e8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1e87e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e87ec: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e87ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e87f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e87f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e87f4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e87f8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1e87f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e87fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e87fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8800: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8804: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8808: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1e8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e880c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1e880cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1e8810: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1e8810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1e8814: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1e8814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e8818: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e8818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e881c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E881Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E881Cu;
        // 0x1e8820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E881Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8824u;
    // 0x1e8824: 0x0  nop
    ctx->pc = 0x1e8824u;
    // NOP
    ctx->pc = 0x1e8828u;
}
