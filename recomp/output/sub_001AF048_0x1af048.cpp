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

// Function: sub_001AF048
// Address: 0x1af048 - 0x1af100
void sub_001AF048_0x1af048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF048_0x1af048");
#endif

    switch (ctx->pc) {
        case 0x1af068u: goto label_1af068;
        case 0x1af0d0u: goto label_1af0d0;
        case 0x1af0e8u: goto label_1af0e8;
        default: break;
    }

    ctx->pc = 0x1af048u;

    // 0x1af048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af05c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af060: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AF060u;
    SET_GPR_U32(ctx, 31, 0x1AF068u);
    ctx->pc = 0x1AF064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF060u;
    // 0x1af064: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AF060u, 0x1AF068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF068u;
label_1af068:
    // 0x1af068: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1af068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af06c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af070: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF070u;
    {
        const bool branch_taken_0x1af070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF070u;
        // 0x1af074: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af070) {
            ctx->pc = 0x1AF0A4u;
            goto label_1af0a4;
        }
    }
    ctx->pc = 0x1AF078u;
    // 0x1af078: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1af07c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF07Cu;
    {
        const bool branch_taken_0x1af07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF07Cu;
        // 0x1af080: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af07c) {
            ctx->pc = 0x1AF0A4u;
            goto label_1af0a4;
        }
    }
    ctx->pc = 0x1AF084u;
    // 0x1af084: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF084u;
    {
        const bool branch_taken_0x1af084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF084u;
        // 0x1af088: 0x2402010e  addiu       $v0, $zero, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af084) {
            ctx->pc = 0x1AF094u;
            goto label_1af094;
        }
    }
    ctx->pc = 0x1AF08Cu;
    // 0x1af08c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF08Cu;
    {
        const bool branch_taken_0x1af08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF08Cu;
        // 0x1af090: 0x24100100  addiu       $s0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af08c) {
            ctx->pc = 0x1AF0A0u;
            goto label_1af0a0;
        }
    }
    ctx->pc = 0x1AF094u;
label_1af094:
    // 0x1af094: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF094u;
    {
        const bool branch_taken_0x1af094 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF094u;
        // 0x1af098: 0x2402010c  addiu       $v0, $zero, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af094) {
            ctx->pc = 0x1AF0A4u;
            goto label_1af0a4;
        }
    }
    ctx->pc = 0x1AF09Cu;
    // 0x1af09c: 0x241000fe  addiu       $s0, $zero, 0xFE
    ctx->pc = 0x1af09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1af0a0:
    // 0x1af0a0: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1af0a0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1af0a4:
    // 0x1af0a4: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1af0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af0a8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF0A8u;
    {
        const bool branch_taken_0x1af0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0A8u;
        // 0x1af0ac: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0a8) {
            ctx->pc = 0x1AF0C4u;
            goto label_1af0c4;
        }
    }
    ctx->pc = 0x1AF0B0u;
    // 0x1af0b0: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1af0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1af0b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af0b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af0bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF0BCu;
    {
        const bool branch_taken_0x1af0bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0BCu;
        // 0x1af0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0bc) {
            ctx->pc = 0x1AF0D8u;
            goto label_1af0d8;
        }
    }
    ctx->pc = 0x1AF0C4u;
label_1af0c4:
    // 0x1af0c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0c8: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF0C8u;
    SET_GPR_U32(ctx, 31, 0x1AF0D0u);
    ctx->pc = 0x1AF0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0C8u;
    // 0x1af0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF0C8u, 0x1AF0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0D0u;
label_1af0d0:
    // 0x1af0d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF0D0u;
    {
        const bool branch_taken_0x1af0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0D0u;
        // 0x1af0d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af0d0) {
            ctx->pc = 0x1AF0ECu;
            goto label_1af0ec;
        }
    }
    ctx->pc = 0x1AF0D8u;
label_1af0d8:
    // 0x1af0d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1af0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af0dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af0e0: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF0E0u;
    SET_GPR_U32(ctx, 31, 0x1AF0E8u);
    ctx->pc = 0x1AF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0E0u;
    // 0x1af0e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF0E0u, 0x1AF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0E8u;
label_1af0e8:
    // 0x1af0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af0ec:
    // 0x1af0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF0F8u;
        // 0x1af0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF100u;
}
