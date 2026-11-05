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

// Function: sub_001234E8
// Address: 0x1234e8 - 0x123590
void sub_001234E8_0x1234e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001234E8_0x1234e8");
#endif

    switch (ctx->pc) {
        case 0x123518u: goto label_123518;
        case 0x123528u: goto label_123528;
        case 0x123544u: goto label_123544;
        case 0x123554u: goto label_123554;
        case 0x123568u: goto label_123568;
        default: break;
    }

    ctx->pc = 0x1234e8u;

    // 0x1234e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1234e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1234ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1234ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1234f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1234f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1234f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1234f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1234f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1234fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1234fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123500: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x123500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x123504: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12350c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12350cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123510: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123510u;
    SET_GPR_U32(ctx, 31, 0x123518u);
    ctx->pc = 0x123514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123510u;
    // 0x123514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123510u, 0x123518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123518u;
label_123518:
    // 0x123518: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x123518u;
    {
        const bool branch_taken_0x123518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123518u;
        // 0x12351c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123518) {
            ctx->pc = 0x123574u;
            goto label_123574;
        }
    }
    ctx->pc = 0x123520u;
    // 0x123520: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123520u;
    SET_GPR_U32(ctx, 31, 0x123528u);
    ctx->pc = 0x123524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123520u;
    // 0x123524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123520u, 0x123528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123528u;
label_123528:
    // 0x123528: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x123528u;
    {
        const bool branch_taken_0x123528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123528) {
            ctx->pc = 0x12352Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123528u;
            // 0x12352c: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123538u;
            goto label_123538;
        }
    }
    ctx->pc = 0x123530u;
    // 0x123530: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x123530u;
    {
        const bool branch_taken_0x123530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123530u;
        // 0x123534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123530) {
            ctx->pc = 0x123574u;
            goto label_123574;
        }
    }
    ctx->pc = 0x123538u;
label_123538:
    // 0x123538: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12353c: 0xc0429e8  jal         func_10A7A0
    ctx->pc = 0x12353Cu;
    SET_GPR_U32(ctx, 31, 0x123544u);
    ctx->pc = 0x123540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12353Cu;
    // 0x123540: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7A0u, 0x12353Cu, 0x123544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123544u;
label_123544:
    // 0x123544: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x123544u;
    {
        const bool branch_taken_0x123544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123544u;
        // 0x123548: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123544) {
            ctx->pc = 0x123570u;
            goto label_123570;
        }
    }
    ctx->pc = 0x12354Cu;
    // 0x12354c: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x12354Cu;
    SET_GPR_U32(ctx, 31, 0x123554u);
    ctx->pc = 0x123550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12354Cu;
    // 0x123550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x12354Cu, 0x123554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123554u;
label_123554:
    // 0x123554: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x123554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x123558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x123558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12355c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12355cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123560: 0xc042a42  jal         func_10A908
    ctx->pc = 0x123560u;
    SET_GPR_U32(ctx, 31, 0x123568u);
    ctx->pc = 0x123564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123560u;
    // 0x123564: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A908u, 0x123560u, 0x123568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123568u;
label_123568:
    // 0x123568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123568u;
    {
        const bool branch_taken_0x123568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123568u;
        // 0x12356c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123568) {
            ctx->pc = 0x123578u;
            goto label_123578;
        }
    }
    ctx->pc = 0x123570u;
label_123570:
    // 0x123570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x123570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123574:
    // 0x123574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123578:
    // 0x123578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12357c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12357cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x123580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123584: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123588: 0x3e00008  jr          $ra
    ctx->pc = 0x123588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123588u;
        // 0x12358c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123590u;
}
