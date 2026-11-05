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

// Function: sub_003B4AC8
// Address: 0x3b4ac8 - 0x3b4b20
void sub_003B4AC8_0x3b4ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4AC8_0x3b4ac8");
#endif

    switch (ctx->pc) {
        case 0x3b4ae8u: goto label_3b4ae8;
        case 0x3b4b04u: goto label_3b4b04;
        default: break;
    }

    ctx->pc = 0x3b4ac8u;

    // 0x3b4ac8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b4acc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4ad0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b4ad4: 0x24a50608  addiu       $a1, $a1, 0x608
    ctx->pc = 0x3b4ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1544));
    // 0x3b4ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b4adc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b4ae0: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3B4AE0u;
    SET_GPR_U32(ctx, 31, 0x3B4AE8u);
    ctx->pc = 0x3B4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4AE0u;
    // 0x3b4ae4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3B4AE0u, 0x3B4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4AE8u;
label_3b4ae8:
    // 0x3b4ae8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3b4ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3b4aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b4aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4af0: 0x24a50610  addiu       $a1, $a1, 0x610
    ctx->pc = 0x3b4af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1552));
    // 0x3b4af4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4AF4u;
    {
        const bool branch_taken_0x3b4af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4AF4u;
        // 0x3b4af8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4af4) {
            ctx->pc = 0x3B4B0Cu;
            goto label_3b4b0c;
        }
    }
    ctx->pc = 0x3B4AFCu;
    // 0x3b4afc: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3B4AFCu;
    SET_GPR_U32(ctx, 31, 0x3B4B04u);
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3B4AFCu, 0x3B4B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B04u;
label_3b4b04:
    // 0x3b4b04: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B4B04u;
    {
        const bool branch_taken_0x3b4b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4b04) {
            ctx->pc = 0x3B4B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4B04u;
            // 0x3b4b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4B10u;
            goto label_3b4b10;
        }
    }
    ctx->pc = 0x3B4B0Cu;
label_3b4b0c:
    // 0x3b4b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b4b10:
    // 0x3b4b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b4b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4b14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b4b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b4b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B18u;
        // 0x3b4b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4B20u;
}
