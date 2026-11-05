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

// Function: sub_002B0098
// Address: 0x2b0098 - 0x2b0100
void sub_002B0098_0x2b0098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0098_0x2b0098");
#endif

    switch (ctx->pc) {
        case 0x2b00c0u: goto label_2b00c0;
        case 0x2b00dcu: goto label_2b00dc;
        default: break;
    }

    ctx->pc = 0x2b0098u;

    // 0x2b0098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b009c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b009cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b00a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b00a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b00a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b00a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b00a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b00a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b00acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b00b0: 0x24519628  addiu       $s1, $v0, -0x69D8
    ctx->pc = 0x2b00b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940200));
    // 0x2b00b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b00b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B00B8u;
    {
        const bool branch_taken_0x2b00b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00B8u;
        // 0x2b00bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00b8) {
            ctx->pc = 0x2B00C4u;
            goto label_2b00c4;
        }
    }
    ctx->pc = 0x2B00C0u;
label_2b00c0:
    // 0x2b00c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b00c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b00c4:
    // 0x2b00c4: 0x2a02001a  slti        $v0, $s0, 0x1A
    ctx->pc = 0x2b00c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x2b00c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B00C8u;
    {
        const bool branch_taken_0x2b00c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00C8u;
        // 0x2b00cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00c8) {
            ctx->pc = 0x2B00E8u;
            goto label_2b00e8;
        }
    }
    ctx->pc = 0x2B00D0u;
    // 0x2b00d0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b00d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b00d4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2B00D4u;
    SET_GPR_U32(ctx, 31, 0x2B00DCu);
    ctx->pc = 0x2B00D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00D4u;
    // 0x2b00d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B00D4u, 0x2B00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00DCu;
label_2b00dc:
    // 0x2b00dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B00DCu;
    {
        const bool branch_taken_0x2b00dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B00E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00DCu;
        // 0x2b00e0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00dc) {
            ctx->pc = 0x2B00C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b00c0;
        }
    }
    ctx->pc = 0x2B00E4u;
    // 0x2b00e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b00e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b00e8:
    // 0x2b00e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b00e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b00ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b00ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b00f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b00f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b00f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b00f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b00f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B00F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00F8u;
        // 0x2b00fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B00F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0100u;
}
