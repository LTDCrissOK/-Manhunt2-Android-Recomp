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

// Function: sub_00335470
// Address: 0x335470 - 0x3354c0
void sub_00335470_0x335470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335470_0x335470");
#endif

    switch (ctx->pc) {
        case 0x33548cu: goto label_33548c;
        case 0x3354a0u: goto label_3354a0;
        default: break;
    }

    ctx->pc = 0x335470u;

    // 0x335470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33547c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33547cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335484: 0xc0cd258  jal         func_334960
    ctx->pc = 0x335484u;
    SET_GPR_U32(ctx, 31, 0x33548Cu);
    ctx->pc = 0x335488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335484u;
    // 0x335488: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334960u, 0x335484u, 0x33548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33548Cu;
label_33548c:
    // 0x33548c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33548Cu;
    {
        const bool branch_taken_0x33548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33548Cu;
        // 0x335490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33548c) {
            ctx->pc = 0x3354A4u;
            goto label_3354a4;
        }
    }
    ctx->pc = 0x335494u;
    // 0x335494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x335494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335498: 0xc0cd574  jal         func_3355D0
    ctx->pc = 0x335498u;
    SET_GPR_U32(ctx, 31, 0x3354A0u);
    ctx->pc = 0x33549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335498u;
    // 0x33549c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355D0u, 0x335498u, 0x3354A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354A0u;
label_3354a0:
    // 0x3354a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3354a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3354a4:
    // 0x3354a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3354a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3354a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3354ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3354acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3354b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3354b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3354b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3354B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3354B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354B4u;
        // 0x3354b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3354B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3354BCu;
    // 0x3354bc: 0x0  nop
    ctx->pc = 0x3354bcu;
    // NOP
    ctx->pc = 0x3354c0u;
}
