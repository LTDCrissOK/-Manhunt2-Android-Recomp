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

// Function: sub_00357038
// Address: 0x357038 - 0x3570c0
void sub_00357038_0x357038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357038_0x357038");
#endif

    switch (ctx->pc) {
        case 0x357058u: goto label_357058;
        case 0x357068u: goto label_357068;
        case 0x35707cu: goto label_35707c;
        case 0x357090u: goto label_357090;
        case 0x3570a4u: goto label_3570a4;
        default: break;
    }

    ctx->pc = 0x357038u;

    // 0x357038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35703c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35703cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x357040: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x357040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x357044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x357044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x357048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35704c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x357050: 0xc0d5cd0  jal         func_357340
    ctx->pc = 0x357050u;
    SET_GPR_U32(ctx, 31, 0x357058u);
    ctx->pc = 0x357054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357050u;
    // 0x357054: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357340u, 0x357050u, 0x357058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357058u;
label_357058:
    // 0x357058: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x357058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x35705c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35705Cu;
    {
        const bool branch_taken_0x35705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35705Cu;
        // 0x357060: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35705c) {
            ctx->pc = 0x357090u;
            goto label_357090;
        }
    }
    ctx->pc = 0x357064u;
    // 0x357064: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x357064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_357068:
    // 0x357068: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x357068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35706c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35706cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x357070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x357070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x357074: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x357074u;
    SET_GPR_U32(ctx, 31, 0x35707Cu);
    ctx->pc = 0x357078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357074u;
    // 0x357078: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x357074u, 0x35707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35707Cu;
label_35707c:
    // 0x35707c: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x35707cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x357080: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x357080u;
    {
        const bool branch_taken_0x357080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357080) {
            ctx->pc = 0x357084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357080u;
            // 0x357084: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357068;
        }
    }
    ctx->pc = 0x357088u;
    // 0x357088: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x357088u;
    SET_GPR_U32(ctx, 31, 0x357090u);
    ctx->pc = 0x35708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357088u;
    // 0x35708c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x357088u, 0x357090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357090u;
label_357090:
    // 0x357090: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x357090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x357094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357094u;
    {
        const bool branch_taken_0x357094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357094u;
        // 0x357098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357094) {
            ctx->pc = 0x3570A8u;
            goto label_3570a8;
        }
    }
    ctx->pc = 0x35709Cu;
    // 0x35709c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35709Cu;
    SET_GPR_U32(ctx, 31, 0x3570A4u);
    ctx->pc = 0x3570A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35709Cu;
    // 0x3570a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35709Cu, 0x3570A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570A4u;
label_3570a4:
    // 0x3570a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3570a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3570a8:
    // 0x3570a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3570a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3570ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3570acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3570b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3570b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3570b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3570B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570B4u;
        // 0x3570b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570BCu;
    // 0x3570bc: 0x0  nop
    ctx->pc = 0x3570bcu;
    // NOP
    ctx->pc = 0x3570c0u;
}
