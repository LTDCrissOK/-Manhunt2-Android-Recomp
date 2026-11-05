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

// Function: sub_00236B68
// Address: 0x236b68 - 0x236bc0
void sub_00236B68_0x236b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B68_0x236b68");
#endif

    switch (ctx->pc) {
        case 0x236b78u: goto label_236b78;
        case 0x236ba0u: goto label_236ba0;
        default: break;
    }

    ctx->pc = 0x236b68u;

    // 0x236b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236b70: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x236B70u;
    SET_GPR_U32(ctx, 31, 0x236B78u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x236B70u, 0x236B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B78u;
label_236b78:
    // 0x236b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x236B7Cu;
    {
        const bool branch_taken_0x236b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B7Cu;
        // 0x236b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b7c) {
            ctx->pc = 0x236BB0u;
            goto label_236bb0;
        }
    }
    ctx->pc = 0x236B84u;
    // 0x236b84: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x236b88: 0x30427001  andi        $v0, $v0, 0x7001
    ctx->pc = 0x236b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)28673);
    // 0x236b8c: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x236b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
    // 0x236b90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x236B90u;
    {
        const bool branch_taken_0x236b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236b90) {
            ctx->pc = 0x236B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236B90u;
            // 0x236b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236BB0u;
            goto label_236bb0;
        }
    }
    ctx->pc = 0x236B98u;
    // 0x236b98: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x236B98u;
    SET_GPR_U32(ctx, 31, 0x236BA0u);
    ctx->pc = 0x236B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B98u;
    // 0x236b9c: 0x8c640274  lw          $a0, 0x274($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236B98u, 0x236BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236BA0u;
label_236ba0:
    // 0x236ba0: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x236ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x236ba4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x236BA4u;
    {
        const bool branch_taken_0x236ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BA4u;
        // 0x236ba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236ba4) {
            ctx->pc = 0x236BB0u;
            goto label_236bb0;
        }
    }
    ctx->pc = 0x236BACu;
    // 0x236bac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236bb0:
    // 0x236bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x236BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236BB4u;
        // 0x236bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236BBCu;
    // 0x236bbc: 0x0  nop
    ctx->pc = 0x236bbcu;
    // NOP
    ctx->pc = 0x236bc0u;
}
