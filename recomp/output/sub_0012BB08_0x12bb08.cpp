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

// Function: sub_0012BB08
// Address: 0x12bb08 - 0x12bb68
void sub_0012BB08_0x12bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB08_0x12bb08");
#endif

    switch (ctx->pc) {
        case 0x12bb24u: goto label_12bb24;
        case 0x12bb54u: goto label_12bb54;
        default: break;
    }

    ctx->pc = 0x12bb08u;

    // 0x12bb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12bb14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12bb1c: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BB1Cu;
    SET_GPR_U32(ctx, 31, 0x12BB24u);
    ctx->pc = 0x12BB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB1Cu;
    // 0x12bb20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BB1Cu, 0x12BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB24u;
label_12bb24:
    // 0x12bb24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bb24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bb2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12BB2Cu;
    {
        const bool branch_taken_0x12bb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB2Cu;
        // 0x12bb30: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb2c) {
            ctx->pc = 0x12BB54u;
            goto label_12bb54;
        }
    }
    ctx->pc = 0x12BB34u;
    // 0x12bb34: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bb38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bb3c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x12bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x12bb40: 0x90820085  lbu         $v0, 0x85($a0)
    ctx->pc = 0x12bb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 133)));
    // 0x12bb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12bb48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12bb4c: 0xc05f582  jal         func_17D608
    ctx->pc = 0x12BB4Cu;
    SET_GPR_U32(ctx, 31, 0x12BB54u);
    ctx->pc = 0x12BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB4Cu;
    // 0x12bb50: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D608u, 0x12BB4Cu, 0x12BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BB54u;
label_12bb54:
    // 0x12bb54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12bb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bb5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bb60: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB60u;
        // 0x12bb64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB68u;
}
