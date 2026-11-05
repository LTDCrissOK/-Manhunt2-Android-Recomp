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

// Function: sub_001DD100
// Address: 0x1dd100 - 0x1dd180
void sub_001DD100_0x1dd100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD100_0x1dd100");
#endif

    switch (ctx->pc) {
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd138u: goto label_1dd138;
        case 0x1dd144u: goto label_1dd144;
        default: break;
    }

    ctx->pc = 0x1dd100u;

    // 0x1dd100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd10c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd110: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dd114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd118: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd11c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dd120: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD120u;
    {
        const bool branch_taken_0x1dd120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD120u;
        // 0x1dd124: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd120) {
            ctx->pc = 0x1DD160u;
            goto label_1dd160;
        }
    }
    ctx->pc = 0x1DD128u;
    // 0x1dd128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd12c: 0x0  nop
    ctx->pc = 0x1dd12cu;
    // NOP
label_1dd130:
    // 0x1dd130: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DD130u;
    SET_GPR_U32(ctx, 31, 0x1DD138u);
    ctx->pc = 0x1DD134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD130u;
    // 0x1dd134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DD130u, 0x1DD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD138u;
label_1dd138:
    // 0x1dd138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd13c: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD13Cu;
    SET_GPR_U32(ctx, 31, 0x1DD144u);
    ctx->pc = 0x1DD140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD13Cu;
    // 0x1dd140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD13Cu, 0x1DD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD144u;
label_1dd144:
    // 0x1dd144: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DD144u;
    {
        const bool branch_taken_0x1dd144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD144u;
        // 0x1dd148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd144) {
            ctx->pc = 0x1DD164u;
            goto label_1dd164;
        }
    }
    ctx->pc = 0x1DD14Cu;
    // 0x1dd14c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dd150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dd154: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dd154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DD158u;
    {
        const bool branch_taken_0x1dd158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD158u;
        // 0x1dd15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd158) {
            ctx->pc = 0x1DD130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd130;
        }
    }
    ctx->pc = 0x1DD160u;
label_1dd160:
    // 0x1dd160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd164:
    // 0x1dd164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd16c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd170: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd174: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD174u;
        // 0x1dd178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD17Cu;
    // 0x1dd17c: 0x0  nop
    ctx->pc = 0x1dd17cu;
    // NOP
    ctx->pc = 0x1dd180u;
}
