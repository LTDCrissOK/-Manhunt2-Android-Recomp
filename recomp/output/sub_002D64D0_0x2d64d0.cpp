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

// Function: sub_002D64D0
// Address: 0x2d64d0 - 0x2d6540
void sub_002D64D0_0x2d64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D64D0_0x2d64d0");
#endif

    switch (ctx->pc) {
        case 0x2d64fcu: goto label_2d64fc;
        case 0x2d6514u: goto label_2d6514;
        default: break;
    }

    ctx->pc = 0x2d64d0u;

    // 0x2d64d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d64d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d64d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d64d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d64d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d64dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d64dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d64e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d64e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d64e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d64e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d64ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d64ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d64f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d64f4: 0xc0b590c  jal         func_2D6430
    ctx->pc = 0x2D64F4u;
    SET_GPR_U32(ctx, 31, 0x2D64FCu);
    ctx->pc = 0x2D64F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64F4u;
    // 0x2d64f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6430u, 0x2D64F4u, 0x2D64FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64FCu;
label_2d64fc:
    // 0x2d64fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D64FCu;
    {
        const bool branch_taken_0x2d64fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d64fc) {
            ctx->pc = 0x2D6500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D64FCu;
            // 0x2d6500: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6520u;
            goto label_2d6520;
        }
    }
    ctx->pc = 0x2D6504u;
    // 0x2d6504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d6508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d650c: 0xc0b5920  jal         func_2D6480
    ctx->pc = 0x2D650Cu;
    SET_GPR_U32(ctx, 31, 0x2D6514u);
    ctx->pc = 0x2D6510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D650Cu;
    // 0x2d6510: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6480u, 0x2D650Cu, 0x2D6514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6514u;
label_2d6514:
    // 0x2d6514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6514u;
    {
        const bool branch_taken_0x2d6514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6514u;
        // 0x2d6518: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6514) {
            ctx->pc = 0x2D6524u;
            goto label_2d6524;
        }
    }
    ctx->pc = 0x2D651Cu;
    // 0x2d651c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d651cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6520:
    // 0x2d6520: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d6520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d6524:
    // 0x2d6524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d652c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d652cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6530: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6538: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6538u;
        // 0x2d653c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6540u;
}
