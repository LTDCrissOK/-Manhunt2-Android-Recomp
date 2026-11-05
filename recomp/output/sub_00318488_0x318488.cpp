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

// Function: sub_00318488
// Address: 0x318488 - 0x3186f0
void sub_00318488_0x318488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318488_0x318488");
#endif

    switch (ctx->pc) {
        case 0x318560u: goto label_318560;
        case 0x31856cu: goto label_31856c;
        case 0x318580u: goto label_318580;
        case 0x31858cu: goto label_31858c;
        case 0x3185fcu: goto label_3185fc;
        case 0x318610u: goto label_318610;
        case 0x318624u: goto label_318624;
        case 0x318634u: goto label_318634;
        case 0x318678u: goto label_318678;
        case 0x318694u: goto label_318694;
        case 0x3186a0u: goto label_3186a0;
        case 0x3186a8u: goto label_3186a8;
        case 0x3186c4u: goto label_3186c4;
        default: break;
    }

    ctx->pc = 0x318488u;

    // 0x318488: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x318488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31848c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x318490: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x318490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x318494: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318498: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x318498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x31849c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31849cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3184a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3184a4: 0x24462298  addiu       $a2, $v0, 0x2298
    ctx->pc = 0x3184a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8856));
    // 0x3184a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3184a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3184ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3184acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3184b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3184b4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x3184b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3184b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3184bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3184bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3184c0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3184c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3184c4: 0x8c64a4fc  lw          $a0, -0x5B04($v1)
    ctx->pc = 0x3184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA4FCu));
    // 0x3184c8: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x3184c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3184cc: 0xe4412298  swc1        $f1, 0x2298($v0)
    ctx->pc = 0x3184ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B2298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B2298u, _value); } while (0); }
    // 0x3184d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3184d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3184d4: 0xc62000e4  lwc1        $f0, 0xE4($s1)
    ctx->pc = 0x3184d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3184d8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3184D8u;
    {
        const bool branch_taken_0x3184d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3184DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184D8u;
        // 0x3184dc: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184d8) {
            ctx->pc = 0x318514u;
            goto label_318514;
        }
    }
    ctx->pc = 0x3184E0u;
    // 0x3184e0: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x3184e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x3184e4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3184e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3184e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3184e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3184ec: 0x0  nop
    ctx->pc = 0x3184ecu;
    // NOP
    // 0x3184f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3184f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3184f4: 0x0  nop
    ctx->pc = 0x3184f4u;
    // NOP
    // 0x3184f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3184F8u;
    {
        const bool branch_taken_0x3184f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3184FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184F8u;
        // 0x3184fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184f8) {
            ctx->pc = 0x318514u;
            goto label_318514;
        }
    }
    ctx->pc = 0x318500u;
    // 0x318500: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x318500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x318504: 0xc440bd10  lwc1        $f0, -0x42F0($v0)
    ctx->pc = 0x318504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318508: 0xc461bd14  lwc1        $f1, -0x42EC($v1)
    ctx->pc = 0x318508u;
    { uint32_t bits = FAST_READ32(0x3FBD14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31850c: 0xe4a02298  swc1        $f0, 0x2298($a1)
    ctx->pc = 0x31850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8856), bits); }
    // 0x318510: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x318510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_318514:
    // 0x318514: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x318514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x318518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31851c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31851cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x318520: 0xc60022a8  lwc1        $f0, 0x22A8($s0)
    ctx->pc = 0x318520u;
    { uint32_t bits = FAST_READ32(0x5B22A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318524: 0x24a22298  addiu       $v0, $a1, 0x2298
    ctx->pc = 0x318524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8856));
    // 0x318528: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x318528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31852c: 0x261222a8  addiu       $s2, $s0, 0x22A8
    ctx->pc = 0x31852cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8872));
    // 0x318530: 0xc4ac2298  lwc1        $f12, 0x2298($a1)
    ctx->pc = 0x318530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318534: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x318534u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318538: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x318538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x31853c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x31853Cu;
    {
        const bool branch_taken_0x31853c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31853Cu;
        // 0x318540: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31853c) {
            ctx->pc = 0x318558u;
            goto label_318558;
        }
    }
    ctx->pc = 0x318544u;
    // 0x318544: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x318544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318548: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x318548u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31854c: 0x0  nop
    ctx->pc = 0x31854cu;
    // NOP
    // 0x318550: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x318550u;
    {
        const bool branch_taken_0x318550 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318550u;
        // 0x318554: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318550) {
            ctx->pc = 0x318594u;
            goto label_318594;
        }
    }
    ctx->pc = 0x318558u;
