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

// Function: sub_0026AB70
// Address: 0x26ab70 - 0x26ae50
void sub_0026AB70_0x26ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AB70_0x26ab70");
#endif

    switch (ctx->pc) {
        case 0x26ab70u: goto label_26ab70;
        case 0x26ab74u: goto label_26ab74;
        case 0x26ab78u: goto label_26ab78;
        case 0x26ab7cu: goto label_26ab7c;
        case 0x26ab80u: goto label_26ab80;
        case 0x26ab84u: goto label_26ab84;
        case 0x26ab88u: goto label_26ab88;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26ab90u: goto label_26ab90;
        case 0x26ab94u: goto label_26ab94;
        case 0x26ab98u: goto label_26ab98;
        case 0x26ab9cu: goto label_26ab9c;
        case 0x26aba0u: goto label_26aba0;
        case 0x26aba4u: goto label_26aba4;
        case 0x26aba8u: goto label_26aba8;
        case 0x26abacu: goto label_26abac;
        case 0x26abb0u: goto label_26abb0;
        case 0x26abb4u: goto label_26abb4;
        case 0x26abb8u: goto label_26abb8;
        case 0x26abbcu: goto label_26abbc;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abc4u: goto label_26abc4;
        case 0x26abc8u: goto label_26abc8;
        case 0x26abccu: goto label_26abcc;
        case 0x26abd0u: goto label_26abd0;
        case 0x26abd4u: goto label_26abd4;
        case 0x26abd8u: goto label_26abd8;
        case 0x26abdcu: goto label_26abdc;
        case 0x26abe0u: goto label_26abe0;
        case 0x26abe4u: goto label_26abe4;
        case 0x26abe8u: goto label_26abe8;
        case 0x26abecu: goto label_26abec;
        case 0x26abf0u: goto label_26abf0;
        case 0x26abf4u: goto label_26abf4;
        case 0x26abf8u: goto label_26abf8;
        case 0x26abfcu: goto label_26abfc;
        case 0x26ac00u: goto label_26ac00;
        case 0x26ac04u: goto label_26ac04;
        case 0x26ac08u: goto label_26ac08;
        case 0x26ac0cu: goto label_26ac0c;
        case 0x26ac10u: goto label_26ac10;
        case 0x26ac14u: goto label_26ac14;
        case 0x26ac18u: goto label_26ac18;
        case 0x26ac1cu: goto label_26ac1c;
        case 0x26ac20u: goto label_26ac20;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac28u: goto label_26ac28;
        case 0x26ac2cu: goto label_26ac2c;
        case 0x26ac30u: goto label_26ac30;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac38u: goto label_26ac38;
        case 0x26ac3cu: goto label_26ac3c;
        case 0x26ac40u: goto label_26ac40;
        case 0x26ac44u: goto label_26ac44;
        case 0x26ac48u: goto label_26ac48;
        case 0x26ac4cu: goto label_26ac4c;
        case 0x26ac50u: goto label_26ac50;
        case 0x26ac54u: goto label_26ac54;
        case 0x26ac58u: goto label_26ac58;
        case 0x26ac5cu: goto label_26ac5c;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac64u: goto label_26ac64;
        case 0x26ac68u: goto label_26ac68;
        case 0x26ac6cu: goto label_26ac6c;
        case 0x26ac70u: goto label_26ac70;
        case 0x26ac74u: goto label_26ac74;
        case 0x26ac78u: goto label_26ac78;
        case 0x26ac7cu: goto label_26ac7c;
        case 0x26ac80u: goto label_26ac80;
        case 0x26ac84u: goto label_26ac84;
        case 0x26ac88u: goto label_26ac88;
        case 0x26ac8cu: goto label_26ac8c;
        case 0x26ac90u: goto label_26ac90;
        case 0x26ac94u: goto label_26ac94;
        case 0x26ac98u: goto label_26ac98;
        case 0x26ac9cu: goto label_26ac9c;
        case 0x26aca0u: goto label_26aca0;
        case 0x26aca4u: goto label_26aca4;
        case 0x26aca8u: goto label_26aca8;
        case 0x26acacu: goto label_26acac;
        case 0x26acb0u: goto label_26acb0;
        case 0x26acb4u: goto label_26acb4;
        case 0x26acb8u: goto label_26acb8;
        case 0x26acbcu: goto label_26acbc;
        case 0x26acc0u: goto label_26acc0;
        case 0x26acc4u: goto label_26acc4;
        case 0x26acc8u: goto label_26acc8;
        case 0x26acccu: goto label_26accc;
        case 0x26acd0u: goto label_26acd0;
        case 0x26acd4u: goto label_26acd4;
        case 0x26acd8u: goto label_26acd8;
        case 0x26acdcu: goto label_26acdc;
        case 0x26ace0u: goto label_26ace0;
        case 0x26ace4u: goto label_26ace4;
        case 0x26ace8u: goto label_26ace8;
        case 0x26acecu: goto label_26acec;
        case 0x26acf0u: goto label_26acf0;
        case 0x26acf4u: goto label_26acf4;
        case 0x26acf8u: goto label_26acf8;
        case 0x26acfcu: goto label_26acfc;
        case 0x26ad00u: goto label_26ad00;
        case 0x26ad04u: goto label_26ad04;
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad0cu: goto label_26ad0c;
        case 0x26ad10u: goto label_26ad10;
        case 0x26ad14u: goto label_26ad14;
        case 0x26ad18u: goto label_26ad18;
        case 0x26ad1cu: goto label_26ad1c;
        case 0x26ad20u: goto label_26ad20;
        case 0x26ad24u: goto label_26ad24;
        case 0x26ad28u: goto label_26ad28;
        case 0x26ad2cu: goto label_26ad2c;
        case 0x26ad30u: goto label_26ad30;
        case 0x26ad34u: goto label_26ad34;
        case 0x26ad38u: goto label_26ad38;
        case 0x26ad3cu: goto label_26ad3c;
        case 0x26ad40u: goto label_26ad40;
        case 0x26ad44u: goto label_26ad44;
        case 0x26ad48u: goto label_26ad48;
        case 0x26ad4cu: goto label_26ad4c;
        case 0x26ad50u: goto label_26ad50;
        case 0x26ad54u: goto label_26ad54;
        case 0x26ad58u: goto label_26ad58;
        case 0x26ad5cu: goto label_26ad5c;
        case 0x26ad60u: goto label_26ad60;
        case 0x26ad64u: goto label_26ad64;
        case 0x26ad68u: goto label_26ad68;
        case 0x26ad6cu: goto label_26ad6c;
        case 0x26ad70u: goto label_26ad70;
        case 0x26ad74u: goto label_26ad74;
        case 0x26ad78u: goto label_26ad78;
        case 0x26ad7cu: goto label_26ad7c;
        case 0x26ad80u: goto label_26ad80;
        case 0x26ad84u: goto label_26ad84;
        case 0x26ad88u: goto label_26ad88;
        case 0x26ad8cu: goto label_26ad8c;
        case 0x26ad90u: goto label_26ad90;
        case 0x26ad94u: goto label_26ad94;
        case 0x26ad98u: goto label_26ad98;
        case 0x26ad9cu: goto label_26ad9c;
        case 0x26ada0u: goto label_26ada0;
        case 0x26ada4u: goto label_26ada4;
        case 0x26ada8u: goto label_26ada8;
        case 0x26adacu: goto label_26adac;
        case 0x26adb0u: goto label_26adb0;
        case 0x26adb4u: goto label_26adb4;
        case 0x26adb8u: goto label_26adb8;
        case 0x26adbcu: goto label_26adbc;
        case 0x26adc0u: goto label_26adc0;
        case 0x26adc4u: goto label_26adc4;
        case 0x26adc8u: goto label_26adc8;
        case 0x26adccu: goto label_26adcc;
        case 0x26add0u: goto label_26add0;
        case 0x26add4u: goto label_26add4;
        case 0x26add8u: goto label_26add8;
        case 0x26addcu: goto label_26addc;
        case 0x26ade0u: goto label_26ade0;
        case 0x26ade4u: goto label_26ade4;
        case 0x26ade8u: goto label_26ade8;
        case 0x26adecu: goto label_26adec;
        case 0x26adf0u: goto label_26adf0;
        case 0x26adf4u: goto label_26adf4;
        case 0x26adf8u: goto label_26adf8;
        case 0x26adfcu: goto label_26adfc;
        case 0x26ae00u: goto label_26ae00;
        case 0x26ae04u: goto label_26ae04;
        case 0x26ae08u: goto label_26ae08;
        case 0x26ae0cu: goto label_26ae0c;
        case 0x26ae10u: goto label_26ae10;
        case 0x26ae14u: goto label_26ae14;
        case 0x26ae18u: goto label_26ae18;
        case 0x26ae1cu: goto label_26ae1c;
        case 0x26ae20u: goto label_26ae20;
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae28u: goto label_26ae28;
        case 0x26ae2cu: goto label_26ae2c;
        case 0x26ae30u: goto label_26ae30;
        case 0x26ae34u: goto label_26ae34;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae3cu: goto label_26ae3c;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae44u: goto label_26ae44;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae4cu: goto label_26ae4c;
        default: break;
    }

    ctx->pc = 0x26ab70u;

