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

// Function: sub_0010B4E0
// Address: 0x10b4e0 - 0x10b548
void sub_0010B4E0_0x10b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B4E0_0x10b4e0");
#endif

    switch (ctx->pc) {
        case 0x10b4fcu: goto label_10b4fc;
        case 0x10b528u: goto label_10b528;
        default: break;
    }

    ctx->pc = 0x10b4e0u;

    // 0x10b4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b4e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b4ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b4f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b4f4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B4F4u;
    SET_GPR_U32(ctx, 31, 0x10B4FCu);
    ctx->pc = 0x10B4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B4F4u;
    // 0x10b4f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B4F4u, 0x10B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4FCu;
label_10b4fc:
    // 0x10b4fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b500: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b504: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B504u;
        // 0x10b508: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B530u;
            goto label_10b530;
        }
    }
    ctx->pc = 0x10B50Cu;
    // 0x10b50c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b510: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b514: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b518: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B518u;
    {
        const bool branch_taken_0x10b518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B518u;
        // 0x10b51c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b518) {
            ctx->pc = 0x10B534u;
            goto label_10b534;
        }
    }
    ctx->pc = 0x10B520u;
    // 0x10b520: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x10B520u;
    SET_GPR_U32(ctx, 31, 0x10B528u);
    ctx->pc = 0x10B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B520u;
    // 0x10b524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x10B520u, 0x10B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B528u;
label_10b528:
    // 0x10b528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B528u;
    {
        const bool branch_taken_0x10b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B528u;
        // 0x10b52c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b528) {
            ctx->pc = 0x10B534u;
            goto label_10b534;
        }
    }
    ctx->pc = 0x10B530u;
label_10b530:
    // 0x10b530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b534:
    // 0x10b534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b53c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b540: 0x3e00008  jr          $ra
    ctx->pc = 0x10B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B540u;
        // 0x10b544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B548u;
}
