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

// Function: sub_00261450
// Address: 0x261450 - 0x261530
void sub_00261450_0x261450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261450_0x261450");
#endif

    switch (ctx->pc) {
        case 0x2614d8u: goto label_2614d8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614fcu: goto label_2614fc;
        case 0x261504u: goto label_261504;
        case 0x261510u: goto label_261510;
        case 0x261518u: goto label_261518;
        default: break;
    }

    ctx->pc = 0x261450u;

    // 0x261450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x261458: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x261458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26145c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261460: 0x8e03025c  lw          $v1, 0x25C($s0)
    ctx->pc = 0x261460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x261464: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x261464u;
    {
        const bool branch_taken_0x261464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261464) {
            ctx->pc = 0x261468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261464u;
            // 0x261468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261520u;
            goto label_261520;
        }
    }
    ctx->pc = 0x26146Cu;
    // 0x26146c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x26146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261470: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x261470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x261474: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x261474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x261478: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x261478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26147c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x26147cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x261480: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x261480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x261484: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x261484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261488: 0x0  nop
    ctx->pc = 0x261488u;
    // NOP
    // 0x26148c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26148Cu;
    {
        const bool branch_taken_0x26148c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26148Cu;
        // 0x261490: 0xc4420010  lwc1        $f2, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26148c) {
            ctx->pc = 0x2614B0u;
            goto label_2614b0;
        }
    }
    ctx->pc = 0x261494u;
    // 0x261494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x261494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x261498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26149c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x26149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2614a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2614a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2614a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2614a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2614A8u;
    {
        const bool branch_taken_0x2614a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614A8u;
        // 0x2614ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614a8) {
            ctx->pc = 0x2614B8u;
            goto label_2614b8;
        }
    }
    ctx->pc = 0x2614B0u;
label_2614b0:
    // 0x2614b0: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2614b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2614b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2614b8:
    // 0x2614b8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2614B8u;
    {
        const bool branch_taken_0x2614b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2614b8) {
            ctx->pc = 0x2614BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2614B8u;
            // 0x2614bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2614C0u;
            goto label_2614c0;
        }
    }
    ctx->pc = 0x2614C0u;
label_2614c0:
    // 0x2614c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2614C0u;
    {
        const bool branch_taken_0x2614c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2614c0) {
            ctx->pc = 0x2614E0u;
            goto label_2614e0;
        }
    }
    ctx->pc = 0x2614C8u;
    // 0x2614c8: 0x8e04025c  lw          $a0, 0x25C($s0)
    ctx->pc = 0x2614c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x2614cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2614ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2614d0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2614D0u;
    SET_GPR_U32(ctx, 31, 0x2614D8u);
    ctx->pc = 0x2614D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614D0u;
    // 0x2614d4: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2614D0u, 0x2614D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614D8u;
label_2614d8:
    // 0x2614d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2614D8u;
    {
        const bool branch_taken_0x2614d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2614d8) {
            ctx->pc = 0x2614ECu;
            goto label_2614ec;
        }
    }
    ctx->pc = 0x2614E0u;
label_2614e0:
    // 0x2614e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2614e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2614e4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2614E4u;
    SET_GPR_U32(ctx, 31, 0x2614ECu);
    ctx->pc = 0x2614E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614E4u;
    // 0x2614e8: 0x8e04025c  lw          $a0, 0x25C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2614E4u, 0x2614ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614ECu;
label_2614ec:
    // 0x2614ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2614ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2614f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2614f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2614f4: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2614F4u;
    SET_GPR_U32(ctx, 31, 0x2614FCu);
    ctx->pc = 0x2614F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614F4u;
    // 0x2614f8: 0x8e04025c  lw          $a0, 0x25C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2614F4u, 0x2614FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614FCu;
label_2614fc:
    // 0x2614fc: 0xc09823c  jal         func_2608F0
    ctx->pc = 0x2614FCu;
    SET_GPR_U32(ctx, 31, 0x261504u);
    ctx->pc = 0x261500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614FCu;
    // 0x261500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2608F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2608F0u, 0x2614FCu, 0x261504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261504u;
label_261504:
    // 0x261504: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x261508: 0xc074256  jal         func_1D0958
    ctx->pc = 0x261508u;
    SET_GPR_U32(ctx, 31, 0x261510u);
    ctx->pc = 0x26150Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261508u;
    // 0x26150c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0958u, 0x261508u, 0x261510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261510u;
label_261510:
    // 0x261510: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x261510u;
    SET_GPR_U32(ctx, 31, 0x261518u);
    ctx->pc = 0x261514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261510u;
    // 0x261514: 0x8e04025c  lw          $a0, 0x25C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x261510u, 0x261518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261518u;
label_261518:
    // 0x261518: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x261518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x26151c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26151cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261520:
    // 0x261520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x261520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x261524: 0x3e00008  jr          $ra
    ctx->pc = 0x261524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261524u;
        // 0x261528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26152Cu;
    // 0x26152c: 0x0  nop
    ctx->pc = 0x26152cu;
    // NOP
    ctx->pc = 0x261530u;
}