label_26ab70:
    // 0x26ab70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_26ab74:
    // 0x26ab74: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x26ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_26ab78:
    // 0x26ab78: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x26ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_26ab7c:
    // 0x26ab7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26ab7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26ab80:
    // 0x26ab80: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x26ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_26ab84:
    // 0x26ab84: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x26ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_26ab88:
    // 0x26ab88: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x26ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_26ab8c:
    // 0x26ab8c: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x26ab8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_26ab90:
    // 0x26ab90: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x26ab90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_26ab94:
    // 0x26ab94: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x26ab94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_26ab98:
    // 0x26ab98: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x26ab98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_26ab9c:
    // 0x26ab9c: 0x8e620240  lw          $v0, 0x240($s3)
    ctx->pc = 0x26ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
label_26aba0:
    // 0x26aba0: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_26aba4:
    if (ctx->pc == 0x26ABA4u) {
        ctx->pc = 0x26ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABA0u;
        // 0x26aba4: 0xae600248  sw          $zero, 0x248($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABA8u;
        goto label_26aba8;
    }
    ctx->pc = 0x26ABA0u;
    {
        const bool branch_taken_0x26aba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aba0) {
            ctx->pc = 0x26ABA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ABA0u;
            // 0x26aba4: 0xae600248  sw          $zero, 0x248($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AC68u;
            goto label_26ac68;
        }
    }
    ctx->pc = 0x26ABA8u;
