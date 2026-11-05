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

// Function: sub_001624E8
// Address: 0x1624e8 - 0x162570
void sub_001624E8_0x1624e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001624E8_0x1624e8");
#endif

    switch (ctx->pc) {
        case 0x16251cu: goto label_16251c;
        case 0x16252cu: goto label_16252c;
        case 0x16253cu: goto label_16253c;
        case 0x162550u: goto label_162550;
        case 0x162558u: goto label_162558;
        default: break;
    }

    ctx->pc = 0x1624e8u;

    // 0x1624e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1624ec: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1624ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1624f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1624f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1624f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1624f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1624f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1624f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1624fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x162500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162504: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x162504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x162508: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x162508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16250c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16250Cu;
    {
        const bool branch_taken_0x16250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16250c) {
            ctx->pc = 0x162510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16250Cu;
            // 0x162510: 0xae00034c  sw          $zero, 0x34C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162534u;
            goto label_162534;
        }
    }
    ctx->pc = 0x162514u;
    // 0x162514: 0xc058e92  jal         func_163A48
    ctx->pc = 0x162514u;
    SET_GPR_U32(ctx, 31, 0x16251Cu);
    ctx->pc = 0x163A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A48u, 0x162514u, 0x16251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16251Cu;
label_16251c:
    // 0x16251c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16251Cu;
    {
        const bool branch_taken_0x16251c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16251c) {
            ctx->pc = 0x162534u;
            goto label_162534;
        }
    }
    ctx->pc = 0x162524u;
    // 0x162524: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x162524u;
    SET_GPR_U32(ctx, 31, 0x16252Cu);
    ctx->pc = 0x162528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162524u;
    // 0x162528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x162524u, 0x16252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16252Cu;
label_16252c:
    // 0x16252c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16252Cu;
    {
        const bool branch_taken_0x16252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16252Cu;
        // 0x162530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16252c) {
            ctx->pc = 0x16255Cu;
            goto label_16255c;
        }
    }
    ctx->pc = 0x162534u;
label_162534:
    // 0x162534: 0xc058bf0  jal         func_162FC0
    ctx->pc = 0x162534u;
    SET_GPR_U32(ctx, 31, 0x16253Cu);
    ctx->pc = 0x162538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162534u;
    // 0x162538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FC0u, 0x162534u, 0x16253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16253Cu;
label_16253c:
    // 0x16253c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16253Cu;
    {
        const bool branch_taken_0x16253c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16253Cu;
        // 0x162540: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16253c) {
            ctx->pc = 0x162558u;
            goto label_162558;
        }
    }
    ctx->pc = 0x162544u;
    // 0x162544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162548: 0xc058bf4  jal         func_162FD0
    ctx->pc = 0x162548u;
    SET_GPR_U32(ctx, 31, 0x162550u);
    ctx->pc = 0x16254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162548u;
    // 0x16254c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FD0u, 0x162548u, 0x162550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162550u;
label_162550:
    // 0x162550: 0xc058e4c  jal         func_163930
    ctx->pc = 0x162550u;
    SET_GPR_U32(ctx, 31, 0x162558u);
    ctx->pc = 0x162554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162550u;
    // 0x162554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163930u, 0x162550u, 0x162558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162558u;
label_162558:
    // 0x162558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16255c:
    // 0x16255c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16255cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162564: 0x3e00008  jr          $ra
    ctx->pc = 0x162564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162564u;
        // 0x162568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16256Cu;
    // 0x16256c: 0x0  nop
    ctx->pc = 0x16256cu;
    // NOP
    ctx->pc = 0x162570u;
}
