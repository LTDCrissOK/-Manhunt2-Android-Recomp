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

// Function: sub_0017BE18
// Address: 0x17be18 - 0x17be68
void sub_0017BE18_0x17be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BE18_0x17be18");
#endif

    switch (ctx->pc) {
        case 0x17be40u: goto label_17be40;
        case 0x17be54u: goto label_17be54;
        default: break;
    }

    ctx->pc = 0x17be18u;

    // 0x17be18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17be20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17be24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17be24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17be30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BE30u;
    {
        const bool branch_taken_0x17be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE30u;
        // 0x17be34: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be30) {
            ctx->pc = 0x17BE40u;
            goto label_17be40;
        }
    }
    ctx->pc = 0x17BE38u;
    // 0x17be38: 0xc05efaa  jal         func_17BEA8
    ctx->pc = 0x17BE38u;
    SET_GPR_U32(ctx, 31, 0x17BE40u);
    ctx->pc = 0x17BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BEA8u, 0x17BE38u, 0x17BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE40u;
label_17be40:
    // 0x17be40: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x17be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x17be44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE44u;
    {
        const bool branch_taken_0x17be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be44) {
            ctx->pc = 0x17BE48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BE44u;
            // 0x17be48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BE58u;
            goto label_17be58;
        }
    }
    ctx->pc = 0x17BE4Cu;
    // 0x17be4c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x17BE4Cu;
    SET_GPR_U32(ctx, 31, 0x17BE54u);
    ctx->pc = 0x17BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BE4Cu;
    // 0x17be50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x17BE4Cu, 0x17BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE54u;
label_17be54:
    // 0x17be54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17be54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17be58:
    // 0x17be58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17be58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17be5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be60: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE60u;
        // 0x17be64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE68u;
}
