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

// Function: sub_00203358
// Address: 0x203358 - 0x2033c8
void sub_00203358_0x203358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203358_0x203358");
#endif

    switch (ctx->pc) {
        case 0x203380u: goto label_203380;
        case 0x20338cu: goto label_20338c;
        default: break;
    }

    ctx->pc = 0x203358u;

    // 0x203358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20335c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x203360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x203368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20336c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203370: 0x24519370  addiu       $s1, $v0, -0x6C90
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
    // 0x203374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x203374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x203378: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20337c: 0x0  nop
    ctx->pc = 0x20337cu;
    // NOP
label_203380:
    // 0x203380: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x203384: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x203384u;
    SET_GPR_U32(ctx, 31, 0x20338Cu);
    ctx->pc = 0x203388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203384u;
    // 0x203388: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x203384u, 0x20338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20338Cu;
label_20338c:
    // 0x20338c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20338Cu;
    {
        const bool branch_taken_0x20338c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20338c) {
            ctx->pc = 0x203390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20338Cu;
            // 0x203390: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20339Cu;
            goto label_20339c;
        }
    }
    ctx->pc = 0x203394u;
    // 0x203394: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x203394u;
    {
        const bool branch_taken_0x203394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203394u;
        // 0x203398: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203394) {
            ctx->pc = 0x2033ACu;
            goto label_2033ac;
        }
    }
    ctx->pc = 0x20339Cu;
label_20339c:
    // 0x20339c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x20339cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2033a0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2033A0u;
    {
        const bool branch_taken_0x2033a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2033A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033A0u;
        // 0x2033a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033a0) {
            ctx->pc = 0x203380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203380;
        }
    }
    ctx->pc = 0x2033A8u;
    // 0x2033a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2033ac:
    // 0x2033ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2033b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2033b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2033b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2033b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2033b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2033b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2033bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2033BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2033C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033BCu;
        // 0x2033c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2033BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2033C4u;
    // 0x2033c4: 0x0  nop
    ctx->pc = 0x2033c4u;
    // NOP
    ctx->pc = 0x2033c8u;
}
