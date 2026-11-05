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

// Function: sub_00120898
// Address: 0x120898 - 0x1208f8
void sub_00120898_0x120898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120898_0x120898");
#endif

    switch (ctx->pc) {
        case 0x1208b4u: goto label_1208b4;
        case 0x1208bcu: goto label_1208bc;
        case 0x1208dcu: goto label_1208dc;
        default: break;
    }

    ctx->pc = 0x120898u;

    // 0x120898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12089c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1208a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1208a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1208a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1208a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1208a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1208ac: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1208ACu;
    SET_GPR_U32(ctx, 31, 0x1208B4u);
    ctx->pc = 0x1208B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208ACu;
    // 0x1208b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1208ACu, 0x1208B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208B4u;
label_1208b4:
    // 0x1208b4: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x1208B4u;
    SET_GPR_U32(ctx, 31, 0x1208BCu);
    ctx->pc = 0x1208B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208B4u;
    // 0x1208b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x1208B4u, 0x1208BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208BCu;
label_1208bc:
    // 0x1208bc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1208BCu;
    {
        const bool branch_taken_0x1208bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208BCu;
        // 0x1208c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208bc) {
            ctx->pc = 0x1208CCu;
            goto label_1208cc;
        }
    }
    ctx->pc = 0x1208C4u;
    // 0x1208c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1208C4u;
    {
        const bool branch_taken_0x1208c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1208C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208C4u;
        // 0x1208c8: 0x26317530  addiu       $s1, $s1, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1208c4) {
            ctx->pc = 0x1208D0u;
            goto label_1208d0;
        }
    }
    ctx->pc = 0x1208CCu;
label_1208cc:
    // 0x1208cc: 0x263107d0  addiu       $s1, $s1, 0x7D0
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2000));
label_1208d0:
    // 0x1208d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1208d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208d4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1208D4u;
    SET_GPR_U32(ctx, 31, 0x1208DCu);
    ctx->pc = 0x1208D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1208D4u;
    // 0x1208d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1208D4u, 0x1208DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1208DCu;
label_1208dc:
    // 0x1208dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1208dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1208e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1208e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1208e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1208e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1208e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1208e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1208ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1208ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1208F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1208ECu;
        // 0x1208f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1208ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1208F4u;
    // 0x1208f4: 0x0  nop
    ctx->pc = 0x1208f4u;
    // NOP
    ctx->pc = 0x1208f8u;
}
