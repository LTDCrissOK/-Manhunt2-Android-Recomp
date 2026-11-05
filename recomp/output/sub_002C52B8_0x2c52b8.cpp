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

// Function: sub_002C52B8
// Address: 0x2c52b8 - 0x2c5480
void sub_002C52B8_0x2c52b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C52B8_0x2c52b8");
#endif

    switch (ctx->pc) {
        case 0x2c52d4u: goto label_2c52d4;
        case 0x2c52f8u: goto label_2c52f8;
        case 0x2c537cu: goto label_2c537c;
        case 0x2c5438u: goto label_2c5438;
        case 0x2c546cu: goto label_2c546c;
        default: break;
    }

    ctx->pc = 0x2c52b8u;

    // 0x2c52b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c52b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c52bc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c52c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c52c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52c4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c52c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2c52c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c52c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c52cc: 0xc0b16ac  jal         func_2C5AB0
    ctx->pc = 0x2C52CCu;
    SET_GPR_U32(ctx, 31, 0x2C52D4u);
    ctx->pc = 0x2C52D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C52CCu;
    // 0x2c52d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5AB0u, 0x2C52CCu, 0x2C52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52D4u;
label_2c52d4:
    // 0x2c52d4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2c52d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c52d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c52d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c52dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c52dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c52e0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2c52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c52e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c52e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c52e8: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2c52e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2c52ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c52ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c52f0: 0xc0b149c  jal         func_2C5270
    ctx->pc = 0x2C52F0u;
    SET_GPR_U32(ctx, 31, 0x2C52F8u);
    ctx->pc = 0x2C52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C52F0u;
    // 0x2c52f4: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5270u, 0x2C52F0u, 0x2C52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C52F8u;
label_2c52f8:
    // 0x2c52f8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c52f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c52fc: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2c52fcu;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5300: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c5300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5304: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2c5304u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2c5308: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2c5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c530c: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x2c530cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2c5310: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x2c5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5314: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5318: 0x460510c2  mul.s       $f3, $f2, $f5
    ctx->pc = 0x2c5318u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2c531c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2c531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5320: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2c5320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2c5324: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2c5324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c5328: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x2c5328u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c532c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c532cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c5330: 0x460401c2  mul.s       $f7, $f0, $f4
    ctx->pc = 0x2c5330u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c5334: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c5334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5338: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2c5338u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2c533c: 0x46071ac0  add.s       $f11, $f3, $f7
    ctx->pc = 0x2c533cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x2c5340: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x2c5340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x2c5344: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x2c5344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x2c5348: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x2c5348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2c534c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x2c534cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x2c5350: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x2c5350u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
    // 0x2c5354: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c5354u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c5358: 0x46052b02  mul.s       $f12, $f5, $f5
    ctx->pc = 0x2c5358u;
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x2c535c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2c535cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c5360: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x2c5360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2c5364: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x2c5364u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5368: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2c5368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c536c: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2c536cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5370: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2c5370u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2c5374: 0xc0b149c  jal         func_2C5270
    ctx->pc = 0x2C5374u;
    SET_GPR_U32(ctx, 31, 0x2C537Cu);
    ctx->pc = 0x2C5378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5374u;
    // 0x2c5378: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5270u, 0x2C5374u, 0x2C537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C537Cu;
label_2c537c:
    // 0x2c537c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2c537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5380: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2c5380u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5384: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2c5384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5388: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x2c5388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x2c538c: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x2c538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5390: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2c5390u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2c5394: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x2c5394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c5398: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2c5398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c539c: 0xc7a90000  lwc1        $f9, 0x0($sp)
    ctx->pc = 0x2c539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c53a0: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x2c53a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c53a4: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x2c53a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c53a8: 0x460a6302  mul.s       $f12, $f12, $f10
    ctx->pc = 0x2c53a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x2c53ac: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x2c53acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c53b0: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2c53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c53b4: 0x46074342  mul.s       $f13, $f8, $f7
    ctx->pc = 0x2c53b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2c53b8: 0xc7aa0020  lwc1        $f10, 0x20($sp)
    ctx->pc = 0x2c53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2c53bc: 0x46064942  mul.s       $f5, $f9, $f6
    ctx->pc = 0x2c53bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x2c53c0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2c53c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c53c4: 0x460462c2  mul.s       $f11, $f12, $f4
    ctx->pc = 0x2c53c4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x2c53c8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c53c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c53cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c53ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c53d0: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2c53d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c53d4: 0x46045042  mul.s       $f1, $f10, $f4
    ctx->pc = 0x2c53d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x2c53d8: 0x460d2940  add.s       $f5, $f5, $f13
    ctx->pc = 0x2c53d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[13]);
    // 0x2c53dc: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x2c53dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x2c53e0: 0x46012ac0  add.s       $f11, $f5, $f1
    ctx->pc = 0x2c53e0u;
    ctx->f[11] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2c53e4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2c53e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c53e8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2c53e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c53ec: 0x46095a42  mul.s       $f9, $f11, $f9
    ctx->pc = 0x2c53ecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[11], ctx->f[9]);
    // 0x2c53f0: 0x46085a02  mul.s       $f8, $f11, $f8
    ctx->pc = 0x2c53f0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[11], ctx->f[8]);
    // 0x2c53f4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2c53f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c53f8: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x2c53f8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2c53fc: 0x46024200  add.s       $f8, $f8, $f2
    ctx->pc = 0x2c53fcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x2c5400: 0x46034a40  add.s       $f9, $f9, $f3
    ctx->pc = 0x2c5400u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x2c5404: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2c5404u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2c5408: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x2c5408u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x2c540c: 0x46093181  sub.s       $f6, $f6, $f9
    ctx->pc = 0x2c540cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x2c5410: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x2c5410u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2c5414: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x2c5414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x2c5418: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x2c5418u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c541c: 0x46063302  mul.s       $f12, $f6, $f6
    ctx->pc = 0x2c541cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2c5420: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x2c5420u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c5424: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x2c5424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2c5428: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c5428u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c542c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2c542cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2c5430: 0xc0b149c  jal         func_2C5270
    ctx->pc = 0x2C5430u;
    SET_GPR_U32(ctx, 31, 0x2C5438u);
    ctx->pc = 0x2C5434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5430u;
    // 0x2c5434: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5270u, 0x2C5430u, 0x2C5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5438u;
label_2c5438:
    // 0x2c5438: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x2c5438u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x2c543c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5440: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5448: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c544c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2c544cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2c5450: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x2c5450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x2c5454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c5454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5458: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2c5458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2c545c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c545cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c5460: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c5464: 0xc0b168a  jal         func_2C5A28
    ctx->pc = 0x2C5464u;
    SET_GPR_U32(ctx, 31, 0x2C546Cu);
    ctx->pc = 0x2C5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5464u;
    // 0x2c5468: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A28u, 0x2C5464u, 0x2C546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C546Cu;
label_2c546c:
    // 0x2c546c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c546cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5470: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c5470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c5474: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5474u;
        // 0x2c5478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C547Cu;
    // 0x2c547c: 0x0  nop
    ctx->pc = 0x2c547cu;
    // NOP
    ctx->pc = 0x2c5480u;
}
