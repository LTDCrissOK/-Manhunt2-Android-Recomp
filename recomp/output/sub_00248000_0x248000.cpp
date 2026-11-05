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

// Function: sub_00248000
// Address: 0x248000 - 0x248088
void sub_00248000_0x248000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248000_0x248000");
#endif

    switch (ctx->pc) {
        case 0x248000u: goto label_248000;
        case 0x248004u: goto label_248004;
        case 0x248008u: goto label_248008;
        case 0x24800cu: goto label_24800c;
        case 0x248010u: goto label_248010;
        case 0x248014u: goto label_248014;
        case 0x248018u: goto label_248018;
        case 0x24801cu: goto label_24801c;
        case 0x248020u: goto label_248020;
        case 0x248024u: goto label_248024;
        case 0x248028u: goto label_248028;
        case 0x24802cu: goto label_24802c;
        case 0x248030u: goto label_248030;
        case 0x248034u: goto label_248034;
        case 0x248038u: goto label_248038;
        case 0x24803cu: goto label_24803c;
        case 0x248040u: goto label_248040;
        case 0x248044u: goto label_248044;
        case 0x248048u: goto label_248048;
        case 0x24804cu: goto label_24804c;
        case 0x248050u: goto label_248050;
        case 0x248054u: goto label_248054;
        case 0x248058u: goto label_248058;
        case 0x24805cu: goto label_24805c;
        case 0x248060u: goto label_248060;
        case 0x248064u: goto label_248064;
        case 0x248068u: goto label_248068;
        case 0x24806cu: goto label_24806c;
        case 0x248070u: goto label_248070;
        case 0x248074u: goto label_248074;
        case 0x248078u: goto label_248078;
        case 0x24807cu: goto label_24807c;
        case 0x248080u: goto label_248080;
        case 0x248084u: goto label_248084;
        default: break;
    }

    ctx->pc = 0x248000u;

label_248000:
    // 0x248000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248004:
    // 0x248004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_248008:
    // 0x248008: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24800c:
    // 0x24800c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24800cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248010:
    // 0x248010: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_248014:
    // 0x248014: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x248014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
label_248018:
    // 0x248018: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x248018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24801c:
    // 0x24801c: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x24801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_248020:
    // 0x248020: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x248020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248024:
    // 0x248024: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x248024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_248028:
    // 0x248028: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x248028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_24802c:
    // 0x24802c: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x24802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_248030:
    // 0x248030: 0x60f809  jalr        $v1
label_248034:
    if (ctx->pc == 0x248034u) {
        ctx->pc = 0x248034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248030u;
        // 0x248034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248038u;
        goto label_248038;
    }
    ctx->pc = 0x248030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x248038u);
        ctx->pc = 0x248034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248030u;
        // 0x248034: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248030u, 0x248038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248038u;
label_248038:
    // 0x248038: 0xc08bd98  jal         func_22F660
label_24803c:
    if (ctx->pc == 0x24803Cu) {
        ctx->pc = 0x24803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248038u;
        // 0x24803c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248040u;
        goto label_248040;
    }
    ctx->pc = 0x248038u;
    SET_GPR_U32(ctx, 31, 0x248040u);
    ctx->pc = 0x24803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248038u;
    // 0x24803c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x248038u, 0x248040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248040u;
label_248040:
    // 0x248040: 0xc07682a  jal         func_1DA0A8
label_248044:
    if (ctx->pc == 0x248044u) {
        ctx->pc = 0x248044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248040u;
        // 0x248044: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248048u;
        goto label_248048;
    }
    ctx->pc = 0x248040u;
    SET_GPR_U32(ctx, 31, 0x248048u);
    ctx->pc = 0x248044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248040u;
    // 0x248044: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x248040u, 0x248048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248048u;
label_248048:
    // 0x248048: 0xc07682a  jal         func_1DA0A8
label_24804c:
    if (ctx->pc == 0x24804Cu) {
        ctx->pc = 0x24804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248048u;
        // 0x24804c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248050u;
        goto label_248050;
    }
    ctx->pc = 0x248048u;
    SET_GPR_U32(ctx, 31, 0x248050u);
    ctx->pc = 0x24804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248048u;
    // 0x24804c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x248048u, 0x248050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248050u;
label_248050:
    // 0x248050: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x248050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
label_248054:
    // 0x248054: 0xc0767f2  jal         func_1D9FC8
label_248058:
    if (ctx->pc == 0x248058u) {
        ctx->pc = 0x248058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248054u;
        // 0x248058: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24805Cu;
        goto label_24805c;
    }
    ctx->pc = 0x248054u;
    SET_GPR_U32(ctx, 31, 0x24805Cu);
    ctx->pc = 0x248058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248054u;
    // 0x248058: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x248054u, 0x24805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24805Cu;
label_24805c:
    // 0x24805c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_248060:
    // 0x248060: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x248060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_248064:
    // 0x248064: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_248068:
    if (ctx->pc == 0x248068u) {
        ctx->pc = 0x248068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248064u;
        // 0x248068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24806Cu;
        goto label_24806c;
    }
    ctx->pc = 0x248064u;
    {
        const bool branch_taken_0x248064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248064) {
            ctx->pc = 0x248068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248064u;
            // 0x248068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24807Cu;
            goto label_24807c;
        }
    }
    ctx->pc = 0x24806Cu;
label_24806c:
    // 0x24806c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248070:
    // 0x248070: 0xc0bf0f8  jal         func_2FC3E0
label_248074:
    if (ctx->pc == 0x248074u) {
        ctx->pc = 0x248074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248070u;
        // 0x248074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248078u;
        goto label_248078;
    }
    ctx->pc = 0x248070u;
    SET_GPR_U32(ctx, 31, 0x248078u);
    ctx->pc = 0x248074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248070u;
    // 0x248074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E0u, 0x248070u, 0x248078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248078u;
label_248078:
    // 0x248078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24807c:
    // 0x24807c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24807cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_248080:
    // 0x248080: 0x3e00008  jr          $ra
label_248084:
    if (ctx->pc == 0x248084u) {
        ctx->pc = 0x248084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248080u;
        // 0x248084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248088u;
        goto label_fallthrough_0x248080;
    }
    ctx->pc = 0x248080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248080u;
        // 0x248084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248080:
    ctx->pc = 0x248088u;
}
