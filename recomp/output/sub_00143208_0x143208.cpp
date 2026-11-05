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

// Function: sub_00143208
// Address: 0x143208 - 0x143288
void sub_00143208_0x143208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143208_0x143208");
#endif

    switch (ctx->pc) {
        case 0x143224u: goto label_143224;
        case 0x143230u: goto label_143230;
        case 0x143244u: goto label_143244;
        case 0x143268u: goto label_143268;
        case 0x143278u: goto label_143278;
        default: break;
    }

    ctx->pc = 0x143208u;

    // 0x143208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14320c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14320cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x143210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143214: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14321c: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x14321Cu;
    SET_GPR_U32(ctx, 31, 0x143224u);
    ctx->pc = 0x143220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14321Cu;
    // 0x143220: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x14321Cu, 0x143224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143224u;
label_143224:
    // 0x143224: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143224u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143228: 0xc04e866  jal         func_13A198
    ctx->pc = 0x143228u;
    SET_GPR_U32(ctx, 31, 0x143230u);
    ctx->pc = 0x14322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143228u;
    // 0x14322c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x143228u, 0x143230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143230u;
label_143230:
    // 0x143230: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x143230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x143234: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x143234u;
    {
        const bool branch_taken_0x143234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x143234) {
            ctx->pc = 0x143238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143234u;
            // 0x143238: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14327Cu;
            goto label_14327c;
        }
    }
    ctx->pc = 0x14323Cu;
    // 0x14323c: 0xc04edba  jal         func_13B6E8
    ctx->pc = 0x14323Cu;
    SET_GPR_U32(ctx, 31, 0x143244u);
    ctx->pc = 0x143240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14323Cu;
    // 0x143240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6E8u, 0x14323Cu, 0x143244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143244u;
label_143244:
    // 0x143244: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x143244u;
    {
        const bool branch_taken_0x143244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143244) {
            ctx->pc = 0x143248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143244u;
            // 0x143248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14327Cu;
            goto label_14327c;
        }
    }
    ctx->pc = 0x14324Cu;
    // 0x14324c: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x14324cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x143250: 0x92030b10  lbu         $v1, 0xB10($s0)
    ctx->pc = 0x143250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2832)));
    // 0x143254: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x143254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143258u;
    {
        const bool branch_taken_0x143258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143258) {
            ctx->pc = 0x143270u;
            goto label_143270;
        }
    }
    ctx->pc = 0x143260u;
    // 0x143260: 0xc050cd6  jal         func_143358
    ctx->pc = 0x143260u;
    SET_GPR_U32(ctx, 31, 0x143268u);
    ctx->pc = 0x143264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143260u;
    // 0x143264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143358u, 0x143260u, 0x143268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143268u;
label_143268:
    // 0x143268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143268u;
    {
        const bool branch_taken_0x143268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143268u;
        // 0x14326c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143268) {
            ctx->pc = 0x14327Cu;
            goto label_14327c;
        }
    }
    ctx->pc = 0x143270u;
label_143270:
    // 0x143270: 0xc04ec30  jal         func_13B0C0
    ctx->pc = 0x143270u;
    SET_GPR_U32(ctx, 31, 0x143278u);
    ctx->pc = 0x143274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143270u;
    // 0x143274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B0C0u, 0x143270u, 0x143278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143278u;
label_143278:
    // 0x143278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14327c:
    // 0x14327c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143280: 0x3e00008  jr          $ra
    ctx->pc = 0x143280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143280u;
        // 0x143284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143288u;
}
