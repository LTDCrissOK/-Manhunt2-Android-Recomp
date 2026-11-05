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

// Function: sub_002D65C8
// Address: 0x2d65c8 - 0x2d6618
void sub_002D65C8_0x2d65c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D65C8_0x2d65c8");
#endif

    switch (ctx->pc) {
        case 0x2d65f0u: goto label_2d65f0;
        case 0x2d6604u: goto label_2d6604;
        default: break;
    }

    ctx->pc = 0x2d65c8u;

    // 0x2d65c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d65c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d65cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d65d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d65d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d65d4: 0x24423df8  addiu       $v0, $v0, 0x3DF8
    ctx->pc = 0x2d65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15864));
    // 0x2d65d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d65d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d65dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d65dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d65e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d65e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d65e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65e8: 0xc0b59d4  jal         func_2D6750
    ctx->pc = 0x2D65E8u;
    SET_GPR_U32(ctx, 31, 0x2D65F0u);
    ctx->pc = 0x2D65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65E8u;
    // 0x2d65ec: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6750u, 0x2D65E8u, 0x2D65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65F0u;
label_2d65f0:
    // 0x2d65f0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2d65f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2d65f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D65F4u;
    {
        const bool branch_taken_0x2d65f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D65F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D65F4u;
        // 0x2d65f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d65f4) {
            ctx->pc = 0x2D6608u;
            goto label_2d6608;
        }
    }
    ctx->pc = 0x2D65FCu;
    // 0x2d65fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D65FCu;
    SET_GPR_U32(ctx, 31, 0x2D6604u);
    ctx->pc = 0x2D6600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65FCu;
    // 0x2d6600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D65FCu, 0x2D6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6604u;
label_2d6604:
    // 0x2d6604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6608:
    // 0x2d6608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d660c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d660cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6610: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6610u;
        // 0x2d6614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6618u;
}
