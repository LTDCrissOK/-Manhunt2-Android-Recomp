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

// Function: sub_001EAAB0
// Address: 0x1eaab0 - 0x1eab48
void sub_001EAAB0_0x1eaab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAAB0_0x1eaab0");
#endif

    switch (ctx->pc) {
        case 0x1eaaecu: goto label_1eaaec;
        case 0x1eab00u: goto label_1eab00;
        case 0x1eab0cu: goto label_1eab0c;
        default: break;
    }

    ctx->pc = 0x1eaab0u;

    // 0x1eaab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eaab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eaab4: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1eaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1eaab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eaab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eaabc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1eaabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaac0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1eaac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1eaac4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1eaac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eaac8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1eaac8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eaaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eaad0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eaad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eaad4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eaad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eaad8: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1eaadc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eaadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1eaae0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eaae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eaae4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1EAAE4u;
    SET_GPR_U32(ctx, 31, 0x1EAAECu);
    ctx->pc = 0x1EAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAE4u;
    // 0x1eaae8: 0x34440010  ori         $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1EAAE4u, 0x1EAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAECu;
label_1eaaec:
    // 0x1eaaec: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1eaaecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1eaaf0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1eaaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1eaaf4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAAF4u;
    {
        const bool branch_taken_0x1eaaf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAF4u;
        // 0x1eaaf8: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaaf4) {
            ctx->pc = 0x1EAB18u;
            goto label_1eab18;
        }
    }
    ctx->pc = 0x1EAAFCu;
    // 0x1eaafc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1eab00:
    // 0x1eab00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab04: 0xc07a912  jal         func_1EA448
    ctx->pc = 0x1EAB04u;
    SET_GPR_U32(ctx, 31, 0x1EAB0Cu);
    ctx->pc = 0x1EAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB04u;
    // 0x1eab08: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA448u, 0x1EAB04u, 0x1EAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB0Cu;
label_1eab0c:
    // 0x1eab0c: 0x0  nop
    ctx->pc = 0x1eab0cu;
    // NOP
    // 0x1eab10: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EAB10u;
    {
        const bool branch_taken_0x1eab10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1EAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB10u;
        // 0x1eab14: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab10) {
            ctx->pc = 0x1EAB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eab00;
        }
    }
    ctx->pc = 0x1EAB18u;
label_1eab18:
    // 0x1eab18: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1eab18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1eab1c: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x1eab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x1eab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eab28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eab28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eab2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eab2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eab30: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eab30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eab34: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1eab34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eab38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eab38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eab3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB3Cu;
        // 0x1eab40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAB44u;
    // 0x1eab44: 0x0  nop
    ctx->pc = 0x1eab44u;
    // NOP
    ctx->pc = 0x1eab48u;
}