label_26aba8:
    // 0x26aba8: 0x8e620244  lw          $v0, 0x244($s3)
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 580)));
label_26abac:
    // 0x26abac: 0x8e630248  lw          $v1, 0x248($s3)
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 584)));
label_26abb0:
    // 0x26abb0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26abb4:
    // 0x26abb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_26abb8:
    // 0x26abb8: 0xae640244  sw          $a0, 0x244($s3)
    ctx->pc = 0x26abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 580), GPR_U32(ctx, 4));
label_26abbc:
    // 0x26abbc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x26abbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_26abc0:
    // 0x26abc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_26abc4:
    if (ctx->pc == 0x26ABC4u) {
        ctx->pc = 0x26ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABC0u;
        // 0x26abc4: 0xae630248  sw          $v1, 0x248($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABC8u;
        goto label_26abc8;
    }
    ctx->pc = 0x26ABC0u;
    {
        const bool branch_taken_0x26abc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABC0u;
        // 0x26abc4: 0xae630248  sw          $v1, 0x248($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abc0) {
            ctx->pc = 0x26ABF8u;
            goto label_26abf8;
        }
    }
    ctx->pc = 0x26ABC8u;
label_26abc8:
    // 0x26abc8: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x26abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_26abcc:
    // 0x26abcc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x26abccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_26abd0:
    // 0x26abd0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x26abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_26abd4:
    // 0x26abd4: 0x40f809  jalr        $v0
