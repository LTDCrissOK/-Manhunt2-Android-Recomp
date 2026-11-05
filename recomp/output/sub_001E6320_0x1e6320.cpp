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

// Function: sub_001E6320
// Address: 0x1e6320 - 0x1e63a0
void sub_001E6320_0x1e6320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6320_0x1e6320");
#endif

    switch (ctx->pc) {
        case 0x1e6350u: goto label_1e6350;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e6364u: goto label_1e6364;
        default: break;
    }

    ctx->pc = 0x1e6320u;

    // 0x1e6320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e6328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e6328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e632c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6330: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e6330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e6334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6338: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e6338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e633c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6340: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E6340u;
    {
        const bool branch_taken_0x1e6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6340u;
        // 0x1e6344: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6340) {
            ctx->pc = 0x1E6380u;
            goto label_1e6380;
        }
    }
    ctx->pc = 0x1E6348u;
    // 0x1e6348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e634c: 0x0  nop
    ctx->pc = 0x1e634cu;
    // NOP
label_1e6350:
    // 0x1e6350: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E6350u;
    SET_GPR_U32(ctx, 31, 0x1E6358u);
    ctx->pc = 0x1E6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6350u;
    // 0x1e6354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E6350u, 0x1E6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6358u;
label_1e6358:
    // 0x1e6358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e6358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e635c: 0xc07a664  jal         func_1E9990
    ctx->pc = 0x1E635Cu;
    SET_GPR_U32(ctx, 31, 0x1E6364u);
    ctx->pc = 0x1E6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E635Cu;
    // 0x1e6360: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9990u, 0x1E635Cu, 0x1E6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6364u;
label_1e6364:
    // 0x1e6364: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6364u;
    {
        const bool branch_taken_0x1e6364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6364u;
        // 0x1e6368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6364) {
            ctx->pc = 0x1E6384u;
            goto label_1e6384;
        }
    }
    ctx->pc = 0x1E636Cu;
    // 0x1e636c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e6370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6374: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e6374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e6378: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E6378u;
    {
        const bool branch_taken_0x1e6378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6378u;
        // 0x1e637c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6378) {
            ctx->pc = 0x1E6350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6350;
        }
    }
    ctx->pc = 0x1E6380u;
label_1e6380:
    // 0x1e6380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6384:
    // 0x1e6384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e6384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e6388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e638c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e638cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e6390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e6394: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6394u;
        // 0x1e6398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E639Cu;
    // 0x1e639c: 0x0  nop
    ctx->pc = 0x1e639cu;
    // NOP
    ctx->pc = 0x1e63a0u;
}
