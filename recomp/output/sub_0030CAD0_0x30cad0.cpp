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

// Function: sub_0030CAD0
// Address: 0x30cad0 - 0x30cb10
void sub_0030CAD0_0x30cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CAD0_0x30cad0");
#endif

    switch (ctx->pc) {
        case 0x30caecu: goto label_30caec;
        case 0x30cafcu: goto label_30cafc;
        default: break;
    }

    ctx->pc = 0x30cad0u;

    // 0x30cad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30cadc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30cadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cae0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30cae4: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x30CAE4u;
    SET_GPR_U32(ctx, 31, 0x30CAECu);
    ctx->pc = 0x30CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAE4u;
    // 0x30cae8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x30CAE4u, 0x30CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAECu;
label_30caec:
    // 0x30caec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30caecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30caf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30caf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30caf4: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x30CAF4u;
    SET_GPR_U32(ctx, 31, 0x30CAFCu);
    ctx->pc = 0x30CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CAF4u;
    // 0x30caf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x30CAF4u, 0x30CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CAFCu;
label_30cafc:
    // 0x30cafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cb00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cb04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30cb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cb08: 0x3e00008  jr          $ra
    ctx->pc = 0x30CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB08u;
        // 0x30cb0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CB10u;
}