label_26abd8:
    if (ctx->pc == 0x26ABD8u) {
        ctx->pc = 0x26ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABD4u;
        // 0x26abd8: 0x26720230  addiu       $s2, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABDCu;
        goto label_26abdc;
    }
    ctx->pc = 0x26ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ABDCu);
        ctx->pc = 0x26ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABD4u;
        // 0x26abd8: 0x26720230  addiu       $s2, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ABD4u, 0x26ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ABDCu;
label_26abdc:
    // 0x26abdc: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x26abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_26abe0:
    // 0x26abe0: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x26abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_26abe4:
    // 0x26abe4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x26abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_26abe8:
    // 0x26abe8: 0x40f809  jalr        $v0
label_26abec:
    if (ctx->pc == 0x26ABECu) {
        ctx->pc = 0x26ABF0u;
        goto label_26abf0;
    }
    ctx->pc = 0x26ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ABF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ABE8u, 0x26ABF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ABF0u;
label_26abf0:
    // 0x26abf0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_26abf4:
    if (ctx->pc == 0x26ABF4u) {
        ctx->pc = 0x26ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABF0u;
        // 0x26abf4: 0x8e630220  lw          $v1, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ABF8u;
        goto label_26abf8;
    }
    ctx->pc = 0x26ABF0u;
    {
        const bool branch_taken_0x26abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABF0u;
        // 0x26abf4: 0x8e630220  lw          $v1, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abf0) {
            ctx->pc = 0x26AC70u;
            goto label_26ac70;
        }
    }
    ctx->pc = 0x26ABF8u;
label_26abf8:
    // 0x26abf8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x26abf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_26abfc:
    // 0x26abfc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_26ac00:
    if (ctx->pc == 0x26AC00u) {
        ctx->pc = 0x26AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABFCu;
        // 0x26ac00: 0x26720230  addiu       $s2, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC04u;
        goto label_26ac04;
    }
    ctx->pc = 0x26ABFCu;
    {
        const bool branch_taken_0x26abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ABFCu;
        // 0x26ac00: 0x26720230  addiu       $s2, $s3, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26abfc) {
            ctx->pc = 0x26AC6Cu;
            goto label_26ac6c;
        }
    }
    ctx->pc = 0x26AC04u;
label_26ac04:
    // 0x26ac04: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_26ac08:
    // 0x26ac08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26ac08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26ac0c:
    // 0x26ac0c: 0x0  nop
    ctx->pc = 0x26ac0cu;
    // NOP
label_26ac10:
    // 0x26ac10: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x26ac10u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
label_26ac14:
    // 0x26ac14: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26ac14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_26ac18:
    // 0x26ac18: 0xc0b12b0  jal         func_2C4AC0
label_26ac1c:
    if (ctx->pc == 0x26AC1Cu) {
        ctx->pc = 0x26AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC18u;
        // 0x26ac1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC20u;
        goto label_26ac20;
    }
    ctx->pc = 0x26AC18u;
    SET_GPR_U32(ctx, 31, 0x26AC20u);
    ctx->pc = 0x26AC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC18u;
    // 0x26ac1c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26AC18u, 0x26AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC20u;
label_26ac20:
    // 0x26ac20: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x26ac20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_26ac24:
    // 0x26ac24: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26ac24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26ac28:
    // 0x26ac28: 0xc0b12b0  jal         func_2C4AC0
