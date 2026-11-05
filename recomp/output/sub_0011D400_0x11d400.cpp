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

// Function: sub_0011D400
// Address: 0x11d400 - 0x11d478
void sub_0011D400_0x11d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D400_0x11d400");
#endif

    switch (ctx->pc) {
        case 0x11d420u: goto label_11d420;
        case 0x11d43cu: goto label_11d43c;
        case 0x11d450u: goto label_11d450;
        default: break;
    }

    ctx->pc = 0x11d400u;

    // 0x11d400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d408: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d40c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11d410: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11d410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11d414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d418: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D418u;
    SET_GPR_U32(ctx, 31, 0x11D420u);
    ctx->pc = 0x11D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D418u;
    // 0x11d41c: 0x24a5bf18  addiu       $a1, $a1, -0x40E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D418u, 0x11D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D420u;
label_11d420:
    // 0x11d420: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D420u;
    {
        const bool branch_taken_0x11d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D420u;
        // 0x11d424: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d420) {
            ctx->pc = 0x11D430u;
            goto label_11d430;
        }
    }
    ctx->pc = 0x11D428u;
    // 0x11d428: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11D428u;
    {
        const bool branch_taken_0x11d428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D428u;
        // 0x11d42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d428) {
            ctx->pc = 0x11D468u;
            goto label_11d468;
        }
    }
    ctx->pc = 0x11D430u;
label_11d430:
    // 0x11d430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d434: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D434u;
    SET_GPR_U32(ctx, 31, 0x11D43Cu);
    ctx->pc = 0x11D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D434u;
    // 0x11d438: 0x24a5bf28  addiu       $a1, $a1, -0x40D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D434u, 0x11D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D43Cu;
label_11d43c:
    // 0x11d43c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D43Cu;
    {
        const bool branch_taken_0x11d43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D43Cu;
        // 0x11d440: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d43c) {
            ctx->pc = 0x11D464u;
            goto label_11d464;
        }
    }
    ctx->pc = 0x11D444u;
    // 0x11d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d448: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11D448u;
    SET_GPR_U32(ctx, 31, 0x11D450u);
    ctx->pc = 0x11D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D448u;
    // 0x11d44c: 0x24a5bf30  addiu       $a1, $a1, -0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11D448u, 0x11D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D450u;
label_11d450:
    // 0x11d450: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11d450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d454: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d458: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11d458u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11d45c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D45Cu;
    {
        const bool branch_taken_0x11d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D45Cu;
        // 0x11d460: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d45c) {
            ctx->pc = 0x11D468u;
            goto label_11d468;
        }
    }
    ctx->pc = 0x11D464u;
label_11d464:
    // 0x11d464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d468:
    // 0x11d468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d46c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d470: 0x3e00008  jr          $ra
    ctx->pc = 0x11D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D470u;
        // 0x11d474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D478u;
}
