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

// Function: sub_0014EC30
// Address: 0x14ec30 - 0x14ec98
void sub_0014EC30_0x14ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EC30_0x14ec30");
#endif

    switch (ctx->pc) {
        case 0x14ec68u: goto label_14ec68;
        case 0x14ec74u: goto label_14ec74;
        case 0x14ec84u: goto label_14ec84;
        default: break;
    }

    ctx->pc = 0x14ec30u;

    // 0x14ec30: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ec34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14ec34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ec38: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14ec38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14ec3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ec40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ec44: 0x248404e4  addiu       $a0, $a0, 0x4E4
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1252));
    // 0x14ec48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ec4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ec50: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x14ec50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14ec54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ec58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EC58u;
    {
        const bool branch_taken_0x14ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC58u;
        // 0x14ec5c: 0x30d1ffff  andi        $s1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec58) {
            ctx->pc = 0x14EC84u;
            goto label_14ec84;
        }
    }
    ctx->pc = 0x14EC60u;
    // 0x14ec60: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EC60u;
    SET_GPR_U32(ctx, 31, 0x14EC68u);
    ctx->pc = 0x14EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC60u;
    // 0x14ec64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EC60u, 0x14EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC68u;
label_14ec68:
    // 0x14ec68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ec68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec6c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14EC6Cu;
    SET_GPR_U32(ctx, 31, 0x14EC74u);
    ctx->pc = 0x14EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC6Cu;
    // 0x14ec70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14EC6Cu, 0x14EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC74u;
label_14ec74:
    // 0x14ec74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14ec78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ec7c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EC7Cu;
    SET_GPR_U32(ctx, 31, 0x14EC84u);
    ctx->pc = 0x14EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC7Cu;
    // 0x14ec80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EC7Cu, 0x14EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC84u;
label_14ec84:
    // 0x14ec84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14ec84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ec88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14ec88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ec8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x14EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC90u;
        // 0x14ec94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EC98u;
}
