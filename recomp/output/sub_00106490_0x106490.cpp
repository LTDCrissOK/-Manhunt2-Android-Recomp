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

// Function: sub_00106490
// Address: 0x106490 - 0x1064f0
void sub_00106490_0x106490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106490_0x106490");
#endif

    switch (ctx->pc) {
        case 0x1064b0u: goto label_1064b0;
        case 0x1064b8u: goto label_1064b8;
        default: break;
    }

    ctx->pc = 0x106490u;

    // 0x106490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x106494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x106498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10649c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10649cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1064a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1064a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1064A4u;
    {
        const bool branch_taken_0x1064a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064A4u;
        // 0x1064a8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064a4) {
            ctx->pc = 0x1064B8u;
            goto label_1064b8;
        }
    }
    ctx->pc = 0x1064ACu;
    // 0x1064ac: 0x0  nop
    ctx->pc = 0x1064acu;
    // NOP
label_1064b0:
    // 0x1064b0: 0xc041150  jal         func_104540
    ctx->pc = 0x1064B0u;
    SET_GPR_U32(ctx, 31, 0x1064B8u);
    ctx->pc = 0x104540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104540u, 0x1064B0u, 0x1064B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1064B8u;
label_1064b8:
    // 0x1064b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1064bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1064bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1064c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1064C0u;
    {
        const bool branch_taken_0x1064c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064C0u;
        // 0x1064c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064c0) {
            ctx->pc = 0x1064CCu;
            goto label_1064cc;
        }
    }
    ctx->pc = 0x1064C8u;
    // 0x1064c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1064c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1064cc:
    // 0x1064cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1064CCu;
    {
        const bool branch_taken_0x1064cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1064D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064CCu;
        // 0x1064d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064cc) {
            ctx->pc = 0x1064DCu;
            goto label_1064dc;
        }
    }
    ctx->pc = 0x1064D4u;
    // 0x1064d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1064d8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1064d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1064dc:
    // 0x1064dc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1064DCu;
    {
        const bool branch_taken_0x1064dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1064E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064DCu;
        // 0x1064e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1064dc) {
            ctx->pc = 0x1064B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1064b0;
        }
    }
    ctx->pc = 0x1064E4u;
    // 0x1064e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1064e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1064E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1064ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1064E8u;
        // 0x1064ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1064F0u;
}
