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

// Function: sub_00399040
// Address: 0x399040 - 0x3990d0
void sub_00399040_0x399040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399040_0x399040");
#endif

    switch (ctx->pc) {
        case 0x399040u: goto label_399040;
        case 0x399044u: goto label_399044;
        case 0x399048u: goto label_399048;
        case 0x39904cu: goto label_39904c;
        case 0x399050u: goto label_399050;
        case 0x399054u: goto label_399054;
        case 0x399058u: goto label_399058;
        case 0x39905cu: goto label_39905c;
        case 0x399060u: goto label_399060;
        case 0x399064u: goto label_399064;
        case 0x399068u: goto label_399068;
        case 0x39906cu: goto label_39906c;
        case 0x399070u: goto label_399070;
        case 0x399074u: goto label_399074;
        case 0x399078u: goto label_399078;
        case 0x39907cu: goto label_39907c;
        case 0x399080u: goto label_399080;
        case 0x399084u: goto label_399084;
        case 0x399088u: goto label_399088;
        case 0x39908cu: goto label_39908c;
        case 0x399090u: goto label_399090;
        case 0x399094u: goto label_399094;
        case 0x399098u: goto label_399098;
        case 0x39909cu: goto label_39909c;
        case 0x3990a0u: goto label_3990a0;
        case 0x3990a4u: goto label_3990a4;
        case 0x3990a8u: goto label_3990a8;
        case 0x3990acu: goto label_3990ac;
        case 0x3990b0u: goto label_3990b0;
        case 0x3990b4u: goto label_3990b4;
        case 0x3990b8u: goto label_3990b8;
        case 0x3990bcu: goto label_3990bc;
        case 0x3990c0u: goto label_3990c0;
        case 0x3990c4u: goto label_3990c4;
        case 0x3990c8u: goto label_3990c8;
        case 0x3990ccu: goto label_3990cc;
        default: break;
    }

    ctx->pc = 0x399040u;

label_399040:
    // 0x399040: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x399040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_399044:
    // 0x399044: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_399048:
    // 0x399048: 0x8c43920c  lw          $v1, -0x6DF4($v0)
    ctx->pc = 0x399048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939148)));
label_39904c:
    // 0x39904c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_399050:
    // 0x399050: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_399054:
    // 0x399054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x399054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_399058:
    // 0x399058: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_39905c:
    if (ctx->pc == 0x39905Cu) {
        ctx->pc = 0x39905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399058u;
        // 0x39905c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399060u;
        goto label_399060;
    }
    ctx->pc = 0x399058u;
    {
        const bool branch_taken_0x399058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399058u;
        // 0x39905c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399058) {
            ctx->pc = 0x39906Cu;
            goto label_39906c;
        }
    }
    ctx->pc = 0x399060u;
label_399060:
    // 0x399060: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x399060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_399064:
    // 0x399064: 0x60f809  jalr        $v1
label_399068:
    if (ctx->pc == 0x399068u) {
        ctx->pc = 0x399068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399064u;
        // 0x399068: 0x8c449210  lw          $a0, -0x6DF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39906Cu;
        goto label_39906c;
    }
    ctx->pc = 0x399064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39906Cu);
        ctx->pc = 0x399068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399064u;
        // 0x399068: 0x8c449210  lw          $a0, -0x6DF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939152)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399064u, 0x39906Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39906Cu;
label_39906c:
    // 0x39906c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_399070:
    // 0x399070: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x399070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399074:
    // 0x399074: 0x24509220  addiu       $s0, $v0, -0x6DE0
    ctx->pc = 0x399074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939168));
label_399078:
    // 0x399078: 0x26110ac0  addiu       $s1, $s0, 0xAC0
    ctx->pc = 0x399078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2752));
label_39907c:
    // 0x39907c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x39907cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_399080:
    // 0x399080: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_399084:
    if (ctx->pc == 0x399084u) {
        ctx->pc = 0x399084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399080u;
        // 0x399084: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399088u;
        goto label_399088;
    }
    ctx->pc = 0x399080u;
    {
        const bool branch_taken_0x399080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x399080) {
            ctx->pc = 0x399084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399080u;
            // 0x399084: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399094u;
            goto label_399094;
        }
    }
    ctx->pc = 0x399088u;
label_399088:
    // 0x399088: 0xc0e6340  jal         func_398D00
label_39908c:
    if (ctx->pc == 0x39908Cu) {
        ctx->pc = 0x39908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399088u;
        // 0x39908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399090u;
        goto label_399090;
    }
    ctx->pc = 0x399088u;
    SET_GPR_U32(ctx, 31, 0x399090u);
    ctx->pc = 0x39908Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399088u;
    // 0x39908c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D00u, 0x399088u, 0x399090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399090u;
label_399090:
    // 0x399090: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x399090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_399094:
    // 0x399094: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x399094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_399098:
    // 0x399098: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_39909c:
    if (ctx->pc == 0x39909Cu) {
        ctx->pc = 0x39909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399098u;
        // 0x39909c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990A0u;
        goto label_3990a0;
    }
    ctx->pc = 0x399098u;
    {
        const bool branch_taken_0x399098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399098) {
            ctx->pc = 0x39909Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399098u;
            // 0x39909c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399080;
        }
    }
    ctx->pc = 0x3990A0u;
label_3990a0:
    // 0x3990a0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3990a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3990a4:
    // 0x3990a4: 0x8c439214  lw          $v1, -0x6DEC($v0)
    ctx->pc = 0x3990a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939156)));
label_3990a8:
    // 0x3990a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3990ac:
    if (ctx->pc == 0x3990ACu) {
        ctx->pc = 0x3990ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990A8u;
        // 0x3990ac: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990B0u;
        goto label_3990b0;
    }
    ctx->pc = 0x3990A8u;
    {
        const bool branch_taken_0x3990a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3990ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990A8u;
        // 0x3990ac: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3990a8) {
            ctx->pc = 0x3990B8u;
            goto label_3990b8;
        }
    }
    ctx->pc = 0x3990B0u;
label_3990b0:
    // 0x3990b0: 0x60f809  jalr        $v1
label_3990b4:
    if (ctx->pc == 0x3990B4u) {
        ctx->pc = 0x3990B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990B0u;
        // 0x3990b4: 0x8c449218  lw          $a0, -0x6DE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990B8u;
        goto label_3990b8;
    }
    ctx->pc = 0x3990B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3990B8u);
        ctx->pc = 0x3990B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990B0u;
        // 0x3990b4: 0x8c449218  lw          $a0, -0x6DE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939160)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3990B0u, 0x3990B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3990B8u;
label_3990b8:
    // 0x3990b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3990b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3990bc:
    // 0x3990bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3990bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3990c0:
    // 0x3990c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3990c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3990c4:
    // 0x3990c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3990c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3990c8:
    // 0x3990c8: 0x3e00008  jr          $ra
label_3990cc:
    if (ctx->pc == 0x3990CCu) {
        ctx->pc = 0x3990CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C8u;
        // 0x3990cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3990D0u;
        goto label_fallthrough_0x3990c8;
    }
    ctx->pc = 0x3990C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3990CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3990C8u;
        // 0x3990cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3990C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3990c8:
    ctx->pc = 0x3990D0u;
}
