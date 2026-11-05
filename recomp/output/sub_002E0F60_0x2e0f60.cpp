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

// Function: sub_002E0F60
// Address: 0x2e0f60 - 0x2e0fc0
void sub_002E0F60_0x2e0f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0F60_0x2e0f60");
#endif

    switch (ctx->pc) {
        case 0x2e0f9cu: goto label_2e0f9c;
        case 0x2e0fa8u: goto label_2e0fa8;
        default: break;
    }

    ctx->pc = 0x2e0f60u;

    // 0x2e0f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0f64: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2e0f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0f6c: 0x24423ea0  addiu       $v0, $v0, 0x3EA0
    ctx->pc = 0x2e0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16032));
    // 0x2e0f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0f7c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2e0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2e0f80: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2e0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2e0f84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0F84u;
    {
        const bool branch_taken_0x2e0f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0F84u;
        // 0x2e0f88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0f84) {
            ctx->pc = 0x2E0F9Cu;
            goto label_2e0f9c;
        }
    }
    ctx->pc = 0x2E0F8Cu;
    // 0x2e0f8c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2e0f90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f94: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2E0F94u;
    SET_GPR_U32(ctx, 31, 0x2E0F9Cu);
    ctx->pc = 0x2E0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F94u;
    // 0x2e0f98: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2E0F94u, 0x2E0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F9Cu;
label_2e0f9c:
    // 0x2e0f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fa0: 0xc0b7648  jal         func_2DD920
    ctx->pc = 0x2E0FA0u;
    SET_GPR_U32(ctx, 31, 0x2E0FA8u);
    ctx->pc = 0x2E0FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0FA0u;
    // 0x2e0fa4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD920u, 0x2E0FA0u, 0x2E0FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FA8u;
label_2e0fa8:
    // 0x2e0fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FB4u;
        // 0x2e0fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0FBCu;
    // 0x2e0fbc: 0x0  nop
    ctx->pc = 0x2e0fbcu;
    // NOP
    ctx->pc = 0x2e0fc0u;
}
