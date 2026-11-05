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

// Function: sub_00153580
// Address: 0x153580 - 0x153600
void sub_00153580_0x153580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153580_0x153580");
#endif

    switch (ctx->pc) {
        case 0x153594u: goto label_153594;
        case 0x1535a4u: goto label_1535a4;
        case 0x1535b4u: goto label_1535b4;
        case 0x1535c4u: goto label_1535c4;
        case 0x1535d4u: goto label_1535d4;
        case 0x1535e4u: goto label_1535e4;
        case 0x1535ecu: goto label_1535ec;
        default: break;
    }

    ctx->pc = 0x153580u;

    // 0x153580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x153584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153588: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x153588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15358c: 0xc054dce  jal         func_153738
    ctx->pc = 0x15358Cu;
    SET_GPR_U32(ctx, 31, 0x153594u);
    ctx->pc = 0x153590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15358Cu;
    // 0x153590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153738u, 0x15358Cu, 0x153594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153594u;
label_153594:
    // 0x153594: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x153594u;
    {
        const bool branch_taken_0x153594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153594) {
            ctx->pc = 0x153598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153594u;
            // 0x153598: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x15359Cu;
    // 0x15359c: 0xc04e1da  jal         func_138768
    ctx->pc = 0x15359Cu;
    SET_GPR_U32(ctx, 31, 0x1535A4u);
    ctx->pc = 0x1535A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15359Cu;
    // 0x1535a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138768u, 0x15359Cu, 0x1535A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535A4u;
label_1535a4:
    // 0x1535a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1535A4u;
    {
        const bool branch_taken_0x1535a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535a4) {
            ctx->pc = 0x1535A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535A4u;
            // 0x1535a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1535ACu;
    // 0x1535ac: 0xc054dd6  jal         func_153758
    ctx->pc = 0x1535ACu;
    SET_GPR_U32(ctx, 31, 0x1535B4u);
    ctx->pc = 0x1535B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535ACu;
    // 0x1535b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153758u, 0x1535ACu, 0x1535B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535B4u;
label_1535b4:
    // 0x1535b4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1535B4u;
    {
        const bool branch_taken_0x1535b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535b4) {
            ctx->pc = 0x1535B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535B4u;
            // 0x1535b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1535BCu;
    // 0x1535bc: 0xc054f8c  jal         func_153E30
    ctx->pc = 0x1535BCu;
    SET_GPR_U32(ctx, 31, 0x1535C4u);
    ctx->pc = 0x1535C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535BCu;
    // 0x1535c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E30u, 0x1535BCu, 0x1535C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535C4u;
label_1535c4:
    // 0x1535c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1535C4u;
    {
        const bool branch_taken_0x1535c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535c4) {
            ctx->pc = 0x1535C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535C4u;
            // 0x1535c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1535CCu;
    // 0x1535cc: 0xc055096  jal         func_154258
    ctx->pc = 0x1535CCu;
    SET_GPR_U32(ctx, 31, 0x1535D4u);
    ctx->pc = 0x1535D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535CCu;
    // 0x1535d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154258u, 0x1535CCu, 0x1535D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535D4u;
label_1535d4:
    // 0x1535d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1535D4u;
    {
        const bool branch_taken_0x1535d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1535d4) {
            ctx->pc = 0x1535D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1535D4u;
            // 0x1535d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1535DCu;
    // 0x1535dc: 0xc0550a8  jal         func_1542A0
    ctx->pc = 0x1535DCu;
    SET_GPR_U32(ctx, 31, 0x1535E4u);
    ctx->pc = 0x1535E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535DCu;
    // 0x1535e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542A0u, 0x1535DCu, 0x1535E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535E4u;
label_1535e4:
    // 0x1535e4: 0xc054d80  jal         func_153600
    ctx->pc = 0x1535E4u;
    SET_GPR_U32(ctx, 31, 0x1535ECu);
    ctx->pc = 0x1535E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535E4u;
    // 0x1535e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153600u, 0x1535E4u, 0x1535ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535ECu;
label_1535ec:
    // 0x1535ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1535f0:
    // 0x1535f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1535f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1535f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1535F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1535F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535F4u;
        // 0x1535f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1535F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1535FCu;
    // 0x1535fc: 0x0  nop
    ctx->pc = 0x1535fcu;
    // NOP
    ctx->pc = 0x153600u;
}
