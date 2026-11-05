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

// Function: sub_00372BE0
// Address: 0x372be0 - 0x372c40
void sub_00372BE0_0x372be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372BE0_0x372be0");
#endif

    switch (ctx->pc) {
        case 0x372c14u: goto label_372c14;
        case 0x372c20u: goto label_372c20;
        default: break;
    }

    ctx->pc = 0x372be0u;

    // 0x372be0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x372be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x372be4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372be8: 0x8c45ccc8  lw          $a1, -0x3338($v0)
    ctx->pc = 0x372be8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FCCC8u));
    // 0x372bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372bf0: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x372BF0u;
    {
        const bool branch_taken_0x372bf0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x372BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372BF0u;
        // 0x372bf4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372bf0) {
            ctx->pc = 0x372C28u;
            goto label_372c28;
        }
    }
    ctx->pc = 0x372BF8u;
    // 0x372bf8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x372bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x372bfc: 0x8e02cccc  lw          $v0, -0x3334($s0)
    ctx->pc = 0x372bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCCCCu));
    // 0x372c00: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372C00u;
    {
        const bool branch_taken_0x372c00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x372C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C00u;
        // 0x372c04: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c00) {
            ctx->pc = 0x372C28u;
            goto label_372c28;
        }
    }
    ctx->pc = 0x372C08u;
    // 0x372c08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x372c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372c0c: 0xc0dc5cc  jal         func_371730
    ctx->pc = 0x372C0Cu;
    SET_GPR_U32(ctx, 31, 0x372C14u);
    ctx->pc = 0x372C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C0Cu;
    // 0x372c10: 0xac40ccd0  sw          $zero, -0x3330($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371730u, 0x372C0Cu, 0x372C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C14u;
label_372c14:
    // 0x372c14: 0x8e05cccc  lw          $a1, -0x3334($s0)
    ctx->pc = 0x372c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954188)));
    // 0x372c18: 0xc0dc5cc  jal         func_371730
    ctx->pc = 0x372C18u;
    SET_GPR_U32(ctx, 31, 0x372C20u);
    ctx->pc = 0x372C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372C18u;
    // 0x372c1c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371730u, 0x372C18u, 0x372C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372C20u;
label_372c20:
    // 0x372c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x372C20u;
    {
        const bool branch_taken_0x372c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x372C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C20u;
        // 0x372c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372c20) {
            ctx->pc = 0x372C2Cu;
            goto label_372c2c;
        }
    }
    ctx->pc = 0x372C28u;
label_372c28:
    // 0x372c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372c2c:
    // 0x372c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372c34: 0x3e00008  jr          $ra
    ctx->pc = 0x372C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C34u;
        // 0x372c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C3Cu;
    // 0x372c3c: 0x0  nop
    ctx->pc = 0x372c3cu;
    // NOP
    ctx->pc = 0x372c40u;
}
