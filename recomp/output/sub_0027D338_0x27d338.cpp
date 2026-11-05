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

// Function: sub_0027D338
// Address: 0x27d338 - 0x27d3a0
void sub_0027D338_0x27d338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D338_0x27d338");
#endif

    switch (ctx->pc) {
        case 0x27d358u: goto label_27d358;
        case 0x27d370u: goto label_27d370;
        default: break;
    }

    ctx->pc = 0x27d338u;

    // 0x27d338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d33c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27d340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d344: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x27d348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d34c: 0x245003d8  addiu       $s0, $v0, 0x3D8
    ctx->pc = 0x27d34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 984));
    // 0x27d350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d354: 0x24110019  addiu       $s1, $zero, 0x19
    ctx->pc = 0x27d354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_27d358:
    // 0x27d358: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d35c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27d35cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x27d360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D360u;
    {
        const bool branch_taken_0x27d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D360u;
        // 0x27d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d360) {
            ctx->pc = 0x27D370u;
            goto label_27d370;
        }
    }
    ctx->pc = 0x27D368u;
    // 0x27d368: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x27D368u;
    SET_GPR_U32(ctx, 31, 0x27D370u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x27D368u, 0x27D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D370u;
label_27d370:
    // 0x27d370: 0xae00fec8  sw          $zero, -0x138($s0)
    ctx->pc = 0x27d370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966984), GPR_U32(ctx, 0));
    // 0x27d374: 0xae00ff30  sw          $zero, -0xD0($s0)
    ctx->pc = 0x27d374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967088), GPR_U32(ctx, 0));
    // 0x27d378: 0xae00ff98  sw          $zero, -0x68($s0)
    ctx->pc = 0x27d378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967192), GPR_U32(ctx, 0));
    // 0x27d37c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x27d380: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x27D380u;
    {
        const bool branch_taken_0x27d380 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D380u;
        // 0x27d384: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d380) {
            ctx->pc = 0x27D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d358;
        }
    }
    ctx->pc = 0x27D388u;
    // 0x27d388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d38c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d394: 0x3e00008  jr          $ra
    ctx->pc = 0x27D394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D394u;
        // 0x27d398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D39Cu;
    // 0x27d39c: 0x0  nop
    ctx->pc = 0x27d39cu;
    // NOP
    ctx->pc = 0x27d3a0u;
}
