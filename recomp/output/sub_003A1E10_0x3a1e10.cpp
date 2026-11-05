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

// Function: sub_003A1E10
// Address: 0x3a1e10 - 0x3a1eb8
void sub_003A1E10_0x3a1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1E10_0x3a1e10");
#endif

    switch (ctx->pc) {
        case 0x3a1e44u: goto label_3a1e44;
        case 0x3a1e5cu: goto label_3a1e5c;
        case 0x3a1e64u: goto label_3a1e64;
        case 0x3a1e78u: goto label_3a1e78;
        case 0x3a1e80u: goto label_3a1e80;
        case 0x3a1e98u: goto label_3a1e98;
        default: break;
    }

    ctx->pc = 0x3a1e10u;

    // 0x3a1e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a1e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a1e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a1e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a1e20: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a1e20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a1e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a1e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1e2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a1e30: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3a1e30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a1e34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1E34u;
    {
        const bool branch_taken_0x3a1e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E34u;
        // 0x3a1e38: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e34) {
            ctx->pc = 0x3A1E50u;
            goto label_3a1e50;
        }
    }
    ctx->pc = 0x3A1E3Cu;
    // 0x3a1e3c: 0xc0e8868  jal         func_3A21A0
    ctx->pc = 0x3A1E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A1E44u);
    ctx->pc = 0x3A21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A21A0u, 0x3A1E3Cu, 0x3A1E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E44u;
label_3a1e44:
    // 0x3a1e44: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3a1e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a1e48: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A1E48u;
    {
        const bool branch_taken_0x3a1e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E48u;
        // 0x3a1e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e48) {
            ctx->pc = 0x3A1E9Cu;
            goto label_3a1e9c;
        }
    }
    ctx->pc = 0x3A1E50u;
label_3a1e50:
    // 0x3a1e50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a1e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e54: 0xc0e8992  jal         func_3A2648
    ctx->pc = 0x3A1E54u;
    SET_GPR_U32(ctx, 31, 0x3A1E5Cu);
    ctx->pc = 0x3A1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E54u;
    // 0x3a1e58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2648u, 0x3A1E54u, 0x3A1E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E5Cu;
label_3a1e5c:
    // 0x3a1e5c: 0xc0e86ee  jal         func_3A1BB8
    ctx->pc = 0x3A1E5Cu;
    SET_GPR_U32(ctx, 31, 0x3A1E64u);
    ctx->pc = 0x3A1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E5Cu;
    // 0x3a1e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1BB8u, 0x3A1E5Cu, 0x3A1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E64u;
label_3a1e64:
    // 0x3a1e64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e68: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A1E68u;
    {
        const bool branch_taken_0x3a1e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E68u;
        // 0x3a1e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e68) {
            ctx->pc = 0x3A1E98u;
            goto label_3a1e98;
        }
    }
    ctx->pc = 0x3A1E70u;
    // 0x3a1e70: 0xc0e8868  jal         func_3A21A0
    ctx->pc = 0x3A1E70u;
    SET_GPR_U32(ctx, 31, 0x3A1E78u);
    ctx->pc = 0x3A21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A21A0u, 0x3A1E70u, 0x3A1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E78u;
label_3a1e78:
    // 0x3a1e78: 0xc0e86ee  jal         func_3A1BB8
    ctx->pc = 0x3A1E78u;
    SET_GPR_U32(ctx, 31, 0x3A1E80u);
    ctx->pc = 0x3A1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1E78u;
    // 0x3a1e7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1BB8u, 0x3A1E78u, 0x3A1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E80u;
label_3a1e80:
    // 0x3a1e80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a1e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a1e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1e88: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1E88u;
    {
        const bool branch_taken_0x3a1e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1E88u;
        // 0x3a1e8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1e88) {
            ctx->pc = 0x3A1E9Cu;
            goto label_3a1e9c;
        }
    }
    ctx->pc = 0x3A1E90u;
    // 0x3a1e90: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A1E90u;
    SET_GPR_U32(ctx, 31, 0x3A1E98u);
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A1E90u, 0x3A1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1E98u;
label_3a1e98:
    // 0x3a1e98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a1e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1e9c:
    // 0x3a1e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a1ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1ea8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a1ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a1eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a1eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1EB0u;
        // 0x3a1eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1EB8u;
}
