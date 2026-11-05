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

// Function: sub_0013C320
// Address: 0x13c320 - 0x13c388
void sub_0013C320_0x13c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C320_0x13c320");
#endif

    switch (ctx->pc) {
        case 0x13c320u: goto label_13c320;
        case 0x13c324u: goto label_13c324;
        case 0x13c328u: goto label_13c328;
        case 0x13c32cu: goto label_13c32c;
        case 0x13c330u: goto label_13c330;
        case 0x13c334u: goto label_13c334;
        case 0x13c338u: goto label_13c338;
        case 0x13c33cu: goto label_13c33c;
        case 0x13c340u: goto label_13c340;
        case 0x13c344u: goto label_13c344;
        case 0x13c348u: goto label_13c348;
        case 0x13c34cu: goto label_13c34c;
        case 0x13c350u: goto label_13c350;
        case 0x13c354u: goto label_13c354;
        case 0x13c358u: goto label_13c358;
        case 0x13c35cu: goto label_13c35c;
        case 0x13c360u: goto label_13c360;
        case 0x13c364u: goto label_13c364;
        case 0x13c368u: goto label_13c368;
        case 0x13c36cu: goto label_13c36c;
        case 0x13c370u: goto label_13c370;
        case 0x13c374u: goto label_13c374;
        case 0x13c378u: goto label_13c378;
        case 0x13c37cu: goto label_13c37c;
        case 0x13c380u: goto label_13c380;
        case 0x13c384u: goto label_13c384;
        default: break;
    }

    ctx->pc = 0x13c320u;

label_13c320:
    // 0x13c320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c324:
    // 0x13c324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c328:
    // 0x13c328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c32c:
    // 0x13c32c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13c32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c330:
    // 0x13c330: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c334:
    // 0x13c334: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c338:
    // 0x13c338: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13c338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13c33c:
    // 0x13c33c: 0x0  nop
    ctx->pc = 0x13c33cu;
    // NOP
label_13c340:
    // 0x13c340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c344:
    // 0x13c344: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_13c348:
    // 0x13c348: 0x40f809  jalr        $v0
label_13c34c:
    if (ctx->pc == 0x13C34Cu) {
        ctx->pc = 0x13C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C348u;
        // 0x13c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C350u;
        goto label_13c350;
    }
    ctx->pc = 0x13C348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C350u);
        ctx->pc = 0x13C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C348u;
        // 0x13c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C348u, 0x13C350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C350u;
label_13c350:
    // 0x13c350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c354:
    // 0x13c354: 0xc04f0ee  jal         func_13C3B8
label_13c358:
    if (ctx->pc == 0x13C358u) {
        ctx->pc = 0x13C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C354u;
        // 0x13c358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C35Cu;
        goto label_13c35c;
    }
    ctx->pc = 0x13C354u;
    SET_GPR_U32(ctx, 31, 0x13C35Cu);
    ctx->pc = 0x13C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C354u;
    // 0x13c358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C3B8u, 0x13C354u, 0x13C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C35Cu;
label_13c35c:
    // 0x13c35c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13c360:
    // 0x13c360: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13c360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c364:
    // 0x13c364: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x13c364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13c368:
    // 0x13c368: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
label_13c36c:
    if (ctx->pc == 0x13C36Cu) {
        ctx->pc = 0x13C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C368u;
        // 0x13c36c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C370u;
        goto label_13c370;
    }
    ctx->pc = 0x13C368u;
    {
        const bool branch_taken_0x13c368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c368) {
            ctx->pc = 0x13C36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C368u;
            // 0x13c36c: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c340;
        }
    }
    ctx->pc = 0x13C370u;
label_13c370:
    // 0x13c370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c374:
    // 0x13c374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c378:
    // 0x13c378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c37c:
    // 0x13c37c: 0x3e00008  jr          $ra
label_13c380:
    if (ctx->pc == 0x13C380u) {
        ctx->pc = 0x13C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C37Cu;
        // 0x13c380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C384u;
        goto label_13c384;
    }
    ctx->pc = 0x13C37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C37Cu;
        // 0x13c380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C384u;
label_13c384:
    // 0x13c384: 0x0  nop
    ctx->pc = 0x13c384u;
    // NOP
    ctx->pc = 0x13c388u;
}
