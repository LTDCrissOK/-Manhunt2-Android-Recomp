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

// Function: sub_00236EF0
// Address: 0x236ef0 - 0x236f60
void sub_00236EF0_0x236ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236EF0_0x236ef0");
#endif

    switch (ctx->pc) {
        case 0x236ef0u: goto label_236ef0;
        case 0x236ef4u: goto label_236ef4;
        case 0x236ef8u: goto label_236ef8;
        case 0x236efcu: goto label_236efc;
        case 0x236f00u: goto label_236f00;
        case 0x236f04u: goto label_236f04;
        case 0x236f08u: goto label_236f08;
        case 0x236f0cu: goto label_236f0c;
        case 0x236f10u: goto label_236f10;
        case 0x236f14u: goto label_236f14;
        case 0x236f18u: goto label_236f18;
        case 0x236f1cu: goto label_236f1c;
        case 0x236f20u: goto label_236f20;
        case 0x236f24u: goto label_236f24;
        case 0x236f28u: goto label_236f28;
        case 0x236f2cu: goto label_236f2c;
        case 0x236f30u: goto label_236f30;
        case 0x236f34u: goto label_236f34;
        case 0x236f38u: goto label_236f38;
        case 0x236f3cu: goto label_236f3c;
        case 0x236f40u: goto label_236f40;
        case 0x236f44u: goto label_236f44;
        case 0x236f48u: goto label_236f48;
        case 0x236f4cu: goto label_236f4c;
        case 0x236f50u: goto label_236f50;
        case 0x236f54u: goto label_236f54;
        case 0x236f58u: goto label_236f58;
        case 0x236f5cu: goto label_236f5c;
        default: break;
    }

    ctx->pc = 0x236ef0u;

label_236ef0:
    // 0x236ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x236ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_236ef4:
    // 0x236ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236ef8:
    // 0x236ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236efc:
    // 0x236efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x236efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236f00:
    // 0x236f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x236f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_236f04:
    // 0x236f04: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x236f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_236f08:
    // 0x236f08: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x236f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_236f0c:
    // 0x236f0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_236f10:
    if (ctx->pc == 0x236F10u) {
        ctx->pc = 0x236F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F0Cu;
        // 0x236f10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F14u;
        goto label_236f14;
    }
    ctx->pc = 0x236F0Cu;
    {
        const bool branch_taken_0x236f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F0Cu;
        // 0x236f10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f0c) {
            ctx->pc = 0x236F4Cu;
            goto label_236f4c;
        }
    }
    ctx->pc = 0x236F14u;
label_236f14:
    // 0x236f14: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x236f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
label_236f18:
    // 0x236f18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x236f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_236f1c:
    // 0x236f1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x236f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_236f20:
    // 0x236f20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x236f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_236f24:
    // 0x236f24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x236f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_236f28:
    // 0x236f28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_236f2c:
    if (ctx->pc == 0x236F2Cu) {
        ctx->pc = 0x236F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F28u;
        // 0x236f2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F30u;
        goto label_236f30;
    }
    ctx->pc = 0x236F28u;
    {
        const bool branch_taken_0x236f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x236F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F28u;
        // 0x236f2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236f28) {
            ctx->pc = 0x236F40u;
            goto label_236f40;
        }
    }
    ctx->pc = 0x236F30u;
label_236f30:
    // 0x236f30: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x236f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_236f34:
    // 0x236f34: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x236f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_236f38:
    // 0x236f38: 0x40f809  jalr        $v0
label_236f3c:
    if (ctx->pc == 0x236F3Cu) {
        ctx->pc = 0x236F40u;
        goto label_236f40;
    }
    ctx->pc = 0x236F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236F40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F38u, 0x236F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236F40u;
label_236f40:
    // 0x236f40: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x236f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_236f44:
    // 0x236f44: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_236f48:
    if (ctx->pc == 0x236F48u) {
        ctx->pc = 0x236F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F44u;
        // 0x236f48: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F4Cu;
        goto label_236f4c;
    }
    ctx->pc = 0x236F44u;
    {
        const bool branch_taken_0x236f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236f44) {
            ctx->pc = 0x236F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236F44u;
            // 0x236f48: 0x8e220224  lw          $v0, 0x224($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236f18;
        }
    }
    ctx->pc = 0x236F4Cu;
label_236f4c:
    // 0x236f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236f50:
    // 0x236f50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x236f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_236f54:
    // 0x236f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x236f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236f58:
    // 0x236f58: 0x3e00008  jr          $ra
label_236f5c:
    if (ctx->pc == 0x236F5Cu) {
        ctx->pc = 0x236F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F58u;
        // 0x236f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236F60u;
        goto label_fallthrough_0x236f58;
    }
    ctx->pc = 0x236F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236F58u;
        // 0x236f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236f58:
    ctx->pc = 0x236F60u;
}