label_26ac2c:
    if (ctx->pc == 0x26AC2Cu) {
        ctx->pc = 0x26AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC28u;
        // 0x26ac2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC30u;
        goto label_26ac30;
    }
    ctx->pc = 0x26AC28u;
    SET_GPR_U32(ctx, 31, 0x26AC30u);
    ctx->pc = 0x26AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC28u;
    // 0x26ac2c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26AC28u, 0x26AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC30u;
label_26ac30:
    // 0x26ac30: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x26ac30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_26ac34:
    // 0x26ac34: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x26ac34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_26ac38:
    // 0x26ac38: 0xc0b12b0  jal         func_2C4AC0
label_26ac3c:
    if (ctx->pc == 0x26AC3Cu) {
        ctx->pc = 0x26AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC38u;
        // 0x26ac3c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC40u;
        goto label_26ac40;
    }
    ctx->pc = 0x26AC38u;
    SET_GPR_U32(ctx, 31, 0x26AC40u);
    ctx->pc = 0x26AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC38u;
    // 0x26ac3c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x26AC38u, 0x26AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC40u;
label_26ac40:
    // 0x26ac40: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x26ac40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26ac44:
    // 0x26ac44: 0xe7b60004  swc1        $f22, 0x4($sp)
    ctx->pc = 0x26ac44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26ac48:
    // 0x26ac48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26ac48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26ac4c:
    // 0x26ac4c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_26ac50:
    // 0x26ac50: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26ac50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_26ac54:
    // 0x26ac54: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x26ac54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26ac58:
    // 0x26ac58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ac58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ac5c:
    // 0x26ac5c: 0xfa610230  sqc2        $vf1, 0x230($s3)
    ctx->pc = 0x26ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 560), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ac60:
    // 0x26ac60: 0x10000003  b           . + 4 + (0x3 << 2)
label_26ac64:
    if (ctx->pc == 0x26AC64u) {
        ctx->pc = 0x26AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC60u;
        // 0x26ac64: 0x8e630220  lw          $v1, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC68u;
        goto label_26ac68;
    }
    ctx->pc = 0x26AC60u;
    {
        const bool branch_taken_0x26ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC60u;
        // 0x26ac64: 0x8e630220  lw          $v1, 0x220($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ac60) {
            ctx->pc = 0x26AC70u;
            goto label_26ac70;
        }
    }
    ctx->pc = 0x26AC68u;
label_26ac68:
    // 0x26ac68: 0x26720230  addiu       $s2, $s3, 0x230
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
label_26ac6c:
    // 0x26ac6c: 0x8e630220  lw          $v1, 0x220($s3)
    ctx->pc = 0x26ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
label_26ac70:
    // 0x26ac70: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x26ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_26ac74:
    // 0x26ac74: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x26ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26ac78:
    // 0x26ac78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x26ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26ac7c:
    // 0x26ac7c: 0x8cc50104  lw          $a1, 0x104($a2)
    ctx->pc = 0x26ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_26ac80:
    // 0x26ac80: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26ac84:
    // 0x26ac84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x26ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26ac88:
    // 0x26ac88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26ac88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26ac8c:
    // 0x26ac8c: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x26ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ac90:
    // 0x26ac90: 0x8cc40104  lw          $a0, 0x104($a2)
    ctx->pc = 0x26ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_26ac94:
    // 0x26ac94: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x26ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26ac98:
    // 0x26ac98: 0xc0f70ce  jal         func_3DC338
label_26ac9c:
    if (ctx->pc == 0x26AC9Cu) {
        ctx->pc = 0x26AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC98u;
        // 0x26ac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACA0u;
        goto label_26aca0;
    }
    ctx->pc = 0x26AC98u;
    SET_GPR_U32(ctx, 31, 0x26ACA0u);
    ctx->pc = 0x26AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AC98u;
    // 0x26ac9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26AC98u, 0x26ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACA0u;
