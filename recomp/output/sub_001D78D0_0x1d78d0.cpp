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

// Function: sub_001D78D0
// Address: 0x1d78d0 - 0x1d7958
void sub_001D78D0_0x1d78d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D78D0_0x1d78d0");
#endif

    switch (ctx->pc) {
        case 0x1d7908u: goto label_1d7908;
        case 0x1d7914u: goto label_1d7914;
        default: break;
    }

    ctx->pc = 0x1d78d0u;

    // 0x1d78d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d78d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d78d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d78d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d78e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d78e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d78e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d78e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78ec: 0x8c4390d8  lw          $v1, -0x6F28($v0)
    ctx->pc = 0x1d78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F90D8u));
    // 0x1d78f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d78f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d78f8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D78F8u;
    {
        const bool branch_taken_0x1d78f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78F8u;
        // 0x1d78fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f8) {
            ctx->pc = 0x1D7934u;
            goto label_1d7934;
        }
    }
    ctx->pc = 0x1D7900u;
    // 0x1d7900: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1d7904: 0x24518f20  addiu       $s1, $v0, -0x70E0
    ctx->pc = 0x1d7904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
label_1d7908:
    // 0x1d7908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d790c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x1D790Cu;
    SET_GPR_U32(ctx, 31, 0x1D7914u);
    ctx->pc = 0x1D7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D790Cu;
    // 0x1d7910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x1D790Cu, 0x1D7914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7914u;
label_1d7914:
    // 0x1d7914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7914u;
    {
        const bool branch_taken_0x1d7914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7914u;
        // 0x1d7918: 0x8e6290d8  lw          $v0, -0x6F28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7914) {
            ctx->pc = 0x1D7924u;
            goto label_1d7924;
        }
    }
    ctx->pc = 0x1D791Cu;
    // 0x1d791c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D791Cu;
    {
        const bool branch_taken_0x1d791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D791Cu;
        // 0x1d7920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d791c) {
            ctx->pc = 0x1D7938u;
            goto label_1d7938;
        }
    }
    ctx->pc = 0x1D7924u;
label_1d7924:
    // 0x1d7924: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d7928: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1d7928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d792c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D792Cu;
    {
        const bool branch_taken_0x1d792c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D792Cu;
        // 0x1d7930: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d792c) {
            ctx->pc = 0x1D7908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7908;
        }
    }
    ctx->pc = 0x1D7934u;
label_1d7934:
    // 0x1d7934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d7938:
    // 0x1d7938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d794c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D794Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D794Cu;
        // 0x1d7950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D794Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7954u;
    // 0x1d7954: 0x0  nop
    ctx->pc = 0x1d7954u;
    // NOP
    ctx->pc = 0x1d7958u;
}
