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

// Function: sub_0010F9D8
// Address: 0x10f9d8 - 0x10fa28
void sub_0010F9D8_0x10f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F9D8_0x10f9d8");
#endif

    switch (ctx->pc) {
        case 0x10f9f4u: goto label_10f9f4;
        case 0x10fa04u: goto label_10fa04;
        default: break;
    }

    ctx->pc = 0x10f9d8u;

    // 0x10f9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f9dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f9e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f9ec: 0xc043f14  jal         func_10FC50
    ctx->pc = 0x10F9ECu;
    SET_GPR_U32(ctx, 31, 0x10F9F4u);
    ctx->pc = 0x10F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9ECu;
    // 0x10f9f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC50u, 0x10F9ECu, 0x10F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9F4u;
label_10f9f4:
    // 0x10f9f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F9F4u;
    {
        const bool branch_taken_0x10f9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9F4u;
        // 0x10f9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9f4) {
            ctx->pc = 0x10FA0Cu;
            goto label_10fa0c;
        }
    }
    ctx->pc = 0x10F9FCu;
    // 0x10f9fc: 0xc043e8a  jal         func_10FA28
    ctx->pc = 0x10F9FCu;
    SET_GPR_U32(ctx, 31, 0x10FA04u);
    ctx->pc = 0x10FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F9FCu;
    // 0x10fa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA28u, 0x10F9FCu, 0x10FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FA04u;
label_10fa04:
    // 0x10fa04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10FA04u;
    {
        const bool branch_taken_0x10fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA04u;
        // 0x10fa08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa04) {
            ctx->pc = 0x10FA18u;
            goto label_10fa18;
        }
    }
    ctx->pc = 0x10FA0Cu;
label_10fa0c:
    // 0x10fa0c: 0xae110200  sw          $s1, 0x200($s0)
    ctx->pc = 0x10fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 17));
    // 0x10fa10: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x10fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x10fa14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fa14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10fa18:
    // 0x10fa18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10fa18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10fa1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10fa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fa20: 0x3e00008  jr          $ra
    ctx->pc = 0x10FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA20u;
        // 0x10fa24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FA28u;
}
