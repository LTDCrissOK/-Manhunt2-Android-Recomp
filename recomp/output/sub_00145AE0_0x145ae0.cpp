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

// Function: sub_00145AE0
// Address: 0x145ae0 - 0x145b28
void sub_00145AE0_0x145ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145AE0_0x145ae0");
#endif

    switch (ctx->pc) {
        case 0x145b04u: goto label_145b04;
        case 0x145b14u: goto label_145b14;
        default: break;
    }

    ctx->pc = 0x145ae0u;

    // 0x145ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145ae4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x145ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x145aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x145af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145af4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x145af4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145afc: 0xc051744  jal         func_145D10
    ctx->pc = 0x145AFCu;
    SET_GPR_U32(ctx, 31, 0x145B04u);
    ctx->pc = 0x145B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145AFCu;
    // 0x145b00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D10u, 0x145AFCu, 0x145B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B04u;
label_145b04:
    // 0x145b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b0c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x145B0Cu;
    SET_GPR_U32(ctx, 31, 0x145B14u);
    ctx->pc = 0x145B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145B0Cu;
    // 0x145b10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x145B0Cu, 0x145B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145B14u;
label_145b14:
    // 0x145b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145b20: 0x3e00008  jr          $ra
    ctx->pc = 0x145B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B20u;
        // 0x145b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145B28u;
}
