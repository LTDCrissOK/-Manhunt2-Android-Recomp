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

// Function: sub_0015A6E0
// Address: 0x15a6e0 - 0x15a730
void sub_0015A6E0_0x15a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A6E0_0x15a6e0");
#endif

    switch (ctx->pc) {
        case 0x15a704u: goto label_15a704;
        case 0x15a710u: goto label_15a710;
        case 0x15a720u: goto label_15a720;
        default: break;
    }

    ctx->pc = 0x15a6e0u;

    // 0x15a6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a6e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15a6e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15a6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6f0: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15a6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
    // 0x15a6f4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15A6F4u;
    {
        const bool branch_taken_0x15a6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a6f4) {
            ctx->pc = 0x15A6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A6F4u;
            // 0x15a6f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A724u;
            goto label_15a724;
        }
    }
    ctx->pc = 0x15A6FCu;
    // 0x15a6fc: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15A6FCu;
    SET_GPR_U32(ctx, 31, 0x15A704u);
    ctx->pc = 0x15A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A6FCu;
    // 0x15a700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15A6FCu, 0x15A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A704u;
label_15a704:
    // 0x15a704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a708: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x15A708u;
    SET_GPR_U32(ctx, 31, 0x15A710u);
    ctx->pc = 0x15A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A708u;
    // 0x15a70c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15A708u, 0x15A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A710u;
label_15a710:
    // 0x15a710: 0xae020b64  sw          $v0, 0xB64($s0)
    ctx->pc = 0x15a710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2916), GPR_U32(ctx, 2));
    // 0x15a714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a718: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15A718u;
    SET_GPR_U32(ctx, 31, 0x15A720u);
    ctx->pc = 0x15A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A718u;
    // 0x15a71c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15A718u, 0x15A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A720u;
label_15a720:
    // 0x15a720: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a724:
    // 0x15a724: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a728: 0x3e00008  jr          $ra
    ctx->pc = 0x15A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A728u;
        // 0x15a72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A730u;
}
