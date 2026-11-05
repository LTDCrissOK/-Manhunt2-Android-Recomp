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

// Function: sub_00180938
// Address: 0x180938 - 0x180a90
void sub_00180938_0x180938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180938_0x180938");
#endif

    switch (ctx->pc) {
        case 0x180964u: goto label_180964;
        case 0x180980u: goto label_180980;
        case 0x180998u: goto label_180998;
        case 0x1809a8u: goto label_1809a8;
        case 0x1809b4u: goto label_1809b4;
        case 0x1809d0u: goto label_1809d0;
        default: break;
    }

    ctx->pc = 0x180938u;

    // 0x180938: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x180938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18093c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x18093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x180940: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x180940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x180944: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x180944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x180948: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18094c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x18094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x180950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x180950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180954: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x180958: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18095c: 0xc047866  jal         func_11E198
    ctx->pc = 0x18095Cu;
    SET_GPR_U32(ctx, 31, 0x180964u);
    ctx->pc = 0x180960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18095Cu;
    // 0x180960: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x18095Cu, 0x180964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180964u;
label_180964:
    // 0x180964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180968: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x180968u;
    {
        const bool branch_taken_0x180968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180968u;
        // 0x18096c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180968) {
            ctx->pc = 0x180A78u;
            goto label_180a78;
        }
    }
    ctx->pc = 0x180970u;
    // 0x180970: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x180974: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x180974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180978: 0xc0b5cee  jal         func_2D73B8
    ctx->pc = 0x180978u;
    SET_GPR_U32(ctx, 31, 0x180980u);
    ctx->pc = 0x18097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180978u;
    // 0x18097c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D73B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73B8u, 0x180978u, 0x180980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180980u;
label_180980:
    // 0x180980: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x180980u;
    {
        const bool branch_taken_0x180980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180980u;
        // 0x180984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180980) {
            ctx->pc = 0x180A78u;
            goto label_180a78;
        }
    }
    ctx->pc = 0x180988u;
    // 0x180988: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x180988u;
    {
        const bool branch_taken_0x180988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180988u;
        // 0x18098c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180988) {
            ctx->pc = 0x180A74u;
            goto label_180a74;
        }
    }
    ctx->pc = 0x180990u;
    // 0x180990: 0xc0602a4  jal         func_180A90
    ctx->pc = 0x180990u;
    SET_GPR_U32(ctx, 31, 0x180998u);
    ctx->pc = 0x180994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180990u;
    // 0x180994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180A90u, 0x180990u, 0x180998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180998u;
label_180998:
    // 0x180998: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x180998u;
    {
        const bool branch_taken_0x180998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180998u;
        // 0x18099c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180998) {
            ctx->pc = 0x180A74u;
            goto label_180a74;
        }
    }
    ctx->pc = 0x1809A0u;
    // 0x1809a0: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1809A0u;
    SET_GPR_U32(ctx, 31, 0x1809A8u);
    ctx->pc = 0x1809A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809A0u;
    // 0x1809a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1809A0u, 0x1809A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809A8u;
label_1809a8:
    // 0x1809a8: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x1809a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x1809ac: 0xc072be8  jal         func_1CAFA0
    ctx->pc = 0x1809ACu;
    SET_GPR_U32(ctx, 31, 0x1809B4u);
    ctx->pc = 0x1809B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809ACu;
    // 0x1809b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAFA0u, 0x1809ACu, 0x1809B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809B4u;
label_1809b4:
    // 0x1809b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1809b8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1809b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1809bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1809bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1809c0: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1809C0u;
    {
        const bool branch_taken_0x1809c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1809C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809C0u;
        // 0x1809c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809c0) {
            ctx->pc = 0x180A78u;
            goto label_180a78;
        }
    }
    ctx->pc = 0x1809C8u;
    // 0x1809c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1809C8u;
    SET_GPR_U32(ctx, 31, 0x1809D0u);
    ctx->pc = 0x1809CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809C8u;
    // 0x1809cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1809C8u, 0x1809D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809D0u;
label_1809d0:
    // 0x1809d0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1809d4: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x1809d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1809d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1809dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1809e0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1809e4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1809e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1809e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1809e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1809ec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1809ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1809f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1809f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1809f4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1809f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1809f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1809f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1809fc: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1809fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180a00: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x180a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180a04: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x180a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x180a08: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x180a08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x180a0c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x180a0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x180a10: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x180a10u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x180a14: 0x46050144  c1          0x50144
    ctx->pc = 0x180a14u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x180a18: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x180a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x180a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a20: 0x0  nop
    ctx->pc = 0x180a20u;
    // NOP
    // 0x180a24: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x180a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a28: 0x0  nop
    ctx->pc = 0x180a28u;
    // NOP
    // 0x180a2c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x180A2Cu;
    {
        const bool branch_taken_0x180a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x180a2c) {
            ctx->pc = 0x180A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180A2Cu;
            // 0x180a30: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x180A34u;
            goto label_180a34;
        }
    }
    ctx->pc = 0x180A34u;
label_180a34:
    // 0x180a34: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x180a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x180a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x180a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180a3c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x180a40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x180a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x180a44: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x180a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x180a48: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x180a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180a4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x180a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x180a50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x180a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a54: 0x0  nop
    ctx->pc = 0x180a54u;
    // NOP
    // 0x180a58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x180A58u;
    {
        const bool branch_taken_0x180a58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A58u;
        // 0x180a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a58) {
            ctx->pc = 0x180A78u;
            goto label_180a78;
        }
    }
    ctx->pc = 0x180A60u;
    // 0x180a60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x180a60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x180a64: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x180a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180a68: 0x0  nop
    ctx->pc = 0x180a68u;
    // NOP
    // 0x180a6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x180A6Cu;
    {
        const bool branch_taken_0x180a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x180A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A6Cu;
        // 0x180a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a6c) {
            ctx->pc = 0x180A78u;
            goto label_180a78;
        }
    }
    ctx->pc = 0x180A74u;
label_180a74:
    // 0x180a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180a78:
    // 0x180a78: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x180a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180a7c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x180a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x180a80: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x180a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180a84: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x180a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x180a88: 0x3e00008  jr          $ra
    ctx->pc = 0x180A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A88u;
        // 0x180a8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A90u;
}
