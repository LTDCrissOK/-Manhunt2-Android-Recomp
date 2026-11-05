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

// Function: sub_00113A40
// Address: 0x113a40 - 0x113ad0
void sub_00113A40_0x113a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113A40_0x113a40");
#endif

    switch (ctx->pc) {
        case 0x113a70u: goto label_113a70;
        case 0x113a84u: goto label_113a84;
        case 0x113a90u: goto label_113a90;
        case 0x113a9cu: goto label_113a9c;
        case 0x113aacu: goto label_113aac;
        default: break;
    }

    ctx->pc = 0x113a40u;

    // 0x113a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113a44: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x113a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x113a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x113a4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x113a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113a54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x113a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x113a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x113a5c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113a64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x113a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x113a68: 0xc0449c8  jal         func_112720
    ctx->pc = 0x113A68u;
    SET_GPR_U32(ctx, 31, 0x113A70u);
    ctx->pc = 0x113A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A68u;
    // 0x113a6c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x113A68u, 0x113A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A70u;
label_113a70:
    // 0x113a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x113a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x113a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a7c: 0xc045612  jal         func_115848
    ctx->pc = 0x113A7Cu;
    SET_GPR_U32(ctx, 31, 0x113A84u);
    ctx->pc = 0x113A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A7Cu;
    // 0x113a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x113A7Cu, 0x113A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A84u;
label_113a84:
    // 0x113a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a88: 0xc045668  jal         func_1159A0
    ctx->pc = 0x113A88u;
    SET_GPR_U32(ctx, 31, 0x113A90u);
    ctx->pc = 0x113A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A88u;
    // 0x113a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x113A88u, 0x113A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A90u;
label_113a90:
    // 0x113a90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a94: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x113A94u;
    SET_GPR_U32(ctx, 31, 0x113A9Cu);
    ctx->pc = 0x113A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A94u;
    // 0x113a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x113A94u, 0x113A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A9Cu;
label_113a9c:
    // 0x113a9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x113a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113aa4: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x113AA4u;
    SET_GPR_U32(ctx, 31, 0x113AACu);
    ctx->pc = 0x113AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AA4u;
    // 0x113aa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x113AA4u, 0x113AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AACu;
label_113aac:
    // 0x113aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x113ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x113ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ab8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113abc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x113abcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ac0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x113ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x113AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AC4u;
        // 0x113ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113ACCu;
    // 0x113acc: 0x0  nop
    ctx->pc = 0x113accu;
    // NOP
    ctx->pc = 0x113ad0u;
}
