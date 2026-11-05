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

// Function: sub_00176FE8
// Address: 0x176fe8 - 0x177090
void sub_00176FE8_0x176fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176FE8_0x176fe8");
#endif

    switch (ctx->pc) {
        case 0x176fe8u: goto label_176fe8;
        case 0x176fecu: goto label_176fec;
        case 0x176ff0u: goto label_176ff0;
        case 0x176ff4u: goto label_176ff4;
        case 0x176ff8u: goto label_176ff8;
        case 0x176ffcu: goto label_176ffc;
        case 0x177000u: goto label_177000;
        case 0x177004u: goto label_177004;
        case 0x177008u: goto label_177008;
        case 0x17700cu: goto label_17700c;
        case 0x177010u: goto label_177010;
        case 0x177014u: goto label_177014;
        case 0x177018u: goto label_177018;
        case 0x17701cu: goto label_17701c;
        case 0x177020u: goto label_177020;
        case 0x177024u: goto label_177024;
        case 0x177028u: goto label_177028;
        case 0x17702cu: goto label_17702c;
        case 0x177030u: goto label_177030;
        case 0x177034u: goto label_177034;
        case 0x177038u: goto label_177038;
        case 0x17703cu: goto label_17703c;
        case 0x177040u: goto label_177040;
        case 0x177044u: goto label_177044;
        case 0x177048u: goto label_177048;
        case 0x17704cu: goto label_17704c;
        case 0x177050u: goto label_177050;
        case 0x177054u: goto label_177054;
        case 0x177058u: goto label_177058;
        case 0x17705cu: goto label_17705c;
        case 0x177060u: goto label_177060;
        case 0x177064u: goto label_177064;
        case 0x177068u: goto label_177068;
        case 0x17706cu: goto label_17706c;
        case 0x177070u: goto label_177070;
        case 0x177074u: goto label_177074;
        case 0x177078u: goto label_177078;
        case 0x17707cu: goto label_17707c;
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        default: break;
    }

    ctx->pc = 0x176fe8u;

label_176fe8:
    // 0x176fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176fec:
    // 0x176fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176ff0:
    // 0x176ff0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176ff4:
    // 0x176ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176ff8:
    // 0x176ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176ffc:
    // 0x176ffc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x176ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_177000:
    // 0x177000: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x177000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_177004:
    // 0x177004: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x177004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_177008:
    // 0x177008: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_17700c:
    if (ctx->pc == 0x17700Cu) {
        ctx->pc = 0x17700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177008u;
        // 0x17700c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177010u;
        goto label_177010;
    }
    ctx->pc = 0x177008u;
    {
        const bool branch_taken_0x177008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x177008) {
            ctx->pc = 0x17700Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177008u;
            // 0x17700c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x177010u;
label_177010:
    // 0x177010: 0x5840001b  blezl       $v0, . + 4 + (0x1B << 2)
label_177014:
    if (ctx->pc == 0x177014u) {
        ctx->pc = 0x177014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177010u;
        // 0x177014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177018u;
        goto label_177018;
    }
    ctx->pc = 0x177010u;
    {
        const bool branch_taken_0x177010 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x177010) {
            ctx->pc = 0x177014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177010u;
            // 0x177014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177080u;
            goto label_177080;
        }
    }
    ctx->pc = 0x177018u;
label_177018:
    // 0x177018: 0xc04f9a4  jal         func_13E690
label_17701c:
    if (ctx->pc == 0x17701Cu) {
        ctx->pc = 0x177020u;
        goto label_177020;
    }
    ctx->pc = 0x177018u;
    SET_GPR_U32(ctx, 31, 0x177020u);
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x177018u, 0x177020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177020u;
label_177020:
    // 0x177020: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x177020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_177024:
    // 0x177024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177028:
    // 0x177028: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x177028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_17702c:
    // 0x17702c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x17702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_177030:
    // 0x177030: 0xc04f8fc  jal         func_13E3F0
label_177034:
    if (ctx->pc == 0x177034u) {
        ctx->pc = 0x177034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177030u;
        // 0x177034: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177038u;
        goto label_177038;
    }
    ctx->pc = 0x177030u;
    SET_GPR_U32(ctx, 31, 0x177038u);
    ctx->pc = 0x177034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177030u;
    // 0x177034: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x177030u, 0x177038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177038u;
label_177038:
    // 0x177038: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17703c:
    // 0x17703c: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x17703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_177040:
    // 0x177040: 0xc045fea  jal         func_117FA8
label_177044:
    if (ctx->pc == 0x177044u) {
        ctx->pc = 0x177044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177040u;
        // 0x177044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177048u;
        goto label_177048;
    }
    ctx->pc = 0x177040u;
    SET_GPR_U32(ctx, 31, 0x177048u);
    ctx->pc = 0x177044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177040u;
    // 0x177044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x177040u, 0x177048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177048u;
label_177048:
    // 0x177048: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x177048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_17704c:
    // 0x17704c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_177050:
    if (ctx->pc == 0x177050u) {
        ctx->pc = 0x177050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17704Cu;
        // 0x177050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177054u;
        goto label_177054;
    }
    ctx->pc = 0x17704Cu;
    {
        const bool branch_taken_0x17704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17704Cu;
        // 0x177050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17704c) {
            ctx->pc = 0x17705Cu;
            goto label_17705c;
        }
    }
    ctx->pc = 0x177054u;
label_177054:
    // 0x177054: 0xc046058  jal         func_118160
label_177058:
    if (ctx->pc == 0x177058u) {
        ctx->pc = 0x177058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177054u;
        // 0x177058: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17705Cu;
        goto label_17705c;
    }
    ctx->pc = 0x177054u;
    SET_GPR_U32(ctx, 31, 0x17705Cu);
    ctx->pc = 0x177058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177054u;
    // 0x177058: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x177054u, 0x17705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17705Cu;
label_17705c:
    // 0x17705c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_177060:
    // 0x177060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177064:
    // 0x177064: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x177064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_177068:
    // 0x177068: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x177068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_17706c:
    // 0x17706c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_177070:
    // 0x177070: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_177074:
    // 0x177074: 0x40f809  jalr        $v0
label_177078:
    if (ctx->pc == 0x177078u) {
        ctx->pc = 0x177078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177074u;
        // 0x177078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17707Cu;
        goto label_17707c;
    }
    ctx->pc = 0x177074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17707Cu);
        ctx->pc = 0x177078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177074u;
        // 0x177078: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177074u, 0x17707Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17707Cu;
label_17707c:
    // 0x17707c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17707cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177080:
    // 0x177080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_177084:
    // 0x177084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177088:
    // 0x177088: 0x3e00008  jr          $ra
label_17708c:
    if (ctx->pc == 0x17708Cu) {
        ctx->pc = 0x17708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177088u;
        // 0x17708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177090u;
        goto label_fallthrough_0x177088;
    }
    ctx->pc = 0x177088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177088u;
        // 0x17708c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x177088:
    ctx->pc = 0x177090u;
}
