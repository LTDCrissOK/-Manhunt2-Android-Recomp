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

// Function: sub_0012F080
// Address: 0x12f080 - 0x12f170
void sub_0012F080_0x12f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F080_0x12f080");
#endif

    switch (ctx->pc) {
        case 0x12f0a0u: goto label_12f0a0;
        case 0x12f15cu: goto label_12f15c;
        default: break;
    }

    ctx->pc = 0x12f080u;

    // 0x12f080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12f08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f090: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12f094: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12f094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f098: 0xc047866  jal         func_11E198
    ctx->pc = 0x12F098u;
    SET_GPR_U32(ctx, 31, 0x12F0A0u);
    ctx->pc = 0x12F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F098u;
    // 0x12f09c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12F098u, 0x12F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F0A0u;
label_12f0a0:
    // 0x12f0a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12f0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0a4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12f0a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f0a8: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x12f0a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x12f0ac: 0xdcc41020  ld          $a0, 0x1020($a2)
    ctx->pc = 0x12f0acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
    // 0x12f0b0: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x12f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x12f0b4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x12F0B4u;
    {
        const bool branch_taken_0x12f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f0b4) {
            ctx->pc = 0x12F0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0B4u;
            // 0x12f0b8: 0xdcc31020  ld          $v1, 0x1020($a2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12F0BCu;
    // 0x12f0bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f0c0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x12f0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x12f0c4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f0c8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x12F0C8u;
    {
        const bool branch_taken_0x12f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f0c8) {
            ctx->pc = 0x12F0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0C8u;
            // 0x12f0cc: 0xdcc31020  ld          $v1, 0x1020($a2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F100u;
            goto label_12f100;
        }
    }
    ctx->pc = 0x12F0D0u;
    // 0x12f0d0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x12f0d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f0d8: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x12f0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x12f0dc: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x12f0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x12f0e0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x12f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x12f0e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12f0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12f0e8: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x12f0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x12f0ec: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x12f0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x12f0f0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12f0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f0f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12f0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12f0f8: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x12f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
    // 0x12f0fc: 0xdcc31020  ld          $v1, 0x1020($a2)
    ctx->pc = 0x12f0fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
label_12f100:
    // 0x12f100: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x12f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x12f104: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F104u;
    {
        const bool branch_taken_0x12f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f104) {
            ctx->pc = 0x12F108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F104u;
            // 0x12f108: 0xdcc31020  ld          $v1, 0x1020($a2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F128u;
            goto label_12f128;
        }
    }
    ctx->pc = 0x12F10Cu;
    // 0x12f10c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x12f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x12f110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f114: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x12f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x12f118: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x12f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x12f11c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f120: 0xfcc21020  sd          $v0, 0x1020($a2)
    ctx->pc = 0x12f120u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 2));
    // 0x12f124: 0xdcc31020  ld          $v1, 0x1020($a2)
    ctx->pc = 0x12f124u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 4128)));
label_12f128:
    // 0x12f128: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x12f128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x12f12c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f130: 0x211f8  dsll        $v0, $v0, 7
    ctx->pc = 0x12f130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 7);
    // 0x12f134: 0x3442007f  ori         $v0, $v0, 0x7F
    ctx->pc = 0x12f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)127);
    // 0x12f138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f13c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12f13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f140: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x12f140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12f144: 0xfcc31020  sd          $v1, 0x1020($a2)
    ctx->pc = 0x12f144u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 4128), GPR_U64(ctx, 3));
    // 0x12f148: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f14c: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x12f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
    // 0x12f150: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12f150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f154: 0xc04bc88  jal         func_12F220
    ctx->pc = 0x12F154u;
    SET_GPR_U32(ctx, 31, 0x12F15Cu);
    ctx->pc = 0x12F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F154u;
    // 0x12f158: 0xac600244  sw          $zero, 0x244($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 580), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F220u, 0x12F154u, 0x12F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F15Cu;
label_12f15c:
    // 0x12f15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12f160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f164: 0x3e00008  jr          $ra
    ctx->pc = 0x12F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F164u;
        // 0x12f168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F16Cu;
    // 0x12f16c: 0x0  nop
    ctx->pc = 0x12f16cu;
    // NOP
    ctx->pc = 0x12f170u;
}
