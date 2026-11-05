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

// Function: sub_001AB550
// Address: 0x1ab550 - 0x1ab5a8
void sub_001AB550_0x1ab550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB550_0x1ab550");
#endif

    switch (ctx->pc) {
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab594u: goto label_1ab594;
        default: break;
    }

    ctx->pc = 0x1ab550u;

    // 0x1ab550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab554: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab55c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab564: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB564u;
    SET_GPR_U32(ctx, 31, 0x1AB56Cu);
    ctx->pc = 0x1AB568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB564u;
    // 0x1ab568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB564u, 0x1AB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB56Cu;
label_1ab56c:
    // 0x1ab56c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab570: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1ab574: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB574u;
    {
        const bool branch_taken_0x1ab574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab574) {
            ctx->pc = 0x1AB578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB574u;
            // 0x1ab578: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB598u;
            goto label_1ab598;
        }
    }
    ctx->pc = 0x1AB57Cu;
    // 0x1ab57c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1ab57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1ab580: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x1AB580u;
    SET_GPR_U32(ctx, 31, 0x1AB588u);
    ctx->pc = 0x1AB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB580u;
    // 0x1ab584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x1AB580u, 0x1AB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB588u;
label_1ab588:
    // 0x1ab588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab58c: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x1AB58Cu;
    SET_GPR_U32(ctx, 31, 0x1AB594u);
    ctx->pc = 0x1AB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB58Cu;
    // 0x1ab590: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x1AB58Cu, 0x1AB594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB594u;
label_1ab594:
    // 0x1ab594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab598:
    // 0x1ab598: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB59Cu;
        // 0x1ab5a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB5A4u;
    // 0x1ab5a4: 0x0  nop
    ctx->pc = 0x1ab5a4u;
    // NOP
    ctx->pc = 0x1ab5a8u;
}
