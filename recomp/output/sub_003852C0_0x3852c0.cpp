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

// Function: sub_003852C0
// Address: 0x3852c0 - 0x385390
void sub_003852C0_0x3852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003852C0_0x3852c0");
#endif

    ctx->pc = 0x3852c0u;

    // 0x3852c0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3852c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3852c4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x3852c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x3852c8: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x3852c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x3852cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3852ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3852d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3852d0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x3852d4: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x3852d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x3852d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3852d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3852dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3852dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3852e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3852e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3852e4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3852e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3852e8: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x3852e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x3852ec: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3852ECu;
    {
        const bool branch_taken_0x3852ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3852F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852ECu;
        // 0x3852f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3852ec) {
            ctx->pc = 0x385334u;
            goto label_385334;
        }
    }
    ctx->pc = 0x3852F4u;
    // 0x3852f4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3852f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3852f8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3852f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3852fc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x3852fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x385300: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x385300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x385304: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x385304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x385308: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x385308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x38530c: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x38530cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x385310: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x385310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x385314: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x385314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x385318: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x385318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x38531c: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x38531cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x385320: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x385320u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x385324: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x385324u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x385328: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x385328u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x38532c: 0x3e00008  jr          $ra
    ctx->pc = 0x38532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38532Cu;
        // 0x385330: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38532Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385334u;
label_385334:
    // 0x385334: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x385334u;
    {
        const bool branch_taken_0x385334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x385338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385334u;
        // 0x385338: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385334) {
            ctx->pc = 0x385380u;
            goto label_385380;
        }
    }
    ctx->pc = 0x38533Cu;
    // 0x38533c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x38533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x385340: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x385340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x385344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x385344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x385348: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x385348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x38534c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38534cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x385350: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x385350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x385354: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x385354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x385358: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x385358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x38535c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x38535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x385360: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x385360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x385364: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x385364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x385368: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x385368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x38536c: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x38536cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x385370: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x385370u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x385374: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x385374u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x385378: 0x3e00008  jr          $ra
    ctx->pc = 0x385378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385378u;
        // 0x38537c: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385380u;
label_385380:
    // 0x385380: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x385380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385384: 0x80e28f8  j           func_38A3E0
    ctx->pc = 0x385384u;
    ctx->pc = 0x385388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385384u;
    // 0x385388: 0x24a591d0  addiu       $a1, $a1, -0x6E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    sub_0038A3E0_0x38a3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x38538Cu;
    // 0x38538c: 0x0  nop
    ctx->pc = 0x38538cu;
    // NOP
    ctx->pc = 0x385390u;
}
