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

// Function: sub_0016C2D0
// Address: 0x16c2d0 - 0x16c370
void sub_0016C2D0_0x16c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C2D0_0x16c2d0");
#endif

    switch (ctx->pc) {
        case 0x16c308u: goto label_16c308;
        case 0x16c310u: goto label_16c310;
        case 0x16c32cu: goto label_16c32c;
        case 0x16c33cu: goto label_16c33c;
        default: break;
    }

    ctx->pc = 0x16c2d0u;

    // 0x16c2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16c2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c2dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16c2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16c2e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16c2e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16c2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c2ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16c2f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c2f4: 0x92720022  lbu         $s2, 0x22($s3)
    ctx->pc = 0x16c2f4u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x16c2f8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x16C2F8u;
    {
        const bool branch_taken_0x16c2f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C2F8u;
        // 0x16c2fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c2f8) {
            ctx->pc = 0x16C350u;
            goto label_16c350;
        }
    }
    ctx->pc = 0x16C300u;
    // 0x16c300: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x16c300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c308:
    // 0x16c308: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x16C308u;
    SET_GPR_U32(ctx, 31, 0x16C310u);
    ctx->pc = 0x16C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C308u;
    // 0x16c30c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x16C308u, 0x16C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C310u;
label_16c310:
    // 0x16c310: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x16C310u;
    {
        const bool branch_taken_0x16c310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c310) {
            ctx->pc = 0x16C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C310u;
            // 0x16c314: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C340u;
            goto label_16c340;
        }
    }
    ctx->pc = 0x16C318u;
    // 0x16c318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16c318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c31c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C31Cu;
    {
        const bool branch_taken_0x16c31c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C31Cu;
        // 0x16c320: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c31c) {
            ctx->pc = 0x16C340u;
            goto label_16c340;
        }
    }
    ctx->pc = 0x16C324u;
    // 0x16c324: 0xc05b08a  jal         func_16C228
    ctx->pc = 0x16C324u;
    SET_GPR_U32(ctx, 31, 0x16C32Cu);
    ctx->pc = 0x16C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C324u;
    // 0x16c328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C228u, 0x16C324u, 0x16C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C32Cu;
label_16c32c:
    // 0x16c32c: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C32Cu;
    {
        const bool branch_taken_0x16c32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x16C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C32Cu;
        // 0x16c330: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c32c) {
            ctx->pc = 0x16C33Cu;
            goto label_16c33c;
        }
    }
    ctx->pc = 0x16C334u;
    // 0x16c334: 0xc05b0a4  jal         func_16C290
    ctx->pc = 0x16C334u;
    SET_GPR_U32(ctx, 31, 0x16C33Cu);
    ctx->pc = 0x16C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C334u;
    // 0x16c338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C290u, 0x16C334u, 0x16C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C33Cu;
label_16c33c:
    // 0x16c33c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16c340:
    // 0x16c340: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c340u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c344: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x16c344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x16c348: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x16C348u;
    {
        const bool branch_taken_0x16c348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16c348) {
            ctx->pc = 0x16C34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C348u;
            // 0x16c34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c308;
        }
    }
    ctx->pc = 0x16C350u;
label_16c350:
    // 0x16c350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c35c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16c35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16c360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16c364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16c368: 0x3e00008  jr          $ra
    ctx->pc = 0x16C368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C368u;
        // 0x16c36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C370u;
}
