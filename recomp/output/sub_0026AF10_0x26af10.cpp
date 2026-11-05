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

// Function: sub_0026AF10
// Address: 0x26af10 - 0x26af70
void sub_0026AF10_0x26af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AF10_0x26af10");
#endif

    switch (ctx->pc) {
        case 0x26af4cu: goto label_26af4c;
        case 0x26af58u: goto label_26af58;
        default: break;
    }

    ctx->pc = 0x26af10u;

    // 0x26af10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26af14: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26af14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x26af18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26af1c: 0x244227c8  addiu       $v0, $v0, 0x27C8
    ctx->pc = 0x26af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10184));
    // 0x26af20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26af24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26af24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26af28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26af2c: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x26af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x26af30: 0x8e030280  lw          $v1, 0x280($s0)
    ctx->pc = 0x26af30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
    // 0x26af34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AF34u;
    {
        const bool branch_taken_0x26af34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF34u;
        // 0x26af38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26af34) {
            ctx->pc = 0x26AF4Cu;
            goto label_26af4c;
        }
    }
    ctx->pc = 0x26AF3Cu;
    // 0x26af3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x26af40: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x26af40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af44: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x26AF44u;
    SET_GPR_U32(ctx, 31, 0x26AF4Cu);
    ctx->pc = 0x26AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF44u;
    // 0x26af48: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x26AF44u, 0x26AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF4Cu;
label_26af4c:
    // 0x26af4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26af4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26af50: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x26AF50u;
    SET_GPR_U32(ctx, 31, 0x26AF58u);
    ctx->pc = 0x26AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AF50u;
    // 0x26af54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x26AF50u, 0x26AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AF58u;
label_26af58:
    // 0x26af58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26af58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26af5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26af5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26af60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26af60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26af64: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF64u;
        // 0x26af68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AF6Cu;
    // 0x26af6c: 0x0  nop
    ctx->pc = 0x26af6cu;
    // NOP
    ctx->pc = 0x26af70u;
}
