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

// Function: sub_0017ED20
// Address: 0x17ed20 - 0x17ed90
void sub_0017ED20_0x17ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017ED20_0x17ed20");
#endif

    switch (ctx->pc) {
        case 0x17ed6cu: goto label_17ed6c;
        default: break;
    }

    ctx->pc = 0x17ed20u;

    // 0x17ed20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ed24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ed28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17ed2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ed2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed30: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x17ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x17ed34: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17ED34u;
    {
        const bool branch_taken_0x17ed34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ed34) {
            ctx->pc = 0x17ED38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ED34u;
            // 0x17ed38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ED80u;
            goto label_17ed80;
        }
    }
    ctx->pc = 0x17ED3Cu;
    // 0x17ed3c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x17ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x17ed40: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17ED40u;
    {
        const bool branch_taken_0x17ed40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED40u;
        // 0x17ed44: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed40) {
            ctx->pc = 0x17ED7Cu;
            goto label_17ed7c;
        }
    }
    ctx->pc = 0x17ED48u;
    // 0x17ed48: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x17ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x17ed4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ed50: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17ED50u;
    {
        const bool branch_taken_0x17ed50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ed50) {
            ctx->pc = 0x17ED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ED50u;
            // 0x17ed54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ED80u;
            goto label_17ed80;
        }
    }
    ctx->pc = 0x17ED58u;
    // 0x17ed58: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x17ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x17ed5c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x17ED5Cu;
    {
        const bool branch_taken_0x17ed5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ed5c) {
            ctx->pc = 0x17ED60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ED5Cu;
            // 0x17ed60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ED80u;
            goto label_17ed80;
        }
    }
    ctx->pc = 0x17ED64u;
    // 0x17ed64: 0xc05f5e4  jal         func_17D790
    ctx->pc = 0x17ED64u;
    SET_GPR_U32(ctx, 31, 0x17ED6Cu);
    ctx->pc = 0x17D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D790u, 0x17ED64u, 0x17ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ED6Cu;
label_17ed6c:
    // 0x17ed6c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x17ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x17ed70: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17ed74: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17ed78: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x17ed78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_17ed7c:
    // 0x17ed7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ed80:
    // 0x17ed80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed84: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED84u;
        // 0x17ed88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED8Cu;
    // 0x17ed8c: 0x0  nop
    ctx->pc = 0x17ed8cu;
    // NOP
    ctx->pc = 0x17ed90u;
}
