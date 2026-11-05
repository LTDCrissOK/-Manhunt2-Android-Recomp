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

// Function: sub_0012FB40
// Address: 0x12fb40 - 0x12fbb8
void sub_0012FB40_0x12fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FB40_0x12fb40");
#endif

    switch (ctx->pc) {
        case 0x12fb5cu: goto label_12fb5c;
        case 0x12fb68u: goto label_12fb68;
        case 0x12fb94u: goto label_12fb94;
        case 0x12fba4u: goto label_12fba4;
        default: break;
    }

    ctx->pc = 0x12fb40u;

    // 0x12fb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12fb44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12fb48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12fb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12fb50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12fb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12fb54: 0xc046144  jal         func_118510
    ctx->pc = 0x12FB54u;
    SET_GPR_U32(ctx, 31, 0x12FB5Cu);
    ctx->pc = 0x12FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB54u;
    // 0x12fb58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12FB54u, 0x12FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB5Cu;
label_12fb5c:
    // 0x12fb5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12fb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb60: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12FB60u;
    SET_GPR_U32(ctx, 31, 0x12FB68u);
    ctx->pc = 0x12FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB60u;
    // 0x12fb64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12FB60u, 0x12FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB68u;
label_12fb68:
    // 0x12fb68: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x12fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12fb6c: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12FB6Cu;
    {
        const bool branch_taken_0x12fb6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB6Cu;
        // 0x12fb70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb6c) {
            ctx->pc = 0x12FB9Cu;
            goto label_12fb9c;
        }
    }
    ctx->pc = 0x12FB74u;
    // 0x12fb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fb78: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x12fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x12fb7c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12fb80: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12fb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12fb84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x12fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x12fb88: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x12fb8c: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x12FB8Cu;
    SET_GPR_U32(ctx, 31, 0x12FB94u);
    ctx->pc = 0x12FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB8Cu;
    // 0x12fb90: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x12FB8Cu, 0x12FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB94u;
label_12fb94:
    // 0x12fb94: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x12fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x12fb98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12fb9c:
    // 0x12fb9c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12FB9Cu;
    SET_GPR_U32(ctx, 31, 0x12FBA4u);
    ctx->pc = 0x12FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FB9Cu;
    // 0x12fba0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12FB9Cu, 0x12FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBA4u;
label_12fba4:
    // 0x12fba4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12fba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fba8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12fba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12fbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x12FBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBB0u;
        // 0x12fbb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FBB8u;
}
