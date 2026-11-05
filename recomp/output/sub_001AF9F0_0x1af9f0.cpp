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

// Function: sub_001AF9F0
// Address: 0x1af9f0 - 0x1afa50
void sub_001AF9F0_0x1af9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF9F0_0x1af9f0");
#endif

    switch (ctx->pc) {
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa40u: goto label_1afa40;
        default: break;
    }

    ctx->pc = 0x1af9f0u;

    // 0x1af9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af9f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af9fc: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AF9FCu;
    SET_GPR_U32(ctx, 31, 0x1AFA04u);
    ctx->pc = 0x1AFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9FCu;
    // 0x1afa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AF9FCu, 0x1AFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1afa04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa08: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1afa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1afa0c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFA0Cu;
    {
        const bool branch_taken_0x1afa0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA0Cu;
        // 0x1afa10: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa0c) {
            ctx->pc = 0x1AFA24u;
            goto label_1afa24;
        }
    }
    ctx->pc = 0x1AFA14u;
    // 0x1afa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa18: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afa1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA1Cu;
    {
        const bool branch_taken_0x1afa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA1Cu;
        // 0x1afa20: 0x2406015a  addiu       $a2, $zero, 0x15A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa1c) {
            ctx->pc = 0x1AFA38u;
            goto label_1afa38;
        }
    }
    ctx->pc = 0x1AFA24u;
label_1afa24:
    // 0x1afa24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA24u;
    {
        const bool branch_taken_0x1afa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA24u;
        // 0x1afa28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa24) {
            ctx->pc = 0x1AFA40u;
            goto label_1afa40;
        }
    }
    ctx->pc = 0x1AFA2Cu;
    // 0x1afa2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa30: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1afa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afa34: 0x2406015d  addiu       $a2, $zero, 0x15D
    ctx->pc = 0x1afa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
label_1afa38:
    // 0x1afa38: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFA38u;
    SET_GPR_U32(ctx, 31, 0x1AFA40u);
    ctx->pc = 0x1AFA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA38u;
    // 0x1afa3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFA38u, 0x1AFA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA40u;
label_1afa40:
    // 0x1afa40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1afa44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afa48: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA48u;
        // 0x1afa4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFA50u;
}
