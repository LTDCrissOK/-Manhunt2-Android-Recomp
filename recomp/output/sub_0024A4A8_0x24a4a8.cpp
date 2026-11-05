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

// Function: sub_0024A4A8
// Address: 0x24a4a8 - 0x24a500
void sub_0024A4A8_0x24a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4A8_0x24a4a8");
#endif

    switch (ctx->pc) {
        case 0x24a4bcu: goto label_24a4bc;
        case 0x24a4d8u: goto label_24a4d8;
        case 0x24a4ecu: goto label_24a4ec;
        default: break;
    }

    ctx->pc = 0x24a4a8u;

    // 0x24a4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a4b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a4b4: 0xc0925be  jal         func_2496F8
    ctx->pc = 0x24A4B4u;
    SET_GPR_U32(ctx, 31, 0x24A4BCu);
    ctx->pc = 0x24A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4B4u;
    // 0x24a4b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2496F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2496F8u, 0x24A4B4u, 0x24A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4BCu;
label_24a4bc:
    // 0x24a4bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x24A4BCu;
    {
        const bool branch_taken_0x24a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a4bc) {
            ctx->pc = 0x24A4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A4BCu;
            // 0x24a4c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A4F0u;
            goto label_24a4f0;
        }
    }
    ctx->pc = 0x24A4C4u;
    // 0x24a4c4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x24a4c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4cc: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x24a4d0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x24A4D0u;
    SET_GPR_U32(ctx, 31, 0x24A4D8u);
    ctx->pc = 0x24A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4D0u;
    // 0x24a4d4: 0xae02040c  sw          $v0, 0x40C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x24A4D0u, 0x24A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4D8u;
label_24a4d8:
    // 0x24a4d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A4D8u;
    {
        const bool branch_taken_0x24a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4D8u;
        // 0x24a4dc: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4d8) {
            ctx->pc = 0x24A4ECu;
            goto label_24a4ec;
        }
    }
    ctx->pc = 0x24A4E0u;
    // 0x24a4e0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a4e4: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A4E4u;
    SET_GPR_U32(ctx, 31, 0x24A4ECu);
    ctx->pc = 0x24A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4E4u;
    // 0x24a4e8: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A4E4u, 0x24A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4ECu;
label_24a4ec:
    // 0x24a4ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a4ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a4f0:
    // 0x24a4f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4F4u;
        // 0x24a4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A4FCu;
    // 0x24a4fc: 0x0  nop
    ctx->pc = 0x24a4fcu;
    // NOP
    ctx->pc = 0x24a500u;
}
