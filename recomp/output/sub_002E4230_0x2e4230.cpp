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

// Function: sub_002E4230
// Address: 0x2e4230 - 0x2e43f8
void sub_002E4230_0x2e4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4230_0x2e4230");
#endif

    switch (ctx->pc) {
        case 0x2e42b4u: goto label_2e42b4;
        case 0x2e4320u: goto label_2e4320;
        case 0x2e4350u: goto label_2e4350;
        case 0x2e4380u: goto label_2e4380;
        case 0x2e43a4u: goto label_2e43a4;
        case 0x2e43b8u: goto label_2e43b8;
        case 0x2e43ccu: goto label_2e43cc;
        default: break;
    }

    ctx->pc = 0x2e4230u;

    // 0x2e4230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e4234: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e4234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e4238: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e4238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e423c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e423cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4240: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2e4240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e4244: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e4244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e424c: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2e424cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e4250: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2e4250u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e4254: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2e4254u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e4258: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2e4258u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e425c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2e425cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e4260: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x2e4260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e4264: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E4264u;
    {
        const bool branch_taken_0x2e4264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4264u;
        // 0x2e4268: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4264) {
            ctx->pc = 0x2E43CCu;
            goto label_2e43cc;
        }
    }
    ctx->pc = 0x2E426Cu;
    // 0x2e426c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2e426cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2e4270: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2e4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e4274: 0x24635870  addiu       $v1, $v1, 0x5870
    ctx->pc = 0x2e4274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22640));
    // 0x2e4278: 0x8c62054c  lw          $v0, 0x54C($v1)
    ctx->pc = 0x2e4278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x595DBCu));
    // 0x2e427c: 0x2463046c  addiu       $v1, $v1, 0x46C
    ctx->pc = 0x2e427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1132));
    // 0x2e4280: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x2e4280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2e4284: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2e4284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e4288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e428c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2e428cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2e4290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4294: 0xc4520018  lwc1        $f18, 0x18($v0)
    ctx->pc = 0x2e4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2e4298: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2e4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e429c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x2e429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e42a0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x2e42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e42a4: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x2e42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e42a8: 0xc4500010  lwc1        $f16, 0x10($v0)
    ctx->pc = 0x2e42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2e42ac: 0xc0b906e  jal         func_2E41B8
    ctx->pc = 0x2E42ACu;
    SET_GPR_U32(ctx, 31, 0x2E42B4u);
    ctx->pc = 0x2E42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E42ACu;
    // 0x2e42b0: 0xc4510014  lwc1        $f17, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B8u, 0x2E42ACu, 0x2E42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42B4u;
