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

// Function: sub_001238F0
// Address: 0x1238f0 - 0x123960
void sub_001238F0_0x1238f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001238F0_0x1238f0");
#endif

    switch (ctx->pc) {
        case 0x123920u: goto label_123920;
        case 0x123938u: goto label_123938;
        default: break;
    }

    ctx->pc = 0x1238f0u;

    // 0x1238f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1238f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1238f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1238f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1238f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1238fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1238fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123900: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123908: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12390c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12390cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123910: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x123914: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x123914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123918: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123918u;
    SET_GPR_U32(ctx, 31, 0x123920u);
    ctx->pc = 0x12391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123918u;
    // 0x12391c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123918u, 0x123920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123920u;
label_123920:
    // 0x123920: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123920u;
    {
        const bool branch_taken_0x123920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123920u;
        // 0x123924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123920) {
            ctx->pc = 0x123940u;
            goto label_123940;
        }
    }
    ctx->pc = 0x123928u;
    // 0x123928: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12392c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123930: 0xc042bbc  jal         func_10AEF0
    ctx->pc = 0x123930u;
    SET_GPR_U32(ctx, 31, 0x123938u);
    ctx->pc = 0x123934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123930u;
    // 0x123934: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AEF0u, 0x123930u, 0x123938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123938u;
label_123938:
    // 0x123938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123938u;
    {
        const bool branch_taken_0x123938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123938u;
        // 0x12393c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123938) {
            ctx->pc = 0x123944u;
            goto label_123944;
        }
    }
    ctx->pc = 0x123940u;
label_123940:
    // 0x123940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123944:
    // 0x123944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12394c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12394cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123950: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123958: 0x3e00008  jr          $ra
    ctx->pc = 0x123958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123958u;
        // 0x12395c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123960u;
}
