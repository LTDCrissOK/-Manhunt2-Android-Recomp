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

// Function: sub_003E1A90
// Address: 0x3e1a90 - 0x3e1b00
void sub_003E1A90_0x3e1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1A90_0x3e1a90");
#endif

    switch (ctx->pc) {
        case 0x3e1ac0u: goto label_3e1ac0;
        case 0x3e1accu: goto label_3e1acc;
        case 0x3e1ad8u: goto label_3e1ad8;
        case 0x3e1aecu: goto label_3e1aec;
        default: break;
    }

    ctx->pc = 0x3e1a90u;

    // 0x3e1a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1a94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1a9c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1ab0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e1ab4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e1ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e1ab8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1AB8u;
    SET_GPR_U32(ctx, 31, 0x3E1AC0u);
    ctx->pc = 0x3E1ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1AB8u;
    // 0x3e1abc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1AB8u, 0x3E1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1AC0u;
label_3e1ac0:
    // 0x3e1ac0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e1ac4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1AC4u;
    SET_GPR_U32(ctx, 31, 0x3E1ACCu);
    ctx->pc = 0x3E1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1AC4u;
    // 0x3e1ac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1AC4u, 0x3E1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1ACCu;
label_3e1acc:
    // 0x3e1acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1ad0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1AD0u;
    SET_GPR_U32(ctx, 31, 0x3E1AD8u);
    ctx->pc = 0x3E1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1AD0u;
    // 0x3e1ad4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1AD0u, 0x3E1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1AD8u;
label_3e1ad8:
    // 0x3e1ad8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1ad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1adc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1ADCu;
    {
        const bool branch_taken_0x3e1adc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1ADCu;
        // 0x3e1ae0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1adc) {
            ctx->pc = 0x3E1AF0u;
            goto label_3e1af0;
        }
    }
    ctx->pc = 0x3E1AE4u;
    // 0x3e1ae4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1AE4u;
    SET_GPR_U32(ctx, 31, 0x3E1AECu);
    ctx->pc = 0x3E1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1AE4u;
    // 0x3e1ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1AE4u, 0x3E1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1AECu;
label_3e1aec:
    // 0x3e1aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1af0:
    // 0x3e1af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1af8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1AF8u;
        // 0x3e1afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1B00u;
}
