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

// Function: sub_001CC110
// Address: 0x1cc110 - 0x1cc170
void sub_001CC110_0x1cc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC110_0x1cc110");
#endif

    switch (ctx->pc) {
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc158u: goto label_1cc158;
        default: break;
    }

    ctx->pc = 0x1cc110u;

    // 0x1cc110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc114: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cc114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cc118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc11c: 0x24421498  addiu       $v0, $v0, 0x1498
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5272));
    // 0x1cc120: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc12c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cc12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cc130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cc130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc134: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC134u;
    {
        const bool branch_taken_0x1cc134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC134u;
        // 0x1cc138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc134) {
            ctx->pc = 0x1CC144u;
            goto label_1cc144;
        }
    }
    ctx->pc = 0x1CC13Cu;
    // 0x1cc13c: 0xc0730f6  jal         func_1CC3D8
    ctx->pc = 0x1CC13Cu;
    SET_GPR_U32(ctx, 31, 0x1CC144u);
    ctx->pc = 0x1CC140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC13Cu;
    // 0x1cc140: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC3D8u, 0x1CC13Cu, 0x1CC144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC144u;
label_1cc144:
    // 0x1cc144: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1cc144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1cc148: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC148u;
    {
        const bool branch_taken_0x1cc148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc148) {
            ctx->pc = 0x1CC14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC148u;
            // 0x1cc14c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC15Cu;
            goto label_1cc15c;
        }
    }
    ctx->pc = 0x1CC150u;
    // 0x1cc150: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CC150u;
    SET_GPR_U32(ctx, 31, 0x1CC158u);
    ctx->pc = 0x1CC154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC150u;
    // 0x1cc154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CC150u, 0x1CC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC158u;
label_1cc158:
    // 0x1cc158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc15c:
    // 0x1cc15c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc164: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC164u;
        // 0x1cc168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC16Cu;
    // 0x1cc16c: 0x0  nop
    ctx->pc = 0x1cc16cu;
    // NOP
    ctx->pc = 0x1cc170u;
}
