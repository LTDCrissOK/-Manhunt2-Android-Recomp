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

// Function: sub_0025AAD8
// Address: 0x25aad8 - 0x25aca8
void sub_0025AAD8_0x25aad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AAD8_0x25aad8");
#endif

    ctx->pc = 0x25aad8u;

    // 0x25aad8: 0x24a3fd9f  addiu       $v1, $a1, -0x261
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966687));
    // 0x25aadc: 0x2c620028  sltiu       $v0, $v1, 0x28
    ctx->pc = 0x25aadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x25aae0: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x25AAE0u;
    {
        const bool branch_taken_0x25aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAE0u;
        // 0x25aae4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aae0) {
            ctx->pc = 0x25AC90u;
            goto label_25ac90;
        }
    }
    ctx->pc = 0x25AAE8u;
    // 0x25aae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25aaec: 0x24425750  addiu       $v0, $v0, 0x5750
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x25aaf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25aaf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aaf8: 0x800008  jr          $a0
    ctx->pc = 0x25AAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25AB00u: goto label_25ab00;
            case 0x25AB10u: goto label_25ab10;
            case 0x25AB20u: goto label_25ab20;
            case 0x25AB30u: goto label_25ab30;
            case 0x25AB40u: goto label_25ab40;
            case 0x25AB50u: goto label_25ab50;
            case 0x25AB60u: goto label_25ab60;
            case 0x25AB70u: goto label_25ab70;
            case 0x25AB80u: goto label_25ab80;
            case 0x25AB90u: goto label_25ab90;
            case 0x25ABA0u: goto label_25aba0;
            case 0x25ABB0u: goto label_25abb0;
            case 0x25ABC0u: goto label_25abc0;
            case 0x25ABD0u: goto label_25abd0;
            case 0x25ABE0u: goto label_25abe0;
            case 0x25ABF0u: goto label_25abf0;
            case 0x25AC00u: goto label_25ac00;
            case 0x25AC10u: goto label_25ac10;
            case 0x25AC20u: goto label_25ac20;
            case 0x25AC30u: goto label_25ac30;
            case 0x25AC40u: goto label_25ac40;
            case 0x25AC50u: goto label_25ac50;
            case 0x25AC60u: goto label_25ac60;
            case 0x25AC70u: goto label_25ac70;
            case 0x25AC80u: goto label_25ac80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AAF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25AB00u;
label_25ab00:
    // 0x25ab00: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x25ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab08: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x25AB08u;
    {
        const bool branch_taken_0x25ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab08) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB10u;
label_25ab10:
    // 0x25ab10: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x25ab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x25ab14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab18: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x25AB18u;
    {
        const bool branch_taken_0x25ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab18) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB20u;
label_25ab20:
    // 0x25ab20: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x25ab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x25ab24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab28: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x25AB28u;
    {
        const bool branch_taken_0x25ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab28) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB30u;
label_25ab30:
    // 0x25ab30: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x25ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x25ab34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab38: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x25AB38u;
    {
        const bool branch_taken_0x25ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab38) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB40u;
label_25ab40:
    // 0x25ab40: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x25ab40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x25ab44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab48: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x25AB48u;
    {
        const bool branch_taken_0x25ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab48) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB50u;
label_25ab50:
    // 0x25ab50: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x25ab54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab58: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25AB58u;
    {
        const bool branch_taken_0x25ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab58) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB60u;
label_25ab60:
    // 0x25ab60: 0x3c0141e8  lui         $at, 0x41E8
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16872 << 16));
    // 0x25ab64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab68: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x25AB68u;
    {
        const bool branch_taken_0x25ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab68) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB70u;
label_25ab70:
    // 0x25ab70: 0x3c014282  lui         $at, 0x4282
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17026 << 16));
    // 0x25ab74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab78: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x25AB78u;
    {
        const bool branch_taken_0x25ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab78) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB80u;
label_25ab80:
    // 0x25ab80: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x25ab80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x25ab84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab88: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x25AB88u;
    {
        const bool branch_taken_0x25ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab88) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AB90u;
