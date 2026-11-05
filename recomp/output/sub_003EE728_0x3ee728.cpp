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

// Function: sub_003EE728
// Address: 0x3ee728 - 0x3ee788
void sub_003EE728_0x3ee728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE728_0x3ee728");
#endif

    switch (ctx->pc) {
        case 0x3ee754u: goto label_3ee754;
        case 0x3ee770u: goto label_3ee770;
        default: break;
    }

    ctx->pc = 0x3ee728u;

    // 0x3ee728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee72c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ee72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ee730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee734: 0x24424430  addiu       $v0, $v0, 0x4430
    ctx->pc = 0x3ee734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17456));
    // 0x3ee738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee73c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ee73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee748: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ee748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ee74c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE74Cu;
    SET_GPR_U32(ctx, 31, 0x3EE754u);
    ctx->pc = 0x3EE750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE74Cu;
    // 0x3ee750: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE74Cu, 0x3EE754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE754u;
label_3ee754:
    // 0x3ee754: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ee754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ee758: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3ee758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3ee75c: 0x24424450  addiu       $v0, $v0, 0x4450
    ctx->pc = 0x3ee75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17488));
    // 0x3ee760: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE760u;
    {
        const bool branch_taken_0x3ee760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE760u;
        // 0x3ee764: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee760) {
            ctx->pc = 0x3EE770u;
            goto label_3ee770;
        }
    }
    ctx->pc = 0x3EE768u;
    // 0x3ee768: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE768u;
    SET_GPR_U32(ctx, 31, 0x3EE770u);
    ctx->pc = 0x3EE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE768u;
    // 0x3ee76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE768u, 0x3EE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE770u;
label_3ee770:
    // 0x3ee770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ee770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ee774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ee778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee77c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE77Cu;
        // 0x3ee780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE784u;
    // 0x3ee784: 0x0  nop
    ctx->pc = 0x3ee784u;
    // NOP
    ctx->pc = 0x3ee788u;
}
