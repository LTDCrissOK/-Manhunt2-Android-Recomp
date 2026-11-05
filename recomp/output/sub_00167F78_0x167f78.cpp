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

// Function: sub_00167F78
// Address: 0x167f78 - 0x167fd0
void sub_00167F78_0x167f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167F78_0x167f78");
#endif

    switch (ctx->pc) {
        case 0x167f94u: goto label_167f94;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa8u: goto label_167fa8;
        case 0x167fb8u: goto label_167fb8;
        default: break;
    }

    ctx->pc = 0x167f78u;

    // 0x167f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167f88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167f8c: 0xc05a0a6  jal         func_168298
    ctx->pc = 0x167F8Cu;
    SET_GPR_U32(ctx, 31, 0x167F94u);
    ctx->pc = 0x167F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F8Cu;
    // 0x167f90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168298u, 0x167F8Cu, 0x167F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F94u;
label_167f94:
    // 0x167f94: 0xc04f032  jal         func_13C0C8
    ctx->pc = 0x167F94u;
    SET_GPR_U32(ctx, 31, 0x167F9Cu);
    ctx->pc = 0x167F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F94u;
    // 0x167f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0C8u, 0x167F94u, 0x167F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F9Cu;
label_167f9c:
    // 0x167f9c: 0xae110214  sw          $s1, 0x214($s0)
    ctx->pc = 0x167f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 17));
    // 0x167fa0: 0xc04f320  jal         func_13CC80
    ctx->pc = 0x167FA0u;
    SET_GPR_U32(ctx, 31, 0x167FA8u);
    ctx->pc = 0x167FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FA0u;
    // 0x167fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC80u, 0x167FA0u, 0x167FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FA8u;
label_167fa8:
    // 0x167fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167fb0: 0xc04f0c8  jal         func_13C320
    ctx->pc = 0x167FB0u;
    SET_GPR_U32(ctx, 31, 0x167FB8u);
    ctx->pc = 0x167FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FB0u;
    // 0x167fb4: 0xae020210  sw          $v0, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C320u, 0x167FB0u, 0x167FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FB8u;
label_167fb8:
    // 0x167fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x167FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FC4u;
        // 0x167fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167FCCu;
    // 0x167fcc: 0x0  nop
    ctx->pc = 0x167fccu;
    // NOP
    ctx->pc = 0x167fd0u;
}
