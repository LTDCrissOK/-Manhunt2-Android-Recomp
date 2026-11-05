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

// Function: sub_00174D88
// Address: 0x174d88 - 0x174df0
void sub_00174D88_0x174d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174D88_0x174d88");
#endif

    switch (ctx->pc) {
        case 0x174dacu: goto label_174dac;
        case 0x174db8u: goto label_174db8;
        case 0x174dccu: goto label_174dcc;
        case 0x174ddcu: goto label_174ddc;
        default: break;
    }

    ctx->pc = 0x174d88u;

    // 0x174d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174d8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174d90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174d98: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x174d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x174d9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x174D9Cu;
    {
        const bool branch_taken_0x174d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D9Cu;
        // 0x174da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d9c) {
            ctx->pc = 0x174DE0u;
            goto label_174de0;
        }
    }
    ctx->pc = 0x174DA4u;
    // 0x174da4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x174DA4u;
    SET_GPR_U32(ctx, 31, 0x174DACu);
    ctx->pc = 0x174DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DA4u;
    // 0x174da8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x174DA4u, 0x174DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DACu;
label_174dac:
    // 0x174dac: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x174dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x174db0: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x174DB0u;
    SET_GPR_U32(ctx, 31, 0x174DB8u);
    ctx->pc = 0x174DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DB0u;
    // 0x174db4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x174DB0u, 0x174DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DB8u;
label_174db8:
    // 0x174db8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174DB8u;
    {
        const bool branch_taken_0x174db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB8u;
        // 0x174dbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174db8) {
            ctx->pc = 0x174DD4u;
            goto label_174dd4;
        }
    }
    ctx->pc = 0x174DC0u;
    // 0x174dc0: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x174dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x174dc4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174DC4u;
    SET_GPR_U32(ctx, 31, 0x174DCCu);
    ctx->pc = 0x174DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DC4u;
    // 0x174dc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174DC4u, 0x174DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DCCu;
label_174dcc:
    // 0x174dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x174DCCu;
    {
        const bool branch_taken_0x174dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DCCu;
        // 0x174dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dcc) {
            ctx->pc = 0x174DE0u;
            goto label_174de0;
        }
    }
    ctx->pc = 0x174DD4u;
label_174dd4:
    // 0x174dd4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x174DD4u;
    SET_GPR_U32(ctx, 31, 0x174DDCu);
    ctx->pc = 0x174DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174DD4u;
    // 0x174dd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x174DD4u, 0x174DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DDCu;
label_174ddc:
    // 0x174ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174de0:
    // 0x174de0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174de4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x174de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174de8: 0x3e00008  jr          $ra
    ctx->pc = 0x174DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DE8u;
        // 0x174dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174DF0u;
}
