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

// Function: entry_00155a68
// Address: 0x155a68 - 0x155aaa
void entry_00155a68_0x155a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a68_0x155a68");
#endif

    switch (ctx->pc) {
        case 0x155aa0u: goto label_155aa0;
        default: break;
    }

    ctx->pc = 0x155a68u;

    // 0x155a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155a70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x155a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x155a74: 0x8c830108  lw          $v1, 0x108($a0)
    ctx->pc = 0x155a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x155a78: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x155a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x155a7c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x155a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x155a80: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x155a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x155a84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155A84u;
    {
        const bool branch_taken_0x155a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A84u;
        // 0x155a88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a84) {
            ctx->pc = 0x155A94u;
            goto label_155a94;
        }
    }
    ctx->pc = 0x155A8Cu;
    // 0x155a8c: 0x8c62107c  lw          $v0, 0x107C($v1)
    ctx->pc = 0x155a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4220)));
    // 0x155a90: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x155a90u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_155a94:
    // 0x155a94: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x155a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155a98: 0xc04e450  jal         func_139140
    ctx->pc = 0x155A98u;
    SET_GPR_U32(ctx, 31, 0x155AA0u);
    ctx->pc = 0x155A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A98u;
    // 0x155a9c: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139140u, 0x155A98u, 0x155AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155AA0u;
label_155aa0:
    // 0x155aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x155AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155AA4u;
        // 0x155aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155AACu;
}
