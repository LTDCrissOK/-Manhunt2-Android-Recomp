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

// Function: FUN_0015619c
// Address: 0x15619c - 0x15621a
void FUN_0015619c_0x15619c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015619c_0x15619c");
#endif

    switch (ctx->pc) {
        case 0x15619cu: goto label_15619c;
        case 0x1561a0u: goto label_1561a0;
        case 0x1561a4u: goto label_1561a4;
        case 0x1561a8u: goto label_1561a8;
        case 0x1561acu: goto label_1561ac;
        case 0x1561b0u: goto label_1561b0;
        case 0x1561b4u: goto label_1561b4;
        case 0x1561b8u: goto label_1561b8;
        case 0x1561bcu: goto label_1561bc;
        case 0x1561c0u: goto label_1561c0;
        case 0x1561c4u: goto label_1561c4;
        case 0x1561c8u: goto label_1561c8;
        case 0x1561ccu: goto label_1561cc;
        case 0x1561d0u: goto label_1561d0;
        case 0x1561d4u: goto label_1561d4;
        case 0x1561d8u: goto label_1561d8;
        case 0x1561dcu: goto label_1561dc;
        case 0x1561e0u: goto label_1561e0;
        case 0x1561e4u: goto label_1561e4;
        case 0x1561e8u: goto label_1561e8;
        case 0x1561ecu: goto label_1561ec;
        case 0x1561f0u: goto label_1561f0;
        case 0x1561f4u: goto label_1561f4;
        case 0x1561f8u: goto label_1561f8;
        case 0x1561fcu: goto label_1561fc;
        case 0x156200u: goto label_156200;
        case 0x156204u: goto label_156204;
        case 0x156208u: goto label_156208;
        case 0x15620cu: goto label_15620c;
        case 0x156210u: goto label_156210;
        case 0x156214u: goto label_156214;
        case 0x156218u: goto label_156218;
        default: break;
    }

    ctx->pc = 0x15619cu;

label_15619c:
    // 0x15619c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1561a0:
    // 0x1561a0: 0x800008  jr          $a0
label_1561a4:
    if (ctx->pc == 0x1561A4u) {
        ctx->pc = 0x1561A8u;
        goto label_1561a8;
    }
    ctx->pc = 0x1561A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1561A8u;
label_1561a8:
    // 0x1561a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1561ac:
    // 0x1561ac: 0xc04da5c  jal         func_136970
label_1561b0:
    if (ctx->pc == 0x1561B0u) {
        ctx->pc = 0x1561B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561ACu;
        // 0x1561b0: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561B4u;
        goto label_1561b4;
    }
    ctx->pc = 0x1561ACu;
    SET_GPR_U32(ctx, 31, 0x1561B4u);
    ctx->pc = 0x1561B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561ACu;
    // 0x1561b0: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1561ACu, 0x1561B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561B4u;
label_1561b4:
    // 0x1561b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1561b8:
    if (ctx->pc == 0x1561B8u) {
        ctx->pc = 0x1561B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561B4u;
        // 0x1561b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561BCu;
        goto label_1561bc;
    }
    ctx->pc = 0x1561B4u;
    {
        const bool branch_taken_0x1561b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561B4u;
        // 0x1561b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561b4) {
            ctx->pc = 0x1561D0u;
            goto label_1561d0;
        }
    }
    ctx->pc = 0x1561BCu;
label_1561bc:
    // 0x1561bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1561c0:
    // 0x1561c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1561c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1561c4:
    // 0x1561c4: 0xc04d8d6  jal         func_136358
label_1561c8:
    if (ctx->pc == 0x1561C8u) {
        ctx->pc = 0x1561C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561C4u;
        // 0x1561c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561CCu;
        goto label_1561cc;
    }
    ctx->pc = 0x1561C4u;
    SET_GPR_U32(ctx, 31, 0x1561CCu);
    ctx->pc = 0x1561C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561C4u;
    // 0x1561c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1561C4u, 0x1561CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561CCu;
label_1561cc:
    // 0x1561cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1561ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1561d0:
    // 0x1561d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1561d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1561d4:
    // 0x1561d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1561d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1561d8:
    // 0x1561d8: 0x3e00008  jr          $ra
label_1561dc:
    if (ctx->pc == 0x1561DCu) {
        ctx->pc = 0x1561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D8u;
        // 0x1561dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561E0u;
        goto label_1561e0;
    }
    ctx->pc = 0x1561D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561D8u;
        // 0x1561dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561E0u;
label_1561e0:
    // 0x1561e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1561e4:
    // 0x1561e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1561e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1561e8:
    // 0x1561e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1561e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1561ec:
    // 0x1561ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1561ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1561f0:
    // 0x1561f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1561f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1561f4:
    // 0x1561f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1561f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1561f8:
    // 0x1561f8: 0xc04d8dc  jal         func_136370
label_1561fc:
    if (ctx->pc == 0x1561FCu) {
        ctx->pc = 0x1561FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561F8u;
        // 0x1561fc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156200u;
        goto label_156200;
    }
    ctx->pc = 0x1561F8u;
    SET_GPR_U32(ctx, 31, 0x156200u);
    ctx->pc = 0x1561FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561F8u;
    // 0x1561fc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1561F8u, 0x156200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156200u;
label_156200:
    // 0x156200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x156200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_156204:
    // 0x156204: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
label_156208:
    if (ctx->pc == 0x156208u) {
        ctx->pc = 0x156208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156204u;
        // 0x156208: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15620Cu;
        goto label_15620c;
    }
    ctx->pc = 0x156204u;
    {
        const bool branch_taken_0x156204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x156204) {
            ctx->pc = 0x156208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156204u;
            // 0x156208: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15633Cu;
            return;
        }
    }
    ctx->pc = 0x15620Cu;
label_15620c:
    // 0x15620c: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x15620cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_156210:
    // 0x156210: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x156210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_156214:
    // 0x156214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_156218:
    // 0x156218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x15621au;
}
