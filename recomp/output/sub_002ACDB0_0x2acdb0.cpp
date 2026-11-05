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

// Function: sub_002ACDB0
// Address: 0x2acdb0 - 0x2ace18
void sub_002ACDB0_0x2acdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACDB0_0x2acdb0");
#endif

    switch (ctx->pc) {
        case 0x2acdd8u: goto label_2acdd8;
        case 0x2acde8u: goto label_2acde8;
        case 0x2ace04u: goto label_2ace04;
        default: break;
    }

    ctx->pc = 0x2acdb0u;

    // 0x2acdb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2acdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2acdb4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2acdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2acdb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acdbc: 0x24423880  addiu       $v0, $v0, 0x3880
    ctx->pc = 0x2acdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14464));
    // 0x2acdc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2acdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2acdc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2acdc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2acdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2acdcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2acdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acdd0: 0xc0ab348  jal         func_2ACD20
    ctx->pc = 0x2ACDD0u;
    SET_GPR_U32(ctx, 31, 0x2ACDD8u);
    ctx->pc = 0x2ACDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDD0u;
    // 0x2acdd4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD20u, 0x2ACDD0u, 0x2ACDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDD8u;
label_2acdd8:
    // 0x2acdd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACDD8u;
    {
        const bool branch_taken_0x2acdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDD8u;
        // 0x2acddc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdd8) {
            ctx->pc = 0x2ACDECu;
            goto label_2acdec;
        }
    }
    ctx->pc = 0x2ACDE0u;
    // 0x2acde0: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ACDE0u;
    SET_GPR_U32(ctx, 31, 0x2ACDE8u);
    ctx->pc = 0x2ACDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDE0u;
    // 0x2acde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ACDE0u, 0x2ACDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACDE8u;
label_2acde8:
    // 0x2acde8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2acde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_2acdec:
    // 0x2acdec: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2acdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2acdf0: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x2acdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x2acdf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ACDF4u;
    {
        const bool branch_taken_0x2acdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDF4u;
        // 0x2acdf8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acdf4) {
            ctx->pc = 0x2ACE04u;
            goto label_2ace04;
        }
    }
    ctx->pc = 0x2ACDFCu;
    // 0x2acdfc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2ACDFCu;
    SET_GPR_U32(ctx, 31, 0x2ACE04u);
    ctx->pc = 0x2ACE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACDFCu;
    // 0x2ace00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2ACDFCu, 0x2ACE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACE04u;
label_2ace04:
    // 0x2ace04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ace04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ace08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ace08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ace0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ace0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ace10: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACE10u;
        // 0x2ace14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACE18u;
}
