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

// Function: sub_0024A9F0
// Address: 0x24a9f0 - 0x24aa68
void sub_0024A9F0_0x24a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A9F0_0x24a9f0");
#endif

    switch (ctx->pc) {
        case 0x24aa0cu: goto label_24aa0c;
        default: break;
    }

    ctx->pc = 0x24a9f0u;

    // 0x24a9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a9f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a9fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aa00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24aa04: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24AA04u;
    SET_GPR_U32(ctx, 31, 0x24AA0Cu);
    ctx->pc = 0x24AA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA04u;
    // 0x24aa08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24AA04u, 0x24AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA0Cu;
label_24aa0c:
    // 0x24aa0c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24aa10: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x24aa14: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24AA14u;
    {
        const bool branch_taken_0x24aa14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA14u;
        // 0x24aa18: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa14) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA1Cu;
    // 0x24aa1c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24AA1Cu;
    {
        const bool branch_taken_0x24aa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA1Cu;
        // 0x24aa20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa1c) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA24u;
    // 0x24aa24: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AA24u;
    {
        const bool branch_taken_0x24aa24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA24u;
        // 0x24aa28: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa24) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA2Cu;
    // 0x24aa2c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA2Cu;
    {
        const bool branch_taken_0x24aa2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA2Cu;
        // 0x24aa30: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa2c) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA34u;
    // 0x24aa34: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AA34u;
    {
        const bool branch_taken_0x24aa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA34u;
        // 0x24aa38: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa34) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA3Cu;
    // 0x24aa3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AA3Cu;
    {
        const bool branch_taken_0x24aa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA3Cu;
        // 0x24aa40: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aa3c) {
            ctx->pc = 0x24AA4Cu;
            goto label_24aa4c;
        }
    }
    ctx->pc = 0x24AA44u;
    // 0x24aa44: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AA44u;
    {
        const bool branch_taken_0x24aa44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24aa44) {
            ctx->pc = 0x24AA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AA44u;
            // 0x24aa48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AA58u;
            goto label_24aa58;
        }
    }
    ctx->pc = 0x24AA4Cu;
label_24aa4c:
    // 0x24aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aa50: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24aa54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24aa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24aa58:
    // 0x24aa58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24aa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24aa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24AA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA5Cu;
        // 0x24aa60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AA64u;
    // 0x24aa64: 0x0  nop
    ctx->pc = 0x24aa64u;
    // NOP
    ctx->pc = 0x24aa68u;
}
