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

// Function: sub_00246BA0
// Address: 0x246ba0 - 0x246be0
void sub_00246BA0_0x246ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246BA0_0x246ba0");
#endif

    switch (ctx->pc) {
        case 0x246bd0u: goto label_246bd0;
        default: break;
    }

    ctx->pc = 0x246ba0u;

    // 0x246ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246ba4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x246ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246bac: 0x9082047d  lbu         $v0, 0x47D($a0)
    ctx->pc = 0x246bacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1149)));
    // 0x246bb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x246BB0u;
    {
        const bool branch_taken_0x246bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BB0u;
        // 0x246bb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bb0) {
            ctx->pc = 0x246BD4u;
            goto label_246bd4;
        }
    }
    ctx->pc = 0x246BB8u;
    // 0x246bb8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x246bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x246bbc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x246bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x246bc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x246BC0u;
    {
        const bool branch_taken_0x246bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246bc0) {
            ctx->pc = 0x246BD4u;
            goto label_246bd4;
        }
    }
    ctx->pc = 0x246BC8u;
    // 0x246bc8: 0xc08dc16  jal         func_237058
    ctx->pc = 0x246BC8u;
    SET_GPR_U32(ctx, 31, 0x246BD0u);
    ctx->pc = 0x246BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BC8u;
    // 0x246bcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x246BC8u, 0x246BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BD0u;
label_246bd0:
    // 0x246bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246bd4:
    // 0x246bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x246BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD4u;
        // 0x246bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246BDCu;
    // 0x246bdc: 0x0  nop
    ctx->pc = 0x246bdcu;
    // NOP
    ctx->pc = 0x246be0u;
}
