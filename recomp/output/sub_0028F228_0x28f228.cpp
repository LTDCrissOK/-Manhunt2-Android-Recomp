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

// Function: sub_0028F228
// Address: 0x28f228 - 0x28f280
void sub_0028F228_0x28f228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F228_0x28f228");
#endif

    switch (ctx->pc) {
        case 0x28f250u: goto label_28f250;
        case 0x28f264u: goto label_28f264;
        default: break;
    }

    ctx->pc = 0x28f228u;

    // 0x28f228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f22c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f230: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x28f230u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x28f234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f238: 0x8e221164  lw          $v0, 0x1164($s1)
    ctx->pc = 0x28f238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C1164u));
    // 0x28f23c: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x28f23cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x28f240: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F240u;
    {
        const bool branch_taken_0x28f240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F240u;
        // 0x28f244: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f240) {
            ctx->pc = 0x28F264u;
            goto label_28f264;
        }
    }
    ctx->pc = 0x28F248u;
    // 0x28f248: 0xc0a3c56  jal         func_28F158
    ctx->pc = 0x28F248u;
    SET_GPR_U32(ctx, 31, 0x28F250u);
    ctx->pc = 0x28F24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F248u;
    // 0x28f24c: 0x26041138  addiu       $a0, $s0, 0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F158u, 0x28F248u, 0x28F250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F250u;
label_28f250:
    // 0x28f250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f254: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x28f254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x28f258: 0xae221164  sw          $v0, 0x1164($s1)
    ctx->pc = 0x28f258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4452), GPR_U32(ctx, 2));
    // 0x28f25c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x28F25Cu;
    SET_GPR_U32(ctx, 31, 0x28F264u);
    ctx->pc = 0x28F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F25Cu;
    // 0x28f260: 0x2484f200  addiu       $a0, $a0, -0xE00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x28F25Cu, 0x28F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F264u;
label_28f264:
    // 0x28f264: 0x26021138  addiu       $v0, $s0, 0x1138
    ctx->pc = 0x28f264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4408));
    // 0x28f268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f26c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f26cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f274: 0x3e00008  jr          $ra
    ctx->pc = 0x28F274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F274u;
        // 0x28f278: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F27Cu;
    // 0x28f27c: 0x0  nop
    ctx->pc = 0x28f27cu;
    // NOP
    ctx->pc = 0x28f280u;
}
