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

// Function: sub_0020D598
// Address: 0x20d598 - 0x20d5f0
void sub_0020D598_0x20d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D598_0x20d598");
#endif

    switch (ctx->pc) {
        case 0x20d5c4u: goto label_20d5c4;
        case 0x20d5dcu: goto label_20d5dc;
        default: break;
    }

    ctx->pc = 0x20d598u;

    // 0x20d598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20d59c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x20d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x20d5a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5b0: 0x24519b10  addiu       $s1, $v0, -0x64F0
    ctx->pc = 0x20d5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x20d5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5bc: 0xc07f4aa  jal         func_1FD2A8
    ctx->pc = 0x20D5BCu;
    SET_GPR_U32(ctx, 31, 0x20D5C4u);
    ctx->pc = 0x20D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5BCu;
    // 0x20d5c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2A8u, 0x20D5BCu, 0x20D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5C4u;
label_20d5c4:
    // 0x20d5c4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D5C4u;
    {
        const bool branch_taken_0x20d5c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5C4u;
        // 0x20d5c8: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d5c4) {
            ctx->pc = 0x20D5DCu;
            goto label_20d5dc;
        }
    }
    ctx->pc = 0x20D5CCu;
    // 0x20d5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20d5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d5d4: 0xc07f4ba  jal         func_1FD2E8
    ctx->pc = 0x20D5D4u;
    SET_GPR_U32(ctx, 31, 0x20D5DCu);
    ctx->pc = 0x20D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D5D4u;
    // 0x20d5d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD2E8u, 0x20D5D4u, 0x20D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5DCu;
label_20d5dc:
    // 0x20d5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d5e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20d5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20D5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D5E8u;
        // 0x20d5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D5F0u;
}