label_2e42b4:
    // 0x2e42b4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2e42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e42b8: 0x4600c086  mov.s       $f2, $f24
    ctx->pc = 0x2e42b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[24]);
    // 0x2e42bc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2e42bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2e42c0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2e42c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2e42c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e42c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e42c8: 0x4601c834  c.lt.s      $f25, $f1
    ctx->pc = 0x2e42c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e42cc: 0x0  nop
    ctx->pc = 0x2e42ccu;
    // NOP
    // 0x2e42d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E42D0u;
    {
        const bool branch_taken_0x2e42d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E42D0u;
        // 0x2e42d4: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42d0) {
            ctx->pc = 0x2E42E8u;
            goto label_2e42e8;
        }
    }
    ctx->pc = 0x2E42D8u;
    // 0x2e42d8: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x2e42d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x2e42dc: 0xc6180024  lwc1        $f24, 0x24($s0)
    ctx->pc = 0x2e42dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e42e0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x2e42e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e42e4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2e42e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_2e42e8:
    // 0x2e42e8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e42ec: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2e42ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2e42f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e42f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e42f4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2e42f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e42f8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2e42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2e42fc: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2e42fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2e4300: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2e4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4304: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2e4304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4308: 0x24844af0  addiu       $a0, $a0, 0x4AF0
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19184));
    // 0x2e430c: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e4310: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e4310u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4314: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2e4314u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2e4318: 0xc0b8fe0  jal         func_2E3F80
    ctx->pc = 0x2E4318u;
    SET_GPR_U32(ctx, 31, 0x2E4320u);
    ctx->pc = 0x2E431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4318u;
    // 0x2e431c: 0x460eab81  sub.s       $f14, $f21, $f14 (Delay Slot)
    ctx->f[14] = FPU_SUB_S(ctx->f[21], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F80u, 0x2E4318u, 0x2E4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4320u;
label_2e4320:
    // 0x2e4320: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4324: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2e4324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2e4328: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2e4328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e432c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2e432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2e4330: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2e4330u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2e4334: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2e4334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4338: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2e4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e433c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2e433cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4340: 0x460eab81  sub.s       $f14, $f21, $f14
    ctx->pc = 0x2e4340u;
    ctx->f[14] = FPU_SUB_S(ctx->f[21], ctx->f[14]);
    // 0x2e4344: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e4344u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4348: 0xc0b8fe0  jal         func_2E3F80
    ctx->pc = 0x2E4348u;
    SET_GPR_U32(ctx, 31, 0x2E4350u);
    ctx->pc = 0x2E434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4348u;
    // 0x2e434c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F80u, 0x2E4348u, 0x2E4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4350u;
label_2e4350:
    // 0x2e4350: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x2e4350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4354: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2e4354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2e4358: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2e4358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e435c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e435cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4360: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x2e4360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x2e4364: 0xc60e0014  lwc1        $f14, 0x14($s0)
    ctx->pc = 0x2e4364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e4368: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x2e4368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e436c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e436cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4370: 0x460eab81  sub.s       $f14, $f21, $f14
    ctx->pc = 0x2e4370u;
    ctx->f[14] = FPU_SUB_S(ctx->f[21], ctx->f[14]);
    // 0x2e4374: 0x24844b10  addiu       $a0, $a0, 0x4B10
    ctx->pc = 0x2e4374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19216));
    // 0x2e4378: 0xc0b8fe0  jal         func_2E3F80
    ctx->pc = 0x2E4378u;
    SET_GPR_U32(ctx, 31, 0x2E4380u);
    ctx->pc = 0x2E437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4378u;
    // 0x2e437c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F80u, 0x2E4378u, 0x2E4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4380u;
label_2e4380:
    // 0x2e4380: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2e4380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2e4384: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x2e4384u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4388: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x2e4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x2e438c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2e438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e4390: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2e4390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2e4394: 0xe7b9000c  swc1        $f25, 0xC($sp)
    ctx->pc = 0x2e4394u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2e4398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e439c: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x2E439Cu;
    SET_GPR_U32(ctx, 31, 0x2E43A4u);
    ctx->pc = 0x2E43A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E439Cu;
    // 0x2e43a0: 0xe7b60004  swc1        $f22, 0x4($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2E439Cu, 0x2E43A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43A4u;
label_2e43a4:
    // 0x2e43a4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2e43a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e43a8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2e43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2e43ac: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x2e43acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x2e43b0: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x2E43B0u;
    SET_GPR_U32(ctx, 31, 0x2E43B8u);
    ctx->pc = 0x2E43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43B0u;
    // 0x2e43b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2E43B0u, 0x2E43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43B8u;
label_2e43b8:
    // 0x2e43b8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2e43b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2e43bc: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x2e43bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e43c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e43c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43c4: 0xc0b15d0  jal         func_2C5740
    ctx->pc = 0x2E43C4u;
    SET_GPR_U32(ctx, 31, 0x2E43CCu);
    ctx->pc = 0x2E43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E43C4u;
    // 0x2e43c8: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x2E43C4u, 0x2E43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43CCu;
label_2e43cc:
    // 0x2e43cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e43ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e43d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e43d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e43d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e43d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e43d8: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2e43d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e43dc: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2e43dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e43e0: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2e43e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e43e4: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2e43e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e43e8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2e43e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e43ec: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2e43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e43f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E43F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E43F0u;
        // 0x2e43f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E43F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E43F8u;
}
