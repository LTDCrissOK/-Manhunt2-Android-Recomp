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

// Function: sub_001452E8
// Address: 0x1452e8 - 0x145330
void sub_001452E8_0x1452e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452E8_0x1452e8");
#endif

    switch (ctx->pc) {
        case 0x14530cu: goto label_14530c;
        case 0x14531cu: goto label_14531c;
        default: break;
    }

    ctx->pc = 0x1452e8u;

    // 0x1452e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1452e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1452ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1452ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1452f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1452f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1452f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1452f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1452f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1452f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452fc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145304: 0xc05158e  jal         func_145638
    ctx->pc = 0x145304u;
    SET_GPR_U32(ctx, 31, 0x14530Cu);
    ctx->pc = 0x145308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145304u;
    // 0x145308: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145638u, 0x145304u, 0x14530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14530Cu;
label_14530c:
    // 0x14530c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145314: 0xc04d88a  jal         func_136228
    ctx->pc = 0x145314u;
    SET_GPR_U32(ctx, 31, 0x14531Cu);
    ctx->pc = 0x145318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145314u;
    // 0x145318: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x145314u, 0x14531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14531Cu;
label_14531c:
    // 0x14531c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14531cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145328: 0x3e00008  jr          $ra
    ctx->pc = 0x145328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145328u;
        // 0x14532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145330u;
}
