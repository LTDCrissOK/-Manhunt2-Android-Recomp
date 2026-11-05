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

// Function: sub_00117CC0
// Address: 0x117cc0 - 0x117d28
void sub_00117CC0_0x117cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117CC0_0x117cc0");
#endif

    switch (ctx->pc) {
        case 0x117ce0u: goto label_117ce0;
        case 0x117cecu: goto label_117cec;
        case 0x117cf4u: goto label_117cf4;
        case 0x117d00u: goto label_117d00;
        case 0x117d08u: goto label_117d08;
        case 0x117d14u: goto label_117d14;
        default: break;
    }

    ctx->pc = 0x117cc0u;

    // 0x117cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x117cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x117ccc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x117cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117cd8: 0xc045fd2  jal         func_117F48
    ctx->pc = 0x117CD8u;
    SET_GPR_U32(ctx, 31, 0x117CE0u);
    ctx->pc = 0x117CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CD8u;
    // 0x117cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F48u, 0x117CD8u, 0x117CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CE0u;
label_117ce0:
    // 0x117ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ce4: 0xc045fbc  jal         func_117EF0
    ctx->pc = 0x117CE4u;
    SET_GPR_U32(ctx, 31, 0x117CECu);
    ctx->pc = 0x117CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CE4u;
    // 0x117ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117EF0u, 0x117CE4u, 0x117CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CECu;
label_117cec:
    // 0x117cec: 0xc0460e4  jal         func_118390
    ctx->pc = 0x117CECu;
    SET_GPR_U32(ctx, 31, 0x117CF4u);
    ctx->pc = 0x117CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CECu;
    // 0x117cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x117CECu, 0x117CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CF4u;
label_117cf4:
    // 0x117cf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117cf8: 0xc0460c4  jal         func_118310
    ctx->pc = 0x117CF8u;
    SET_GPR_U32(ctx, 31, 0x117D00u);
    ctx->pc = 0x117CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CF8u;
    // 0x117cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x117CF8u, 0x117D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D00u;
label_117d00:
    // 0x117d00: 0xc04611e  jal         func_118478
    ctx->pc = 0x117D00u;
    SET_GPR_U32(ctx, 31, 0x117D08u);
    ctx->pc = 0x117D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D00u;
    // 0x117d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x117D00u, 0x117D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D08u;
label_117d08:
    // 0x117d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d0c: 0xc046104  jal         func_118410
    ctx->pc = 0x117D0Cu;
    SET_GPR_U32(ctx, 31, 0x117D14u);
    ctx->pc = 0x117D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D0Cu;
    // 0x117d10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x117D0Cu, 0x117D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D14u;
label_117d14:
    // 0x117d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117d20: 0x3e00008  jr          $ra
    ctx->pc = 0x117D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D20u;
        // 0x117d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D28u;
}
