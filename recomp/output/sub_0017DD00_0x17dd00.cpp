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

// Function: sub_0017DD00
// Address: 0x17dd00 - 0x17dd70
void sub_0017DD00_0x17dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD00_0x17dd00");
#endif

    switch (ctx->pc) {
        case 0x17dd24u: goto label_17dd24;
        case 0x17dd30u: goto label_17dd30;
        case 0x17dd40u: goto label_17dd40;
        case 0x17dd50u: goto label_17dd50;
        case 0x17dd5cu: goto label_17dd5c;
        default: break;
    }

    ctx->pc = 0x17dd00u;

    // 0x17dd00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17dd04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17dd08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17dd0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17dd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd10: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17dd14: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17DD14u;
    {
        const bool branch_taken_0x17dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dd14) {
            ctx->pc = 0x17DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DD14u;
            // 0x17dd18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DD60u;
            goto label_17dd60;
        }
    }
    ctx->pc = 0x17DD1Cu;
    // 0x17dd1c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17DD1Cu;
    SET_GPR_U32(ctx, 31, 0x17DD24u);
    ctx->pc = 0x17DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD1Cu;
    // 0x17dd20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17DD1Cu, 0x17DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD24u;
label_17dd24:
    // 0x17dd24: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x17dd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x17dd28: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17DD28u;
    SET_GPR_U32(ctx, 31, 0x17DD30u);
    ctx->pc = 0x17DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD28u;
    // 0x17dd2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17DD28u, 0x17DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD30u;
label_17dd30:
    // 0x17dd30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DD30u;
    {
        const bool branch_taken_0x17dd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD30u;
        // 0x17dd34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd30) {
            ctx->pc = 0x17DD48u;
            goto label_17dd48;
        }
    }
    ctx->pc = 0x17DD38u;
    // 0x17dd38: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DD38u;
    SET_GPR_U32(ctx, 31, 0x17DD40u);
    ctx->pc = 0x17DD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD38u;
    // 0x17dd3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DD38u, 0x17DD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD40u;
label_17dd40:
    // 0x17dd40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17DD40u;
    {
        const bool branch_taken_0x17dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD40u;
        // 0x17dd44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dd40) {
            ctx->pc = 0x17DD60u;
            goto label_17dd60;
        }
    }
    ctx->pc = 0x17DD48u;
label_17dd48:
    // 0x17dd48: 0xc05f616  jal         func_17D858
    ctx->pc = 0x17DD48u;
    SET_GPR_U32(ctx, 31, 0x17DD50u);
    ctx->pc = 0x17DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD48u;
    // 0x17dd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D858u, 0x17DD48u, 0x17DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD50u;
label_17dd50:
    // 0x17dd50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd54: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17DD54u;
    SET_GPR_U32(ctx, 31, 0x17DD5Cu);
    ctx->pc = 0x17DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DD54u;
    // 0x17dd58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17DD54u, 0x17DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DD5Cu;
label_17dd5c:
    // 0x17dd5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17dd60:
    // 0x17dd60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17dd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x17DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DD64u;
        // 0x17dd68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DD6Cu;
    // 0x17dd6c: 0x0  nop
    ctx->pc = 0x17dd6cu;
    // NOP
    ctx->pc = 0x17dd70u;
}
