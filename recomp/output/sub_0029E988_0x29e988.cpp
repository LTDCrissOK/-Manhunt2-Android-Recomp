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

// Function: sub_0029E988
// Address: 0x29e988 - 0x29ea08
void sub_0029E988_0x29e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E988_0x29e988");
#endif

    switch (ctx->pc) {
        case 0x29e9acu: goto label_29e9ac;
        case 0x29e9b8u: goto label_29e9b8;
        case 0x29e9c4u: goto label_29e9c4;
        case 0x29e9d0u: goto label_29e9d0;
        case 0x29e9e0u: goto label_29e9e0;
        case 0x29e9e8u: goto label_29e9e8;
        case 0x29e9f4u: goto label_29e9f4;
        default: break;
    }

    ctx->pc = 0x29e988u;

    // 0x29e988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e98c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29e990: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29e994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29e994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e99c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e9a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9a4: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x29E9A4u;
    SET_GPR_U32(ctx, 31, 0x29E9ACu);
    ctx->pc = 0x29E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9A4u;
    // 0x29e9a8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x29E9A4u, 0x29E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9ACu;
label_29e9ac:
    // 0x29e9ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29E9ACu;
    {
        const bool branch_taken_0x29e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9ACu;
        // 0x29e9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9ac) {
            ctx->pc = 0x29E9C8u;
            goto label_29e9c8;
        }
    }
    ctx->pc = 0x29E9B4u;
    // 0x29e9b4: 0x0  nop
    ctx->pc = 0x29e9b4u;
    // NOP
label_29e9b8:
    // 0x29e9b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29e9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9bc: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x29E9BCu;
    SET_GPR_U32(ctx, 31, 0x29E9C4u);
    ctx->pc = 0x29E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9BCu;
    // 0x29e9c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x29E9BCu, 0x29E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9C4u;
label_29e9c4:
    // 0x29e9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e9c8:
    // 0x29e9c8: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x29E9C8u;
    SET_GPR_U32(ctx, 31, 0x29E9D0u);
    ctx->pc = 0x29E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9C8u;
    // 0x29e9cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x29E9C8u, 0x29E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9D0u;
label_29e9d0:
    // 0x29e9d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29E9D0u;
    {
        const bool branch_taken_0x29e9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9D0u;
        // 0x29e9d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9d0) {
            ctx->pc = 0x29E9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e9b8;
        }
    }
    ctx->pc = 0x29E9D8u;
    // 0x29e9d8: 0xc0a7cb8  jal         func_29F2E0
    ctx->pc = 0x29E9D8u;
    SET_GPR_U32(ctx, 31, 0x29E9E0u);
    ctx->pc = 0x29E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9D8u;
    // 0x29e9dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F2E0u, 0x29E9D8u, 0x29E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9E0u;
label_29e9e0:
    // 0x29e9e0: 0xc0a7a82  jal         func_29EA08
    ctx->pc = 0x29E9E0u;
    SET_GPR_U32(ctx, 31, 0x29E9E8u);
    ctx->pc = 0x29E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9E0u;
    // 0x29e9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA08u, 0x29E9E0u, 0x29E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9E8u;
label_29e9e8:
    // 0x29e9e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9ec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29E9ECu;
    SET_GPR_U32(ctx, 31, 0x29E9F4u);
    ctx->pc = 0x29E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E9ECu;
    // 0x29e9f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29E9ECu, 0x29E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E9F4u;
label_29e9f4:
    // 0x29e9f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29e9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e9f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29e9f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA00u;
        // 0x29ea04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EA08u;
}
