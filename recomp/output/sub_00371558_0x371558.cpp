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

// Function: sub_00371558
// Address: 0x371558 - 0x3715a8
void sub_00371558_0x371558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371558_0x371558");
#endif

    switch (ctx->pc) {
        case 0x371598u: goto label_371598;
        default: break;
    }

    ctx->pc = 0x371558u;

    // 0x371558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37155c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371560: 0x14a2000d  bne         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x371560u;
    {
        const bool branch_taken_0x371560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x371564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371560u;
        // 0x371564: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371560) {
            ctx->pc = 0x371598u;
            goto label_371598;
        }
    }
    ctx->pc = 0x371568u;
    // 0x371568: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x371568u;
    {
        const bool branch_taken_0x371568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371568u;
        // 0x37156c: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371568) {
            ctx->pc = 0x371598u;
            goto label_371598;
        }
    }
    ctx->pc = 0x371570u;
    // 0x371570: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x371570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x371574: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x371574u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x371578: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x371578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x37157c: 0x2484f910  addiu       $a0, $a0, -0x6F0
    ctx->pc = 0x37157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965520));
    // 0x371580: 0x24a5f980  addiu       $a1, $a1, -0x680
    ctx->pc = 0x371580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965632));
    // 0x371584: 0x25085980  addiu       $t0, $t0, 0x5980
    ctx->pc = 0x371584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22912));
    // 0x371588: 0x34c66000  ori         $a2, $a2, 0x6000
    ctx->pc = 0x371588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24576);
    // 0x37158c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x37158cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371590: 0xc0dc2e4  jal         func_370B90
    ctx->pc = 0x371590u;
    SET_GPR_U32(ctx, 31, 0x371598u);
    ctx->pc = 0x371594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371590u;
    // 0x371594: 0x3c090004  lui         $t1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370B90u, 0x371590u, 0x371598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371598u;
label_371598:
    // 0x371598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37159c: 0x3e00008  jr          $ra
    ctx->pc = 0x37159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3715A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37159Cu;
        // 0x3715a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37159Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3715A4u;
    // 0x3715a4: 0x0  nop
    ctx->pc = 0x3715a4u;
    // NOP
    ctx->pc = 0x3715a8u;
}
