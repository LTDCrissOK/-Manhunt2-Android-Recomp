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

// Function: sub_0025ACA8
// Address: 0x25aca8 - 0x25ad60
void sub_0025ACA8_0x25aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ACA8_0x25aca8");
#endif

    ctx->pc = 0x25aca8u;

    // 0x25aca8: 0x24a3ff9b  addiu       $v1, $a1, -0x65
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967195));
    // 0x25acac: 0x2c620035  sltiu       $v0, $v1, 0x35
    ctx->pc = 0x25acacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x25acb0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x25ACB0u;
    {
        const bool branch_taken_0x25acb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB0u;
        // 0x25acb4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acb0) {
            ctx->pc = 0x25AD70u;
            return;
        }
    }
    ctx->pc = 0x25ACB8u;
    // 0x25acb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25acbc: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x25acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x25acc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25acc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25acc8: 0x800008  jr          $a0
    ctx->pc = 0x25ACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25ACD0u: goto label_25acd0;
            case 0x25ACE0u: goto label_25ace0;
            case 0x25ACF0u: goto label_25acf0;
            case 0x25AD00u: goto label_25ad00;
            case 0x25AD10u: goto label_25ad10;
            case 0x25AD20u: goto label_25ad20;
            case 0x25AD30u: goto label_25ad30;
            case 0x25AD40u: goto label_25ad40;
            case 0x25AD50u: goto label_25ad50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25ACD0u;
label_25acd0:
    // 0x25acd0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25acd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25acd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25acd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25acd8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25ACD8u;
    {
        const bool branch_taken_0x25acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25acd8) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25ACE0u;
label_25ace0:
    // 0x25ace0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x25ace0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x25ace4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ace4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ace8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25ACE8u;
    {
        const bool branch_taken_0x25ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ace8) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25ACF0u;
label_25acf0:
    // 0x25acf0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25acf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x25acf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25acf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25acf8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25ACF8u;
    {
        const bool branch_taken_0x25acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25acf8) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD00u;
label_25ad00:
    // 0x25ad00: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x25ad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x25ad04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad08: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25AD08u;
    {
        const bool branch_taken_0x25ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad08) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD10u;
label_25ad10:
    // 0x25ad10: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x25ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x25ad14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25AD18u;
    {
        const bool branch_taken_0x25ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad18) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD20u;
label_25ad20:
    // 0x25ad20: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x25ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x25ad24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25AD28u;
    {
        const bool branch_taken_0x25ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad28) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD30u;
label_25ad30:
    // 0x25ad30: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x25ad30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x25ad34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25AD38u;
    {
        const bool branch_taken_0x25ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad38) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD40u;
label_25ad40:
    // 0x25ad40: 0x3c014198  lui         $at, 0x4198
    ctx->pc = 0x25ad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16792 << 16));
    // 0x25ad44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25AD48u;
    {
        const bool branch_taken_0x25ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad48) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD50u;
label_25ad50:
    // 0x25ad50: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x25ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x25ad54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AD58u;
    {
        const bool branch_taken_0x25ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad58) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD60u;
}
