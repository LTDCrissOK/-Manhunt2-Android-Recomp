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

// Function: sub_001F1778
// Address: 0x1f1778 - 0x1f17f8
void sub_001F1778_0x1f1778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1778_0x1f1778");
#endif

    switch (ctx->pc) {
        case 0x1f17ecu: goto label_1f17ec;
        default: break;
    }

    ctx->pc = 0x1f1778u;

    // 0x1f1778: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1f1778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1f177c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1780: 0x90c39281  lbu         $v1, -0x6D7F($a2)
    ctx->pc = 0x1f1780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9281u));
    // 0x1f1784: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1f1784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f178c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f178cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f1790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1794: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f1794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1798: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x1f1798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f179c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F179Cu;
    {
        const bool branch_taken_0x1f179c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F179Cu;
        // 0x1f17a0: 0xa0c39281  sb          $v1, -0x6D7F($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294939265), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f179c) {
            ctx->pc = 0x1F17ACu;
            goto label_1f17ac;
        }
    }
    ctx->pc = 0x1F17A4u;
    // 0x1f17a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f17a8: 0xa1029281  sb          $v0, -0x6D7F($t0)
    ctx->pc = 0x1f17a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4294939265), (uint8_t)GPR_U32(ctx, 2));
label_1f17ac:
    // 0x1f17ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f17acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f17b0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F17B0u;
    {
        const bool branch_taken_0x1f17b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17B0u;
        // 0x1f17b4: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17b0) {
            ctx->pc = 0x1F17C4u;
            goto label_1f17c4;
        }
    }
    ctx->pc = 0x1F17B8u;
    // 0x1f17b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f17bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F17BCu;
    {
        const bool branch_taken_0x1f17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17BCu;
        // 0x1f17c0: 0x2447edb0  addiu       $a3, $v0, -0x1250 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17bc) {
            ctx->pc = 0x1F17DCu;
            goto label_1f17dc;
        }
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C4u;
        // 0x1f17c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F17F0u;
            goto label_1f17f0;
        }
    }
    ctx->pc = 0x1F17CCu;
    // 0x1f17cc: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1f17ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f17d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F17D0u;
    {
        const bool branch_taken_0x1f17d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17D0u;
        // 0x1f17d4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17d0) {
            ctx->pc = 0x1F17F0u;
            goto label_1f17f0;
        }
    }
    ctx->pc = 0x1F17D8u;
    // 0x1f17d8: 0x2447edc0  addiu       $a3, $v0, -0x1240
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
label_1f17dc:
    // 0x1f17dc: 0x91059281  lbu         $a1, -0x6D7F($t0)
    ctx->pc = 0x1f17dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294939265)));
    // 0x1f17e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f17e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f17e4: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F17E4u;
    SET_GPR_U32(ctx, 31, 0x1F17ECu);
    ctx->pc = 0x1F17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F17E4u;
    // 0x1f17e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F17E4u, 0x1F17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17ECu;
label_1f17ec:
    // 0x1f17ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f17ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f17f0:
    // 0x1f17f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F17F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17F0u;
        // 0x1f17f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F17F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F17F8u;
}
