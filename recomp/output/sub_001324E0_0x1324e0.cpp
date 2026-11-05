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

// Function: sub_001324E0
// Address: 0x1324e0 - 0x132540
void sub_001324E0_0x1324e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001324E0_0x1324e0");
#endif

    switch (ctx->pc) {
        case 0x132508u: goto label_132508;
        case 0x13251cu: goto label_13251c;
        default: break;
    }

    ctx->pc = 0x1324e0u;

    // 0x1324e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1324e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1324e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1324e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1324e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1324e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1324ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1324ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1324f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1324f4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1324f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1324f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1324F8u;
    {
        const bool branch_taken_0x1324f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324F8u;
        // 0x1324fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324f8) {
            ctx->pc = 0x132508u;
            goto label_132508;
        }
    }
    ctx->pc = 0x132500u;
    // 0x132500: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x132500u;
    SET_GPR_U32(ctx, 31, 0x132508u);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x132500u, 0x132508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132508u;
label_132508:
    // 0x132508: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x132508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13250c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13250Cu;
    {
        const bool branch_taken_0x13250c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13250Cu;
        // 0x132510: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13250c) {
            ctx->pc = 0x132520u;
            goto label_132520;
        }
    }
    ctx->pc = 0x132514u;
    // 0x132514: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x132514u;
    SET_GPR_U32(ctx, 31, 0x13251Cu);
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x132514u, 0x13251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13251Cu;
label_13251c:
    // 0x13251c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x13251cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_132520:
    // 0x132520: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x132520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x132524: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x132524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x132528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13252c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13252cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132534: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x132534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x132538: 0x3e00008  jr          $ra
    ctx->pc = 0x132538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132538u;
        // 0x13253c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132540u;
}
