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

// Function: sub_00205220
// Address: 0x205220 - 0x2052a8
void sub_00205220_0x205220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205220_0x205220");
#endif

    switch (ctx->pc) {
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        default: break;
    }

    ctx->pc = 0x205220u;

label_205220:
    // 0x205220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205224:
    // 0x205224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205228:
    // 0x205228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20522c:
    // 0x20522c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205230:
    // 0x205230: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_205234:
    // 0x205234: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_205238:
    if (ctx->pc == 0x205238u) {
        ctx->pc = 0x205238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205234u;
        // 0x205238: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20523Cu;
        goto label_20523c;
    }
    ctx->pc = 0x205234u;
    {
        const bool branch_taken_0x205234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205234) {
            ctx->pc = 0x205238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205234u;
            // 0x205238: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20529Cu;
            goto label_20529c;
        }
    }
    ctx->pc = 0x20523Cu;
label_20523c:
    // 0x20523c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205240:
    // 0x205240: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_205244:
    // 0x205244: 0x40f809  jalr        $v0
label_205248:
    if (ctx->pc == 0x205248u) {
        ctx->pc = 0x20524Cu;
        goto label_20524c;
    }
    ctx->pc = 0x205244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20524Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205244u, 0x20524Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20524Cu;
label_20524c:
    // 0x20524c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_205250:
    if (ctx->pc == 0x205250u) {
        ctx->pc = 0x205250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20524Cu;
        // 0x205250: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205254u;
        goto label_205254;
    }
    ctx->pc = 0x20524Cu;
    {
        const bool branch_taken_0x20524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20524c) {
            ctx->pc = 0x205250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20524Cu;
            // 0x205250: 0x86020006  lh          $v0, 0x6($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205260u;
            goto label_205260;
        }
    }
    ctx->pc = 0x205254u;
label_205254:
    // 0x205254: 0xc0e6e04  jal         func_39B810
label_205258:
    if (ctx->pc == 0x205258u) {
        ctx->pc = 0x205258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205254u;
        // 0x205258: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20525Cu;
        goto label_20525c;
    }
    ctx->pc = 0x205254u;
    SET_GPR_U32(ctx, 31, 0x20525Cu);
    ctx->pc = 0x205258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205254u;
    // 0x205258: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x205254u, 0x20525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20525Cu;
label_20525c:
    // 0x20525c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x20525cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_205260:
    // 0x205260: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_205264:
    if (ctx->pc == 0x205264u) {
        ctx->pc = 0x205264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205260u;
        // 0x205264: 0x92020021  lbu         $v0, 0x21($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205268u;
        goto label_205268;
    }
    ctx->pc = 0x205260u;
    {
        const bool branch_taken_0x205260 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x205260) {
            ctx->pc = 0x205264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205260u;
            // 0x205264: 0x92020021  lbu         $v0, 0x21($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205274u;
            goto label_205274;
        }
    }
    ctx->pc = 0x205268u;
label_205268:
    // 0x205268: 0xc0d73fc  jal         func_35CFF0
label_20526c:
    if (ctx->pc == 0x20526Cu) {
        ctx->pc = 0x20526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205268u;
        // 0x20526c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205270u;
        goto label_205270;
    }
    ctx->pc = 0x205268u;
    SET_GPR_U32(ctx, 31, 0x205270u);
    ctx->pc = 0x20526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205268u;
    // 0x20526c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x205268u, 0x205270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205270u;
label_205270:
    // 0x205270: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x205270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
label_205274:
    // 0x205274: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_205278:
    if (ctx->pc == 0x205278u) {
        ctx->pc = 0x205278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205274u;
        // 0x205278: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20527Cu;
        goto label_20527c;
    }
    ctx->pc = 0x205274u;
    {
        const bool branch_taken_0x205274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205274u;
        // 0x205278: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205274) {
            ctx->pc = 0x205298u;
            goto label_205298;
        }
    }
    ctx->pc = 0x20527Cu;
label_20527c:
    // 0x20527c: 0x906293c0  lbu         $v0, -0x6C40($v1)
    ctx->pc = 0x20527cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939584)));
label_205280:
    // 0x205280: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_205284:
    if (ctx->pc == 0x205284u) {
        ctx->pc = 0x205284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205280u;
        // 0x205284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205288u;
        goto label_205288;
    }
    ctx->pc = 0x205280u;
    {
        const bool branch_taken_0x205280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205280u;
        // 0x205284: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205280) {
            ctx->pc = 0x20529Cu;
            goto label_20529c;
        }
    }
    ctx->pc = 0x205288u;
label_205288:
    // 0x205288: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_20528c:
    // 0x20528c: 0xa06093c0  sb          $zero, -0x6C40($v1)
    ctx->pc = 0x20528cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939584), (uint8_t)GPR_U32(ctx, 0));
label_205290:
    // 0x205290: 0xc082ad2  jal         func_20AB48
label_205294:
    if (ctx->pc == 0x205294u) {
        ctx->pc = 0x205294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205290u;
        // 0x205294: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205298u;
        goto label_205298;
    }
    ctx->pc = 0x205290u;
    SET_GPR_U32(ctx, 31, 0x205298u);
    ctx->pc = 0x205294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205290u;
    // 0x205294: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AB48u, 0x205290u, 0x205298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205298u;
label_205298:
    // 0x205298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20529c:
    // 0x20529c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2052a0:
    // 0x2052a0: 0x3e00008  jr          $ra
label_2052a4:
    if (ctx->pc == 0x2052A4u) {
        ctx->pc = 0x2052A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A0u;
        // 0x2052a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2052A8u;
        goto label_fallthrough_0x2052a0;
    }
    ctx->pc = 0x2052A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2052A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2052A0u;
        // 0x2052a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2052A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2052a0:
    ctx->pc = 0x2052A8u;
}
