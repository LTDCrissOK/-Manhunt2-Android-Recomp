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

// Function: sub_002A5A98
// Address: 0x2a5a98 - 0x2a5b00
void sub_002A5A98_0x2a5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A98_0x2a5a98");
#endif

    switch (ctx->pc) {
        case 0x2a5ac0u: goto label_2a5ac0;
        case 0x2a5ae0u: goto label_2a5ae0;
        default: break;
    }

    ctx->pc = 0x2a5a98u;

    // 0x2a5a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a5a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a5a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5aa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a5aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a5aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a5aa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a5aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5aac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a5aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a5ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a5ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ab8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A5AB8u;
    SET_GPR_U32(ctx, 31, 0x2A5AC0u);
    ctx->pc = 0x2A5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AB8u;
    // 0x2a5abc: 0x24a5d778  addiu       $a1, $a1, -0x2888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A5AB8u, 0x2A5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AC0u;
label_2a5ac0:
    // 0x2a5ac0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5ac4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A5AC4u;
    {
        const bool branch_taken_0x2a5ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AC4u;
        // 0x2a5ac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5ac4) {
            ctx->pc = 0x2A5AD0u;
            goto label_2a5ad0;
        }
    }
    ctx->pc = 0x2A5ACCu;
    // 0x2a5acc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2a5accu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2a5ad0:
    // 0x2a5ad0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a5ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ad8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2A5AD8u;
    SET_GPR_U32(ctx, 31, 0x2A5AE0u);
    ctx->pc = 0x2A5ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AD8u;
    // 0x2a5adc: 0x24a5d780  addiu       $a1, $a1, -0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2A5AD8u, 0x2A5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AE0u;
label_2a5ae0:
    // 0x2a5ae0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a5ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a5ae4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A5AE4u;
    {
        const bool branch_taken_0x2a5ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5ae4) {
            ctx->pc = 0x2A5AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5AE4u;
            // 0x2a5ae8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5AECu;
            goto label_2a5aec;
        }
    }
    ctx->pc = 0x2A5AECu;
label_2a5aec:
    // 0x2a5aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a5aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5af0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a5af0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a5af4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5af8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AF8u;
        // 0x2a5afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5B00u;
}
