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

// Function: sub_00283078
// Address: 0x283078 - 0x2830c0
void sub_00283078_0x283078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283078_0x283078");
#endif

    switch (ctx->pc) {
        case 0x2830acu: goto label_2830ac;
        default: break;
    }

    ctx->pc = 0x283078u;

    // 0x283078: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x283078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x28307c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28307cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x283080: 0x8c4321e8  lw          $v1, 0x21E8($v0)
    ctx->pc = 0x283080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B21E8u));
    // 0x283084: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x283084u;
    {
        const bool branch_taken_0x283084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283084u;
        // 0x283088: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283084) {
            ctx->pc = 0x28309Cu;
            goto label_28309c;
        }
    }
    ctx->pc = 0x28308Cu;
    // 0x28308c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x283090: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x283090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD64u));
    // 0x283094: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x283094u;
    {
        const bool branch_taken_0x283094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283094) {
            ctx->pc = 0x2830A4u;
            goto label_2830a4;
        }
    }
    ctx->pc = 0x28309Cu;
label_28309c:
    // 0x28309c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28309Cu;
    {
        const bool branch_taken_0x28309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28309Cu;
        // 0x2830a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28309c) {
            ctx->pc = 0x2830B0u;
            goto label_2830b0;
        }
    }
    ctx->pc = 0x2830A4u;
label_2830a4:
    // 0x2830a4: 0xc0a21fc  jal         func_2887F0
    ctx->pc = 0x2830A4u;
    SET_GPR_U32(ctx, 31, 0x2830ACu);
    ctx->pc = 0x2887F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2887F0u, 0x2830A4u, 0x2830ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2830ACu;
label_2830ac:
    // 0x2830ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2830acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2830b0:
    // 0x2830b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2830b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2830b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2830B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2830B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830B4u;
        // 0x2830b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2830B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830BCu;
    // 0x2830bc: 0x0  nop
    ctx->pc = 0x2830bcu;
    // NOP
    ctx->pc = 0x2830c0u;
}
