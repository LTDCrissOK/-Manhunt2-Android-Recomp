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

// Function: sub_0023F408
// Address: 0x23f408 - 0x23f568
void sub_0023F408_0x23f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F408_0x23f408");
#endif

    switch (ctx->pc) {
        case 0x23f428u: goto label_23f428;
        case 0x23f4c8u: goto label_23f4c8;
        case 0x23f4d8u: goto label_23f4d8;
        case 0x23f4e8u: goto label_23f4e8;
        case 0x23f4f8u: goto label_23f4f8;
        case 0x23f508u: goto label_23f508;
        case 0x23f518u: goto label_23f518;
        case 0x23f528u: goto label_23f528;
        case 0x23f538u: goto label_23f538;
        case 0x23f544u: goto label_23f544;
        case 0x23f550u: goto label_23f550;
        default: break;
    }

    ctx->pc = 0x23f408u;

    // 0x23f408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f40c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x23f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23f410: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x23f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x23f414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f418: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23f41c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f41cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f420: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x23F420u;
    SET_GPR_U32(ctx, 31, 0x23F428u);
    ctx->pc = 0x23F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F420u;
    // 0x23f424: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x23F420u, 0x23F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F428u;
label_23f428:
    // 0x23f428: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x23F428u;
    {
        const bool branch_taken_0x23f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f428) {
            ctx->pc = 0x23F42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F428u;
            // 0x23f42c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F430u;
    // 0x23f430: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f434: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x23f438: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x23f438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x23f43c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x23f43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x23f440: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x23F440u;
    {
        const bool branch_taken_0x23f440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f440) {
            ctx->pc = 0x23F444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F440u;
            // 0x23f444: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F554u;
            goto label_23f554;
        }
    }
    ctx->pc = 0x23F448u;
    // 0x23f448: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x23f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x23f44c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f450: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23f454: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23f454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f458: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x23f458u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23f45c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23f45cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23f460: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x23f460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23f464: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x23f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f468: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x23f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23f46c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x23f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f470: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23f470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23f474: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23f474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23f478: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x23f478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23f47c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x23f47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23f480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f484: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x23f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x23f488: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x23f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f48c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x23f48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f490: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x23f490u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x23f494: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23f494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f498: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x23f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f49c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x23f49cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x23f4a0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x23f4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23f4a4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x23f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23f4a8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x23f4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x23f4ac: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x23f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23f4b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23f4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23f4b4: 0x0  nop
    ctx->pc = 0x23f4b4u;
    // NOP
    // 0x23f4b8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x23F4B8u;
    {
        const bool branch_taken_0x23f4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4B8u;
        // 0x23f4bc: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4b8) {
            ctx->pc = 0x23F500u;
            goto label_23f500;
        }
    }
    ctx->pc = 0x23F4C0u;
    // 0x23f4c0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F4C0u;
    SET_GPR_U32(ctx, 31, 0x23F4C8u);
    ctx->pc = 0x23F4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4C0u;
    // 0x23f4c4: 0x24060569  addiu       $a2, $zero, 0x569 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1385));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F4C0u, 0x23F4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4C8u;
label_23f4c8:
    // 0x23f4c8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f4cc: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x23f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23f4d0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F4D0u;
    SET_GPR_U32(ctx, 31, 0x23F4D8u);
    ctx->pc = 0x23F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4D0u;
    // 0x23f4d4: 0x24060596  addiu       $a2, $zero, 0x596 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1430));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F4D0u, 0x23F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4D8u;
label_23f4d8:
    // 0x23f4d8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f4dc: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x23f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x23f4e0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F4E0u;
    SET_GPR_U32(ctx, 31, 0x23F4E8u);
    ctx->pc = 0x23F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4E0u;
    // 0x23f4e4: 0x240605a1  addiu       $a2, $zero, 0x5A1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1441));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F4E0u, 0x23F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4E8u;
label_23f4e8:
    // 0x23f4e8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f4ec: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x23f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23f4f0: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F4F0u;
    SET_GPR_U32(ctx, 31, 0x23F4F8u);
    ctx->pc = 0x23F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F4F0u;
    // 0x23f4f4: 0x24060686  addiu       $a2, $zero, 0x686 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1670));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F4F0u, 0x23F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F4F8u;
label_23f4f8:
    // 0x23f4f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23F4F8u;
    {
        const bool branch_taken_0x23f4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F4F8u;
        // 0x23f4fc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f4f8) {
            ctx->pc = 0x23F53Cu;
            goto label_23f53c;
        }
    }
    ctx->pc = 0x23F500u;
label_23f500:
    // 0x23f500: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F500u;
    SET_GPR_U32(ctx, 31, 0x23F508u);
    ctx->pc = 0x23F504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F500u;
    // 0x23f504: 0x2406056c  addiu       $a2, $zero, 0x56C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F500u, 0x23F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F508u;
label_23f508:
    // 0x23f508: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f50c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x23f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23f510: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F510u;
    SET_GPR_U32(ctx, 31, 0x23F518u);
    ctx->pc = 0x23F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F510u;
    // 0x23f514: 0x24060599  addiu       $a2, $zero, 0x599 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1433));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F510u, 0x23F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F518u;
label_23f518:
    // 0x23f518: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f51c: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x23f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x23f520: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F520u;
    SET_GPR_U32(ctx, 31, 0x23F528u);
    ctx->pc = 0x23F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F520u;
    // 0x23f524: 0x240605a0  addiu       $a2, $zero, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F520u, 0x23F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F528u;
label_23f528:
    // 0x23f528: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f52c: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x23f52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23f530: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x23F530u;
    SET_GPR_U32(ctx, 31, 0x23F538u);
    ctx->pc = 0x23F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F530u;
    // 0x23f534: 0x24060685  addiu       $a2, $zero, 0x685 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23F530u, 0x23F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F538u;
label_23f538:
    // 0x23f538: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23f53c:
    // 0x23f53c: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x23F53Cu;
    SET_GPR_U32(ctx, 31, 0x23F544u);
    ctx->pc = 0x23F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F53Cu;
    // 0x23f540: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x23F53Cu, 0x23F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F544u;
label_23f544:
    // 0x23f544: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23f548: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x23F548u;
    SET_GPR_U32(ctx, 31, 0x23F550u);
    ctx->pc = 0x23F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F548u;
    // 0x23f54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23F548u, 0x23F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F550u;
label_23f550:
    // 0x23f550: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x23f550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23f554:
    // 0x23f554: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x23f554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23f558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23f558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f55c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F55Cu;
        // 0x23f560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F564u;
    // 0x23f564: 0x0  nop
    ctx->pc = 0x23f564u;
    // NOP
    ctx->pc = 0x23f568u;
}
