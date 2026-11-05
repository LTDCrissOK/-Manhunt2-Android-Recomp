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

// Function: sub_001158C8
// Address: 0x1158c8 - 0x115908
void sub_001158C8_0x1158c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001158C8_0x1158c8");
#endif

    switch (ctx->pc) {
        case 0x1158e8u: goto label_1158e8;
        default: break;
    }

    ctx->pc = 0x1158c8u;

    // 0x1158c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1158c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1158cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1158ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1158d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1158d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1158d4: 0x90820040  lbu         $v0, 0x40($a0)
    ctx->pc = 0x1158d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1158d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1158D8u;
    {
        const bool branch_taken_0x1158d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158D8u;
        // 0x1158dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158d8) {
            ctx->pc = 0x1158F4u;
            goto label_1158f4;
        }
    }
    ctx->pc = 0x1158E0u;
    // 0x1158e0: 0xc0456e4  jal         func_115B90
    ctx->pc = 0x1158E0u;
    SET_GPR_U32(ctx, 31, 0x1158E8u);
    ctx->pc = 0x1158E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1158E0u;
    // 0x1158e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B90u, 0x1158E0u, 0x1158E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1158E8u;
label_1158e8:
    // 0x1158e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1158e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1158ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1158ECu;
    {
        const bool branch_taken_0x1158ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1158F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158ECu;
        // 0x1158f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158ec) {
            ctx->pc = 0x1158F8u;
            goto label_1158f8;
        }
    }
    ctx->pc = 0x1158F4u;
label_1158f4:
    // 0x1158f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1158f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1158f8:
    // 0x1158f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1158f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1158fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115900: 0x3e00008  jr          $ra
    ctx->pc = 0x115900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115900u;
        // 0x115904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115908u;
}
