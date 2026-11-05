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

// Function: sub_0029C7E0
// Address: 0x29c7e0 - 0x29c850
void sub_0029C7E0_0x29c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C7E0_0x29c7e0");
#endif

    switch (ctx->pc) {
        case 0x29c800u: goto label_29c800;
        case 0x29c80cu: goto label_29c80c;
        default: break;
    }

    ctx->pc = 0x29c7e0u;

    // 0x29c7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c7ec: 0x24900108  addiu       $s0, $a0, 0x108
    ctx->pc = 0x29c7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x29c7f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29c7f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29c7fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c800:
    // 0x29c800: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29c804: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C804u;
    SET_GPR_U32(ctx, 31, 0x29C80Cu);
    ctx->pc = 0x29C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C804u;
    // 0x29c808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C804u, 0x29C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C80Cu;
label_29c80c:
    // 0x29c80c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C810u;
    {
        const bool branch_taken_0x29c810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C810u;
        // 0x29c814: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c810) {
            ctx->pc = 0x29C824u;
            goto label_29c824;
        }
    }
    ctx->pc = 0x29C818u;
    // 0x29c818: 0x8e03fff4  lw          $v1, -0xC($s0)
    ctx->pc = 0x29c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x29c81c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C81Cu;
    {
        const bool branch_taken_0x29c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C81Cu;
        // 0x29c820: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c81c) {
            ctx->pc = 0x29C834u;
            goto label_29c834;
        }
    }
    ctx->pc = 0x29C824u;
label_29c824:
    // 0x29c824: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x29c824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x29c828: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29C828u;
    {
        const bool branch_taken_0x29c828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C828u;
        // 0x29c82c: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c828) {
            ctx->pc = 0x29C800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c800;
        }
    }
    ctx->pc = 0x29C830u;
    // 0x29c830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c834:
    // 0x29c834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c83c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c83cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c840: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29c844: 0x3e00008  jr          $ra
    ctx->pc = 0x29C844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C844u;
        // 0x29c848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C84Cu;
    // 0x29c84c: 0x0  nop
    ctx->pc = 0x29c84cu;
    // NOP
    ctx->pc = 0x29c850u;
}
