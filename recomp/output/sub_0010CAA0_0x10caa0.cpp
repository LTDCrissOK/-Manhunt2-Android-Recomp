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

// Function: sub_0010CAA0
// Address: 0x10caa0 - 0x10cb08
void sub_0010CAA0_0x10caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CAA0_0x10caa0");
#endif

    switch (ctx->pc) {
        case 0x10caccu: goto label_10cacc;
        case 0x10cadcu: goto label_10cadc;
        case 0x10caecu: goto label_10caec;
        default: break;
    }

    ctx->pc = 0x10caa0u;

    // 0x10caa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10caa4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10caa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10caac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10cab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cabc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10cabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cac0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cac4: 0xc04339c  jal         func_10CE70
    ctx->pc = 0x10CAC4u;
    SET_GPR_U32(ctx, 31, 0x10CACCu);
    ctx->pc = 0x10CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAC4u;
    // 0x10cac8: 0x8c50bd50  lw          $s0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE70u, 0x10CAC4u, 0x10CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CACCu;
label_10cacc:
    // 0x10cacc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10caccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cad4: 0xc043732  jal         func_10DCC8
    ctx->pc = 0x10CAD4u;
    SET_GPR_U32(ctx, 31, 0x10CADCu);
    ctx->pc = 0x10CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAD4u;
    // 0x10cad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCC8u, 0x10CAD4u, 0x10CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CADCu;
label_10cadc:
    // 0x10cadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cae0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10cae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cae4: 0xc0432f4  jal         func_10CBD0
    ctx->pc = 0x10CAE4u;
    SET_GPR_U32(ctx, 31, 0x10CAECu);
    ctx->pc = 0x10CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAE4u;
    // 0x10cae8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBD0u, 0x10CAE4u, 0x10CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAECu;
label_10caec:
    // 0x10caec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10caecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10caf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10caf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10caf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10caf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10caf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10caf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10cafc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB00u;
        // 0x10cb04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB08u;
}
