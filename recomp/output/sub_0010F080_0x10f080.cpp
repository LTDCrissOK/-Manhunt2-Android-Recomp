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

// Function: sub_0010F080
// Address: 0x10f080 - 0x10f158
void sub_0010F080_0x10f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F080_0x10f080");
#endif

    switch (ctx->pc) {
        case 0x10f0c0u: goto label_10f0c0;
        case 0x10f0e8u: goto label_10f0e8;
        case 0x10f0f8u: goto label_10f0f8;
        case 0x10f108u: goto label_10f108;
        case 0x10f114u: goto label_10f114;
        default: break;
    }

    ctx->pc = 0x10f080u;

    // 0x10f080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10f088: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10f08c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10f08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10f090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10f094: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10f094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f098: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10f098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10f09c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x10f09cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10f0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10f0a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10f0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0a8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10f0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10f0ac: 0x26750024  addiu       $s5, $s3, 0x24
    ctx->pc = 0x10f0acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x10f0b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f0b4: 0x3c160049  lui         $s6, 0x49
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)73 << 16));
    // 0x10f0b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10F0B8u;
    {
        const bool branch_taken_0x10f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B8u;
        // 0x10f0bc: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0b8) {
            ctx->pc = 0x10F0C4u;
            goto label_10f0c4;
        }
    }
    ctx->pc = 0x10F0C0u;
label_10f0c0:
    // 0x10f0c0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x10f0c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10f0c4:
    // 0x10f0c4: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x10f0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x10f0c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10F0C8u;
    {
        const bool branch_taken_0x10f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0C8u;
        // 0x10f0cc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0c8) {
            ctx->pc = 0x10F12Cu;
            goto label_10f12c;
        }
    }
    ctx->pc = 0x10F0D0u;
    // 0x10f0d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x10f0d4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10f0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f0d8: 0x1200fff9  beqz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10F0D8u;
    {
        const bool branch_taken_0x10f0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0D8u;
        // 0x10f0dc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d8) {
            ctx->pc = 0x10F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f0c0;
        }
    }
    ctx->pc = 0x10F0E0u;
    // 0x10f0e0: 0xc04561a  jal         func_115868
    ctx->pc = 0x10F0E0u;
    SET_GPR_U32(ctx, 31, 0x10F0E8u);
    ctx->pc = 0x10F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0E0u;
    // 0x10f0e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x10F0E0u, 0x10F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0E8u;
label_10f0e8:
    // 0x10f0e8: 0x1454000c  bne         $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x10F0E8u;
    {
        const bool branch_taken_0x10f0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x10F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0E8u;
        // 0x10f0ec: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0e8) {
            ctx->pc = 0x10F11Cu;
            goto label_10f11c;
        }
    }
    ctx->pc = 0x10F0F0u;
    // 0x10f0f0: 0xc0456a2  jal         func_115A88
    ctx->pc = 0x10F0F0u;
    SET_GPR_U32(ctx, 31, 0x10F0F8u);
    ctx->pc = 0x10F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0F0u;
    // 0x10f0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A88u, 0x10F0F0u, 0x10F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0F8u;
label_10f0f8:
    // 0x10f0f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F0F8u;
    {
        const bool branch_taken_0x10f0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F8u;
        // 0x10f0fc: 0x26c4b530  addiu       $a0, $s6, -0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294948144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f8) {
            ctx->pc = 0x10F108u;
            goto label_10f108;
        }
    }
    ctx->pc = 0x10F100u;
    // 0x10f100: 0xc04b2a6  jal         func_12CA98
    ctx->pc = 0x10F100u;
    SET_GPR_U32(ctx, 31, 0x10F108u);
    ctx->pc = 0x10F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F100u;
    // 0x10f104: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA98u, 0x10F100u, 0x10F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F108u;
label_10f108:
    // 0x10f108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f10c: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x10F10Cu;
    SET_GPR_U32(ctx, 31, 0x10F114u);
    ctx->pc = 0x10F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F10Cu;
    // 0x10f110: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x10F10Cu, 0x10F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F114u;
label_10f114:
    // 0x10f114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F114u;
    {
        const bool branch_taken_0x10f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f114) {
            ctx->pc = 0x10F130u;
            goto label_10f130;
        }
    }
    ctx->pc = 0x10F11Cu;
label_10f11c:
    // 0x10f11c: 0x926300a4  lbu         $v1, 0xA4($s3)
    ctx->pc = 0x10f11cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x10f120: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x10f120u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10f124: 0x1623ffe6  bne         $s1, $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10F124u;
    {
        const bool branch_taken_0x10f124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F124u;
        // 0x10f128: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f124) {
            ctx->pc = 0x10F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f0c0;
        }
    }
    ctx->pc = 0x10F12Cu;
label_10f12c:
    // 0x10f12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f130:
    // 0x10f130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10f130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10f134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f138: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10f138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10f13c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10f13cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f140: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10f140u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10f144: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10f144u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f148: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10f148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F14Cu;
        // 0x10f150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F154u;
    // 0x10f154: 0x0  nop
    ctx->pc = 0x10f154u;
    // NOP
    ctx->pc = 0x10f158u;
}
