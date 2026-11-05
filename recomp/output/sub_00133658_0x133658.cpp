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

// Function: sub_00133658
// Address: 0x133658 - 0x133698
void sub_00133658_0x133658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133658_0x133658");
#endif

    switch (ctx->pc) {
        case 0x13366cu: goto label_13366c;
        case 0x133684u: goto label_133684;
        default: break;
    }

    ctx->pc = 0x133658u;

    // 0x133658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13365c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133664: 0xc04b378  jal         func_12CDE0
    ctx->pc = 0x133664u;
    SET_GPR_U32(ctx, 31, 0x13366Cu);
    ctx->pc = 0x133668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133664u;
    // 0x133668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CDE0u, 0x133664u, 0x13366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13366Cu;
label_13366c:
    // 0x13366c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x13366cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x133670: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x133670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x133674: 0x24630540  addiu       $v1, $v1, 0x540
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
    // 0x133678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13367c: 0xc04ce08  jal         func_133820
    ctx->pc = 0x13367Cu;
    SET_GPR_U32(ctx, 31, 0x133684u);
    ctx->pc = 0x133680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13367Cu;
    // 0x133680: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133820u, 0x13367Cu, 0x133684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133684u;
label_133684:
    // 0x133684: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133688: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13368c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13368cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133690: 0x3e00008  jr          $ra
    ctx->pc = 0x133690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133690u;
        // 0x133694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133698u;
}