label_318558:
    // 0x318558: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x318558u;
    SET_GPR_U32(ctx, 31, 0x318560u);
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x318558u, 0x318560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318560u;
label_318560:
    // 0x318560: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x318560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318564: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x318564u;
    SET_GPR_U32(ctx, 31, 0x31856Cu);
    ctx->pc = 0x318568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318564u;
    // 0x318568: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x318564u, 0x31856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31856Cu;
label_31856c:
    // 0x31856c: 0xc60c22a8  lwc1        $f12, 0x22A8($s0)
    ctx->pc = 0x31856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318570: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x318570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318574: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x318574u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x318578: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x318578u;
    SET_GPR_U32(ctx, 31, 0x318580u);
    ctx->pc = 0x31857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318578u;
    // 0x31857c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x318578u, 0x318580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318580u;
label_318580:
    // 0x318580: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x318580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x318584: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x318584u;
    SET_GPR_U32(ctx, 31, 0x31858Cu);
    ctx->pc = 0x318588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318584u;
    // 0x318588: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x318584u, 0x31858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31858Cu;
label_31858c:
    // 0x31858c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31858cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x318590: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_318594:
    // 0x318594: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x318594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318598: 0xc44222a0  lwc1        $f2, 0x22A0($v0)
    ctx->pc = 0x318598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31859c: 0x244322a0  addiu       $v1, $v0, 0x22A0
    ctx->pc = 0x31859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x3185a0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x3185a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3185a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3185a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3185a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3185a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3185ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3185acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3185b0: 0xc4432c48  lwc1        $f3, 0x2C48($v0)
    ctx->pc = 0x3185b0u;
    { uint32_t bits = FAST_READ32(0x482C48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3185b4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3185b4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3185b8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3185b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3185bc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x3185bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x3185c0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x3185c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x3185c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3185c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3185c8: 0x0  nop
    ctx->pc = 0x3185c8u;
    // NOP
    // 0x3185cc: 0x0  nop
    ctx->pc = 0x3185ccu;
    // NOP
    // 0x3185d0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3185d0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x3185d4: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3185d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3185d8: 0x0  nop
    ctx->pc = 0x3185d8u;
    // NOP
    // 0x3185dc: 0x0  nop
    ctx->pc = 0x3185dcu;
    // NOP
    // 0x3185e0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3185e0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x3185e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3185e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3185e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3185e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3185ec: 0xe62000e0  swc1        $f0, 0xE0($s1)
    ctx->pc = 0x3185ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x3185f0: 0xe62100e4  swc1        $f1, 0xE4($s1)
    ctx->pc = 0x3185f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x3185f4: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x3185F4u;
    SET_GPR_U32(ctx, 31, 0x3185FCu);
    ctx->pc = 0x3185F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3185F4u;
    // 0x3185f8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x3185F4u, 0x3185FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3185FCu;
label_3185fc:
    // 0x3185fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3185fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x318600: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x318600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318604: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x318608: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x318608u;
    SET_GPR_U32(ctx, 31, 0x318610u);
    ctx->pc = 0x31860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318608u;
    // 0x31860c: 0xe660bb7c  swc1        $f0, -0x4484($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294949756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x318608u, 0x318610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318610u;
label_318610:
    // 0x318610: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x318610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x318614: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x318614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318618: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x318618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31861c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x31861Cu;
    SET_GPR_U32(ctx, 31, 0x318624u);
    ctx->pc = 0x318620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31861Cu;
    // 0x318620: 0xe640bb80  swc1        $f0, -0x4480($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294949760), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x31861Cu, 0x318624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318624u;
label_318624:
    // 0x318624: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x318624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x318628: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x318628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31862c: 0xc0e3e70  jal         func_38F9C0
    ctx->pc = 0x31862Cu;
    SET_GPR_U32(ctx, 31, 0x318634u);
    ctx->pc = 0x318630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31862Cu;
    // 0x318630: 0x46000540  add.s       $f21, $f0, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F9C0u, 0x31862Cu, 0x318634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318634u;
label_318634:
    // 0x318634: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x318634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x318638: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x318638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x31863c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x31863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x318640: 0x8e84a4fc  lw          $a0, -0x5B04($s4)
    ctx->pc = 0x318640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943996)));
    // 0x318644: 0x24456830  addiu       $a1, $v0, 0x6830
    ctx->pc = 0x318644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 26672));
    // 0x318648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x318648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31864c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x31864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x318650: 0x46000340  add.s       $f13, $f0, $f0
    ctx->pc = 0x318650u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x318654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318658: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x318658u;
    {
        const bool branch_taken_0x318658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318658u;
        // 0x31865c: 0xaca30050  sw          $v1, 0x50($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318658) {
            ctx->pc = 0x318680u;
            goto label_318680;
        }
    }
    ctx->pc = 0x318660u;
    // 0x318660: 0xc66cbb7c  lwc1        $f12, -0x4484($s3)
    ctx->pc = 0x318660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294949756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x318664: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x318664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318668: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x318668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x31866c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31866cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318670: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x318670u;
    SET_GPR_U32(ctx, 31, 0x318678u);
    ctx->pc = 0x318674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318670u;
    // 0x318674: 0xc64dbb80  lwc1        $f13, -0x4480($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294949760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBA18u, 0x318670u, 0x318678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318678u;
