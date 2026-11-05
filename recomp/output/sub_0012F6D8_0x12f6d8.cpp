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

// Function: sub_0012F6D8
// Address: 0x12f6d8 - 0x12f748
void sub_0012F6D8_0x12f6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F6D8_0x12f6d8");
#endif

    switch (ctx->pc) {
        case 0x12f6fcu: goto label_12f6fc;
        case 0x12f70cu: goto label_12f70c;
        case 0x12f714u: goto label_12f714;
        case 0x12f720u: goto label_12f720;
        case 0x12f730u: goto label_12f730;
        default: break;
    }

    ctx->pc = 0x12f6d8u;

    // 0x12f6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f6dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f6e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f6e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f6e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f6f4: 0xc04be06  jal         func_12F818
    ctx->pc = 0x12F6F4u;
    SET_GPR_U32(ctx, 31, 0x12F6FCu);
    ctx->pc = 0x12F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6F4u;
    // 0x12f6f8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F818u, 0x12F6F4u, 0x12F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6FCu;
label_12f6fc:
    // 0x12f6fc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12F6FCu;
    {
        const bool branch_taken_0x12f6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6fc) {
            ctx->pc = 0x12F700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F6FCu;
            // 0x12f700: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F734u;
            goto label_12f734;
        }
    }
    ctx->pc = 0x12F704u;
    // 0x12f704: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F704u;
    SET_GPR_U32(ctx, 31, 0x12F70Cu);
    ctx->pc = 0x12F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F704u;
    // 0x12f708: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F704u, 0x12F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F70Cu;
label_12f70c:
    // 0x12f70c: 0xc046272  jal         func_1189C8
    ctx->pc = 0x12F70Cu;
    SET_GPR_U32(ctx, 31, 0x12F714u);
    ctx->pc = 0x12F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F70Cu;
    // 0x12f710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x12F70Cu, 0x12F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F714u;
label_12f714:
    // 0x12f714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f718: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x12F718u;
    SET_GPR_U32(ctx, 31, 0x12F720u);
    ctx->pc = 0x12F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F718u;
    // 0x12f71c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x12F718u, 0x12F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F720u;
label_12f720:
    // 0x12f720: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x12f720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x12f724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f728: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F728u;
    SET_GPR_U32(ctx, 31, 0x12F730u);
    ctx->pc = 0x12F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F728u;
    // 0x12f72c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F728u, 0x12F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F730u;
label_12f730:
    // 0x12f730: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12f730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f734:
    // 0x12f734: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12f734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F73Cu;
        // 0x12f740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F744u;
    // 0x12f744: 0x0  nop
    ctx->pc = 0x12f744u;
    // NOP
    ctx->pc = 0x12f748u;
}
