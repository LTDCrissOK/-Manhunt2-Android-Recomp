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

// Function: sub_001E63A0
// Address: 0x1e63a0 - 0x1e63f0
void sub_001E63A0_0x1e63a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E63A0_0x1e63a0");
#endif

    switch (ctx->pc) {
        case 0x1e63bcu: goto label_1e63bc;
        case 0x1e63d0u: goto label_1e63d0;
        default: break;
    }

    ctx->pc = 0x1e63a0u;

    // 0x1e63a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e63a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e63a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e63a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e63a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e63a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e63ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e63acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e63b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e63b4: 0xc0798ac  jal         func_1E62B0
    ctx->pc = 0x1E63B4u;
    SET_GPR_U32(ctx, 31, 0x1E63BCu);
    ctx->pc = 0x1E63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63B4u;
    // 0x1e63b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E62B0u, 0x1E63B4u, 0x1E63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E63BCu;
    {
        const bool branch_taken_0x1e63bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e63bc) {
            ctx->pc = 0x1E63C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E63BCu;
            // 0x1e63c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E63D4u;
            goto label_1e63d4;
        }
    }
    ctx->pc = 0x1E63C4u;
    // 0x1e63c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e63c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63c8: 0xc0798c8  jal         func_1E6320
    ctx->pc = 0x1E63C8u;
    SET_GPR_U32(ctx, 31, 0x1E63D0u);
    ctx->pc = 0x1E63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63C8u;
    // 0x1e63cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6320u, 0x1E63C8u, 0x1E63D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63D0u;
label_1e63d0:
    // 0x1e63d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e63d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e63d4:
    // 0x1e63d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e63d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e63d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e63d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e63dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e63dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e63e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E63E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63E0u;
        // 0x1e63e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E63E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E63E8u;
    // 0x1e63e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e63e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e63ec: 0x0  nop
    ctx->pc = 0x1e63ecu;
    // NOP
    ctx->pc = 0x1e63f0u;
}