label_318678:
    // 0x318678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x318678u;
    {
        const bool branch_taken_0x318678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318678u;
        // 0x31867c: 0x26106830  addiu       $s0, $s0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318678) {
            ctx->pc = 0x318698u;
            goto label_318698;
        }
    }
    ctx->pc = 0x318680u;
label_318680:
    // 0x318680: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x318680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x318684: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x318684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x318688: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x318688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31868c: 0xc076e86  jal         func_1DBA18
    ctx->pc = 0x31868Cu;
    SET_GPR_U32(ctx, 31, 0x318694u);
    ctx->pc = 0x318690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31868Cu;
    // 0x318690: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBA18u, 0x31868Cu, 0x318694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318694u;
label_318694:
    // 0x318694: 0x26106830  addiu       $s0, $s0, 0x6830
    ctx->pc = 0x318694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26672));
label_318698:
    // 0x318698: 0xc076e6e  jal         func_1DB9B8
    ctx->pc = 0x318698u;
    SET_GPR_U32(ctx, 31, 0x3186A0u);
    ctx->pc = 0x31869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318698u;
    // 0x31869c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9B8u, 0x318698u, 0x3186A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186A0u;
label_3186a0:
    // 0x3186a0: 0xc076f7c  jal         func_1DBDF0
    ctx->pc = 0x3186A0u;
    SET_GPR_U32(ctx, 31, 0x3186A8u);
    ctx->pc = 0x3186A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3186A0u;
    // 0x3186a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDF0u, 0x3186A0u, 0x3186A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186A8u;
label_3186a8:
    // 0x3186a8: 0x8e83a4fc  lw          $v1, -0x5B04($s4)
    ctx->pc = 0x3186a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943996)));
    // 0x3186ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3186acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3186b0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3186B0u;
    {
        const bool branch_taken_0x3186b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3186B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186B0u;
        // 0x3186b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186b0) {
            ctx->pc = 0x3186C4u;
            goto label_3186c4;
        }
    }
    ctx->pc = 0x3186B8u;
    // 0x3186b8: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x3186b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x3186bc: 0xc0770d2  jal         func_1DC348
    ctx->pc = 0x3186BCu;
    SET_GPR_U32(ctx, 31, 0x3186C4u);
    ctx->pc = 0x3186C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3186BCu;
    // 0x3186c0: 0x24a568d0  addiu       $a1, $a1, 0x68D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC348u, 0x3186BCu, 0x3186C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3186C4u;
label_3186c4:
    // 0x3186c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3186c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3186c8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3186c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3186cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3186ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3186d0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3186d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3186d4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3186d8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3186d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3186dc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3186dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3186e0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3186e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3186e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3186E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3186E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186E4u;
        // 0x3186e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3186E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3186ECu;
    // 0x3186ec: 0x0  nop
    ctx->pc = 0x3186ecu;
    // NOP
    ctx->pc = 0x3186f0u;
}
