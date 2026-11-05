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

// Function: sub_00380010
// Address: 0x380010 - 0x3800a0
void sub_00380010_0x380010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380010_0x380010");
#endif

    switch (ctx->pc) {
        case 0x380010u: goto label_380010;
        case 0x380014u: goto label_380014;
        case 0x380018u: goto label_380018;
        case 0x38001cu: goto label_38001c;
        case 0x380020u: goto label_380020;
        case 0x380024u: goto label_380024;
        case 0x380028u: goto label_380028;
        case 0x38002cu: goto label_38002c;
        case 0x380030u: goto label_380030;
        case 0x380034u: goto label_380034;
        case 0x380038u: goto label_380038;
        case 0x38003cu: goto label_38003c;
        case 0x380040u: goto label_380040;
        case 0x380044u: goto label_380044;
        case 0x380048u: goto label_380048;
        case 0x38004cu: goto label_38004c;
        case 0x380050u: goto label_380050;
        case 0x380054u: goto label_380054;
        case 0x380058u: goto label_380058;
        case 0x38005cu: goto label_38005c;
        case 0x380060u: goto label_380060;
        case 0x380064u: goto label_380064;
        case 0x380068u: goto label_380068;
        case 0x38006cu: goto label_38006c;
        case 0x380070u: goto label_380070;
        case 0x380074u: goto label_380074;
        case 0x380078u: goto label_380078;
        case 0x38007cu: goto label_38007c;
        case 0x380080u: goto label_380080;
        case 0x380084u: goto label_380084;
        case 0x380088u: goto label_380088;
        case 0x38008cu: goto label_38008c;
        case 0x380090u: goto label_380090;
        case 0x380094u: goto label_380094;
        case 0x380098u: goto label_380098;
        case 0x38009cu: goto label_38009c;
        default: break;
    }

    ctx->pc = 0x380010u;

label_380010:
    // 0x380010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_380014:
    // 0x380014: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x380014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_380018:
    // 0x380018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_38001c:
    // 0x38001c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x38001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_380020:
    // 0x380020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x380020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_380024:
    // 0x380024: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x380024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_380028:
    // 0x380028: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38002c:
    // 0x38002c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_380030:
    // 0x380030: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x380030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_380034:
    // 0x380034: 0x12110011  beq         $s0, $s1, . + 4 + (0x11 << 2)
label_380038:
    if (ctx->pc == 0x380038u) {
        ctx->pc = 0x380038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380034u;
        // 0x380038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38003Cu;
        goto label_38003c;
    }
    ctx->pc = 0x380034u;
    {
        const bool branch_taken_0x380034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x380038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380034u;
        // 0x380038: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380034) {
            ctx->pc = 0x38007Cu;
            goto label_38007c;
        }
    }
    ctx->pc = 0x38003Cu;
label_38003c:
    // 0x38003c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x38003cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380040:
    // 0x380040: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x380040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_380044:
    // 0x380044: 0x0  nop
    ctx->pc = 0x380044u;
    // NOP
label_380048:
    // 0x380048: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38004c:
    if (ctx->pc == 0x38004Cu) {
        ctx->pc = 0x38004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380048u;
        // 0x38004c: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380050u;
        goto label_380050;
    }
    ctx->pc = 0x380048u;
    {
        const bool branch_taken_0x380048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380048) {
            ctx->pc = 0x38004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380048u;
            // 0x38004c: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380068u;
            goto label_380068;
        }
    }
    ctx->pc = 0x380050u;
label_380050:
    // 0x380050: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x380050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_380054:
    // 0x380054: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x380054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_380058:
    // 0x380058: 0x40f809  jalr        $v0
label_38005c:
    if (ctx->pc == 0x38005Cu) {
        ctx->pc = 0x38005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380058u;
        // 0x38005c: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380060u;
        goto label_380060;
    }
    ctx->pc = 0x380058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380060u);
        ctx->pc = 0x38005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380058u;
        // 0x38005c: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380058u, 0x380060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380060u;
label_380060:
    // 0x380060: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x380060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_380064:
    // 0x380064: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x380064u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_380068:
    // 0x380068: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x380068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38006c:
    // 0x38006c: 0x2111826  xor         $v1, $s0, $s1
    ctx->pc = 0x38006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_380070:
    // 0x380070: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x380070u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_380074:
    // 0x380074: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
label_380078:
    if (ctx->pc == 0x380078u) {
        ctx->pc = 0x380078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380074u;
        // 0x380078: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38007Cu;
        goto label_38007c;
    }
    ctx->pc = 0x380074u;
    {
        const bool branch_taken_0x380074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380074) {
            ctx->pc = 0x380078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380074u;
            // 0x380078: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380048;
        }
    }
    ctx->pc = 0x38007Cu;
label_38007c:
    // 0x38007c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x38007cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_380080:
    // 0x380080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380084:
    // 0x380084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_380088:
    // 0x380088: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x380088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38008c:
    // 0x38008c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x38008cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_380090:
    // 0x380090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_380094:
    // 0x380094: 0x3e00008  jr          $ra
label_380098:
    if (ctx->pc == 0x380098u) {
        ctx->pc = 0x380098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380094u;
        // 0x380098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38009Cu;
        goto label_38009c;
    }
    ctx->pc = 0x380094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380094u;
        // 0x380098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38009Cu;
label_38009c:
    // 0x38009c: 0x0  nop
    ctx->pc = 0x38009cu;
    // NOP
    ctx->pc = 0x3800a0u;
}
