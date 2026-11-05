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

// Function: sub_00336A98
// Address: 0x336a98 - 0x336b08
void sub_00336A98_0x336a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336A98_0x336a98");
#endif

    switch (ctx->pc) {
        case 0x336aacu: goto label_336aac;
        case 0x336ad4u: goto label_336ad4;
        case 0x336af8u: goto label_336af8;
        default: break;
    }

    ctx->pc = 0x336a98u;

    // 0x336a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336a9c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x336A9Cu;
    {
        const bool branch_taken_0x336a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A9Cu;
        // 0x336aa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a9c) {
            ctx->pc = 0x336AF8u;
            goto label_336af8;
        }
    }
    ctx->pc = 0x336AA4u;
    // 0x336aa4: 0xc0cda9e  jal         func_336A78
    ctx->pc = 0x336AA4u;
    SET_GPR_U32(ctx, 31, 0x336AACu);
    ctx->pc = 0x336A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A78u, 0x336AA4u, 0x336AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AACu;
label_336aac:
    // 0x336aac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x336AACu;
    {
        const bool branch_taken_0x336aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AACu;
        // 0x336ab0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336aac) {
            ctx->pc = 0x336AF8u;
            goto label_336af8;
        }
    }
    ctx->pc = 0x336AB4u;
    // 0x336ab4: 0x8c422c80  lw          $v0, 0x2C80($v0)
    ctx->pc = 0x336ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11392)));
    // 0x336ab8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x336AB8u;
    {
        const bool branch_taken_0x336ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ab8) {
            ctx->pc = 0x336ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336AB8u;
            // 0x336abc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336AD8u;
            goto label_336ad8;
        }
    }
    ctx->pc = 0x336AC0u;
    // 0x336ac0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x336ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x336ac4: 0x8c460204  lw          $a2, 0x204($v0)
    ctx->pc = 0x336ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x336ac8: 0x8c4401bc  lw          $a0, 0x1BC($v0)
    ctx->pc = 0x336ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x336acc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x336ACCu;
    SET_GPR_U32(ctx, 31, 0x336AD4u);
    ctx->pc = 0x336AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336ACCu;
    // 0x336ad0: 0x24a5a358  addiu       $a1, $a1, -0x5CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x336ACCu, 0x336AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AD4u;
label_336ad4:
    // 0x336ad4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x336ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_336ad8:
    // 0x336ad8: 0x8c422c7c  lw          $v0, 0x2C7C($v0)
    ctx->pc = 0x336ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x336adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x336ADCu;
    {
        const bool branch_taken_0x336adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336ADCu;
        // 0x336ae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336adc) {
            ctx->pc = 0x336AFCu;
            goto label_336afc;
        }
    }
    ctx->pc = 0x336AE4u;
    // 0x336ae4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x336ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x336ae8: 0x8c460204  lw          $a2, 0x204($v0)
    ctx->pc = 0x336ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x336aec: 0x8c4401bc  lw          $a0, 0x1BC($v0)
    ctx->pc = 0x336aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x336af0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x336AF0u;
    SET_GPR_U32(ctx, 31, 0x336AF8u);
    ctx->pc = 0x336AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336AF0u;
    // 0x336af4: 0x24a5a758  addiu       $a1, $a1, -0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x336AF0u, 0x336AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336AF8u;
label_336af8:
    // 0x336af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336afc:
    // 0x336afc: 0x3e00008  jr          $ra
    ctx->pc = 0x336AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336AFCu;
        // 0x336b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336B04u;
    // 0x336b04: 0x0  nop
    ctx->pc = 0x336b04u;
    // NOP
    ctx->pc = 0x336b08u;
}
