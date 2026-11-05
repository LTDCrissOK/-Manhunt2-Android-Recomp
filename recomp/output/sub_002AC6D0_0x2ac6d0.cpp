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

// Function: sub_002AC6D0
// Address: 0x2ac6d0 - 0x2ac780
void sub_002AC6D0_0x2ac6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC6D0_0x2ac6d0");
#endif

    switch (ctx->pc) {
        case 0x2ac6f4u: goto label_2ac6f4;
        case 0x2ac720u: goto label_2ac720;
        case 0x2ac730u: goto label_2ac730;
        case 0x2ac748u: goto label_2ac748;
        case 0x2ac758u: goto label_2ac758;
        default: break;
    }

    ctx->pc = 0x2ac6d0u;

    // 0x2ac6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac6d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ac6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ac6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac6e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ac6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ac6e4: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2ac6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2ac6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ac6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ac6ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ac6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ac6f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ac6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2ac6f4:
    // 0x2ac6f4: 0x241300b0  addiu       $s3, $zero, 0xB0
    ctx->pc = 0x2ac6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2ac6f8: 0x26922508  addiu       $s2, $s4, 0x2508
    ctx->pc = 0x2ac6f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 9480));
    // 0x2ac6fc: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x2ac6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ac700: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ac704: 0x904300ec  lbu         $v1, 0xEC($v0)
    ctx->pc = 0x2ac704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2ac708: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AC708u;
    {
        const bool branch_taken_0x2ac708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC708u;
        // 0x2ac70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac708) {
            ctx->pc = 0x2AC760u;
            goto label_2ac760;
        }
    }
    ctx->pc = 0x2AC710u;
    // 0x2ac710: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ac710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2ac714: 0x2451dc70  addiu       $s1, $v0, -0x2390
    ctx->pc = 0x2ac714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958192));
    // 0x2ac718: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2AC718u;
    SET_GPR_U32(ctx, 31, 0x2AC720u);
    ctx->pc = 0x2AC71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC718u;
    // 0x2ac71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2AC718u, 0x2AC720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC720u;
label_2ac720:
    // 0x2ac720: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC720u;
    {
        const bool branch_taken_0x2ac720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC720u;
        // 0x2ac724: 0x3c040047  lui         $a0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac720) {
            ctx->pc = 0x2AC740u;
            goto label_2ac740;
        }
    }
    ctx->pc = 0x2AC728u;
    // 0x2ac728: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2AC728u;
    SET_GPR_U32(ctx, 31, 0x2AC730u);
    ctx->pc = 0x2AC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC728u;
    // 0x2ac72c: 0x2484dc80  addiu       $a0, $a0, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2AC728u, 0x2AC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC730u;
label_2ac730:
    // 0x2ac730: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x2ac730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac734: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x2ac734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2ac738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AC738u;
    {
        const bool branch_taken_0x2ac738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC738u;
        // 0x2ac73c: 0x904200ec  lbu         $v0, 0xEC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac738) {
            ctx->pc = 0x2AC760u;
            goto label_2ac760;
        }
    }
    ctx->pc = 0x2AC740u;
label_2ac740:
    // 0x2ac740: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2AC740u;
    SET_GPR_U32(ctx, 31, 0x2AC748u);
    ctx->pc = 0x2AC744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC740u;
    // 0x2ac744: 0x2484dc80  addiu       $a0, $a0, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2AC740u, 0x2AC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC748u;
label_2ac748:
    // 0x2ac748: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC748u;
    {
        const bool branch_taken_0x2ac748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ac748) {
            ctx->pc = 0x2AC74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC748u;
            // 0x2ac74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC760u;
            goto label_2ac760;
        }
    }
    ctx->pc = 0x2AC750u;
    // 0x2ac750: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2AC750u;
    SET_GPR_U32(ctx, 31, 0x2AC758u);
    ctx->pc = 0x2AC754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC750u;
    // 0x2ac754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2AC750u, 0x2AC758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC758u;
label_2ac758:
    // 0x2ac758: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2AC758u;
    {
        const bool branch_taken_0x2ac758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC758u;
        // 0x2ac75c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac758) {
            ctx->pc = 0x2AC6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac6f4;
        }
    }
    ctx->pc = 0x2AC760u;
label_2ac760:
    // 0x2ac760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ac764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ac768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac76c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ac76cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ac770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ac770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac774: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ac774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ac778: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC778u;
        // 0x2ac77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC780u;
}
