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

// Function: sub_0019AFF8
// Address: 0x19aff8 - 0x19b078
void sub_0019AFF8_0x19aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AFF8_0x19aff8");
#endif

    switch (ctx->pc) {
        case 0x19b00cu: goto label_19b00c;
        case 0x19b014u: goto label_19b014;
        case 0x19b038u: goto label_19b038;
        case 0x19b050u: goto label_19b050;
        case 0x19b060u: goto label_19b060;
        default: break;
    }

    ctx->pc = 0x19aff8u;

    // 0x19aff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19aff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19affc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19affcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19b004: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B004u;
    SET_GPR_U32(ctx, 31, 0x19B00Cu);
    ctx->pc = 0x19B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B004u;
    // 0x19b008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B004u, 0x19B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B00Cu;
label_19b00c:
    // 0x19b00c: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19B00Cu;
    SET_GPR_U32(ctx, 31, 0x19B014u);
    ctx->pc = 0x19B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B00Cu;
    // 0x19b010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19B00Cu, 0x19B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B014u;
label_19b014:
    // 0x19b014: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B014u;
    {
        const bool branch_taken_0x19b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b014) {
            ctx->pc = 0x19B030u;
            goto label_19b030;
        }
    }
    ctx->pc = 0x19B01Cu;
    // 0x19b01c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19b020: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x19b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x19b024: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x19b024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x19b028: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B028u;
    {
        const bool branch_taken_0x19b028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B028u;
        // 0x19b02c: 0x38420007  xori        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b028) {
            ctx->pc = 0x19B040u;
            goto label_19b040;
        }
    }
    ctx->pc = 0x19B030u;
label_19b030:
    // 0x19b030: 0xc067598  jal         func_19D660
    ctx->pc = 0x19B030u;
    SET_GPR_U32(ctx, 31, 0x19B038u);
    ctx->pc = 0x19B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B030u;
    // 0x19b034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19B030u, 0x19B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B038u;
label_19b038:
    // 0x19b038: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x19B038u;
    {
        const bool branch_taken_0x19b038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B038u;
        // 0x19b03c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b038) {
            ctx->pc = 0x19B06Cu;
            goto label_19b06c;
        }
    }
    ctx->pc = 0x19B040u;
label_19b040:
    // 0x19b040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B040u;
    {
        const bool branch_taken_0x19b040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b040) {
            ctx->pc = 0x19B058u;
            goto label_19b058;
        }
    }
    ctx->pc = 0x19B048u;
    // 0x19b048: 0xc0675e0  jal         func_19D780
    ctx->pc = 0x19B048u;
    SET_GPR_U32(ctx, 31, 0x19B050u);
    ctx->pc = 0x19B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B048u;
    // 0x19b04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19B048u, 0x19B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B050u;
label_19b050:
    // 0x19b050: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19B050u;
    {
        const bool branch_taken_0x19b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B050u;
        // 0x19b054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b050) {
            ctx->pc = 0x19B06Cu;
            goto label_19b06c;
        }
    }
    ctx->pc = 0x19B058u;
label_19b058:
    // 0x19b058: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19B058u;
    SET_GPR_U32(ctx, 31, 0x19B060u);
    ctx->pc = 0x19B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B058u;
    // 0x19b05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19B058u, 0x19B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B060u;
label_19b060:
    // 0x19b060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b064: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x19b064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    // 0x19b068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19b068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19b06c:
    // 0x19b06c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19b06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19b070: 0x3e00008  jr          $ra
    ctx->pc = 0x19B070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B070u;
        // 0x19b074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B078u;
}
