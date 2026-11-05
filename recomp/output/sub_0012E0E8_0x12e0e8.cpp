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

// Function: sub_0012E0E8
// Address: 0x12e0e8 - 0x12e160
void sub_0012E0E8_0x12e0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E0E8_0x12e0e8");
#endif

    switch (ctx->pc) {
        case 0x12e10cu: goto label_12e10c;
        case 0x12e11cu: goto label_12e11c;
        case 0x12e128u: goto label_12e128;
        case 0x12e144u: goto label_12e144;
        default: break;
    }

    ctx->pc = 0x12e0e8u;

    // 0x12e0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e0ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e0f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e0f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e100: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e104: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E104u;
    SET_GPR_U32(ctx, 31, 0x12E10Cu);
    ctx->pc = 0x12E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E104u;
    // 0x12e108: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E104u, 0x12E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E10Cu;
label_12e10c:
    // 0x12e10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e114: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E114u;
    SET_GPR_U32(ctx, 31, 0x12E11Cu);
    ctx->pc = 0x12E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E114u;
    // 0x12e118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E114u, 0x12E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E11Cu;
label_12e11c:
    // 0x12e11c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e120: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E120u;
    SET_GPR_U32(ctx, 31, 0x12E128u);
    ctx->pc = 0x12E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E120u;
    // 0x12e124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E120u, 0x12E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E128u;
label_12e128:
    // 0x12e128: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x12e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12e12c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e130: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x12e130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x12e134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e138: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12e13c: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E13Cu;
    SET_GPR_U32(ctx, 31, 0x12E144u);
    ctx->pc = 0x12E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E13Cu;
    // 0x12e140: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E13Cu, 0x12E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E144u;
label_12e144:
    // 0x12e144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e14c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e14cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e150: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e154: 0x3e00008  jr          $ra
    ctx->pc = 0x12E154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E154u;
        // 0x12e158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E15Cu;
    // 0x12e15c: 0x0  nop
    ctx->pc = 0x12e15cu;
    // NOP
    ctx->pc = 0x12e160u;
}