label_26aca0:
    // 0x26aca0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26aca4:
    if (ctx->pc == 0x26ACA4u) {
        ctx->pc = 0x26ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACA0u;
        // 0x26aca4: 0x8e630104  lw          $v1, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACA8u;
        goto label_26aca8;
    }
    ctx->pc = 0x26ACA0u;
    {
        const bool branch_taken_0x26aca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aca0) {
            ctx->pc = 0x26ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ACA0u;
            // 0x26aca4: 0x8e630104  lw          $v1, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ACB4u;
            goto label_26acb4;
        }
    }
    ctx->pc = 0x26ACA8u;
label_26aca8:
    // 0x26aca8: 0xc0c4900  jal         func_312400
label_26acac:
    if (ctx->pc == 0x26ACACu) {
        ctx->pc = 0x26ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACA8u;
        // 0x26acac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACB0u;
        goto label_26acb0;
    }
    ctx->pc = 0x26ACA8u;
    SET_GPR_U32(ctx, 31, 0x26ACB0u);
    ctx->pc = 0x26ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACA8u;
    // 0x26acac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26ACA8u, 0x26ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACB0u;
label_26acb0:
    // 0x26acb0: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x26acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_26acb4:
    // 0x26acb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26acb8:
    // 0x26acb8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26acbc:
    // 0x26acbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26acbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26acc0:
    // 0x26acc0: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x26acc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_26acc4:
    // 0x26acc4: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x26acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_26acc8:
    // 0x26acc8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x26acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_26accc:
    // 0x26accc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x26acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_26acd0:
    // 0x26acd0: 0x40f809  jalr        $v0
label_26acd4:
    if (ctx->pc == 0x26ACD4u) {
        ctx->pc = 0x26ACD8u;
        goto label_26acd8;
    }
    ctx->pc = 0x26ACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26ACD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ACD0u, 0x26ACD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26ACD8u;
label_26acd8:
    // 0x26acd8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_26acdc:
    // 0x26acdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26acdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ace0:
    // 0x26ace0: 0x0  nop
    ctx->pc = 0x26ace0u;
    // NOP
label_26ace4:
    // 0x26ace4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26ace4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ace8:
    // 0x26ace8: 0x0  nop
    ctx->pc = 0x26ace8u;
    // NOP
label_26acec:
    // 0x26acec: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_26acf0:
    if (ctx->pc == 0x26ACF0u) {
        ctx->pc = 0x26ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACECu;
        // 0x26acf0: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACF4u;
        goto label_26acf4;
    }
    ctx->pc = 0x26ACECu;
    {
        const bool branch_taken_0x26acec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26acec) {
            ctx->pc = 0x26ACF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ACECu;
            // 0x26acf0: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AD18u;
            goto label_26ad18;
        }
    }
    ctx->pc = 0x26ACF4u;
label_26acf4:
    // 0x26acf4: 0xc085072  jal         func_2141C8
label_26acf8:
    if (ctx->pc == 0x26ACF8u) {
        ctx->pc = 0x26ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACF4u;
        // 0x26acf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ACFCu;
        goto label_26acfc;
    }
    ctx->pc = 0x26ACF4u;
    SET_GPR_U32(ctx, 31, 0x26ACFCu);
    ctx->pc = 0x26ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ACF4u;
    // 0x26acf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141C8u, 0x26ACF4u, 0x26ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACFCu;
label_26acfc:
    // 0x26acfc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_26ad00:
    if (ctx->pc == 0x26AD00u) {
        ctx->pc = 0x26AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ACFCu;
        // 0x26ad00: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD04u;
        goto label_26ad04;
    }
    ctx->pc = 0x26ACFCu;
    {
        const bool branch_taken_0x26acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26acfc) {
            ctx->pc = 0x26AD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ACFCu;
            // 0x26ad00: 0x8e620104  lw          $v0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26AD18u;
            goto label_26ad18;
        }
    }
    ctx->pc = 0x26AD04u;
