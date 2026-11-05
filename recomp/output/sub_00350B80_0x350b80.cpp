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

// Function: sub_00350B80
// Address: 0x350b80 - 0x350c18
void sub_00350B80_0x350b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350B80_0x350b80");
#endif

    switch (ctx->pc) {
        case 0x350b98u: goto label_350b98;
        case 0x350ba8u: goto label_350ba8;
        case 0x350bb8u: goto label_350bb8;
        case 0x350bc8u: goto label_350bc8;
        case 0x350bd8u: goto label_350bd8;
        case 0x350be8u: goto label_350be8;
        case 0x350bf0u: goto label_350bf0;
        case 0x350bfcu: goto label_350bfc;
        case 0x350c08u: goto label_350c08;
        default: break;
    }

    ctx->pc = 0x350b80u;

    // 0x350b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350b84: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x350b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x350b88: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x350b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x350b8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350b90: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x350B90u;
    SET_GPR_U32(ctx, 31, 0x350B98u);
    ctx->pc = 0x350B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B90u;
    // 0x350b94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x350B90u, 0x350B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B98u;
label_350b98:
    // 0x350b98: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x350b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350b9c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x350b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x350ba0: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x350BA0u;
    SET_GPR_U32(ctx, 31, 0x350BA8u);
    ctx->pc = 0x350BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BA0u;
    // 0x350ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x350BA0u, 0x350BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BA8u;
label_350ba8:
    // 0x350ba8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x350ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x350bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bb0: 0xc0c8684  jal         func_321A10
    ctx->pc = 0x350BB0u;
    SET_GPR_U32(ctx, 31, 0x350BB8u);
    ctx->pc = 0x350BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BB0u;
    // 0x350bb4: 0x8c64ef18  lw          $a0, -0x10E8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321A10u, 0x350BB0u, 0x350BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BB8u;
label_350bb8:
    // 0x350bb8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x350bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x350bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bc0: 0xc0c7a4c  jal         func_31E930
    ctx->pc = 0x350BC0u;
    SET_GPR_U32(ctx, 31, 0x350BC8u);
    ctx->pc = 0x350BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BC0u;
    // 0x350bc4: 0xac62c8b0  sw          $v0, -0x3750($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E930u, 0x350BC0u, 0x350BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BC8u;
label_350bc8:
    // 0x350bc8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x350bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x350bcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bd0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x350BD0u;
    SET_GPR_U32(ctx, 31, 0x350BD8u);
    ctx->pc = 0x350BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BD0u;
    // 0x350bd4: 0x24a5edf0  addiu       $a1, $a1, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x350BD0u, 0x350BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BD8u;
label_350bd8:
    // 0x350bd8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x350bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x350bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350be0: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x350BE0u;
    SET_GPR_U32(ctx, 31, 0x350BE8u);
    ctx->pc = 0x350BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BE0u;
    // 0x350be4: 0x24a5ef10  addiu       $a1, $a1, -0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x350BE0u, 0x350BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BE8u;
label_350be8:
    // 0x350be8: 0xc0d4802  jal         func_352008
    ctx->pc = 0x350BE8u;
    SET_GPR_U32(ctx, 31, 0x350BF0u);
    ctx->pc = 0x350BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BE8u;
    // 0x350bec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352008u, 0x350BE8u, 0x350BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BF0u;
label_350bf0:
    // 0x350bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350bf4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x350BF4u;
    SET_GPR_U32(ctx, 31, 0x350BFCu);
    ctx->pc = 0x350BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350BF4u;
    // 0x350bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x350BF4u, 0x350BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350BFCu;
label_350bfc:
    // 0x350bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c00: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x350C00u;
    SET_GPR_U32(ctx, 31, 0x350C08u);
    ctx->pc = 0x350C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350C00u;
    // 0x350c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x350C00u, 0x350C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C08u;
label_350c08:
    // 0x350c08: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x350c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350c0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x350c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350c10: 0x3e00008  jr          $ra
    ctx->pc = 0x350C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350C10u;
        // 0x350c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350C18u;
}
