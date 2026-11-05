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

// Function: sub_001946C8
// Address: 0x1946c8 - 0x194760
void sub_001946C8_0x1946c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001946C8_0x1946c8");
#endif

    switch (ctx->pc) {
        case 0x1946c8u: goto label_1946c8;
        case 0x1946ccu: goto label_1946cc;
        case 0x1946d0u: goto label_1946d0;
        case 0x1946d4u: goto label_1946d4;
        case 0x1946d8u: goto label_1946d8;
        case 0x1946dcu: goto label_1946dc;
        case 0x1946e0u: goto label_1946e0;
        case 0x1946e4u: goto label_1946e4;
        case 0x1946e8u: goto label_1946e8;
        case 0x1946ecu: goto label_1946ec;
        case 0x1946f0u: goto label_1946f0;
        case 0x1946f4u: goto label_1946f4;
        case 0x1946f8u: goto label_1946f8;
        case 0x1946fcu: goto label_1946fc;
        case 0x194700u: goto label_194700;
        case 0x194704u: goto label_194704;
        case 0x194708u: goto label_194708;
        case 0x19470cu: goto label_19470c;
        case 0x194710u: goto label_194710;
        case 0x194714u: goto label_194714;
        case 0x194718u: goto label_194718;
        case 0x19471cu: goto label_19471c;
        case 0x194720u: goto label_194720;
        case 0x194724u: goto label_194724;
        case 0x194728u: goto label_194728;
        case 0x19472cu: goto label_19472c;
        case 0x194730u: goto label_194730;
        case 0x194734u: goto label_194734;
        case 0x194738u: goto label_194738;
        case 0x19473cu: goto label_19473c;
        case 0x194740u: goto label_194740;
        case 0x194744u: goto label_194744;
        case 0x194748u: goto label_194748;
        case 0x19474cu: goto label_19474c;
        case 0x194750u: goto label_194750;
        case 0x194754u: goto label_194754;
        case 0x194758u: goto label_194758;
        case 0x19475cu: goto label_19475c;
        default: break;
    }

    ctx->pc = 0x1946c8u;

label_1946c8:
    // 0x1946c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1946c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1946cc:
    // 0x1946cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1946ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1946d0:
    // 0x1946d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1946d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1946d4:
    // 0x1946d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1946d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1946d8:
    // 0x1946d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1946d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1946dc:
    // 0x1946dc: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_1946e0:
    if (ctx->pc == 0x1946E0u) {
        ctx->pc = 0x1946E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946DCu;
        // 0x1946e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946E4u;
        goto label_1946e4;
    }
    ctx->pc = 0x1946DCu;
    {
        const bool branch_taken_0x1946dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1946dc) {
            ctx->pc = 0x1946E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1946DCu;
            // 0x1946e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194750u;
            goto label_194750;
        }
    }
    ctx->pc = 0x1946E4u;
label_1946e4:
    // 0x1946e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1946e8:
    // 0x1946e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1946ec:
    if (ctx->pc == 0x1946ECu) {
        ctx->pc = 0x1946ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946E8u;
        // 0x1946ec: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1946F0u;
        goto label_1946f0;
    }
    ctx->pc = 0x1946E8u;
    {
        const bool branch_taken_0x1946e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1946ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946E8u;
        // 0x1946ec: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1946e8) {
            ctx->pc = 0x194700u;
            goto label_194700;
        }
    }
    ctx->pc = 0x1946F0u;
label_1946f0:
    // 0x1946f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1946f4:
    // 0x1946f4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1946f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1946f8:
    // 0x1946f8: 0x40f809  jalr        $v0
label_1946fc:
    if (ctx->pc == 0x1946FCu) {
        ctx->pc = 0x194700u;
        goto label_194700;
    }
    ctx->pc = 0x1946F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x194700u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946F8u, 0x194700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x194700u;
label_194700:
    // 0x194700: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x194700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_194704:
    // 0x194704: 0xc061a16  jal         func_186858
label_194708:
    if (ctx->pc == 0x194708u) {
        ctx->pc = 0x194708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194704u;
        // 0x194708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19470Cu;
        goto label_19470c;
    }
    ctx->pc = 0x194704u;
    SET_GPR_U32(ctx, 31, 0x19470Cu);
    ctx->pc = 0x194708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194704u;
    // 0x194708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194704u, 0x19470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19470Cu;
label_19470c:
    // 0x19470c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194710:
    // 0x194710: 0xc061a16  jal         func_186858
label_194714:
    if (ctx->pc == 0x194714u) {
        ctx->pc = 0x194714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194710u;
        // 0x194714: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194718u;
        goto label_194718;
    }
    ctx->pc = 0x194710u;
    SET_GPR_U32(ctx, 31, 0x194718u);
    ctx->pc = 0x194714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194710u;
    // 0x194714: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194710u, 0x194718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194718u;
label_194718:
    // 0x194718: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x194718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19471c:
    // 0x19471c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19471cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194720:
    // 0x194720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_194724:
    // 0x194724: 0xc061a16  jal         func_186858
label_194728:
    if (ctx->pc == 0x194728u) {
        ctx->pc = 0x194728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194724u;
        // 0x194728: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19472Cu;
        goto label_19472c;
    }
    ctx->pc = 0x194724u;
    SET_GPR_U32(ctx, 31, 0x19472Cu);
    ctx->pc = 0x194728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194724u;
    // 0x194728: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194724u, 0x19472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19472Cu;
label_19472c:
    // 0x19472c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194730:
    // 0x194730: 0xc06ee66  jal         func_1BB998
label_194734:
    if (ctx->pc == 0x194734u) {
        ctx->pc = 0x194734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194730u;
        // 0x194734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194738u;
        goto label_194738;
    }
    ctx->pc = 0x194730u;
    SET_GPR_U32(ctx, 31, 0x194738u);
    ctx->pc = 0x194734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194730u;
    // 0x194734: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x194730u, 0x194738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194738u;
label_194738:
    // 0x194738: 0xc061a16  jal         func_186858
label_19473c:
    if (ctx->pc == 0x19473Cu) {
        ctx->pc = 0x19473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194738u;
        // 0x19473c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194740u;
        goto label_194740;
    }
    ctx->pc = 0x194738u;
    SET_GPR_U32(ctx, 31, 0x194740u);
    ctx->pc = 0x19473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194738u;
    // 0x19473c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x194738u, 0x194740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194740u;
label_194740:
    // 0x194740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x194740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_194744:
    // 0x194744: 0xc06eebe  jal         func_1BBAF8
label_194748:
    if (ctx->pc == 0x194748u) {
        ctx->pc = 0x194748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194744u;
        // 0x194748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19474Cu;
        goto label_19474c;
    }
    ctx->pc = 0x194744u;
    SET_GPR_U32(ctx, 31, 0x19474Cu);
    ctx->pc = 0x194748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194744u;
    // 0x194748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x194744u, 0x19474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19474Cu;
label_19474c:
    // 0x19474c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19474cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_194750:
    // 0x194750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x194750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_194754:
    // 0x194754: 0x3e00008  jr          $ra
label_194758:
    if (ctx->pc == 0x194758u) {
        ctx->pc = 0x194758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194754u;
        // 0x194758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19475Cu;
        goto label_19475c;
    }
    ctx->pc = 0x194754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194754u;
        // 0x194758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19475Cu;
label_19475c:
    // 0x19475c: 0x0  nop
    ctx->pc = 0x19475cu;
    // NOP
    ctx->pc = 0x194760u;
}
