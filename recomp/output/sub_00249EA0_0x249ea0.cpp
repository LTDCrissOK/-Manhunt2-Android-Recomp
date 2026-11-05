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

// Function: sub_00249EA0
// Address: 0x249ea0 - 0x249f70
void sub_00249EA0_0x249ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249EA0_0x249ea0");
#endif

    switch (ctx->pc) {
        case 0x249edcu: goto label_249edc;
        case 0x249ee8u: goto label_249ee8;
        case 0x249ef8u: goto label_249ef8;
        default: break;
    }

    ctx->pc = 0x249ea0u;

    // 0x249ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x249ea4: 0x240507e8  addiu       $a1, $zero, 0x7E8
    ctx->pc = 0x249ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2024));
    // 0x249ea8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x249ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x249eac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x249eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x249eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x249eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249eb8: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x249eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x249ebc: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x249ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x249ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x249ec4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249ec8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249ecc: 0x1485001c  bne         $a0, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x249ECCu;
    {
        const bool branch_taken_0x249ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x249ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249ECCu;
        // 0x249ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ecc) {
            ctx->pc = 0x249F40u;
            goto label_249f40;
        }
    }
    ctx->pc = 0x249ED4u;
    // 0x249ed4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x249ED4u;
    SET_GPR_U32(ctx, 31, 0x249EDCu);
    ctx->pc = 0x249ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249ED4u;
    // 0x249ed8: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x249ED4u, 0x249EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EDCu;
label_249edc:
    // 0x249edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x249edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ee0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x249EE0u;
    SET_GPR_U32(ctx, 31, 0x249EE8u);
    ctx->pc = 0x249EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EE0u;
    // 0x249ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x249EE0u, 0x249EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EE8u;
label_249ee8:
    // 0x249ee8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249EE8u;
    {
        const bool branch_taken_0x249ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ee8) {
            ctx->pc = 0x249EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249EE8u;
            // 0x249eec: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249EFCu;
            goto label_249efc;
        }
    }
    ctx->pc = 0x249EF0u;
    // 0x249ef0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x249EF0u;
    SET_GPR_U32(ctx, 31, 0x249EF8u);
    ctx->pc = 0x249EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EF0u;
    // 0x249ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x249EF0u, 0x249EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EF8u;
label_249ef8:
    // 0x249ef8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_249efc:
    // 0x249efc: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x249efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x249f00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x249f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249f04: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x249f08: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x249f08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249f0c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x249f0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249f10: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x249f10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x249f14: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x249f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x249f18: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x249f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x249f1c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x249f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f20: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x249f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x249f24: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x249f24u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x249f28: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x249f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f2c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x249f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x249f30: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x249f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x249f34: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x249f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x249f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x249F38u;
    {
        const bool branch_taken_0x249f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F38u;
        // 0x249f3c: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f38) {
            ctx->pc = 0x249F4Cu;
            goto label_249f4c;
        }
    }
    ctx->pc = 0x249F40u;
label_249f40:
    // 0x249f40: 0x3c013f55  lui         $at, 0x3F55
    ctx->pc = 0x249f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16213 << 16));
    // 0x249f44: 0x34213f7d  ori         $at, $at, 0x3F7D
    ctx->pc = 0x249f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16253);
    // 0x249f48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x249f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_249f4c:
    // 0x249f4c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x249f50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x249f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249f54: 0xc4405e84  lwc1        $f0, 0x5E84($v0)
    ctx->pc = 0x249f54u;
    { uint32_t bits = FAST_READ32(0x595E84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x249f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249f5c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x249f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x249f60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249f64: 0x3e00008  jr          $ra
    ctx->pc = 0x249F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F64u;
        // 0x249f68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249F6Cu;
    // 0x249f6c: 0x0  nop
    ctx->pc = 0x249f6cu;
    // NOP
    ctx->pc = 0x249f70u;
}
