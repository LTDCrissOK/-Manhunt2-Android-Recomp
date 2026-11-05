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

// Function: sub_00109018
// Address: 0x109018 - 0x109068
void sub_00109018_0x109018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109018_0x109018");
#endif

    switch (ctx->pc) {
        case 0x109040u: goto label_109040;
        case 0x109054u: goto label_109054;
        default: break;
    }

    ctx->pc = 0x109018u;

    // 0x109018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10901c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10902c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x109030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109030u;
    {
        const bool branch_taken_0x109030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109030u;
        // 0x109034: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109030) {
            ctx->pc = 0x109040u;
            goto label_109040;
        }
    }
    ctx->pc = 0x109038u;
    // 0x109038: 0xc042426  jal         func_109098
    ctx->pc = 0x109038u;
    SET_GPR_U32(ctx, 31, 0x109040u);
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x109038u, 0x109040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109040u;
label_109040:
    // 0x109040: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x109040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x109044: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x109044u;
    {
        const bool branch_taken_0x109044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109044) {
            ctx->pc = 0x109048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109044u;
            // 0x109048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109058u;
            goto label_109058;
        }
    }
    ctx->pc = 0x10904Cu;
    // 0x10904c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x10904Cu;
    SET_GPR_U32(ctx, 31, 0x109054u);
    ctx->pc = 0x109050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10904Cu;
    // 0x109050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x10904Cu, 0x109054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109054u;
label_109054:
    // 0x109054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_109058:
    // 0x109058: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10905c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109060: 0x3e00008  jr          $ra
    ctx->pc = 0x109060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109060u;
        // 0x109064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109068u;
}
