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

// Function: sub_0035D318
// Address: 0x35d318 - 0x35d3a0
void sub_0035D318_0x35d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D318_0x35d318");
#endif

    switch (ctx->pc) {
        case 0x35d344u: goto label_35d344;
        case 0x35d350u: goto label_35d350;
        case 0x35d368u: goto label_35d368;
        case 0x35d374u: goto label_35d374;
        case 0x35d380u: goto label_35d380;
        default: break;
    }

    ctx->pc = 0x35d318u;

    // 0x35d318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d31c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35d320: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35d324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d328: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35d32c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d330: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35d334: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35d334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d338: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35d338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35d33c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x35D33Cu;
    SET_GPR_U32(ctx, 31, 0x35D344u);
    ctx->pc = 0x35D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D33Cu;
    // 0x35d340: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x35D33Cu, 0x35D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D344u;
label_35d344:
    // 0x35d344: 0x86120004  lh          $s2, 0x4($s0)
    ctx->pc = 0x35d344u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d348: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x35D348u;
    SET_GPR_U32(ctx, 31, 0x35D350u);
    ctx->pc = 0x35D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D348u;
    // 0x35d34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x35D348u, 0x35D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D350u;
label_35d350:
    // 0x35d350: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x35d350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d354: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x35d354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d358: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d35c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35d35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d360: 0xc0d747a  jal         func_35D1E8
    ctx->pc = 0x35D360u;
    SET_GPR_U32(ctx, 31, 0x35D368u);
    ctx->pc = 0x35D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D360u;
    // 0x35d364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1E8u, 0x35D360u, 0x35D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D368u;
label_35d368:
    // 0x35d368: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d36c: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35D36Cu;
    SET_GPR_U32(ctx, 31, 0x35D374u);
    ctx->pc = 0x35D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D36Cu;
    // 0x35d370: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35D36Cu, 0x35D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D374u;
label_35d374:
    // 0x35d374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d378: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35D378u;
    SET_GPR_U32(ctx, 31, 0x35D380u);
    ctx->pc = 0x35D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D378u;
    // 0x35d37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35D378u, 0x35D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D380u;
label_35d380:
    // 0x35d380: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x35d380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d388: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35d388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d38c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35d38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d390: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35d390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d394: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d398: 0x3e00008  jr          $ra
    ctx->pc = 0x35D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D398u;
        // 0x35d39c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D3A0u;
}
