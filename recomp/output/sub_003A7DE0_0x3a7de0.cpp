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

// Function: sub_003A7DE0
// Address: 0x3a7de0 - 0x3a7e80
void sub_003A7DE0_0x3a7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7DE0_0x3a7de0");
#endif

    switch (ctx->pc) {
        case 0x3a7e28u: goto label_3a7e28;
        case 0x3a7e44u: goto label_3a7e44;
        case 0x3a7e5cu: goto label_3a7e5c;
        case 0x3a7e64u: goto label_3a7e64;
        default: break;
    }

    ctx->pc = 0x3a7de0u;

    // 0x3a7de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a7de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7de8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a7de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7df0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7DF0u;
    {
        const bool branch_taken_0x3a7df0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DF0u;
        // 0x3a7df4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7df0) {
            ctx->pc = 0x3A7E08u;
            goto label_3a7e08;
        }
    }
    ctx->pc = 0x3A7DF8u;
    // 0x3a7df8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a7df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a7dfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A7DFCu;
    {
        const bool branch_taken_0x3a7dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DFCu;
        // 0x3a7e00: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7dfc) {
            ctx->pc = 0x3A7E3Cu;
            goto label_3a7e3c;
        }
    }
    ctx->pc = 0x3A7E04u;
    // 0x3a7e04: 0x0  nop
    ctx->pc = 0x3a7e04u;
    // NOP
label_3a7e08:
    // 0x3a7e08: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7E08u;
    {
        const bool branch_taken_0x3a7e08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E08u;
        // 0x3a7e0c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e08) {
            ctx->pc = 0x3A7E20u;
            goto label_3a7e20;
        }
    }
    ctx->pc = 0x3A7E10u;
    // 0x3a7e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a7e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7E14u;
    {
        const bool branch_taken_0x3a7e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E14u;
        // 0x3a7e18: 0x24a5e528  addiu       $a1, $a1, -0x1AD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e14) {
            ctx->pc = 0x3A7E3Cu;
            goto label_3a7e3c;
        }
    }
    ctx->pc = 0x3A7E1Cu;
    // 0x3a7e1c: 0x0  nop
    ctx->pc = 0x3a7e1cu;
    // NOP
label_3a7e20:
    // 0x3a7e20: 0xc0e9f3e  jal         func_3A7CF8
    ctx->pc = 0x3A7E20u;
    SET_GPR_U32(ctx, 31, 0x3A7E28u);
    ctx->pc = 0x3A7CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CF8u, 0x3A7E20u, 0x3A7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E28u;
label_3a7e28:
    // 0x3a7e28: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a7e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a7e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e30: 0x24a5e550  addiu       $a1, $a1, -0x1AB0
    ctx->pc = 0x3a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x3a7e34: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A7E34u;
    {
        const bool branch_taken_0x3a7e34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E34u;
        // 0x3a7e38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e34) {
            ctx->pc = 0x3A7E50u;
            goto label_3a7e50;
        }
    }
    ctx->pc = 0x3A7E3Cu;
label_3a7e3c:
    // 0x3a7e3c: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A7E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A7E44u);
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A7E3Cu, 0x3A7E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E44u;
label_3a7e44:
    // 0x3a7e44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7E44u;
    {
        const bool branch_taken_0x3a7e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E44u;
        // 0x3a7e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e44) {
            ctx->pc = 0x3A7E68u;
            goto label_3a7e68;
        }
    }
    ctx->pc = 0x3A7E4Cu;
    // 0x3a7e4c: 0x0  nop
    ctx->pc = 0x3a7e4cu;
    // NOP
label_3a7e50:
    // 0x3a7e50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7e54: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A7E54u;
    SET_GPR_U32(ctx, 31, 0x3A7E5Cu);
    ctx->pc = 0x3A7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E54u;
    // 0x3a7e58: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A7E54u, 0x3A7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E5Cu;
label_3a7e5c:
    // 0x3a7e5c: 0xc0e9f5c  jal         func_3A7D70
    ctx->pc = 0x3A7E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A7E64u);
    ctx->pc = 0x3A7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E5Cu;
    // 0x3a7e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D70u, 0x3A7E5Cu, 0x3A7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E64u;
label_3a7e64:
    // 0x3a7e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7e68:
    // 0x3a7e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E74u;
        // 0x3a7e78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7E7Cu;
    // 0x3a7e7c: 0x0  nop
    ctx->pc = 0x3a7e7cu;
    // NOP
    ctx->pc = 0x3a7e80u;
}
