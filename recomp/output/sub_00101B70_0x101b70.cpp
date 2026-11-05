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

// Function: sub_00101B70
// Address: 0x101b70 - 0x101c20
void sub_00101B70_0x101b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101B70_0x101b70");
#endif

    switch (ctx->pc) {
        case 0x101be8u: goto label_101be8;
        case 0x101bf4u: goto label_101bf4;
        default: break;
    }

    ctx->pc = 0x101b70u;

    // 0x101b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101b74: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x101b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x101b78: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x101b78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x101b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x101b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x101b84: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x101b84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x101b88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101b8c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x101b8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x101b90: 0xa2270004  sb          $a3, 0x4($s1)
    ctx->pc = 0x101b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x101b94: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x101b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x101b98: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x101b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x101b9c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x101b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x101ba0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x101ba0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x101ba4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x101ba4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x101ba8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x101ba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x101bac: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x101bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x101bb0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x101bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x101bb4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x101bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x101bb8: 0x46000d05  abs.s       $f20, $f1
    ctx->pc = 0x101bb8u;
    ctx->f[20] = FPU_ABS_S(ctx->f[1]);
    // 0x101bbc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x101bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x101bc0: 0x46002085  abs.s       $f2, $f4
    ctx->pc = 0x101bc0u;
    ctx->f[2] = FPU_ABS_S(ctx->f[4]);
    // 0x101bc4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x101bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x101bc8: 0x46001945  abs.s       $f5, $f3
    ctx->pc = 0x101bc8u;
    ctx->f[5] = FPU_ABS_S(ctx->f[3]);
    // 0x101bcc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x101bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x101bd0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x101bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x101bd4: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x101bd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x101bd8: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x101bd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x101bdc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x101bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x101be0: 0xc041138  jal         func_1044E0
    ctx->pc = 0x101BE0u;
    SET_GPR_U32(ctx, 31, 0x101BE8u);
    ctx->pc = 0x101BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BE0u;
    // 0x101be4: 0x4605a500  add.s       $f20, $f20, $f5 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044E0u, 0x101BE0u, 0x101BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BE8u;
label_101be8:
    // 0x101be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bec: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x101BECu;
    SET_GPR_U32(ctx, 31, 0x101BF4u);
    ctx->pc = 0x101BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BECu;
    // 0x101bf0: 0x4615a302  mul.s       $f12, $f20, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x101BECu, 0x101BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BF4u;
label_101bf4:
    // 0x101bf4: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x101bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x101bf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101bfc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x101bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x101c00: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x101c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x101c04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x101c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x101c08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x101c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x101c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101c10: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x101c14: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x101c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101c18: 0x3e00008  jr          $ra
    ctx->pc = 0x101C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C18u;
        // 0x101c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101C20u;
}
