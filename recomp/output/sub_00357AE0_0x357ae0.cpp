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

// Function: sub_00357AE0
// Address: 0x357ae0 - 0x357b18
void sub_00357AE0_0x357ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357AE0_0x357ae0");
#endif

    ctx->pc = 0x357ae0u;

    // 0x357ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357ae4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357AE4u;
    {
        const bool branch_taken_0x357ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x357AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AE4u;
        // 0x357ae8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ae4) {
            ctx->pc = 0x357AFCu;
            goto label_357afc;
        }
    }
    ctx->pc = 0x357AECu;
    // 0x357aec: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357AECu;
    {
        const bool branch_taken_0x357aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x357AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AECu;
        // 0x357af0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357aec) {
            ctx->pc = 0x357B04u;
            goto label_357b04;
        }
    }
    ctx->pc = 0x357AF4u;
    // 0x357af4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x357AF4u;
    {
        const bool branch_taken_0x357af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357af4) {
            ctx->pc = 0x357B0Cu;
            goto label_357b0c;
        }
    }
    ctx->pc = 0x357AFCu;
label_357afc:
    // 0x357afc: 0x3e00008  jr          $ra
    ctx->pc = 0x357AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AFCu;
        // 0x357b00: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B04u;
label_357b04:
    // 0x357b04: 0x3e00008  jr          $ra
    ctx->pc = 0x357B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B04u;
        // 0x357b08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B0Cu;
label_357b0c:
    // 0x357b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x357B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357B14u;
    // 0x357b14: 0x0  nop
    ctx->pc = 0x357b14u;
    // NOP
    ctx->pc = 0x357b18u;
}
