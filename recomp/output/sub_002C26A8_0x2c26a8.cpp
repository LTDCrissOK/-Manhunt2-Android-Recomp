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

// Function: sub_002C26A8
// Address: 0x2c26a8 - 0x2c2730
void sub_002C26A8_0x2c26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C26A8_0x2c26a8");
#endif

    switch (ctx->pc) {
        case 0x2c26ccu: goto label_2c26cc;
        case 0x2c26d8u: goto label_2c26d8;
        case 0x2c26e8u: goto label_2c26e8;
        case 0x2c26f0u: goto label_2c26f0;
        case 0x2c270cu: goto label_2c270c;
        case 0x2c2718u: goto label_2c2718;
        default: break;
    }

    ctx->pc = 0x2c26a8u;

    // 0x2c26a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c26a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c26ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c26b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c26b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c26b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c26b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c26b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c26bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c26c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c26c4: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2C26C4u;
    SET_GPR_U32(ctx, 31, 0x2C26CCu);
    ctx->pc = 0x2C26C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26C4u;
    // 0x2c26c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2C26C4u, 0x2C26CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26CCu;
label_2c26cc:
    // 0x2c26cc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c26ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c26d0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2C26D0u;
    SET_GPR_U32(ctx, 31, 0x2C26D8u);
    ctx->pc = 0x2C26D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26D0u;
    // 0x2c26d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2C26D0u, 0x2C26D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26D8u;
label_2c26d8:
    // 0x2c26d8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2c26d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c26dc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C26DCu;
    {
        const bool branch_taken_0x2c26dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26DCu;
        // 0x2c26e0: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26dc) {
            ctx->pc = 0x2C2704u;
            goto label_2c2704;
        }
    }
    ctx->pc = 0x2C26E4u;
    // 0x2c26e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c26e8:
    // 0x2c26e8: 0xc0b0e42  jal         func_2C3908
    ctx->pc = 0x2C26E8u;
    SET_GPR_U32(ctx, 31, 0x2C26F0u);
    ctx->pc = 0x2C26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26E8u;
    // 0x2c26ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3908u, 0x2C26E8u, 0x2C26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26F0u;
label_2c26f0:
    // 0x2c26f0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c26f4: 0x0  nop
    ctx->pc = 0x2c26f4u;
    // NOP
    // 0x2c26f8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C26F8u;
    {
        const bool branch_taken_0x2c26f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26F8u;
        // 0x2c26fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26f8) {
            ctx->pc = 0x2C26E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c26e8;
        }
    }
    ctx->pc = 0x2C2700u;
    // 0x2c2700: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c2700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c2704:
    // 0x2c2704: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2C2704u;
    SET_GPR_U32(ctx, 31, 0x2C270Cu);
    ctx->pc = 0x2C2708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2704u;
    // 0x2c2708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2C2704u, 0x2C270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C270Cu;
label_2c270c:
    // 0x2c270c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2710: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x2C2710u;
    SET_GPR_U32(ctx, 31, 0x2C2718u);
    ctx->pc = 0x2C2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2710u;
    // 0x2c2714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x2C2710u, 0x2C2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2718u;
label_2c2718:
    // 0x2c2718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c2718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c271c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c271cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c2720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c2720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2724: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2724u;
        // 0x2c2728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C272Cu;
    // 0x2c272c: 0x0  nop
    ctx->pc = 0x2c272cu;
    // NOP
    ctx->pc = 0x2c2730u;
}
