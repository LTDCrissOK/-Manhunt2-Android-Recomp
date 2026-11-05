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

// Function: sub_0024F918
// Address: 0x24f918 - 0x24fe10
void sub_0024F918_0x24f918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F918_0x24f918");
#endif

    switch (ctx->pc) {
        case 0x24f95cu: goto label_24f95c;
        case 0x24f9a0u: goto label_24f9a0;
        case 0x24fa9cu: goto label_24fa9c;
        case 0x24faccu: goto label_24facc;
        case 0x24fb48u: goto label_24fb48;
        case 0x24fc0cu: goto label_24fc0c;
        case 0x24fc38u: goto label_24fc38;
        case 0x24fd84u: goto label_24fd84;
        default: break;
    }

    ctx->pc = 0x24f918u;

    // 0x24f918: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24f91c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x24f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x24f920: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x24f920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x24f924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f928: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x24f928u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x24f92c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24f92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f930: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x24f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x24f934: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x24f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x24f938: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x24f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x24f93c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x24f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x24f940: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x24f944: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x24f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x24f948: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24f94c: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x24f94cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x24f950: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x24f950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24f954: 0xc094224  jal         func_250890
    ctx->pc = 0x24F954u;
    SET_GPR_U32(ctx, 31, 0x24F95Cu);
    ctx->pc = 0x24F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F954u;
    // 0x24f958: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24F954u, 0x24F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F95Cu;
label_24f95c:
    // 0x24f95c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f964: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x24f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x24f968: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x24f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x24f96c: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24F96Cu;
    {
        const bool branch_taken_0x24f96c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x24F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F96Cu;
        // 0x24f970: 0xc4960068  lwc1        $f22, 0x68($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f96c) {
            ctx->pc = 0x24F978u;
            goto label_24f978;
        }
    }
    ctx->pc = 0x24F974u;
    // 0x24f974: 0xc496006c  lwc1        $f22, 0x6C($a0)
    ctx->pc = 0x24f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24f978:
    // 0x24f978: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x24f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x24f97c: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x24f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f980: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f984: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x24f984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x24f988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24f988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24f98c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f990: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24f990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f994: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x24f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x24f998: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x24F998u;
    SET_GPR_U32(ctx, 31, 0x24F9A0u);
    ctx->pc = 0x24F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F998u;
    // 0x24f99c: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x24F998u, 0x24F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F9A0u;
label_24f9a0:
    // 0x24f9a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f9a4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x24f9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24f9a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24f9ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24f9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24f9b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f9b4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x24f9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24f9b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24f9bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f9c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f9c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f9c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24f9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24f9c8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x24f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24f9cc: 0x922201c0  lbu         $v0, 0x1C0($s1)
    ctx->pc = 0x24f9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x24f9d0: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x24f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f9d4: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x24f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x24f9d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24f9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24f9dc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f9e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24f9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24f9e4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f9e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x24f9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24f9ec: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x24f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f9f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x24F9F0u;
    {
        const bool branch_taken_0x24f9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9F0u;
        // 0x24f9f4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f9f0) {
            ctx->pc = 0x24FA80u;
            goto label_24fa80;
        }
    }
    ctx->pc = 0x24F9F8u;
    // 0x24f9f8: 0x26220170  addiu       $v0, $s1, 0x170
    ctx->pc = 0x24f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x24f9fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24fa00: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x24fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fa04: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x24fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x24fa08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fa0c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fa10: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24fa10u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa14: 0xc6240170  lwc1        $f4, 0x170($s1)
    ctx->pc = 0x24fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24fa18: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24fa18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24fa1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24fa1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24fa20: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24fa20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24fa24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24fa24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24fa28: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x24fa28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x24fa2c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x24fa2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24fa30: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x24fa30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24fa34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x24fa34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24fa38: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24fa38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24fa3c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x24fa3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24fa40: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24fa40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24fa44: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x24fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fa48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x24fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa4c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fa50: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x24fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fa54: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x24fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fa58: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x24fa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24fa5c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x24fa5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24fa60: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x24fa60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24fa64: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x24fa64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24fa68: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24fa68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fa6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fa70: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa74: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x24fa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24fa78: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24fa78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fa7c: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x24fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_24fa80:
    // 0x24fa80: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24fa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fa84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24fa88: 0x3c01bf55  lui         $at, 0xBF55
    ctx->pc = 0x24fa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48981 << 16));
    // 0x24fa8c: 0x34215556  ori         $at, $at, 0x5556
    ctx->pc = 0x24fa8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21846);
    // 0x24fa90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24fa90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fa94: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24FA94u;
    SET_GPR_U32(ctx, 31, 0x24FA9Cu);
    ctx->pc = 0x24FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FA94u;
    // 0x24fa98: 0xe6200134  swc1        $f0, 0x134($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24FA94u, 0x24FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FA9Cu;
