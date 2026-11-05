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

// Function: sub_003151E8
// Address: 0x3151e8 - 0x315248
void sub_003151E8_0x3151e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003151E8_0x3151e8");
#endif

    switch (ctx->pc) {
        case 0x315210u: goto label_315210;
        case 0x315218u: goto label_315218;
        case 0x315224u: goto label_315224;
        default: break;
    }

    ctx->pc = 0x3151e8u;

    // 0x3151e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3151e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3151ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3151ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3151f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3151f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3151f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3151f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3151f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3151f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x315200: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x315200u;
    {
        const bool branch_taken_0x315200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315200u;
        // 0x315204: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315200) {
            ctx->pc = 0x315234u;
            goto label_315234;
        }
    }
    ctx->pc = 0x315208u;
    // 0x315208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x315208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31520c: 0x0  nop
    ctx->pc = 0x31520cu;
    // NOP
label_315210:
    // 0x315210: 0xc0c5492  jal         func_315248
    ctx->pc = 0x315210u;
    SET_GPR_U32(ctx, 31, 0x315218u);
    ctx->pc = 0x315214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315210u;
    // 0x315214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x315210u, 0x315218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315218u;
label_315218:
    // 0x315218: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x315218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31521c: 0xc0c544c  jal         func_315130
    ctx->pc = 0x31521Cu;
    SET_GPR_U32(ctx, 31, 0x315224u);
    ctx->pc = 0x315220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31521Cu;
    // 0x315220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315130u, 0x31521Cu, 0x315224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315224u;
label_315224:
    // 0x315224: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x315224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x315228: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x315228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31522c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31522Cu;
    {
        const bool branch_taken_0x31522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31522Cu;
        // 0x315230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31522c) {
            ctx->pc = 0x315210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315210;
        }
    }
    ctx->pc = 0x315234u;
label_315234:
    // 0x315234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x315234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315238: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x315238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31523c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31523cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315240: 0x3e00008  jr          $ra
    ctx->pc = 0x315240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315240u;
        // 0x315244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315248u;
}
