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

// Function: sub_0025CA80
// Address: 0x25ca80 - 0x25cbe0
void sub_0025CA80_0x25ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CA80_0x25ca80");
#endif

    switch (ctx->pc) {
        case 0x25cb78u: goto label_25cb78;
        case 0x25cbc0u: goto label_25cbc0;
        default: break;
    }

    ctx->pc = 0x25ca80u;

    // 0x25ca80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25ca84: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x25ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x25ca88: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x25ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x25ca8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25ca8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca90: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x25ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x25ca94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25ca94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25ca9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CA9Cu;
    {
        const bool branch_taken_0x25ca9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA9Cu;
        // 0x25caa0: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca9c) {
            ctx->pc = 0x25CAACu;
            goto label_25caac;
        }
    }
    ctx->pc = 0x25CAA4u;
    // 0x25caa4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x25CAA4u;
    {
        const bool branch_taken_0x25caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CAA4u;
        // 0x25caa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25caa4) {
            ctx->pc = 0x25CBC0u;
            goto label_25cbc0;
        }
    }
    ctx->pc = 0x25CAACu;
label_25caac:
    // 0x25caac: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x25caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x25cab0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x25cab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25cab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25cab8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25cabc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x25cabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25cac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cac4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x25cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cac8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25cacc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x25caccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25cad0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cad4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x25cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x25cad8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cadc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x25cadcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25cae0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x25cae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cae4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x25cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x25cae8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x25cae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25caec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x25caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x25caf0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x25caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x25caf4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x25caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x25caf8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25caf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25cafc: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x25cafcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25cb00: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25cb00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25cb04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25cb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25cb08: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x25cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x25cb0c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x25cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x25cb10: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x25cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x25cb14: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x25cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x25cb18: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x25cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x25cb1c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x25cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x25cb20: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25cb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25cb24: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x25cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x25cb28: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x25cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x25cb2c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x25cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x25cb30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x25cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x25cb34: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x25cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x25cb38: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x25cb38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x25cb3c: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x25cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x25cb40: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x25cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x25cb44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25CB44u;
    {
        const bool branch_taken_0x25cb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB44u;
        // 0x25cb48: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb44) {
            ctx->pc = 0x25CB68u;
            goto label_25cb68;
        }
    }
    ctx->pc = 0x25CB4Cu;
    // 0x25cb4c: 0x8ca20274  lw          $v0, 0x274($a1)
    ctx->pc = 0x25cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 628)));
    // 0x25cb50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25cb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25cb54: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x25cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x25cb58: 0x3063020f  andi        $v1, $v1, 0x20F
    ctx->pc = 0x25cb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)527);
    // 0x25cb5c: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x25cb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x25cb60: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x25cb60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25cb64: 0xa3a30041  sb          $v1, 0x41($sp)
    ctx->pc = 0x25cb64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 3));
label_25cb68:
    // 0x25cb68: 0x8ca200d4  lw          $v0, 0xD4($a1)
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x25cb6c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x25cb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x25cb70: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x25CB70u;
    SET_GPR_U32(ctx, 31, 0x25CB78u);
    ctx->pc = 0x25CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB70u;
    // 0x25cb74: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x25CB70u, 0x25CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB78u;
label_25cb78:
    // 0x25cb78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x25cb78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x25cb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb80: 0x3c013be5  lui         $at, 0x3BE5
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15333 << 16));
    // 0x25cb84: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x25cb84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x25cb88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25cb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25cb8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25cb8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb90: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x25cb94: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x25cb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x25cb98: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x25cb98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cb9c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x25cb9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cba0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x25cba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cba4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25cba8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x25cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25cbac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cbb0: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x25cbb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25cbb4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x25cbb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x25cbb8: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x25CBB8u;
    SET_GPR_U32(ctx, 31, 0x25CBC0u);
    ctx->pc = 0x25CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBB8u;
    // 0x25cbbc: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x25CBB8u, 0x25CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBC0u;
label_25cbc0:
    // 0x25cbc0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x25cbc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cbc4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x25cbc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25cbc8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25cbc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25cbcc: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x25cbccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x25cbd0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25cbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25cbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBD4u;
        // 0x25cbd8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CBDCu;
    // 0x25cbdc: 0x0  nop
    ctx->pc = 0x25cbdcu;
    // NOP
    ctx->pc = 0x25cbe0u;
}
