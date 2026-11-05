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

// Function: sub_0015EFE8
// Address: 0x15efe8 - 0x15f168
void sub_0015EFE8_0x15efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EFE8_0x15efe8");
#endif

    switch (ctx->pc) {
        case 0x15f05cu: goto label_15f05c;
        case 0x15f068u: goto label_15f068;
        case 0x15f088u: goto label_15f088;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0e0u: goto label_15f0e0;
        case 0x15f0f4u: goto label_15f0f4;
        case 0x15f104u: goto label_15f104;
        case 0x15f114u: goto label_15f114;
        default: break;
    }

    ctx->pc = 0x15efe8u;

    // 0x15efe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15efec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15efecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15eff0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15eff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15eff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15eff8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15eff8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15effc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15effcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15f004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15f008: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15f00c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15f00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15f010: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x15f014: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x15f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x15f018: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15f01c: 0x92c50a20  lbu         $a1, 0xA20($s6)
    ctx->pc = 0x15f01cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2592)));
    // 0x15f020: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x15F020u;
    {
        const bool branch_taken_0x15f020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F020u;
        // 0x15f024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f020) {
            ctx->pc = 0x15F138u;
            goto label_15f138;
        }
    }
    ctx->pc = 0x15F028u;
    // 0x15f028: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x15f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x15f02c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15f030: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15f034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f038: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x15f03c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f044: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15f048: 0x8c95020c  lw          $s5, 0x20C($a0)
    ctx->pc = 0x15f048u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x15f04c: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15F04Cu;
    {
        const bool branch_taken_0x15f04c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F04Cu;
        // 0x15f050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f04c) {
            ctx->pc = 0x15F070u;
            goto label_15f070;
        }
    }
    ctx->pc = 0x15F054u;
    // 0x15f054: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x15F054u;
    {
        const bool branch_taken_0x15f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F054u;
        // 0x15f058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f054) {
            ctx->pc = 0x15F13Cu;
            goto label_15f13c;
        }
    }
    ctx->pc = 0x15F05Cu;
label_15f05c:
    // 0x15f05c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15f05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f060: 0xc04445e  jal         func_111178
    ctx->pc = 0x15F060u;
    SET_GPR_U32(ctx, 31, 0x15F068u);
    ctx->pc = 0x15F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F060u;
    // 0x15f064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111178u, 0x15F060u, 0x15F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F068u;
label_15f068:
    // 0x15f068: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15F068u;
    {
        const bool branch_taken_0x15f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F068u;
        // 0x15f06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f068) {
            ctx->pc = 0x15F138u;
            goto label_15f138;
        }
    }
    ctx->pc = 0x15F070u;
label_15f070:
    // 0x15f070: 0x10a00030  beqz        $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x15F070u;
    {
        const bool branch_taken_0x15f070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F070u;
        // 0x15f074: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f070) {
            ctx->pc = 0x15F134u;
            goto label_15f134;
        }
    }
    ctx->pc = 0x15F078u;
    // 0x15f078: 0x3c1e0049  lui         $fp, 0x49
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)73 << 16));
    // 0x15f07c: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x15f07cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    // 0x15f080: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15f084: 0x0  nop
    ctx->pc = 0x15f084u;
    // NOP
label_15f088:
    // 0x15f088: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f08c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x15f08cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15f090: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x15f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x15f094: 0x8c520320  lw          $s2, 0x320($v0)
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15f098: 0xc04446a  jal         func_1111A8
    ctx->pc = 0x15F098u;
    SET_GPR_U32(ctx, 31, 0x15F0A0u);
    ctx->pc = 0x15F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F098u;
    // 0x15f09c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1111A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1111A8u, 0x15F098u, 0x15F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0A0u;
label_15f0a0:
    // 0x15f0a0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x15F0A0u;
    {
        const bool branch_taken_0x15f0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0A0u;
        // 0x15f0a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0a0) {
            ctx->pc = 0x15F138u;
            goto label_15f138;
        }
    }
    ctx->pc = 0x15F0A8u;
    // 0x15f0a8: 0xc044240  jal         func_110900
    ctx->pc = 0x15F0A8u;
    SET_GPR_U32(ctx, 31, 0x15F0B0u);
    ctx->pc = 0x15F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F0A8u;
    // 0x15f0ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110900u, 0x15F0A8u, 0x15F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0B0u;
