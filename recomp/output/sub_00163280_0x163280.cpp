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

// Function: sub_00163280
// Address: 0x163280 - 0x1632d8
void sub_00163280_0x163280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163280_0x163280");
#endif

    ctx->pc = 0x163280u;

    // 0x163280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163284: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x163284u;
    {
        const bool branch_taken_0x163284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163284u;
        // 0x163288: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163284) {
            ctx->pc = 0x1632BCu;
            goto label_1632bc;
        }
    }
    ctx->pc = 0x16328Cu;
    // 0x16328c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16328Cu;
    {
        const bool branch_taken_0x16328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16328Cu;
        // 0x163290: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16328c) {
            ctx->pc = 0x1632A4u;
            goto label_1632a4;
        }
    }
    ctx->pc = 0x163294u;
    // 0x163294: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x163294u;
    {
        const bool branch_taken_0x163294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163294u;
        // 0x163298: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163294) {
            ctx->pc = 0x1632C4u;
            goto label_1632c4;
        }
    }
    ctx->pc = 0x16329Cu;
    // 0x16329c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16329Cu;
    {
        const bool branch_taken_0x16329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16329c) {
            ctx->pc = 0x1632CCu;
            goto label_1632cc;
        }
    }
    ctx->pc = 0x1632A4u;
label_1632a4:
    // 0x1632a4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1632A4u;
    {
        const bool branch_taken_0x1632a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1632A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632A4u;
        // 0x1632a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632a4) {
            ctx->pc = 0x1632CCu;
            goto label_1632cc;
        }
    }
    ctx->pc = 0x1632ACu;
    // 0x1632ac: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1632ACu;
    {
        const bool branch_taken_0x1632ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1632B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632ACu;
        // 0x1632b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632ac) {
            ctx->pc = 0x1632CCu;
            goto label_1632cc;
        }
    }
    ctx->pc = 0x1632B4u;
    // 0x1632b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1632B4u;
    {
        const bool branch_taken_0x1632b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1632b4) {
            ctx->pc = 0x1632CCu;
            goto label_1632cc;
        }
    }
    ctx->pc = 0x1632BCu;
label_1632bc:
    // 0x1632bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1632BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1632C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632BCu;
        // 0x1632c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632C4u;
label_1632c4:
    // 0x1632c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1632C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1632C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632C4u;
        // 0x1632c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632CCu;
label_1632cc:
    // 0x1632cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1632CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632D4u;
    // 0x1632d4: 0x0  nop
    ctx->pc = 0x1632d4u;
    // NOP
    ctx->pc = 0x1632d8u;
}
