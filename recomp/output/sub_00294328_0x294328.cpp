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

// Function: sub_00294328
// Address: 0x294328 - 0x294360
void sub_00294328_0x294328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294328_0x294328");
#endif

    ctx->pc = 0x294328u;

    // 0x294328: 0x5440f90d  bnel        $v0, $zero, . + 4 + (-0x6F3 << 2)
    ctx->pc = 0x294328u;
    {
        const bool branch_taken_0x294328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294328) {
            ctx->pc = 0x29432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294328u;
            // 0x29432c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292760u;
            return;
        }
    }
    ctx->pc = 0x294330u;
    // 0x294330: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x294330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x294334: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x294334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x294338: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x294338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29433c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x29433cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x294340: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x294340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x294344: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x294344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x294348: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x294348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29434c: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x29434cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x294350: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x294350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x294354: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x294354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x294358: 0x3e00008  jr          $ra
    ctx->pc = 0x294358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294358u;
        // 0x29435c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294360u;
}
