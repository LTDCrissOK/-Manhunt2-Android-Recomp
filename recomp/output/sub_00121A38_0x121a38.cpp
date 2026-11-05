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

// Function: sub_00121A38
// Address: 0x121a38 - 0x121aa8
void sub_00121A38_0x121a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121A38_0x121a38");
#endif

    switch (ctx->pc) {
        case 0x121a60u: goto label_121a60;
        case 0x121a70u: goto label_121a70;
        case 0x121a84u: goto label_121a84;
        default: break;
    }

    ctx->pc = 0x121a38u;

    // 0x121a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121a40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121a44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121a54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a58: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121A58u;
    SET_GPR_U32(ctx, 31, 0x121A60u);
    ctx->pc = 0x121A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A58u;
    // 0x121a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121A58u, 0x121A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A60u;
label_121a60:
    // 0x121a60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121A60u;
    {
        const bool branch_taken_0x121a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A60u;
        // 0x121a64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a60) {
            ctx->pc = 0x121A90u;
            goto label_121a90;
        }
    }
    ctx->pc = 0x121A68u;
    // 0x121a68: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121A68u;
    SET_GPR_U32(ctx, 31, 0x121A70u);
    ctx->pc = 0x121A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A68u;
    // 0x121a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121A68u, 0x121A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A70u;
label_121a70:
    // 0x121a70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121A70u;
    {
        const bool branch_taken_0x121a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A70u;
        // 0x121a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a70) {
            ctx->pc = 0x121A8Cu;
            goto label_121a8c;
        }
    }
    ctx->pc = 0x121A78u;
    // 0x121a78: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x121a7c: 0xc04267a  jal         func_1099E8
    ctx->pc = 0x121A7Cu;
    SET_GPR_U32(ctx, 31, 0x121A84u);
    ctx->pc = 0x121A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A7Cu;
    // 0x121a80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1099E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1099E8u, 0x121A7Cu, 0x121A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A84u;
label_121a84:
    // 0x121a84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121A84u;
    {
        const bool branch_taken_0x121a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A84u;
        // 0x121a88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a84) {
            ctx->pc = 0x121A94u;
            goto label_121a94;
        }
    }
    ctx->pc = 0x121A8Cu;
label_121a8c:
    // 0x121a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121a90:
    // 0x121a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121a94:
    // 0x121a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121a9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x121a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x121AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AA0u;
        // 0x121aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121AA8u;
}
