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

// Function: sub_0014B108
// Address: 0x14b108 - 0x14b158
void sub_0014B108_0x14b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B108_0x14b108");
#endif

    switch (ctx->pc) {
        case 0x14b120u: goto label_14b120;
        case 0x14b12cu: goto label_14b12c;
        case 0x14b13cu: goto label_14b13c;
        case 0x14b148u: goto label_14b148;
        default: break;
    }

    ctx->pc = 0x14b108u;

    // 0x14b108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b10c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14b110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b114: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b118: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14B118u;
    SET_GPR_U32(ctx, 31, 0x14B120u);
    ctx->pc = 0x14B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B118u;
    // 0x14b11c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14B118u, 0x14B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B120u;
label_14b120:
    // 0x14b120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b124: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14B124u;
    SET_GPR_U32(ctx, 31, 0x14B12Cu);
    ctx->pc = 0x14B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B124u;
    // 0x14b128: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14B124u, 0x14B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B12Cu;
label_14b12c:
    // 0x14b12c: 0xae02059c  sw          $v0, 0x59C($s0)
    ctx->pc = 0x14b12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 2));
    // 0x14b130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b134: 0xc052d4e  jal         func_14B538
    ctx->pc = 0x14B134u;
    SET_GPR_U32(ctx, 31, 0x14B13Cu);
    ctx->pc = 0x14B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B134u;
    // 0x14b138: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B538u, 0x14B134u, 0x14B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B13Cu;
label_14b13c:
    // 0x14b13c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b140: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14B140u;
    SET_GPR_U32(ctx, 31, 0x14B148u);
    ctx->pc = 0x14B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B140u;
    // 0x14b144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14B140u, 0x14B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B148u;
label_14b148:
    // 0x14b148: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14b148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b14c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b150: 0x3e00008  jr          $ra
    ctx->pc = 0x14B150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B150u;
        // 0x14b154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B158u;
}
