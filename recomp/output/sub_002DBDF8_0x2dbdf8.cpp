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

// Function: sub_002DBDF8
// Address: 0x2dbdf8 - 0x2dbe68
void sub_002DBDF8_0x2dbdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBDF8_0x2dbdf8");
#endif

    switch (ctx->pc) {
        case 0x2dbe1cu: goto label_2dbe1c;
        case 0x2dbe28u: goto label_2dbe28;
        case 0x2dbe44u: goto label_2dbe44;
        default: break;
    }

    ctx->pc = 0x2dbdf8u;

    // 0x2dbdf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dbdfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbe00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbe04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dbe04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dbe08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbe10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dbe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dbe14: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2DBE14u;
    SET_GPR_U32(ctx, 31, 0x2DBE1Cu);
    ctx->pc = 0x2DBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE14u;
    // 0x2dbe18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2DBE14u, 0x2DBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE1Cu;
label_2dbe1c:
    // 0x2dbe1c: 0x2451fffe  addiu       $s1, $v0, -0x2
    ctx->pc = 0x2dbe1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2dbe20: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2DBE20u;
    SET_GPR_U32(ctx, 31, 0x2DBE28u);
    ctx->pc = 0x2DBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE20u;
    // 0x2dbe24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2DBE20u, 0x2DBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE28u;
label_2dbe28:
    // 0x2dbe28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dbe28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbe2c: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x2dbe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2dbe30: 0x2c420401  sltiu       $v0, $v0, 0x401
    ctx->pc = 0x2dbe30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2dbe34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBE34u;
    {
        const bool branch_taken_0x2dbe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE34u;
        // 0x2dbe38: 0x2112021  addu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe34) {
            ctx->pc = 0x2DBE4Cu;
            goto label_2dbe4c;
        }
    }
    ctx->pc = 0x2DBE3Cu;
    // 0x2dbe3c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2DBE3Cu;
    SET_GPR_U32(ctx, 31, 0x2DBE44u);
    ctx->pc = 0x2DBE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE3Cu;
    // 0x2dbe40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2DBE3Cu, 0x2DBE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE44u;
label_2dbe44:
    // 0x2dbe44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DBE44u;
    {
        const bool branch_taken_0x2dbe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE44u;
        // 0x2dbe48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbe44) {
            ctx->pc = 0x2DBE50u;
            goto label_2dbe50;
        }
    }
    ctx->pc = 0x2DBE4Cu;
label_2dbe4c:
    // 0x2dbe4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dbe4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbe50:
    // 0x2dbe50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbe50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbe54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbe54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbe58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbe58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbe5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dbe5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbe60: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBE60u;
        // 0x2dbe64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBE68u;
}
