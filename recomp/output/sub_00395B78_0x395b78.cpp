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

// Function: sub_00395B78
// Address: 0x395b78 - 0x395c08
void sub_00395B78_0x395b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395B78_0x395b78");
#endif

    switch (ctx->pc) {
        case 0x395bb4u: goto label_395bb4;
        case 0x395bd4u: goto label_395bd4;
        case 0x395bdcu: goto label_395bdc;
        default: break;
    }

    ctx->pc = 0x395b78u;

    // 0x395b78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x395b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x395b7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x395b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x395b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395b84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x395b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x395b88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x395b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395b8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x395b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x395b90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x395b90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395b94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x395b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x395b98: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x395b98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395b9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x395b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x395ba0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x395ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395ba4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x395ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x395ba8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x395ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x395bac: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395BACu;
    SET_GPR_U32(ctx, 31, 0x395BB4u);
    ctx->pc = 0x395BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395BACu;
    // 0x395bb0: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395BACu, 0x395BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395BB4u;
label_395bb4:
    // 0x395bb4: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x395bb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x395bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x395bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bc4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x395bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bc8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x395bc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bcc: 0xc0e5702  jal         func_395C08
    ctx->pc = 0x395BCCu;
    SET_GPR_U32(ctx, 31, 0x395BD4u);
    ctx->pc = 0x395BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395BCCu;
    // 0x395bd0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395C08u, 0x395BCCu, 0x395BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395BD4u;
label_395bd4:
    // 0x395bd4: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395BD4u;
    SET_GPR_U32(ctx, 31, 0x395BDCu);
    ctx->pc = 0x395BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395BD4u;
    // 0x395bd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395BD4u, 0x395BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395BDCu;
label_395bdc:
    // 0x395bdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x395bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395be0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395be4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x395be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395be8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x395be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395bec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x395becu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x395bf0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x395bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395bf4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x395bf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x395bf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x395bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x395bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x395BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BFCu;
        // 0x395c00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395C04u;
    // 0x395c04: 0x0  nop
    ctx->pc = 0x395c04u;
    // NOP
    ctx->pc = 0x395c08u;
}
