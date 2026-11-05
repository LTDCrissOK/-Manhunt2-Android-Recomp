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

// Function: sub_0024A898
// Address: 0x24a898 - 0x24a910
void sub_0024A898_0x24a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A898_0x24a898");
#endif

    switch (ctx->pc) {
        case 0x24a8b4u: goto label_24a8b4;
        default: break;
    }

    ctx->pc = 0x24a898u;

    // 0x24a898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a89c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a8a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a8ac: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24A8ACu;
    SET_GPR_U32(ctx, 31, 0x24A8B4u);
    ctx->pc = 0x24A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A8ACu;
    // 0x24a8b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24A8ACu, 0x24A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A8B4u;
label_24a8b4:
    // 0x24a8b4: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24a8b8: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x24a8bc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A8BCu;
    {
        const bool branch_taken_0x24a8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8BCu;
        // 0x24a8c0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8bc) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8C4u;
    // 0x24a8c4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A8C4u;
    {
        const bool branch_taken_0x24a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8C4u;
        // 0x24a8c8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8c4) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8CCu;
    // 0x24a8cc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A8CCu;
    {
        const bool branch_taken_0x24a8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8CCu;
        // 0x24a8d0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8cc) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8D4u;
    // 0x24a8d4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A8D4u;
    {
        const bool branch_taken_0x24a8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8D4u;
        // 0x24a8d8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8d4) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8DCu;
    // 0x24a8dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A8DCu;
    {
        const bool branch_taken_0x24a8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8DCu;
        // 0x24a8e0: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8dc) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8E4u;
    // 0x24a8e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A8E4u;
    {
        const bool branch_taken_0x24a8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8E4u;
        // 0x24a8e8: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8e4) {
            ctx->pc = 0x24A8F4u;
            goto label_24a8f4;
        }
    }
    ctx->pc = 0x24A8ECu;
    // 0x24a8ec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A8ECu;
    {
        const bool branch_taken_0x24a8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a8ec) {
            ctx->pc = 0x24A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A8ECu;
            // 0x24a8f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A900u;
            goto label_24a900;
        }
    }
    ctx->pc = 0x24A8F4u;
label_24a8f4:
    // 0x24a8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a8f8: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24a8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a900:
    // 0x24a900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a904: 0x3e00008  jr          $ra
    ctx->pc = 0x24A904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A904u;
        // 0x24a908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A90Cu;
    // 0x24a90c: 0x0  nop
    ctx->pc = 0x24a90cu;
    // NOP
    ctx->pc = 0x24a910u;
}
