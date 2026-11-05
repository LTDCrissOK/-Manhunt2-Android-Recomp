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

// Function: sub_00304A78
// Address: 0x304a78 - 0x304ae0
void sub_00304A78_0x304a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304A78_0x304a78");
#endif

    switch (ctx->pc) {
        case 0x304abcu: goto label_304abc;
        case 0x304accu: goto label_304acc;
        default: break;
    }

    ctx->pc = 0x304a78u;

    // 0x304a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304a80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304a84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x304a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x304a8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x304a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304a90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304a94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x304a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304a98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304a9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x304a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x304aa0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304AA0u;
    {
        const bool branch_taken_0x304aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x304AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA0u;
        // 0x304aa4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aa0) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304AA8u;
    // 0x304aa8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x304AA8u;
    {
        const bool branch_taken_0x304aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AA8u;
        // 0x304aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304aa8) {
            ctx->pc = 0x304AD0u;
            goto label_304ad0;
        }
    }
    ctx->pc = 0x304AB0u;
label_304ab0:
    // 0x304ab0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x304ab4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x304AB4u;
    SET_GPR_U32(ctx, 31, 0x304ABCu);
    ctx->pc = 0x304AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AB4u;
    // 0x304ab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x304AB4u, 0x304ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304ABCu;
label_304abc:
    // 0x304abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ac0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x304ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x304ac4: 0xc0c1282  jal         func_304A08
    ctx->pc = 0x304AC4u;
    SET_GPR_U32(ctx, 31, 0x304ACCu);
    ctx->pc = 0x304AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304AC4u;
    // 0x304ac8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A08u, 0x304AC4u, 0x304ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304ACCu;
label_304acc:
    // 0x304acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304ad0:
    // 0x304ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304ad4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x304AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AD8u;
        // 0x304adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304AE0u;
}
