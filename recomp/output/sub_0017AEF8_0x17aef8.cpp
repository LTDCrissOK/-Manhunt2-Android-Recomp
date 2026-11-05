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

// Function: sub_0017AEF8
// Address: 0x17aef8 - 0x17af80
void sub_0017AEF8_0x17aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AEF8_0x17aef8");
#endif

    switch (ctx->pc) {
        case 0x17af30u: goto label_17af30;
        case 0x17af4cu: goto label_17af4c;
        default: break;
    }

    ctx->pc = 0x17aef8u;

    // 0x17aef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17aef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17aefc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17aefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17af00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17af04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17af04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17af0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17af0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17af10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17af14: 0x26320210  addiu       $s2, $s1, 0x210
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x17af18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17af1c: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x17af1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17af20: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17af24: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x17af24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17af28: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x17af28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17af2c: 0x0  nop
    ctx->pc = 0x17af2cu;
    // NOP
label_17af30:
    // 0x17af30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17af30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af34: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x17af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17af38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17af3c: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AF3Cu;
    {
        const bool branch_taken_0x17af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x17AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF3Cu;
        // 0x17af40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af3c) {
            ctx->pc = 0x17AF4Cu;
            goto label_17af4c;
        }
    }
    ctx->pc = 0x17AF44u;
    // 0x17af44: 0xc05ebe0  jal         func_17AF80
    ctx->pc = 0x17AF44u;
    SET_GPR_U32(ctx, 31, 0x17AF4Cu);
    ctx->pc = 0x17AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AF80u, 0x17AF44u, 0x17AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AF4Cu;
label_17af4c:
    // 0x17af4c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17af50: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17af50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17af54: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x17af54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17af58: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AF58u;
    {
        const bool branch_taken_0x17af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17af58) {
            ctx->pc = 0x17AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AF58u;
            // 0x17af5c: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17af30;
        }
    }
    ctx->pc = 0x17AF60u;
    // 0x17af60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17af60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17af64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17af64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17af68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17af68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17af6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17af6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17af70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17af70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17af74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17af78: 0x3e00008  jr          $ra
    ctx->pc = 0x17AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF78u;
        // 0x17af7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AF80u;
}
