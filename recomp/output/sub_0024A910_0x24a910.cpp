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

// Function: sub_0024A910
// Address: 0x24a910 - 0x24a980
void sub_0024A910_0x24a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A910_0x24a910");
#endif

    switch (ctx->pc) {
        case 0x24a92cu: goto label_24a92c;
        default: break;
    }

    ctx->pc = 0x24a910u;

    // 0x24a910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24a914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a924: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24A924u;
    SET_GPR_U32(ctx, 31, 0x24A92Cu);
    ctx->pc = 0x24A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A924u;
    // 0x24a928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24A924u, 0x24A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A92Cu;
label_24a92c:
    // 0x24a92c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x24a930: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x24a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x24a934: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24A934u;
    {
        const bool branch_taken_0x24a934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A934u;
        // 0x24a938: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a934) {
            ctx->pc = 0x24A964u;
            goto label_24a964;
        }
    }
    ctx->pc = 0x24A93Cu;
    // 0x24a93c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24A93Cu;
    {
        const bool branch_taken_0x24a93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A93Cu;
        // 0x24a940: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a93c) {
            ctx->pc = 0x24A964u;
            goto label_24a964;
        }
    }
    ctx->pc = 0x24A944u;
    // 0x24a944: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A944u;
    {
        const bool branch_taken_0x24a944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A944u;
        // 0x24a948: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a944) {
            ctx->pc = 0x24A964u;
            goto label_24a964;
        }
    }
    ctx->pc = 0x24A94Cu;
    // 0x24a94c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A94Cu;
    {
        const bool branch_taken_0x24a94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A94Cu;
        // 0x24a950: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a94c) {
            ctx->pc = 0x24A964u;
            goto label_24a964;
        }
    }
    ctx->pc = 0x24A954u;
    // 0x24a954: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A954u;
    {
        const bool branch_taken_0x24a954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A954u;
        // 0x24a958: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a954) {
            ctx->pc = 0x24A964u;
            goto label_24a964;
        }
    }
    ctx->pc = 0x24A95Cu;
    // 0x24a95c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A95Cu;
    {
        const bool branch_taken_0x24a95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a95c) {
            ctx->pc = 0x24A960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A95Cu;
            // 0x24a960: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A970u;
            goto label_24a970;
        }
    }
    ctx->pc = 0x24A964u;
label_24a964:
    // 0x24a964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a968: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24a968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24a96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a970:
    // 0x24a970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a974: 0x3e00008  jr          $ra
    ctx->pc = 0x24A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A974u;
        // 0x24a978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A97Cu;
    // 0x24a97c: 0x0  nop
    ctx->pc = 0x24a97cu;
    // NOP
    ctx->pc = 0x24a980u;
}
