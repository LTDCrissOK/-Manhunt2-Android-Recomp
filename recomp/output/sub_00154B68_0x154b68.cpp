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

// Function: sub_00154B68
// Address: 0x154b68 - 0x154bf0
void sub_00154B68_0x154b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154B68_0x154b68");
#endif

    switch (ctx->pc) {
        case 0x154ba0u: goto label_154ba0;
        case 0x154bacu: goto label_154bac;
        case 0x154bc0u: goto label_154bc0;
        case 0x154bd4u: goto label_154bd4;
        default: break;
    }

    ctx->pc = 0x154b68u;

    // 0x154b68: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x154b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x154b6c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x154b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154b70: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x154b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x154b74: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154b78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154b7c: 0x248404f4  addiu       $a0, $a0, 0x4F4
    ctx->pc = 0x154b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1268));
    // 0x154b80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154b84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x154b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154b88: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x154b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154b8c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154b90: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x154B90u;
    {
        const bool branch_taken_0x154b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B90u;
        // 0x154b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b90) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154B98u;
    // 0x154b98: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154B98u;
    SET_GPR_U32(ctx, 31, 0x154BA0u);
    ctx->pc = 0x154B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B98u;
    // 0x154b9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154B98u, 0x154BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BA0u;
label_154ba0:
    // 0x154ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ba4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x154BA4u;
    SET_GPR_U32(ctx, 31, 0x154BACu);
    ctx->pc = 0x154BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BA4u;
    // 0x154ba8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x154BA4u, 0x154BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BACu;
label_154bac:
    // 0x154bac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x154BACu;
    {
        const bool branch_taken_0x154bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154bac) {
            ctx->pc = 0x154BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154BACu;
            // 0x154bb0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154BC8u;
            goto label_154bc8;
        }
    }
    ctx->pc = 0x154BB4u;
    // 0x154bb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bb8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154BB8u;
    SET_GPR_U32(ctx, 31, 0x154BC0u);
    ctx->pc = 0x154BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BB8u;
    // 0x154bbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154BB8u, 0x154BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BC0u;
label_154bc0:
    // 0x154bc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154BC0u;
    {
        const bool branch_taken_0x154bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC0u;
        // 0x154bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bc0) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BC8u;
label_154bc8:
    // 0x154bc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x154bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bcc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154BCCu;
    SET_GPR_U32(ctx, 31, 0x154BD4u);
    ctx->pc = 0x154BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154BCCu;
    // 0x154bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154BCCu, 0x154BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154BD4u;
label_154bd4:
    // 0x154bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154bd8:
    // 0x154bd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154bdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x154bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154be0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154be4: 0x3e00008  jr          $ra
    ctx->pc = 0x154BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BE4u;
        // 0x154be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154BECu;
    // 0x154bec: 0x0  nop
    ctx->pc = 0x154becu;
    // NOP
    ctx->pc = 0x154bf0u;
}
