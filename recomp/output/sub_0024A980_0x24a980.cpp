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

// Function: sub_0024A980
// Address: 0x24a980 - 0x24a9f0
void sub_0024A980_0x24a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A980_0x24a980");
#endif

    switch (ctx->pc) {
        case 0x24a99cu: goto label_24a99c;
        default: break;
    }

    ctx->pc = 0x24a980u;

    // 0x24a980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a984: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a98c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a994: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24A994u;
    SET_GPR_U32(ctx, 31, 0x24A99Cu);
    ctx->pc = 0x24A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A994u;
    // 0x24a998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24A994u, 0x24A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A99Cu;
label_24a99c:
    // 0x24a99c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24a9a0: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x24a9a4: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A9A4u;
    {
        const bool branch_taken_0x24a9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9A4u;
        // 0x24a9a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9a4) {
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9ACu;
    // 0x24a9ac: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A9ACu;
    {
        const bool branch_taken_0x24a9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9ACu;
        // 0x24a9b0: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9ac) {
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9B4u;
    // 0x24a9b4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A9B4u;
    {
        const bool branch_taken_0x24a9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9B4u;
        // 0x24a9b8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9b4) {
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9BCu;
    // 0x24a9bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A9BCu;
    {
        const bool branch_taken_0x24a9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9BCu;
        // 0x24a9c0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9bc) {
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9C4u;
    // 0x24a9c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A9C4u;
    {
        const bool branch_taken_0x24a9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9C4u;
        // 0x24a9c8: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9c4) {
            ctx->pc = 0x24A9D4u;
            goto label_24a9d4;
        }
    }
    ctx->pc = 0x24A9CCu;
    // 0x24a9cc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A9CCu;
    {
        const bool branch_taken_0x24a9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a9cc) {
            ctx->pc = 0x24A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A9CCu;
            // 0x24a9d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A9E0u;
            goto label_24a9e0;
        }
    }
    ctx->pc = 0x24A9D4u;
label_24a9d4:
    // 0x24a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a9d8: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24a9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a9e0:
    // 0x24a9e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9E4u;
        // 0x24a9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A9ECu;
    // 0x24a9ec: 0x0  nop
    ctx->pc = 0x24a9ecu;
    // NOP
    ctx->pc = 0x24a9f0u;
}
