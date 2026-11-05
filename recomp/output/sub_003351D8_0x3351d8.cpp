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

// Function: sub_003351D8
// Address: 0x3351d8 - 0x335238
void sub_003351D8_0x3351d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003351D8_0x3351d8");
#endif

    switch (ctx->pc) {
        case 0x3351f8u: goto label_3351f8;
        case 0x335208u: goto label_335208;
        case 0x335224u: goto label_335224;
        default: break;
    }

    ctx->pc = 0x3351d8u;

    // 0x3351d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3351d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3351dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3351dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3351e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3351e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3351e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3351e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3351e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3351ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3351ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3351f0: 0xc085d4e  jal         func_217538
    ctx->pc = 0x3351F0u;
    SET_GPR_U32(ctx, 31, 0x3351F8u);
    ctx->pc = 0x3351F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3351F0u;
    // 0x3351f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x3351F0u, 0x3351F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3351F8u;
label_3351f8:
    // 0x3351f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3351F8u;
    {
        const bool branch_taken_0x3351f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3351f8) {
            ctx->pc = 0x3351FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3351F8u;
            // 0x3351fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335224u;
            goto label_335224;
        }
    }
    ctx->pc = 0x335200u;
    // 0x335200: 0xc0cd984  jal         func_336610
    ctx->pc = 0x335200u;
    SET_GPR_U32(ctx, 31, 0x335208u);
    ctx->pc = 0x335204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335200u;
    // 0x335204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x335200u, 0x335208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335208u;
label_335208:
    // 0x335208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335208u;
    {
        const bool branch_taken_0x335208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335208u;
        // 0x33520c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335208) {
            ctx->pc = 0x335218u;
            goto label_335218;
        }
    }
    ctx->pc = 0x335210u;
    // 0x335210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x335210u;
    {
        const bool branch_taken_0x335210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335210u;
        // 0x335214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335210) {
            ctx->pc = 0x335224u;
            goto label_335224;
        }
    }
    ctx->pc = 0x335218u;
label_335218:
    // 0x335218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x335218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33521c: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x33521Cu;
    SET_GPR_U32(ctx, 31, 0x335224u);
    ctx->pc = 0x335220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33521Cu;
    // 0x335220: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x33521Cu, 0x335224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335224u;
label_335224:
    // 0x335224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33522c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335230: 0x3e00008  jr          $ra
    ctx->pc = 0x335230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335230u;
        // 0x335234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335238u;
}
