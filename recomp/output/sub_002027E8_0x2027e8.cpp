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

// Function: sub_002027E8
// Address: 0x2027e8 - 0x202848
void sub_002027E8_0x2027e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002027E8_0x2027e8");
#endif

    switch (ctx->pc) {
        case 0x202808u: goto label_202808;
        case 0x202810u: goto label_202810;
        case 0x202818u: goto label_202818;
        case 0x202820u: goto label_202820;
        case 0x20282cu: goto label_20282c;
        default: break;
    }

    ctx->pc = 0x2027e8u;

    // 0x2027e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2027e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2027ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2027ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2027f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2027f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2027f4: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2027f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2027f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2027f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2027fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x202800: 0xc0827b8  jal         func_209EE0
    ctx->pc = 0x202800u;
    SET_GPR_U32(ctx, 31, 0x202808u);
    ctx->pc = 0x202804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202800u;
    // 0x202804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209EE0u, 0x202800u, 0x202808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202808u;
label_202808:
    // 0x202808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202808u;
    {
        const bool branch_taken_0x202808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202808u;
        // 0x20280c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202808) {
            ctx->pc = 0x202824u;
            goto label_202824;
        }
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0xc082662  jal         func_209988
    ctx->pc = 0x202810u;
    SET_GPR_U32(ctx, 31, 0x202818u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x202810u, 0x202818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202818u;
label_202818:
    // 0x202818: 0xc082b70  jal         func_20ADC0
    ctx->pc = 0x202818u;
    SET_GPR_U32(ctx, 31, 0x202820u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x202818u, 0x202820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202820u;
label_202820:
    // 0x202820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202824:
    // 0x202824: 0xc080a12  jal         func_202848
    ctx->pc = 0x202824u;
    SET_GPR_U32(ctx, 31, 0x20282Cu);
    ctx->pc = 0x202828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202824u;
    // 0x202828: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x202824u, 0x20282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20282Cu;
label_20282c:
    // 0x20282c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20282Cu;
    {
        const bool branch_taken_0x20282c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20282Cu;
        // 0x202830: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20282c) {
            ctx->pc = 0x202810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202810;
        }
    }
    ctx->pc = 0x202834u;
    // 0x202834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20283c: 0x3e00008  jr          $ra
    ctx->pc = 0x20283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20283Cu;
        // 0x202840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202844u;
    // 0x202844: 0x0  nop
    ctx->pc = 0x202844u;
    // NOP
    ctx->pc = 0x202848u;
}
