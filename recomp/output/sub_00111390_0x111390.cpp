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

// Function: sub_00111390
// Address: 0x111390 - 0x111408
void sub_00111390_0x111390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111390_0x111390");
#endif

    switch (ctx->pc) {
        case 0x1113a8u: goto label_1113a8;
        case 0x1113bcu: goto label_1113bc;
        case 0x1113ccu: goto label_1113cc;
        case 0x1113dcu: goto label_1113dc;
        case 0x1113f0u: goto label_1113f0;
        default: break;
    }

    ctx->pc = 0x111390u;

    // 0x111390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x111394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11139c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1113a0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1113A0u;
    SET_GPR_U32(ctx, 31, 0x1113A8u);
    ctx->pc = 0x1113A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113A0u;
    // 0x1113a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1113A0u, 0x1113A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113A8u;
label_1113a8:
    // 0x1113a8: 0x8e050290  lw          $a1, 0x290($s0)
    ctx->pc = 0x1113a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1113ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1113ACu;
    {
        const bool branch_taken_0x1113ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113ac) {
            ctx->pc = 0x1113D4u;
            goto label_1113d4;
        }
    }
    ctx->pc = 0x1113B4u;
    // 0x1113b4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1113B4u;
    SET_GPR_U32(ctx, 31, 0x1113BCu);
    ctx->pc = 0x1113B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113B4u;
    // 0x1113b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1113B4u, 0x1113BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113BCu;
label_1113bc:
    // 0x1113bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1113BCu;
    {
        const bool branch_taken_0x1113bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1113C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113BCu;
        // 0x1113c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113bc) {
            ctx->pc = 0x1113D4u;
            goto label_1113d4;
        }
    }
    ctx->pc = 0x1113C4u;
    // 0x1113c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1113C4u;
    SET_GPR_U32(ctx, 31, 0x1113CCu);
    ctx->pc = 0x1113C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C4u;
    // 0x1113c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1113C4u, 0x1113CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113CCu;
label_1113cc:
    // 0x1113cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1113CCu;
    {
        const bool branch_taken_0x1113cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1113D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113CCu;
        // 0x1113d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113cc) {
            ctx->pc = 0x1113F4u;
            goto label_1113f4;
        }
    }
    ctx->pc = 0x1113D4u;
label_1113d4:
    // 0x1113d4: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x1113D4u;
    SET_GPR_U32(ctx, 31, 0x1113DCu);
    ctx->pc = 0x1113D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113D4u;
    // 0x1113d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x1113D4u, 0x1113DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113DCu;
label_1113dc:
    // 0x1113dc: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x1113dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x1113e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1113e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1113e4: 0xae020290  sw          $v0, 0x290($s0)
    ctx->pc = 0x1113e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 2));
    // 0x1113e8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1113E8u;
    SET_GPR_U32(ctx, 31, 0x1113F0u);
    ctx->pc = 0x1113ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113E8u;
    // 0x1113ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1113E8u, 0x1113F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113F0u;
label_1113f0:
    // 0x1113f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1113f4:
    // 0x1113f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1113f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1113f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1113f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1113fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1113FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113FCu;
        // 0x111400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1113FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111404u;
    // 0x111404: 0x0  nop
    ctx->pc = 0x111404u;
    // NOP
    ctx->pc = 0x111408u;
}
