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

// Function: sub_0026C678
// Address: 0x26c678 - 0x26c740
void sub_0026C678_0x26c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C678_0x26c678");
#endif

    switch (ctx->pc) {
        case 0x26c6a8u: goto label_26c6a8;
        case 0x26c6bcu: goto label_26c6bc;
        default: break;
    }

    ctx->pc = 0x26c678u;

    // 0x26c678: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c67c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x26c680: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x26c680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26c684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26c684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c688: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26c688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26c68c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26c690: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26c694: 0x8e450258  lw          $a1, 0x258($s2)
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x26c698: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x26C698u;
    {
        const bool branch_taken_0x26c698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C698u;
        // 0x26c69c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c698) {
            ctx->pc = 0x26C704u;
            goto label_26c704;
        }
    }
    ctx->pc = 0x26C6A0u;
    // 0x26c6a0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C6A0u;
    SET_GPR_U32(ctx, 31, 0x26C6A8u);
    ctx->pc = 0x26C6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6A0u;
    // 0x26c6a4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C6A0u, 0x26C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6A8u;
label_26c6a8:
    // 0x26c6a8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x26c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x26c6ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6b0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x26c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x26c6b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C6B4u;
    SET_GPR_U32(ctx, 31, 0x26C6BCu);
    ctx->pc = 0x26C6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6B4u;
    // 0x26c6b8: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C6B4u, 0x26C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C6BCu;
label_26c6bc:
    // 0x26c6bc: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x26c6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x26c6c0: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x26c6c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x26c6c4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26c6c8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x26c6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x26c6cc: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x26c6ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x26c6d0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x26c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x26c6d4: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x26c6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c6d8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x26c6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c6dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26c6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26c6e0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x26c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c6e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26c6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26c6e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26c6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26c6ec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x26c6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26c6f0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x26c6f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26c6f4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26c6f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c6f8: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c6fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26C6FCu;
    {
        const bool branch_taken_0x26c6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6FCu;
        // 0x26c700: 0xae500258  sw          $s0, 0x258($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6fc) {
            ctx->pc = 0x26C724u;
            goto label_26c724;
        }
    }
    ctx->pc = 0x26C704u;
label_26c704:
    // 0x26c704: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x26c704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x26c708: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x26c708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x26c70c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c710: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x26c710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x26c714: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x26c714u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x26c718: 0x8e430258  lw          $v1, 0x258($s2)
    ctx->pc = 0x26c718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x26c71c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x26c71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x26c720: 0xe4740020  swc1        $f20, 0x20($v1)
    ctx->pc = 0x26c720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_26c724:
    // 0x26c724: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26c724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c728: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26c728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c72c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26c72cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c730: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26c730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26c734: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x26c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26c738: 0x3e00008  jr          $ra
    ctx->pc = 0x26C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C738u;
        // 0x26c73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C740u;
}
