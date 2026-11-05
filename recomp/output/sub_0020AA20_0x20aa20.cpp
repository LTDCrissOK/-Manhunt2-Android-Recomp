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

// Function: sub_0020AA20
// Address: 0x20aa20 - 0x20aa70
void sub_0020AA20_0x20aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AA20_0x20aa20");
#endif

    switch (ctx->pc) {
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa64u: goto label_20aa64;
        default: break;
    }

    ctx->pc = 0x20aa20u;

    // 0x20aa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20aa24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa28: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20AA28u;
    {
        const bool branch_taken_0x20aa28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA28u;
        // 0x20aa2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa28) {
            ctx->pc = 0x20AA54u;
            goto label_20aa54;
        }
    }
    ctx->pc = 0x20AA30u;
    // 0x20aa30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aa34: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20AA34u;
    {
        const bool branch_taken_0x20aa34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA34u;
        // 0x20aa38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa34) {
            ctx->pc = 0x20AA68u;
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA3Cu;
    // 0x20aa3c: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x20aa3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20aa40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa44: 0xc0e139e  jal         func_384E78
    ctx->pc = 0x20AA44u;
    SET_GPR_U32(ctx, 31, 0x20AA4Cu);
    ctx->pc = 0x20AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA44u;
    // 0x20aa48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384E78u, 0x20AA44u, 0x20AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA4Cu;
label_20aa4c:
    // 0x20aa4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20AA4Cu;
    {
        const bool branch_taken_0x20aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA4Cu;
        // 0x20aa50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa4c) {
            ctx->pc = 0x20AA68u;
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA54u;
label_20aa54:
    // 0x20aa54: 0x90860008  lbu         $a2, 0x8($a0)
    ctx->pc = 0x20aa54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20aa58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa5c: 0xc0e1360  jal         func_384D80
    ctx->pc = 0x20AA5Cu;
    SET_GPR_U32(ctx, 31, 0x20AA64u);
    ctx->pc = 0x20AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA5Cu;
    // 0x20aa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384D80u, 0x20AA5Cu, 0x20AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA64u;
label_20aa64:
    // 0x20aa64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20aa68:
    // 0x20aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA68u;
        // 0x20aa6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA70u;
}
