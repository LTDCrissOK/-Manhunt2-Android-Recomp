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

// Function: sub_00153368
// Address: 0x153368 - 0x1533b0
void sub_00153368_0x153368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153368_0x153368");
#endif

    switch (ctx->pc) {
        case 0x15338cu: goto label_15338c;
        case 0x15339cu: goto label_15339c;
        default: break;
    }

    ctx->pc = 0x153368u;

    // 0x153368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15336c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x153370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x153370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x153374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x153378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15337c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15337cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x153380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153384: 0xc0551e4  jal         func_154790
    ctx->pc = 0x153384u;
    SET_GPR_U32(ctx, 31, 0x15338Cu);
    ctx->pc = 0x153388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153384u;
    // 0x153388: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x153384u, 0x15338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15338Cu;
label_15338c:
    // 0x15338c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x153390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153394: 0xc04d88a  jal         func_136228
    ctx->pc = 0x153394u;
    SET_GPR_U32(ctx, 31, 0x15339Cu);
    ctx->pc = 0x153398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153394u;
    // 0x153398: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x153394u, 0x15339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15339Cu;
label_15339c:
    // 0x15339c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15339cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1533a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1533a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1533a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1533a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1533a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1533A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1533ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533A8u;
        // 0x1533ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1533A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1533B0u;
}