label_25ab90:
    // 0x25ab90: 0x3c014268  lui         $at, 0x4268
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17000 << 16));
    // 0x25ab94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ab98: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x25AB98u;
    {
        const bool branch_taken_0x25ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ab98) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABA0u;
label_25aba0:
    // 0x25aba0: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x25aba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25aba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25aba8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x25ABA8u;
    {
        const bool branch_taken_0x25aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aba8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABB0u;
label_25abb0:
    // 0x25abb0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x25abb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x25abb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25abb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25abb8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x25ABB8u;
    {
        const bool branch_taken_0x25abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abb8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABC0u;
label_25abc0:
    // 0x25abc0: 0x3c0141b8  lui         $at, 0x41B8
    ctx->pc = 0x25abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16824 << 16));
    // 0x25abc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25abc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25abc8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x25ABC8u;
    {
        const bool branch_taken_0x25abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abc8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABD0u;
label_25abd0:
    // 0x25abd0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x25abd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x25abd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25abd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25abd8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x25ABD8u;
    {
        const bool branch_taken_0x25abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abd8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABE0u;
label_25abe0:
    // 0x25abe0: 0x3c01426c  lui         $at, 0x426C
    ctx->pc = 0x25abe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17004 << 16));
    // 0x25abe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25abe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25abe8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x25ABE8u;
    {
        const bool branch_taken_0x25abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abe8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25ABF0u;
label_25abf0:
    // 0x25abf0: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x25abf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x25abf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25abf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25abf8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25ABF8u;
    {
        const bool branch_taken_0x25abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abf8) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC00u;
label_25ac00:
    // 0x25ac00: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x25ac00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x25ac04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac08: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25AC08u;
    {
        const bool branch_taken_0x25ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac08) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC10u;
label_25ac10:
    // 0x25ac10: 0x3c014208  lui         $at, 0x4208
    ctx->pc = 0x25ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16904 << 16));
    // 0x25ac14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac18: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25AC18u;
    {
        const bool branch_taken_0x25ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac18) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC20u;
label_25ac20:
    // 0x25ac20: 0x3c014224  lui         $at, 0x4224
    ctx->pc = 0x25ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16932 << 16));
    // 0x25ac24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac28: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25AC28u;
    {
        const bool branch_taken_0x25ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac28) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC30u;
label_25ac30:
    // 0x25ac30: 0x3c014254  lui         $at, 0x4254
    ctx->pc = 0x25ac30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16980 << 16));
    // 0x25ac34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25AC38u;
    {
        const bool branch_taken_0x25ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac38) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC40u;
label_25ac40:
    // 0x25ac40: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x25ac44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25AC48u;
    {
        const bool branch_taken_0x25ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac48) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC50u;
label_25ac50:
    // 0x25ac50: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x25ac50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25ac54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25AC58u;
    {
        const bool branch_taken_0x25ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac58) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC60u;
label_25ac60:
    // 0x25ac60: 0x3c0141e0  lui         $at, 0x41E0
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16864 << 16));
    // 0x25ac64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25AC68u;
    {
        const bool branch_taken_0x25ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac68) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC70u;
label_25ac70:
    // 0x25ac70: 0x3c01423c  lui         $at, 0x423C
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16956 << 16));
    // 0x25ac74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AC78u;
    {
        const bool branch_taken_0x25ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac78) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC80u;
label_25ac80:
    // 0x25ac80: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x25ac84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ac84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ac88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25AC88u;
    {
        const bool branch_taken_0x25ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac88) {
            ctx->pc = 0x25AC94u;
            goto label_25ac94;
        }
    }
    ctx->pc = 0x25AC90u;
label_25ac90:
    // 0x25ac90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25ac90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25ac94:
    // 0x25ac94: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x25ac94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x25ac98: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25ac98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x25ac9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25ac9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aca0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ACA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACA0u;
        // 0x25aca4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ACA8u;
}
