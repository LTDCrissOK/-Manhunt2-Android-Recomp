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

// Function: sub_00147D68
// Address: 0x147d68 - 0x147db8
void sub_00147D68_0x147d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147D68_0x147d68");
#endif

    switch (ctx->pc) {
        case 0x147d84u: goto label_147d84;
        case 0x147d8cu: goto label_147d8c;
        case 0x147da0u: goto label_147da0;
        default: break;
    }

    ctx->pc = 0x147d68u;

    // 0x147d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x147d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x147d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x147d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x147d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x147d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x147d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x147d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x147d7c: 0xc0520e6  jal         func_148398
    ctx->pc = 0x147D7Cu;
    SET_GPR_U32(ctx, 31, 0x147D84u);
    ctx->pc = 0x147D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D7Cu;
    // 0x147d80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148398u, 0x147D7Cu, 0x147D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D84u;
label_147d84:
    // 0x147d84: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x147D84u;
    SET_GPR_U32(ctx, 31, 0x147D8Cu);
    ctx->pc = 0x147D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D84u;
    // 0x147d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x147D84u, 0x147D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D8Cu;
label_147d8c:
    // 0x147d8c: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x147d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x147d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x147d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147d94: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x147d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x147d98: 0xc04d89a  jal         func_136268
    ctx->pc = 0x147D98u;
    SET_GPR_U32(ctx, 31, 0x147DA0u);
    ctx->pc = 0x147D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147D98u;
    // 0x147d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x147D98u, 0x147DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DA0u;
label_147da0:
    // 0x147da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x147da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147da4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x147da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x147da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x147da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147dac: 0x3e00008  jr          $ra
    ctx->pc = 0x147DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147DACu;
        // 0x147db0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147DB4u;
    // 0x147db4: 0x0  nop
    ctx->pc = 0x147db4u;
    // NOP
    ctx->pc = 0x147db8u;
}
