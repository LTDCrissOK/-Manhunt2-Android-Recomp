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

// Function: sub_00259378
// Address: 0x259378 - 0x259460
void sub_00259378_0x259378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259378_0x259378");
#endif

    switch (ctx->pc) {
        case 0x2593c0u: goto label_2593c0;
        case 0x2593c8u: goto label_2593c8;
        case 0x259400u: goto label_259400;
        case 0x259408u: goto label_259408;
        case 0x259444u: goto label_259444;
        default: break;
    }

    ctx->pc = 0x259378u;

    // 0x259378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25937c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x25937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x259380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x259380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x259384: 0x24422060  addiu       $v0, $v0, 0x2060
    ctx->pc = 0x259384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8288));
    // 0x259388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25938c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x259390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x259394: 0x26431110  addiu       $v1, $s2, 0x1110
    ctx->pc = 0x259394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4368));
    // 0x259398: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x259398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25939c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x25939cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2593a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2593a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2593a4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2593a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2593a8: 0xae420218  sw          $v0, 0x218($s2)
    ctx->pc = 0x2593a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 536), GPR_U32(ctx, 2));
    // 0x2593ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2593acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2593b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2593b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2593b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2593B4u;
    {
        const bool branch_taken_0x2593b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593B4u;
        // 0x2593b8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593b4) {
            ctx->pc = 0x2593C8u;
            goto label_2593c8;
        }
    }
    ctx->pc = 0x2593BCu;
    // 0x2593bc: 0x0  nop
    ctx->pc = 0x2593bcu;
    // NOP
label_2593c0:
    // 0x2593c0: 0xc095bb6  jal         func_256ED8
    ctx->pc = 0x2593C0u;
    SET_GPR_U32(ctx, 31, 0x2593C8u);
    ctx->pc = 0x256ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256ED8u, 0x2593C0u, 0x2593C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2593C8u;
label_2593c8:
    // 0x2593c8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2593cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2593CCu;
    {
        const bool branch_taken_0x2593cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593CCu;
        // 0x2593d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593cc) {
            ctx->pc = 0x2593D8u;
            goto label_2593d8;
        }
    }
    ctx->pc = 0x2593D4u;
    // 0x2593d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2593d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2593d8:
    // 0x2593d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2593D8u;
    {
        const bool branch_taken_0x2593d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2593d8) {
            ctx->pc = 0x2593E8u;
            goto label_2593e8;
        }
    }
    ctx->pc = 0x2593E0u;
    // 0x2593e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2593e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2593e4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2593e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2593e8:
    // 0x2593e8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2593E8u;
    {
        const bool branch_taken_0x2593e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2593e8) {
            ctx->pc = 0x2593C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2593c0;
        }
    }
    ctx->pc = 0x2593F0u;
    // 0x2593f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2593f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2593f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2593F4u;
    {
        const bool branch_taken_0x2593f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2593F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2593F4u;
        // 0x2593f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2593f4) {
            ctx->pc = 0x259418u;
            goto label_259418;
        }
    }
    ctx->pc = 0x2593FCu;
    // 0x2593fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_259400:
    // 0x259400: 0xc0f6e78  jal         func_3DB9E0
    ctx->pc = 0x259400u;
    SET_GPR_U32(ctx, 31, 0x259408u);
    ctx->pc = 0x259404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259400u;
    // 0x259404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB9E0u, 0x259400u, 0x259408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259408u;
label_259408:
    // 0x259408: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x259408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25940c: 0x0  nop
    ctx->pc = 0x25940cu;
    // NOP
    // 0x259410: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x259410u;
    {
        const bool branch_taken_0x259410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259410) {
            ctx->pc = 0x259414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259410u;
            // 0x259414: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259400;
        }
    }
    ctx->pc = 0x259418u;
label_259418:
    // 0x259418: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x259418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25941c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25941cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x259420: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x259420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x259424: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x259424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x259428: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x259428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x25942c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259430: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x259430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x259434: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259438: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x259438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x25943c: 0xc095b0a  jal         func_256C28
    ctx->pc = 0x25943Cu;
    SET_GPR_U32(ctx, 31, 0x259444u);
    ctx->pc = 0x259440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25943Cu;
    // 0x259440: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256C28u, 0x25943Cu, 0x259444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259444u;
label_259444:
    // 0x259444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x259448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25944c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25944cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x259450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x259454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x259454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259458: 0x3e00008  jr          $ra
    ctx->pc = 0x259458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259458u;
        // 0x25945c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259460u;
}
