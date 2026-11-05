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

// Function: sub_0010C028
// Address: 0x10c028 - 0x10c0f8
void sub_0010C028_0x10c028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C028_0x10c028");
#endif

    switch (ctx->pc) {
        case 0x10c064u: goto label_10c064;
        case 0x10c06cu: goto label_10c06c;
        case 0x10c094u: goto label_10c094;
        case 0x10c0a4u: goto label_10c0a4;
        case 0x10c0d0u: goto label_10c0d0;
        default: break;
    }

    ctx->pc = 0x10c028u;

    // 0x10c028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c02c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c030: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10c030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10c034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c038: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c03c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10c040: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10c044: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10c048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c04c: 0x920200cc  lbu         $v0, 0xCC($s0)
    ctx->pc = 0x10c04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x10c050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C050u;
    {
        const bool branch_taken_0x10c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C050u;
        // 0x10c054: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c050) {
            ctx->pc = 0x10C06Cu;
            goto label_10c06c;
        }
    }
    ctx->pc = 0x10C058u;
    // 0x10c058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c05c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10C05Cu;
    SET_GPR_U32(ctx, 31, 0x10C064u);
    ctx->pc = 0x10C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C05Cu;
    // 0x10c060: 0x24150030  addiu       $s5, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10C05Cu, 0x10C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C064u;
label_10c064:
    // 0x10c064: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C064u;
    {
        const bool branch_taken_0x10c064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x10C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C064u;
        // 0x10c068: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c064) {
            ctx->pc = 0x10C074u;
            goto label_10c074;
        }
    }
    ctx->pc = 0x10C06Cu;
label_10c06c:
    // 0x10c06c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x10C06Cu;
    {
        const bool branch_taken_0x10c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C06Cu;
        // 0x10c070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c06c) {
            ctx->pc = 0x10C0D4u;
            goto label_10c0d4;
        }
    }
    ctx->pc = 0x10C074u;
label_10c074:
    // 0x10c074: 0x2612000c  addiu       $s2, $s0, 0xC
    ctx->pc = 0x10c074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10c078: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10c07c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c080: 0x8c73001c  lw          $s3, 0x1C($v1)
    ctx->pc = 0x10c080u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c084: 0x1260fff9  beqz        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10C084u;
    {
        const bool branch_taken_0x10c084 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C084u;
        // 0x10c088: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c084) {
            ctx->pc = 0x10C06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c06c;
        }
    }
    ctx->pc = 0x10C08Cu;
    // 0x10c08c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x10C08Cu;
    SET_GPR_U32(ctx, 31, 0x10C094u);
    ctx->pc = 0x10C090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C08Cu;
    // 0x10c090: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x10C08Cu, 0x10C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C094u;
label_10c094:
    // 0x10c094: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10C094u;
    {
        const bool branch_taken_0x10c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C094u;
        // 0x10c098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c094) {
            ctx->pc = 0x10C0C4u;
            goto label_10c0c4;
        }
    }
    ctx->pc = 0x10C09Cu;
    // 0x10c09c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10C09Cu;
    SET_GPR_U32(ctx, 31, 0x10C0A4u);
    ctx->pc = 0x10C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C09Cu;
    // 0x10c0a0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10C09Cu, 0x10C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0A4u;
label_10c0a4:
    // 0x10c0a4: 0x1055fff1  beq         $v0, $s5, . + 4 + (-0xF << 2)
    ctx->pc = 0x10C0A4u;
    {
        const bool branch_taken_0x10c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x10C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0A4u;
        // 0x10c0a8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0a4) {
            ctx->pc = 0x10C06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c06c;
        }
    }
    ctx->pc = 0x10C0ACu;
    // 0x10c0ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10c0b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c0b4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x10c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10c0b8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C0B8u;
    {
        const bool branch_taken_0x10c0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c0b8) {
            ctx->pc = 0x10C0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C0B8u;
            // 0x10c0bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C0D4u;
            goto label_10c0d4;
        }
    }
    ctx->pc = 0x10C0C0u;
    // 0x10c0c0: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x10c0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_10c0c4:
    // 0x10c0c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c8: 0xc0444ae  jal         func_1112B8
    ctx->pc = 0x10C0C8u;
    SET_GPR_U32(ctx, 31, 0x10C0D0u);
    ctx->pc = 0x10C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0C8u;
    // 0x10c0cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1112B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1112B8u, 0x10C0C8u, 0x10C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0D0u;
label_10c0d0:
    // 0x10c0d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c0d4:
    // 0x10c0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10c0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c0dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10c0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c0e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10c0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10c0e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10c0e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c0e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10c0e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10c0ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0F0u;
        // 0x10c0f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C0F8u;
}