label_24fa9c:
    // 0x24fa9c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x24fa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x24faa0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x24faa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x24faa4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24faa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24faa8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x24faac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24fab0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fab4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x24fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x24fab8: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x24fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fabc: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x24fabcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24fac0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x24fac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x24fac4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24FAC4u;
    SET_GPR_U32(ctx, 31, 0x24FACCu);
    ctx->pc = 0x24FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FAC4u;
    // 0x24fac8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24FAC4u, 0x24FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FACCu;
label_24facc:
    // 0x24facc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24faccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fad0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24fad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24fad4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24fad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fad8: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x24fad8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24fadc: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x24fadcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24fae0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x24fae0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x24fae4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x24fae4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24fae8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x24fae8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24faec: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x24faecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x24faf0: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x24faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x24faf4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x24faf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x24faf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24faf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fafc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24fb00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24fb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24fb04: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x24fb04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x24fb08: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x24fb0c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x24fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x24fb10: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24fb14: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24fb14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24fb18: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24fb18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fb1c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24fb1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24fb20: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fb24: 0xc6340134  lwc1        $f20, 0x134($s1)
    ctx->pc = 0x24fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24fb28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24fb28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb2c: 0xa2200150  sb          $zero, 0x150($s1)
    ctx->pc = 0x24fb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x24fb30: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x24fb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fb34: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24fb34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fb38: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x24fb38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24fb3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24fb3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24fb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb44: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x24fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24fb48:
    // 0x24fb48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fb4c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x24fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fb50: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x24fb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x24fb54: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x24fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fb58: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x24fb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x24fb5c: 0x4603a8c2  mul.s       $f3, $f21, $f3
    ctx->pc = 0x24fb5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
    // 0x24fb60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fb64: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x24fb64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x24fb68: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x24fb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24fb6c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x24fb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24fb70: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x24fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x24fb74: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x24fb74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24fb78: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x24fb78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x24fb7c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24fb7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fb80: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x24fb80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24fb84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24fb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24fb88: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x24fb88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fb8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fb90: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x24fb90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24fb94: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x24fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fb98: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24fb9c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x24fb9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x24fba0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fba4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24fba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24fba8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fbac: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x24fbacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x24fbb0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fbb4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x24FBB4u;
    {
        const bool branch_taken_0x24fbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FBB4u;
        // 0x24fbb8: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fbb4) {
            ctx->pc = 0x24FC04u;
            goto label_24fc04;
        }
    }
    ctx->pc = 0x24FBBCu;
    // 0x24fbbc: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x24fbbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x24fbc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fbc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fbc4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x24fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x24fbc8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x24fbc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x24fbcc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x24fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x24fbd0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x24fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x24fbd4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24fbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24fbd8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24fbd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24fbdc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24fbdcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24fbe0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24fbe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24fbe4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fbe8: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x24fbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x24fbec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24fbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24fbf0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x24fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fbf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24fbf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fbf8: 0x0  nop
    ctx->pc = 0x24fbf8u;
    // NOP
    // 0x24fbfc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24FBFCu;
    {
        const bool branch_taken_0x24fbfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fbfc) {
            ctx->pc = 0x24FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FBFCu;
            // 0x24fc00: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC04u;
            goto label_24fc04;
        }
    }
    ctx->pc = 0x24FC04u;
label_24fc04:
    // 0x24fc04: 0xc09325e  jal         func_24C978
    ctx->pc = 0x24FC04u;
    SET_GPR_U32(ctx, 31, 0x24FC0Cu);
    ctx->pc = 0x24FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC04u;
    // 0x24fc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C978u, 0x24FC04u, 0x24FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC0Cu;
