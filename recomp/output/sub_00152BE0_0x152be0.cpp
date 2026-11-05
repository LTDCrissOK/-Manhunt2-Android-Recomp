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

// Function: sub_00152BE0
// Address: 0x152be0 - 0x152c28
void sub_00152BE0_0x152be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152BE0_0x152be0");
#endif

    switch (ctx->pc) {
        case 0x152c04u: goto label_152c04;
        case 0x152c14u: goto label_152c14;
        default: break;
    }

    ctx->pc = 0x152be0u;

    // 0x152be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152be4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x152bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bf4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x152bf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152bfc: 0xc054bcc  jal         func_152F30
    ctx->pc = 0x152BFCu;
    SET_GPR_U32(ctx, 31, 0x152C04u);
    ctx->pc = 0x152C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BFCu;
    // 0x152c00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F30u, 0x152BFCu, 0x152C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C04u;
label_152c04:
    // 0x152c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c0c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x152C0Cu;
    SET_GPR_U32(ctx, 31, 0x152C14u);
    ctx->pc = 0x152C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C0Cu;
    // 0x152c10: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x152C0Cu, 0x152C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C14u;
label_152c14:
    // 0x152c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152c20: 0x3e00008  jr          $ra
    ctx->pc = 0x152C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C20u;
        // 0x152c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C28u;
}
