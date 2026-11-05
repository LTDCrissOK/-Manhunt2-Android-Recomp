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

// Function: sub_0014B488
// Address: 0x14b488 - 0x14b4d8
void sub_0014B488_0x14b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B488_0x14b488");
#endif

    switch (ctx->pc) {
        case 0x14b4c8u: goto label_14b4c8;
        default: break;
    }

    ctx->pc = 0x14b488u;

    // 0x14b488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b48c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14b48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b494: 0x8cc2058c  lw          $v0, 0x58C($a2)
    ctx->pc = 0x14b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1420)));
    // 0x14b498: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B498u;
    {
        const bool branch_taken_0x14b498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B498u;
        // 0x14b49c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b498) {
            ctx->pc = 0x14B4C8u;
            goto label_14b4c8;
        }
    }
    ctx->pc = 0x14B4A0u;
    // 0x14b4a0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x14b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14b4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b4a8: 0xacc2058c  sw          $v0, 0x58C($a2)
    ctx->pc = 0x14b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1420), GPR_U32(ctx, 2));
    // 0x14b4ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b4b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b4b4: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x14b4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x14b4b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14b4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14b4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b4c0: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x14B4C0u;
    SET_GPR_U32(ctx, 31, 0x14B4C8u);
    ctx->pc = 0x14B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4C0u;
    // 0x14b4c4: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x14B4C0u, 0x14B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4C8u;
label_14b4c8:
    // 0x14b4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4CCu;
        // 0x14b4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4D4u;
    // 0x14b4d4: 0x0  nop
    ctx->pc = 0x14b4d4u;
    // NOP
    ctx->pc = 0x14b4d8u;
}
