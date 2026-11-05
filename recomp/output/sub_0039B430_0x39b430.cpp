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

// Function: sub_0039B430
// Address: 0x39b430 - 0x39b4a0
void sub_0039B430_0x39b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B430_0x39b430");
#endif

    switch (ctx->pc) {
        case 0x39b458u: goto label_39b458;
        case 0x39b46cu: goto label_39b46c;
        default: break;
    }

    ctx->pc = 0x39b430u;

    // 0x39b430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39b434: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39b434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39b438: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39b43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b440: 0x24500c28  addiu       $s0, $v0, 0xC28
    ctx->pc = 0x39b440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3112));
    // 0x39b444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b448: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x39b448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39b44c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39b44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39b450: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39b450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39b454: 0x0  nop
    ctx->pc = 0x39b454u;
    // NOP
label_39b458:
    // 0x39b458: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39b458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39b45c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39B45Cu;
    {
        const bool branch_taken_0x39b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x39b45c) {
            ctx->pc = 0x39B460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B45Cu;
            // 0x39b460: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B470u;
            goto label_39b470;
        }
    }
    ctx->pc = 0x39B464u;
    // 0x39b464: 0xc0e6c8c  jal         func_39B230
    ctx->pc = 0x39B464u;
    SET_GPR_U32(ctx, 31, 0x39B46Cu);
    ctx->pc = 0x39B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B464u;
    // 0x39b468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B230u, 0x39B464u, 0x39B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B46Cu;
label_39b46c:
    // 0x39b46c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x39b46cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_39b470:
    // 0x39b470: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x39B470u;
    {
        const bool branch_taken_0x39b470 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x39B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B470u;
        // 0x39b474: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b470) {
            ctx->pc = 0x39B458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b458;
        }
    }
    ctx->pc = 0x39B478u;
    // 0x39b478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b47c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39b480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39b484: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39b484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39b488: 0x3e00008  jr          $ra
    ctx->pc = 0x39B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B488u;
        // 0x39b48c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B490u;
    // 0x39b490: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39b494: 0x0  nop
    ctx->pc = 0x39b494u;
    // NOP
    // 0x39b498: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39b49c: 0x0  nop
    ctx->pc = 0x39b49cu;
    // NOP
    ctx->pc = 0x39b4a0u;
}
