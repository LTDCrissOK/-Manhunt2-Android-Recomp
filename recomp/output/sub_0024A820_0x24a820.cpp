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

// Function: sub_0024A820
// Address: 0x24a820 - 0x24a898
void sub_0024A820_0x24a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A820_0x24a820");
#endif

    switch (ctx->pc) {
        case 0x24a83cu: goto label_24a83c;
        default: break;
    }

    ctx->pc = 0x24a820u;

    // 0x24a820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a82c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a830: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a834: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24A834u;
    SET_GPR_U32(ctx, 31, 0x24A83Cu);
    ctx->pc = 0x24A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A834u;
    // 0x24a838: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24A834u, 0x24A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A83Cu;
label_24a83c:
    // 0x24a83c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24a840: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x24a844: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A844u;
    {
        const bool branch_taken_0x24a844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A844u;
        // 0x24a848: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a844) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A84Cu;
    // 0x24a84c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A84Cu;
    {
        const bool branch_taken_0x24a84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A84Cu;
        // 0x24a850: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a84c) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A854u;
    // 0x24a854: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A854u;
    {
        const bool branch_taken_0x24a854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A854u;
        // 0x24a858: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a854) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A85Cu;
    // 0x24a85c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A85Cu;
    {
        const bool branch_taken_0x24a85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A85Cu;
        // 0x24a860: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a85c) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A864u;
    // 0x24a864: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A864u;
    {
        const bool branch_taken_0x24a864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A864u;
        // 0x24a868: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a864) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A86Cu;
    // 0x24a86c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A87Cu;
            goto label_24a87c;
        }
    }
    ctx->pc = 0x24A874u;
    // 0x24a874: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A874u;
    {
        const bool branch_taken_0x24a874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a874) {
            ctx->pc = 0x24A878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A874u;
            // 0x24a878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A888u;
            goto label_24a888;
        }
    }
    ctx->pc = 0x24A87Cu;
label_24a87c:
    // 0x24a87c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a880: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24a880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24a884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a888:
    // 0x24a888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a88c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A88Cu;
        // 0x24a890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A894u;
    // 0x24a894: 0x0  nop
    ctx->pc = 0x24a894u;
    // NOP
    ctx->pc = 0x24a898u;
}
