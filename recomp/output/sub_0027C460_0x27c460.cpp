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

// Function: sub_0027C460
// Address: 0x27c460 - 0x27c500
void sub_0027C460_0x27c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C460_0x27c460");
#endif

    switch (ctx->pc) {
        case 0x27c498u: goto label_27c498;
        case 0x27c4b8u: goto label_27c4b8;
        default: break;
    }

    ctx->pc = 0x27c460u;

    // 0x27c460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c468: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c470: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27c474: 0x8e020700  lw          $v0, 0x700($s0)
    ctx->pc = 0x27c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1792)));
    // 0x27c478: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x27C478u;
    {
        const bool branch_taken_0x27c478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c478) {
            ctx->pc = 0x27C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C478u;
            // 0x27c47c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C4ECu;
            goto label_27c4ec;
        }
    }
    ctx->pc = 0x27C480u;
    // 0x27c480: 0x8e020704  lw          $v0, 0x704($s0)
    ctx->pc = 0x27c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    // 0x27c484: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27c484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c488: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27C488u;
    {
        const bool branch_taken_0x27c488 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C488u;
        // 0x27c48c: 0xae00073c  sw          $zero, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c488) {
            ctx->pc = 0x27C4E4u;
            goto label_27c4e4;
        }
    }
    ctx->pc = 0x27C490u;
    // 0x27c490: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c494: 0x0  nop
    ctx->pc = 0x27c494u;
    // NOP
label_27c498:
    // 0x27c498: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C498u;
    {
        const bool branch_taken_0x27c498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C498u;
        // 0x27c49c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c498) {
            ctx->pc = 0x27C4C0u;
            goto label_27c4c0;
        }
    }
    ctx->pc = 0x27C4A0u;
    // 0x27c4a0: 0x8e030728  lw          $v1, 0x728($s0)
    ctx->pc = 0x27c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1832)));
    // 0x27c4a4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x27c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27c4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c4b0: 0xc09f140  jal         func_27C500
    ctx->pc = 0x27C4B0u;
    SET_GPR_U32(ctx, 31, 0x27C4B8u);
    ctx->pc = 0x27C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4B0u;
    // 0x27c4b4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C500u, 0x27C4B0u, 0x27C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4B8u;
label_27c4b8:
    // 0x27c4b8: 0x8e02073c  lw          $v0, 0x73C($s0)
    ctx->pc = 0x27c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
    // 0x27c4bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27c4c0:
    // 0x27c4c0: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c4c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C4C4u;
    {
        const bool branch_taken_0x27c4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4C4u;
        // 0x27c4c8: 0xae02073c  sw          $v0, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4c4) {
            ctx->pc = 0x27C4D0u;
            goto label_27c4d0;
        }
    }
    ctx->pc = 0x27C4CCu;
    // 0x27c4cc: 0xae00073c  sw          $zero, 0x73C($s0)
    ctx->pc = 0x27c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 0));
label_27c4d0:
    // 0x27c4d0: 0x8e020704  lw          $v0, 0x704($s0)
    ctx->pc = 0x27c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    // 0x27c4d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c4d8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27c4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c4dc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27C4DCu;
    {
        const bool branch_taken_0x27c4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c4dc) {
            ctx->pc = 0x27C4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C4DCu;
            // 0x27c4e0: 0x8e02073c  lw          $v0, 0x73C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c498;
        }
    }
    ctx->pc = 0x27C4E4u;
label_27c4e4:
    // 0x27c4e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27c4ec:
    // 0x27c4ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c4ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4F4u;
        // 0x27c4f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C4FCu;
    // 0x27c4fc: 0x0  nop
    ctx->pc = 0x27c4fcu;
    // NOP
    ctx->pc = 0x27c500u;
}
