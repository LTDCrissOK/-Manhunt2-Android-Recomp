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

// Function: sub_00104480
// Address: 0x104480 - 0x1044d0
void sub_00104480_0x104480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104480_0x104480");
#endif

    switch (ctx->pc) {
        case 0x1044a4u: goto label_1044a4;
        case 0x1044b8u: goto label_1044b8;
        default: break;
    }

    ctx->pc = 0x104480u;

    // 0x104480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104488: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10448c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x104498: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10449c: 0xc040004  jal         func_100010
    ctx->pc = 0x10449Cu;
    SET_GPR_U32(ctx, 31, 0x1044A4u);
    ctx->pc = 0x1044A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10449Cu;
    // 0x1044a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100010u, 0x10449Cu, 0x1044A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044A4u;
label_1044a4:
    // 0x1044a4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1044a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1044a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1044A8u;
    {
        const bool branch_taken_0x1044a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044A8u;
        // 0x1044ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044a8) {
            ctx->pc = 0x1044BCu;
            goto label_1044bc;
        }
    }
    ctx->pc = 0x1044B0u;
    // 0x1044b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1044B0u;
    SET_GPR_U32(ctx, 31, 0x1044B8u);
    ctx->pc = 0x1044B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1044B0u;
    // 0x1044b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1044B0u, 0x1044B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044B8u;
label_1044b8:
    // 0x1044b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1044b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1044bc:
    // 0x1044bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1044bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1044c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1044c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1044c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1044C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1044C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044C4u;
        // 0x1044c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1044C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1044CCu;
    // 0x1044cc: 0x0  nop
    ctx->pc = 0x1044ccu;
    // NOP
    ctx->pc = 0x1044d0u;
}
