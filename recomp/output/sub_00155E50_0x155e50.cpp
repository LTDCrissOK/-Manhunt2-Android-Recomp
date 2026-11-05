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

// Function: sub_00155E50
// Address: 0x155e50 - 0x155e98
void sub_00155E50_0x155e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155E50_0x155e50");
#endif

    switch (ctx->pc) {
        case 0x155e74u: goto label_155e74;
        case 0x155e84u: goto label_155e84;
        default: break;
    }

    ctx->pc = 0x155e50u;

    // 0x155e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155e54: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x155e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155e58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x155e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x155e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x155e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x155e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e64: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x155e64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x155e68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155e6c: 0xc055950  jal         func_156540
    ctx->pc = 0x155E6Cu;
    SET_GPR_U32(ctx, 31, 0x155E74u);
    ctx->pc = 0x155E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E6Cu;
    // 0x155e70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x155E6Cu, 0x155E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E74u;
label_155e74:
    // 0x155e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x155e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155e7c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x155E7Cu;
    SET_GPR_U32(ctx, 31, 0x155E84u);
    ctx->pc = 0x155E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155E7Cu;
    // 0x155e80: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x155E7Cu, 0x155E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155E84u;
label_155e84:
    // 0x155e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x155e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x155e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155e90: 0x3e00008  jr          $ra
    ctx->pc = 0x155E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155E90u;
        // 0x155e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155E98u;
}