label_26ad04:
    // 0x26ad04: 0x8e630218  lw          $v1, 0x218($s3)
    ctx->pc = 0x26ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 536)));
label_26ad08:
    // 0x26ad08: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x26ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26ad0c:
    // 0x26ad0c: 0x40f809  jalr        $v0
label_26ad10:
    if (ctx->pc == 0x26AD10u) {
        ctx->pc = 0x26AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD0Cu;
        // 0x26ad10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD14u;
        goto label_26ad14;
    }
    ctx->pc = 0x26AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26AD14u);
        ctx->pc = 0x26AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD0Cu;
        // 0x26ad10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AD0Cu, 0x26AD14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26AD14u;
label_26ad14:
    // 0x26ad14: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x26ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_26ad18:
    // 0x26ad18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26ad1c:
    // 0x26ad1c: 0xc0b1488  jal         func_2C5220
label_26ad20:
    if (ctx->pc == 0x26AD20u) {
        ctx->pc = 0x26AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD1Cu;
        // 0x26ad20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD24u;
        goto label_26ad24;
    }
    ctx->pc = 0x26AD1Cu;
    SET_GPR_U32(ctx, 31, 0x26AD24u);
    ctx->pc = 0x26AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD1Cu;
    // 0x26ad20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26AD1Cu, 0x26AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD24u;
label_26ad24:
    // 0x26ad24: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26ad28:
    // 0x26ad28: 0xc0b1488  jal         func_2C5220
label_26ad2c:
    if (ctx->pc == 0x26AD2Cu) {
        ctx->pc = 0x26AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AD28u;
        // 0x26ad2c: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AD30u;
        goto label_26ad30;
    }
    ctx->pc = 0x26AD28u;
    SET_GPR_U32(ctx, 31, 0x26AD30u);
    ctx->pc = 0x26AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AD28u;
    // 0x26ad2c: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x26AD28u, 0x26AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD30u;
label_26ad30:
    // 0x26ad30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_26ad34:
    // 0x26ad34: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x26ad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ad38:
    // 0x26ad38: 0xc4422b30  lwc1        $f2, 0x2B30($v0)
    ctx->pc = 0x26ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ad3c:
    // 0x26ad3c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x26ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26ad40:
    // 0x26ad40: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x26ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26ad44:
    // 0x26ad44: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x26ad44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26ad48:
    // 0x26ad48: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26ad48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26ad4c:
    // 0x26ad4c: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x26ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26ad50:
    // 0x26ad50: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x26ad50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_26ad54:
    // 0x26ad54: 0xc6610230  lwc1        $f1, 0x230($s3)
    ctx->pc = 0x26ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ad58:
    // 0x26ad58: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x26ad58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_26ad5c:
    // 0x26ad5c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26ad60:
    // 0x26ad60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26ad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26ad64:
    // 0x26ad64: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26ad64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_26ad68:
    // 0x26ad68: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x26ad68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26ad6c:
    // 0x26ad6c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x26ad6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26ad70:
    // 0x26ad70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x26ad70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_26ad74:
    // 0x26ad74: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x26ad74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_26ad78:
    // 0x26ad78: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x26ad78u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_26ad7c:
    // 0x26ad7c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26ad7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26ad80:
    // 0x26ad80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26ad80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26ad84:
    // 0x26ad84: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26ad84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26ad88:
    // 0x26ad88: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x26ad88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26ad8c:
    // 0x26ad8c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x26ad8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26ad90:
    // 0x26ad90: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x26ad90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26ad94:
    // 0x26ad94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26ad94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ad98:
    // 0x26ad98: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26ad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26ad9c:
    // 0x26ad9c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x26ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26ada0:
    // 0x26ada0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x26ada0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_26ada4:
    // 0x26ada4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ada8:
    // 0x26ada8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x26ada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26adac:
    // 0x26adac: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x26adacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_26adb0:
    // 0x26adb0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x26adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26adb4:
    // 0x26adb4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x26adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26adb8:
    // 0x26adb8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26adb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26adbc:
    // 0x26adbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26adbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26adc0:
    // 0x26adc0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x26adc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_26adc4:
    // 0x26adc4: 0xc0b163c  jal         func_2C58F0
