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

// Function: sub_00334F18
// Address: 0x334f18 - 0x334fd8
void sub_00334F18_0x334f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334F18_0x334f18");
#endif

    switch (ctx->pc) {
        case 0x334f44u: goto label_334f44;
        case 0x334f60u: goto label_334f60;
        case 0x334f74u: goto label_334f74;
        case 0x334f94u: goto label_334f94;
        case 0x334fa4u: goto label_334fa4;
        case 0x334fb8u: goto label_334fb8;
        default: break;
    }

    ctx->pc = 0x334f18u;

    // 0x334f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334f1c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x334f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x334f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334f2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f30: 0x8c4521e0  lw          $a1, 0x21E0($v0)
    ctx->pc = 0x334f30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B21E0u));
    // 0x334f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334f38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334f3c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x334F3Cu;
    SET_GPR_U32(ctx, 31, 0x334F44u);
    ctx->pc = 0x334F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F3Cu;
    // 0x334f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x334F3Cu, 0x334F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F44u;
label_334f44:
    // 0x334f44: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x334F44u;
    {
        const bool branch_taken_0x334f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F44u;
        // 0x334f48: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f44) {
            ctx->pc = 0x334F8Cu;
            goto label_334f8c;
        }
    }
    ctx->pc = 0x334F4Cu;
    // 0x334f4c: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x334f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    // 0x334f50: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x334F50u;
    {
        const bool branch_taken_0x334f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f50) {
            ctx->pc = 0x334F8Cu;
            goto label_334f8c;
        }
    }
    ctx->pc = 0x334F58u;
    // 0x334f58: 0xc0cd5bc  jal         func_3356F0
    ctx->pc = 0x334F58u;
    SET_GPR_U32(ctx, 31, 0x334F60u);
    ctx->pc = 0x334F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F58u;
    // 0x334f5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x334F58u, 0x334F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F60u;
label_334f60:
    // 0x334f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f64: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334F64u;
    {
        const bool branch_taken_0x334f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x334f64) {
            ctx->pc = 0x334F8Cu;
            goto label_334f8c;
        }
    }
    ctx->pc = 0x334F6Cu;
    // 0x334f6c: 0xc0cdd5c  jal         func_337570
    ctx->pc = 0x334F6Cu;
    SET_GPR_U32(ctx, 31, 0x334F74u);
    ctx->pc = 0x334F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F6Cu;
    // 0x334f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337570u, 0x334F6Cu, 0x334F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F74u;
label_334f74:
    // 0x334f74: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x334F74u;
    {
        const bool branch_taken_0x334f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F74u;
        // 0x334f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f74) {
            ctx->pc = 0x334FC0u;
            goto label_334fc0;
        }
    }
    ctx->pc = 0x334F7Cu;
    // 0x334f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x334f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334f84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x334F84u;
    {
        const bool branch_taken_0x334f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F84u;
        // 0x334f88: 0xae030498  sw          $v1, 0x498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f84) {
            ctx->pc = 0x334FC0u;
            goto label_334fc0;
        }
    }
    ctx->pc = 0x334F8Cu;
label_334f8c:
    // 0x334f8c: 0xc085d4e  jal         func_217538
    ctx->pc = 0x334F8Cu;
    SET_GPR_U32(ctx, 31, 0x334F94u);
    ctx->pc = 0x334F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F8Cu;
    // 0x334f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x334F8Cu, 0x334F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F94u;
label_334f94:
    // 0x334f94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334F94u;
    {
        const bool branch_taken_0x334f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334f94) {
            ctx->pc = 0x334FA4u;
            goto label_334fa4;
        }
    }
    ctx->pc = 0x334F9Cu;
    // 0x334f9c: 0xc097110  jal         func_25C440
    ctx->pc = 0x334F9Cu;
    SET_GPR_U32(ctx, 31, 0x334FA4u);
    ctx->pc = 0x334FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F9Cu;
    // 0x334fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x334F9Cu, 0x334FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FA4u;
label_334fa4:
    // 0x334fa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x334FA4u;
    {
        const bool branch_taken_0x334fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FA4u;
        // 0x334fa8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334fa4) {
            ctx->pc = 0x334FBCu;
            goto label_334fbc;
        }
    }
    ctx->pc = 0x334FACu;
    // 0x334fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x334facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fb0: 0xc0cd3f6  jal         func_334FD8
    ctx->pc = 0x334FB0u;
    SET_GPR_U32(ctx, 31, 0x334FB8u);
    ctx->pc = 0x334FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FB0u;
    // 0x334fb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334FD8u, 0x334FB0u, 0x334FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FB8u;
label_334fb8:
    // 0x334fb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x334fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_334fbc:
    // 0x334fbc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x334fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_334fc0:
    // 0x334fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334fc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334fc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334fcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x334FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FD0u;
        // 0x334fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334FD8u;
}
