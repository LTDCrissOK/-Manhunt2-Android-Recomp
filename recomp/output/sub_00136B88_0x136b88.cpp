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

// Function: sub_00136B88
// Address: 0x136b88 - 0x136c08
void sub_00136B88_0x136b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136B88_0x136b88");
#endif

    switch (ctx->pc) {
        case 0x136bb4u: goto label_136bb4;
        case 0x136bd4u: goto label_136bd4;
        case 0x136be0u: goto label_136be0;
        case 0x136becu: goto label_136bec;
        default: break;
    }

    ctx->pc = 0x136b88u;

    // 0x136b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136b8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136b9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x136b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ba0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136ba4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x136ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136bac: 0xc04daae  jal         func_136AB8
    ctx->pc = 0x136BACu;
    SET_GPR_U32(ctx, 31, 0x136BB4u);
    ctx->pc = 0x136BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BACu;
    // 0x136bb0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AB8u, 0x136BACu, 0x136BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BB4u;
label_136bb4:
    // 0x136bb4: 0x8e230464  lw          $v1, 0x464($s1)
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
    // 0x136bb8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x136bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bc0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x136bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bc4: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x136bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bcc: 0xc04243a  jal         func_1090E8
    ctx->pc = 0x136BCCu;
    SET_GPR_U32(ctx, 31, 0x136BD4u);
    ctx->pc = 0x136BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BCCu;
    // 0x136bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090E8u, 0x136BCCu, 0x136BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BD4u;
label_136bd4:
    // 0x136bd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x136bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136bd8: 0xc04244a  jal         func_109128
    ctx->pc = 0x136BD8u;
    SET_GPR_U32(ctx, 31, 0x136BE0u);
    ctx->pc = 0x136BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BD8u;
    // 0x136bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109128u, 0x136BD8u, 0x136BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BE0u;
label_136be0:
    // 0x136be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136be4: 0xc04db0e  jal         func_136C38
    ctx->pc = 0x136BE4u;
    SET_GPR_U32(ctx, 31, 0x136BECu);
    ctx->pc = 0x136BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BE4u;
    // 0x136be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C38u, 0x136BE4u, 0x136BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BECu;
label_136bec:
    // 0x136bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136bf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136c00: 0x3e00008  jr          $ra
    ctx->pc = 0x136C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C00u;
        // 0x136c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136C08u;
}
