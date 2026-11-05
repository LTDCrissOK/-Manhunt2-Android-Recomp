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

// Function: sub_003466B8
// Address: 0x3466b8 - 0x3467a8
void sub_003466B8_0x3466b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003466B8_0x3466b8");
#endif

    switch (ctx->pc) {
        case 0x3466f0u: goto label_3466f0;
        case 0x346728u: goto label_346728;
        case 0x34673cu: goto label_34673c;
        case 0x34674cu: goto label_34674c;
        case 0x346758u: goto label_346758;
        default: break;
    }

    ctx->pc = 0x3466b8u;

    // 0x3466b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3466b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3466bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3466bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3466c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3466c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3466c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3466c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3466c8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3466c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3466cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3466ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3466d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3466d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3466d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3466d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3466d8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3466d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3466dc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3466dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3466e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3466E0u;
    {
        const bool branch_taken_0x3466e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3466E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466E0u;
        // 0x3466e4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466e0) {
            ctx->pc = 0x346784u;
            goto label_346784;
        }
    }
    ctx->pc = 0x3466E8u;
    // 0x3466e8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3466e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3466ec: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x3466ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3466f0:
    // 0x3466f0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x3466f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3466f4: 0x8e240128  lw          $a0, 0x128($s1)
    ctx->pc = 0x3466f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x3466f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3466f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3466fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3466fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346700: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x346700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x346704: 0x5464001b  bnel        $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x346704u;
    {
        const bool branch_taken_0x346704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x346704) {
            ctx->pc = 0x346708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346704u;
            // 0x346708: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x346774u;
            goto label_346774;
        }
    }
    ctx->pc = 0x34670Cu;
    // 0x34670c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346710: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x346710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346714: 0x0  nop
    ctx->pc = 0x346714u;
    // NOP
    // 0x346718: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x346718u;
    {
        const bool branch_taken_0x346718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346718u;
        // 0x34671c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346718) {
            ctx->pc = 0x346730u;
            goto label_346730;
        }
    }
    ctx->pc = 0x346720u;
    // 0x346720: 0xc0d187a  jal         func_3461E8
    ctx->pc = 0x346720u;
    SET_GPR_U32(ctx, 31, 0x346728u);
    ctx->pc = 0x346724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346720u;
    // 0x346724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3461E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461E8u, 0x346720u, 0x346728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346728u;
label_346728:
    // 0x346728: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x346728u;
    {
        const bool branch_taken_0x346728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346728u;
        // 0x34672c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346728) {
            ctx->pc = 0x346774u;
            goto label_346774;
        }
    }
    ctx->pc = 0x346730u;
label_346730:
    // 0x346730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346734: 0xc0d18a2  jal         func_346288
    ctx->pc = 0x346734u;
    SET_GPR_U32(ctx, 31, 0x34673Cu);
    ctx->pc = 0x346738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346734u;
    // 0x346738: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x346288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346288u, 0x346734u, 0x34673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34673Cu;
label_34673c:
    // 0x34673c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346740: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x346740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346744: 0xc0d18dc  jal         func_346370
    ctx->pc = 0x346744u;
    SET_GPR_U32(ctx, 31, 0x34674Cu);
    ctx->pc = 0x346748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346744u;
    // 0x346748: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x346370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346370u, 0x346744u, 0x34674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34674Cu;
label_34674c:
    // 0x34674c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346750: 0xc0d195c  jal         func_346570
    ctx->pc = 0x346750u;
    SET_GPR_U32(ctx, 31, 0x346758u);
    ctx->pc = 0x346754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346750u;
    // 0x346754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346570u, 0x346750u, 0x346758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346758u;
label_346758:
    // 0x346758: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x346758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x34675c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x34675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x346760: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x346760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346764: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x346764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346768: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x346768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34676c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x346770: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x346770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_346774:
    // 0x346774: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x346774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x346778: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x346778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34677c: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x34677Cu;
    {
        const bool branch_taken_0x34677c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34677c) {
            ctx->pc = 0x346780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34677Cu;
            // 0x346780: 0x8e220118  lw          $v0, 0x118($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3466F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3466f0;
        }
    }
    ctx->pc = 0x346784u;
label_346784:
    // 0x346784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34678c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34678cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346790: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x346794: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x346794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x346798: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x346798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34679c: 0x3e00008  jr          $ra
    ctx->pc = 0x34679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3467A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34679Cu;
        // 0x3467a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3467A4u;
    // 0x3467a4: 0x0  nop
    ctx->pc = 0x3467a4u;
    // NOP
    ctx->pc = 0x3467a8u;
}