label_24fc0c:
    // 0x24fc0c: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FC0Cu;
    {
        const bool branch_taken_0x24fc0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC0Cu;
        // 0x24fc10: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc0c) {
            ctx->pc = 0x24FC2Cu;
            goto label_24fc2c;
        }
    }
    ctx->pc = 0x24FC14u;
    // 0x24fc14: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x24fc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fc18: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24fc18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fc1c: 0x0  nop
    ctx->pc = 0x24fc1cu;
    // NOP
    // 0x24fc20: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x24FC20u;
    {
        const bool branch_taken_0x24fc20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fc20) {
            ctx->pc = 0x24FC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC20u;
            // 0x24fc24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC2Cu;
            goto label_24fc2c;
        }
    }
    ctx->pc = 0x24FC28u;
    // 0x24fc28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24fc2c:
    // 0x24fc2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc30: 0xc093348  jal         func_24CD20
    ctx->pc = 0x24FC30u;
    SET_GPR_U32(ctx, 31, 0x24FC38u);
    ctx->pc = 0x24FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FC30u;
    // 0x24fc34: 0xc4540034  lwc1        $f20, 0x34($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CD20u, 0x24FC30u, 0x24FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FC38u;
label_24fc38:
    // 0x24fc38: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x24FC38u;
    {
        const bool branch_taken_0x24fc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC38u;
        // 0x24fc3c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc38) {
            ctx->pc = 0x24FDC0u;
            goto label_24fdc0;
        }
    }
    ctx->pc = 0x24FC40u;
    // 0x24fc40: 0x2a040002  slti        $a0, $s0, 0x2
    ctx->pc = 0x24fc40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24fc44: 0x8c4391dc  lw          $v1, -0x6E24($v0)
    ctx->pc = 0x24fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939100)));
    // 0x24fc48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FC48u;
    {
        const bool branch_taken_0x24fc48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC48u;
        // 0x24fc4c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc48) {
            ctx->pc = 0x24FC58u;
            goto label_24fc58;
        }
    }
    ctx->pc = 0x24FC50u;
    // 0x24fc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fc54: 0xa2220150  sb          $v0, 0x150($s1)
    ctx->pc = 0x24fc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 336), (uint8_t)GPR_U32(ctx, 2));
label_24fc58:
    // 0x24fc58: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x24fc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fc5c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x24fc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x24fc60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24fc60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24fc64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24fc64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24fc68: 0x0  nop
    ctx->pc = 0x24fc68u;
    // NOP
    // 0x24fc6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24fc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fc70: 0x0  nop
    ctx->pc = 0x24fc70u;
    // NOP
    // 0x24fc74: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
    ctx->pc = 0x24FC74u;
    {
        const bool branch_taken_0x24fc74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fc74) {
            ctx->pc = 0x24FC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC74u;
            // 0x24fc78: 0xae3500f0  sw          $s5, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FDD0u;
            goto label_24fdd0;
        }
    }
    ctx->pc = 0x24FC7Cu;
    // 0x24fc7c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FC7Cu;
    {
        const bool branch_taken_0x24fc7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fc7c) {
            ctx->pc = 0x24FC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FC7Cu;
            // 0x24fc80: 0xc4600018  lwc1        $f0, 0x18($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FC8Cu;
            goto label_24fc8c;
        }
    }
    ctx->pc = 0x24FC84u;
    // 0x24fc84: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x24FC84u;
    {
        const bool branch_taken_0x24fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC84u;
        // 0x24fc88: 0xae3500f0  sw          $s5, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fc84) {
            ctx->pc = 0x24FDD0u;
            goto label_24fdd0;
        }
    }
    ctx->pc = 0x24FC8Cu;