label_26adc8:
    if (ctx->pc == 0x26ADC8u) {
        ctx->pc = 0x26ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ADC4u;
        // 0x26adc8: 0xe5010004  swc1        $f1, 0x4($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26ADCCu;
        goto label_26adcc;
    }
    ctx->pc = 0x26ADC4u;
    SET_GPR_U32(ctx, 31, 0x26ADCCu);
    ctx->pc = 0x26ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ADC4u;
    // 0x26adc8: 0xe5010004  swc1        $f1, 0x4($t0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x26ADC4u, 0x26ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADCCu;
label_26adcc:
    // 0x26adcc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x26adccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26add0:
    // 0x26add0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x26add0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26add4:
    // 0x26add4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26add4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26add8:
    // 0x26add8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x26add8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_26addc:
    // 0x26addc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26addcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ade0:
    // 0x26ade0: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ade4:
    // 0x26ade4: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x26ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_26ade8:
    // 0x26ade8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26ade8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26adec:
    // 0x26adec: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x26adecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_26adf0:
    // 0x26adf0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26adf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26adf4:
    // 0x26adf4: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x26adf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26adf8:
    // 0x26adf8: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x26adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_26adfc:
    // 0x26adfc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26adfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26ae00:
    // 0x26ae00: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x26ae00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_26ae04:
    // 0x26ae04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26ae04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ae08:
    // 0x26ae08: 0xfa010060  sqc2        $vf1, 0x60($s0)
    ctx->pc = 0x26ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ae0c:
    // 0x26ae0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ae10:
    // 0x26ae10: 0xc0b14ae  jal         func_2C52B8
label_26ae14:
    if (ctx->pc == 0x26AE14u) {
        ctx->pc = 0x26AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE10u;
        // 0x26ae14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE18u;
        goto label_26ae18;
    }
    ctx->pc = 0x26AE10u;
    SET_GPR_U32(ctx, 31, 0x26AE18u);
    ctx->pc = 0x26AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE10u;
    // 0x26ae14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x26AE10u, 0x26AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE18u;
label_26ae18:
    // 0x26ae18: 0xc084172  jal         func_2105C8
label_26ae1c:
    if (ctx->pc == 0x26AE1Cu) {
        ctx->pc = 0x26AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE18u;
        // 0x26ae1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE20u;
        goto label_26ae20;
    }
    ctx->pc = 0x26AE18u;
    SET_GPR_U32(ctx, 31, 0x26AE20u);
    ctx->pc = 0x26AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26AE18u;
    // 0x26ae1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x26AE18u, 0x26AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE20u;
label_26ae20:
    // 0x26ae20: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x26ae20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26ae24:
    // 0x26ae24: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x26ae24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_26ae28:
    // 0x26ae28: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x26ae28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26ae2c:
    // 0x26ae2c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x26ae2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_26ae30:
    // 0x26ae30: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x26ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26ae34:
    // 0x26ae34: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x26ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_26ae38:
    // 0x26ae38: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x26ae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26ae3c:
    // 0x26ae3c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x26ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26ae40:
    // 0x26ae40: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x26ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26ae44:
    // 0x26ae44: 0x3e00008  jr          $ra
label_26ae48:
    if (ctx->pc == 0x26AE48u) {
        ctx->pc = 0x26AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE44u;
        // 0x26ae48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE4Cu;
        goto label_26ae4c;
    }
    ctx->pc = 0x26AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE44u;
        // 0x26ae48: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AE4Cu;
label_26ae4c:
    // 0x26ae4c: 0x0  nop
    ctx->pc = 0x26ae4cu;
    // NOP
    ctx->pc = 0x26ae50u;
}