label_15f0b0:
    // 0x15f0b0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f0b4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F0B4u;
    {
        const bool branch_taken_0x15f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x15F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0B4u;
        // 0x15f0b8: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0b4) {
            ctx->pc = 0x15F0C4u;
            goto label_15f0c4;
        }
    }
    ctx->pc = 0x15F0BCu;
    // 0x15f0bc: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x15F0BCu;
    {
        const bool branch_taken_0x15f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0BCu;
        // 0x15f0c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0bc) {
            ctx->pc = 0x15F05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f05c;
        }
    }
    ctx->pc = 0x15F0C4u;
label_15f0c4:
    // 0x15f0c4: 0x8ec20214  lw          $v0, 0x214($s6)
    ctx->pc = 0x15f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 532)));
    // 0x15f0c8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x15f0cc: 0x2464b060  addiu       $a0, $v1, -0x4FA0
    ctx->pc = 0x15f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x15f0d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15f0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0d4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x15f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15f0d8: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15F0D8u;
    SET_GPR_U32(ctx, 31, 0x15F0E0u);
    ctx->pc = 0x15F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F0D8u;
    // 0x15f0dc: 0x27c78738  addiu       $a3, $fp, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15F0D8u, 0x15F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0E0u;
label_15f0e0:
    // 0x15f0e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15f0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0e4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x15F0E4u;
    {
        const bool branch_taken_0x15f0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E4u;
        // 0x15f0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e4) {
            ctx->pc = 0x15F11Cu;
            goto label_15f11c;
        }
    }
    ctx->pc = 0x15F0ECu;
    // 0x15f0ec: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15F0ECu;
    SET_GPR_U32(ctx, 31, 0x15F0F4u);
    ctx->pc = 0x15F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F0ECu;
    // 0x15f0f0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15F0ECu, 0x15F0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F0F4u;
label_15f0f4:
    // 0x15f0f4: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f0f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0fc: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15F0FCu;
    SET_GPR_U32(ctx, 31, 0x15F104u);
    ctx->pc = 0x15F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F0FCu;
    // 0x15f100: 0x26e48758  addiu       $a0, $s7, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15F0FCu, 0x15F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F104u;
label_15f104:
    // 0x15f104: 0x12130005  beq         $s0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F104u;
    {
        const bool branch_taken_0x15f104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x15F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F104u;
        // 0x15f108: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f104) {
            ctx->pc = 0x15F11Cu;
            goto label_15f11c;
        }
    }
    ctx->pc = 0x15F10Cu;
    // 0x15f10c: 0xc044234  jal         func_1108D0
    ctx->pc = 0x15F10Cu;
    SET_GPR_U32(ctx, 31, 0x15F114u);
    ctx->pc = 0x15F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F10Cu;
    // 0x15f110: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x15F10Cu, 0x15F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F114u;
label_15f114:
    // 0x15f114: 0x1453ffd1  bne         $v0, $s3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x15F114u;
    {
        const bool branch_taken_0x15f114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x15F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F114u;
        // 0x15f118: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f114) {
            ctx->pc = 0x15F05Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f05c;
        }
    }
    ctx->pc = 0x15F11Cu;
label_15f11c:
    // 0x15f11c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x15f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15f120: 0x92c20a20  lbu         $v0, 0xA20($s6)
    ctx->pc = 0x15f120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2592)));
    // 0x15f124: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x15f124u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15f128: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x15f128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15f12c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x15F12Cu;
    {
        const bool branch_taken_0x15f12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F12Cu;
        // 0x15f130: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f12c) {
            ctx->pc = 0x15F088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f088;
        }
    }
    ctx->pc = 0x15F134u;
label_15f134:
    // 0x15f134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f138:
    // 0x15f138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15f138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f13c:
    // 0x15f13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15f13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f140: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15f140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f144: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15f144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15f148: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15f148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f14c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15f14cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15f150: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15f150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f154: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15f154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f158: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x15f158u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f15c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15f15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15f160: 0x3e00008  jr          $ra
    ctx->pc = 0x15F160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F160u;
        // 0x15f164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F168u;
}
