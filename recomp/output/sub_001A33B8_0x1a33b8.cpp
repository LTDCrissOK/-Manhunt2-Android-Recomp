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

// Function: sub_001A33B8
// Address: 0x1a33b8 - 0x1a34b0
void sub_001A33B8_0x1a33b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A33B8_0x1a33b8");
#endif

    switch (ctx->pc) {
        case 0x1a33dcu: goto label_1a33dc;
        case 0x1a33ecu: goto label_1a33ec;
        case 0x1a33f4u: goto label_1a33f4;
        case 0x1a3404u: goto label_1a3404;
        case 0x1a3410u: goto label_1a3410;
        case 0x1a341cu: goto label_1a341c;
        case 0x1a342cu: goto label_1a342c;
        case 0x1a3494u: goto label_1a3494;
        default: break;
    }

    ctx->pc = 0x1a33b8u;

    // 0x1a33b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a33b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a33bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a33bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a33c0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a33c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a33c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a33c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a33c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a33cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a33ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a33d0: 0x8c620ff4  lw          $v0, 0xFF4($v1)
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4084)));
    // 0x1a33d4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A33D4u;
    SET_GPR_U32(ctx, 31, 0x1A33DCu);
    ctx->pc = 0x1A33D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33D4u;
    // 0x1a33d8: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A33D4u, 0x1A33DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33DCu;
label_1a33dc:
    // 0x1a33dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a33e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33e4: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A33E4u;
    SET_GPR_U32(ctx, 31, 0x1A33ECu);
    ctx->pc = 0x1A33E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33E4u;
    // 0x1a33e8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A33E4u, 0x1A33ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33ECu;
label_1a33ec:
    // 0x1a33ec: 0xc061a12  jal         func_186848
    ctx->pc = 0x1A33ECu;
    SET_GPR_U32(ctx, 31, 0x1A33F4u);
    ctx->pc = 0x1A33F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33ECu;
    // 0x1a33f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A33ECu, 0x1A33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33F4u;
label_1a33f4:
    // 0x1a33f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a33f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a33f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33fc: 0xc0702b8  jal         func_1C0AE0
    ctx->pc = 0x1A33FCu;
    SET_GPR_U32(ctx, 31, 0x1A3404u);
    ctx->pc = 0x1A3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33FCu;
    // 0x1a3400: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AE0u, 0x1A33FCu, 0x1A3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3404u;
label_1a3404:
    // 0x1a3404: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a3404u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a3408: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A3408u;
    SET_GPR_U32(ctx, 31, 0x1A3410u);
    ctx->pc = 0x1A340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3408u;
    // 0x1a340c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A3408u, 0x1A3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3410u;
label_1a3410:
    // 0x1a3410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3414: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A3414u;
    SET_GPR_U32(ctx, 31, 0x1A341Cu);
    ctx->pc = 0x1A3418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3414u;
    // 0x1a3418: 0xe454014c  swc1        $f20, 0x14C($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A3414u, 0x1A341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A341Cu;
label_1a341c:
    // 0x1a341c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3424: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A3424u;
    SET_GPR_U32(ctx, 31, 0x1A342Cu);
    ctx->pc = 0x1A3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3424u;
    // 0x1a3428: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A3424u, 0x1A342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A342Cu;
label_1a342c:
    // 0x1a342c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a3430: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a3434: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3434u;
    {
        const bool branch_taken_0x1a3434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3434u;
        // 0x1a3438: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3434) {
            ctx->pc = 0x1A3450u;
            goto label_1a3450;
        }
    }
    ctx->pc = 0x1A343Cu;
    // 0x1a343c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3440: 0x0  nop
    ctx->pc = 0x1a3440u;
    // NOP
    // 0x1a3444: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a3448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3448u;
    {
        const bool branch_taken_0x1a3448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3448) {
            ctx->pc = 0x1A3468u;
            goto label_1a3468;
        }
    }
    ctx->pc = 0x1A3450u;
label_1a3450:
    // 0x1a3450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3454: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a3458: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a3458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a345c: 0x0  nop
    ctx->pc = 0x1a345cu;
    // NOP
    // 0x1a3460: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a3464: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a3464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a3468:
    // 0x1a3468: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a346c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a346cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a3470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3474: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1a3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3478: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a347c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a347cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3480: 0x0  nop
    ctx->pc = 0x1a3480u;
    // NOP
    // 0x1a3484: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3484u;
    {
        const bool branch_taken_0x1a3484 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3484u;
        // 0x1a3488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3484) {
            ctx->pc = 0x1A3498u;
            goto label_1a3498;
        }
    }
    ctx->pc = 0x1A348Cu;
    // 0x1a348c: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A348Cu;
    SET_GPR_U32(ctx, 31, 0x1A3494u);
    ctx->pc = 0x1A3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A348Cu;
    // 0x1a3490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A348Cu, 0x1A3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3494u;
label_1a3494:
    // 0x1a3494: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3498:
    // 0x1a3498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a349c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a34a0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a34a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a34a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A34A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A34A4u;
        // 0x1a34a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A34ACu;
    // 0x1a34ac: 0x0  nop
    ctx->pc = 0x1a34acu;
    // NOP
    ctx->pc = 0x1a34b0u;
}