label_24fc8c:
    // 0x24fc8c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x24fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fc90: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x24fc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24fc94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24fc94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24fc98: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x24fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x24fc9c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24fc9cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24fca0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x24fca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x24fca4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24fca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24fca8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x24fca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24fcac: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x24fcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fcb0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24fcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fcb4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x24fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24fcb8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24fcb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24fcbc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24fcbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24fcc0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24fcc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24fcc4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24fcc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24fcc8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24fcc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24fccc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24fcccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x24fcd0: 0x0  nop
    ctx->pc = 0x24fcd0u;
    // NOP
    // 0x24fcd4: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x24fcd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fcd8: 0x0  nop
    ctx->pc = 0x24fcd8u;
    // NOP
    // 0x24fcdc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24FCDCu;
    {
        const bool branch_taken_0x24fcdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fcdc) {
            ctx->pc = 0x24FCFCu;
            goto label_24fcfc;
        }
    }
    ctx->pc = 0x24FCE4u;
    // 0x24fce4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fce8: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x24fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24fcec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24fcf0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x24fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x24fcf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24fcf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fcf8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_24fcfc:
    // 0x24fcfc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x24fcfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24fd00: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24fd00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24fd04: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24fd04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24fd08: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24fd08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24fd0c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24fd0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x24fd10: 0x4a0003bf  vwaitq
    ctx->pc = 0x24fd10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24fd14: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24fd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24fd18: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24fd1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fd20: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x24fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24fd24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24fd28: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x24fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x24fd2c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fd30: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24fd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fd34: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24fd34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24fd38: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x24fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fd3c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24fd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fd40: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24fd40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24fd44: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x24fd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24fd48: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24fd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24fd4c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x24fd4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24fd50: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24fd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24fd54: 0x0  nop
    ctx->pc = 0x24fd54u;
    // NOP
    // 0x24fd58: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24fd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd5c: 0x0  nop
    ctx->pc = 0x24fd5cu;
    // NOP
    // 0x24fd60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24FD60u;
    {
        const bool branch_taken_0x24fd60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd60) {
            ctx->pc = 0x24FD70u;
            goto label_24fd70;
        }
    }
    ctx->pc = 0x24FD68u;
    // 0x24fd68: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24fd68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24fd6c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_24fd70:
    // 0x24fd70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24fd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24fd74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24fd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24fd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24fd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fd7c: 0xc09344a  jal         func_24D128
    ctx->pc = 0x24FD7Cu;
    SET_GPR_U32(ctx, 31, 0x24FD84u);
    ctx->pc = 0x24FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FD7Cu;
    // 0x24fd80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D128u, 0x24FD7Cu, 0x24FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD84u;
label_24fd84:
    // 0x24fd84: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x24fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24fd88: 0x50550012  beql        $v0, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x24FD88u;
    {
        const bool branch_taken_0x24fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x24fd88) {
            ctx->pc = 0x24FD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD88u;
            // 0x24fd8c: 0xa22001c0  sb          $zero, 0x1C0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 448), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FDD4u;
            goto label_24fdd4;
        }
    }
    ctx->pc = 0x24FD90u;
    // 0x24fd90: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x24fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fd94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24fd94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fd98: 0x0  nop
    ctx->pc = 0x24fd98u;
    // NOP
    // 0x24fd9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24FD9Cu;
    {
        const bool branch_taken_0x24fd9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fd9c) {
            ctx->pc = 0x24FDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FD9Cu;
            // 0x24fda0: 0xae3600f0  sw          $s6, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FDA4u;
            goto label_24fda4;
        }
    }
    ctx->pc = 0x24FDA4u;
label_24fda4:
    // 0x24fda4: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24fda8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24fda8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24fdac: 0x0  nop
    ctx->pc = 0x24fdacu;
    // NOP
    // 0x24fdb0: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x24FDB0u;
    {
        const bool branch_taken_0x24fdb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24fdb0) {
            ctx->pc = 0x24FDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FDB0u;
            // 0x24fdb4: 0xae3600f0  sw          $s6, 0xF0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FDD0u;
            goto label_24fdd0;
        }
    }
    ctx->pc = 0x24FDB8u;
    // 0x24fdb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24FDB8u;
    {
        const bool branch_taken_0x24fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDB8u;
        // 0x24fdbc: 0xa22001c0  sb          $zero, 0x1C0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdb8) {
            ctx->pc = 0x24FDD4u;
            goto label_24fdd4;
        }
    }
    ctx->pc = 0x24FDC0u;
label_24fdc0:
    // 0x24fdc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24fdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24fdc4: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x24fdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x24fdc8: 0x1440ff5f  bnez        $v0, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x24FDC8u;
    {
        const bool branch_taken_0x24fdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDC8u;
        // 0x24fdcc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdc8) {
            ctx->pc = 0x24FB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fb48;
        }
    }
    ctx->pc = 0x24FDD0u;
label_24fdd0:
    // 0x24fdd0: 0xa22001c0  sb          $zero, 0x1C0($s1)
    ctx->pc = 0x24fdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 448), (uint8_t)GPR_U32(ctx, 0));
label_24fdd4:
    // 0x24fdd4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x24fdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24fdd8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x24fdd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x24fddc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x24fddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24fde0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x24fde0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24fde4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x24fde4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24fde8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x24fde8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24fdec: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24fdecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24fdf0: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x24fdf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24fdf4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24fdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24fdf8: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x24fdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24fdfc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x24fdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24fe00: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x24fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24fe04: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x24fe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24fe08: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE08u;
        // 0x24fe0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE10u;
}
