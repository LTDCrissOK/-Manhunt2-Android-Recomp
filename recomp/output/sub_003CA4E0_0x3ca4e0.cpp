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

// Function: sub_003CA4E0
// Address: 0x3ca4e0 - 0x3ca548
void sub_003CA4E0_0x3ca4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA4E0_0x3ca4e0");
#endif

    switch (ctx->pc) {
        case 0x3ca510u: goto label_3ca510;
        case 0x3ca518u: goto label_3ca518;
        case 0x3ca530u: goto label_3ca530;
        default: break;
    }

    ctx->pc = 0x3ca4e0u;

    // 0x3ca4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ca4e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca4e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ca4ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca4f4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca4f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca4fc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca4fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca500: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA500u;
    {
        const bool branch_taken_0x3ca500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca500) {
            ctx->pc = 0x3CA510u;
            goto label_3ca510;
        }
    }
    ctx->pc = 0x3CA508u;
    // 0x3ca508: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA508u;
    SET_GPR_U32(ctx, 31, 0x3CA510u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA508u, 0x3CA510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA510u;
label_3ca510:
    // 0x3ca510: 0xc0f25c0  jal         func_3C9700
    ctx->pc = 0x3CA510u;
    SET_GPR_U32(ctx, 31, 0x3CA518u);
    ctx->pc = 0x3CA514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA510u;
    // 0x3ca514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9700u, 0x3CA510u, 0x3CA518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA518u;
label_3ca518:
    // 0x3ca518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca51c: 0xf  sync
    ctx->pc = 0x3ca51cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3ca520: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA520u;
    {
        const bool branch_taken_0x3ca520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA520u;
        // 0x3ca524: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca520) {
            ctx->pc = 0x3CA534u;
            goto label_3ca534;
        }
    }
    ctx->pc = 0x3CA528u;
    // 0x3ca528: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CA528u;
    SET_GPR_U32(ctx, 31, 0x3CA530u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CA528u, 0x3CA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA530u;
label_3ca530:
    // 0x3ca530: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca534:
    // 0x3ca534: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca538: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca540: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA540u;
        // 0x3ca544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA548u;
}
