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

// Function: sub_001FEB98
// Address: 0x1feb98 - 0x1febf0
void sub_001FEB98_0x1feb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB98_0x1feb98");
#endif

    switch (ctx->pc) {
        case 0x1febb0u: goto label_1febb0;
        case 0x1febbcu: goto label_1febbc;
        case 0x1febc0u: goto label_1febc0;
        case 0x1febc8u: goto label_1febc8;
        default: break;
    }

    ctx->pc = 0x1feb98u;

    // 0x1feb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1feb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1feba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feba8: 0xc07f8b8  jal         func_1FE2E0
    ctx->pc = 0x1FEBA8u;
    SET_GPR_U32(ctx, 31, 0x1FEBB0u);
    ctx->pc = 0x1FEBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBA8u;
    // 0x1febac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E0u, 0x1FEBA8u, 0x1FEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBB0u;
label_1febb0:
    // 0x1febb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1febb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febb4: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FEBB4u;
    SET_GPR_U32(ctx, 31, 0x1FEBBCu);
    ctx->pc = 0x1FEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBB4u;
    // 0x1febb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FEBB4u, 0x1FEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBBCu;
label_1febbc:
    // 0x1febbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1febbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1febc0:
    // 0x1febc0: 0xc07f95c  jal         func_1FE570
    ctx->pc = 0x1FEBC0u;
    SET_GPR_U32(ctx, 31, 0x1FEBC8u);
    ctx->pc = 0x1FEBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBC0u;
    // 0x1febc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE570u, 0x1FEBC0u, 0x1FEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBC8u;
label_1febc8:
    // 0x1febc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1febc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1febcc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1febccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1febd0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FEBD0u;
    {
        const bool branch_taken_0x1febd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBD0u;
        // 0x1febd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd0) {
            ctx->pc = 0x1FEBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1febc0;
        }
    }
    ctx->pc = 0x1FEBD8u;
    // 0x1febd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1febdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1febe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1febe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1febe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBE4u;
        // 0x1febe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEBECu;
    // 0x1febec: 0x0  nop
    ctx->pc = 0x1febecu;
    // NOP
    ctx->pc = 0x1febf0u;
}
