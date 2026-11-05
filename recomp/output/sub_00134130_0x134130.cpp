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

// Function: sub_00134130
// Address: 0x134130 - 0x134190
void sub_00134130_0x134130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134130_0x134130");
#endif

    switch (ctx->pc) {
        case 0x134130u: goto label_134130;
        case 0x134134u: goto label_134134;
        case 0x134138u: goto label_134138;
        case 0x13413cu: goto label_13413c;
        case 0x134140u: goto label_134140;
        case 0x134144u: goto label_134144;
        case 0x134148u: goto label_134148;
        case 0x13414cu: goto label_13414c;
        case 0x134150u: goto label_134150;
        case 0x134154u: goto label_134154;
        case 0x134158u: goto label_134158;
        case 0x13415cu: goto label_13415c;
        case 0x134160u: goto label_134160;
        case 0x134164u: goto label_134164;
        case 0x134168u: goto label_134168;
        case 0x13416cu: goto label_13416c;
        case 0x134170u: goto label_134170;
        case 0x134174u: goto label_134174;
        case 0x134178u: goto label_134178;
        case 0x13417cu: goto label_13417c;
        case 0x134180u: goto label_134180;
        case 0x134184u: goto label_134184;
        case 0x134188u: goto label_134188;
        case 0x13418cu: goto label_13418c;
        default: break;
    }

    ctx->pc = 0x134130u;

label_134130:
    // 0x134130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_134134:
    // 0x134134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_134138:
    // 0x134138: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_13413c:
    // 0x13413c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134140:
    // 0x134140: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_134144:
    // 0x134144: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_134148:
    if (ctx->pc == 0x134148u) {
        ctx->pc = 0x134148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134144u;
        // 0x134148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13414Cu;
        goto label_13414c;
    }
    ctx->pc = 0x134144u;
    {
        const bool branch_taken_0x134144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134144) {
            ctx->pc = 0x134148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134144u;
            // 0x134148: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134180u;
            goto label_134180;
        }
    }
    ctx->pc = 0x13414Cu;
label_13414c:
    // 0x13414c: 0xc04d136  jal         func_1344D8
label_134150:
    if (ctx->pc == 0x134150u) {
        ctx->pc = 0x134150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13414Cu;
        // 0x134150: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134154u;
        goto label_134154;
    }
    ctx->pc = 0x13414Cu;
    SET_GPR_U32(ctx, 31, 0x134154u);
    ctx->pc = 0x134150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13414Cu;
    // 0x134150: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344D8u, 0x13414Cu, 0x134154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134154u;
label_134154:
    // 0x134154: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x134154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_134158:
    // 0x134158: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_13415c:
    // 0x13415c: 0x40f809  jalr        $v0
label_134160:
    if (ctx->pc == 0x134160u) {
        ctx->pc = 0x134160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13415Cu;
        // 0x134160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134164u;
        goto label_134164;
    }
    ctx->pc = 0x13415Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134164u);
        ctx->pc = 0x134160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13415Cu;
        // 0x134160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13415Cu, 0x134164u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134164u;
label_134164:
    // 0x134164: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_134168:
    if (ctx->pc == 0x134168u) {
        ctx->pc = 0x134168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134164u;
        // 0x134168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13416Cu;
        goto label_13416c;
    }
    ctx->pc = 0x134164u;
    {
        const bool branch_taken_0x134164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134164) {
            ctx->pc = 0x134168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134164u;
            // 0x134168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134180u;
            goto label_134180;
        }
    }
    ctx->pc = 0x13416Cu;
label_13416c:
    // 0x13416c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x13416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_134170:
    // 0x134170: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x134170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_134174:
    // 0x134174: 0x40f809  jalr        $v0
label_134178:
    if (ctx->pc == 0x134178u) {
        ctx->pc = 0x134178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134174u;
        // 0x134178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13417Cu;
        goto label_13417c;
    }
    ctx->pc = 0x134174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13417Cu);
        ctx->pc = 0x134178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134174u;
        // 0x134178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134174u, 0x13417Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13417Cu;
label_13417c:
    // 0x13417c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13417cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134180:
    // 0x134180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_134184:
    // 0x134184: 0x3e00008  jr          $ra
label_134188:
    if (ctx->pc == 0x134188u) {
        ctx->pc = 0x134188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134184u;
        // 0x134188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13418Cu;
        goto label_13418c;
    }
    ctx->pc = 0x134184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134184u;
        // 0x134188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13418Cu;
label_13418c:
    // 0x13418c: 0x0  nop
    ctx->pc = 0x13418cu;
    // NOP
    ctx->pc = 0x134190u;
}
