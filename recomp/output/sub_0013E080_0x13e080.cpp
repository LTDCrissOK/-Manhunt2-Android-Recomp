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

// Function: sub_0013E080
// Address: 0x13e080 - 0x13e110
void sub_0013E080_0x13e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E080_0x13e080");
#endif

    switch (ctx->pc) {
        case 0x13e080u: goto label_13e080;
        case 0x13e084u: goto label_13e084;
        case 0x13e088u: goto label_13e088;
        case 0x13e08cu: goto label_13e08c;
        case 0x13e090u: goto label_13e090;
        case 0x13e094u: goto label_13e094;
        case 0x13e098u: goto label_13e098;
        case 0x13e09cu: goto label_13e09c;
        case 0x13e0a0u: goto label_13e0a0;
        case 0x13e0a4u: goto label_13e0a4;
        case 0x13e0a8u: goto label_13e0a8;
        case 0x13e0acu: goto label_13e0ac;
        case 0x13e0b0u: goto label_13e0b0;
        case 0x13e0b4u: goto label_13e0b4;
        case 0x13e0b8u: goto label_13e0b8;
        case 0x13e0bcu: goto label_13e0bc;
        case 0x13e0c0u: goto label_13e0c0;
        case 0x13e0c4u: goto label_13e0c4;
        case 0x13e0c8u: goto label_13e0c8;
        case 0x13e0ccu: goto label_13e0cc;
        case 0x13e0d0u: goto label_13e0d0;
        case 0x13e0d4u: goto label_13e0d4;
        case 0x13e0d8u: goto label_13e0d8;
        case 0x13e0dcu: goto label_13e0dc;
        case 0x13e0e0u: goto label_13e0e0;
        case 0x13e0e4u: goto label_13e0e4;
        case 0x13e0e8u: goto label_13e0e8;
        case 0x13e0ecu: goto label_13e0ec;
        case 0x13e0f0u: goto label_13e0f0;
        case 0x13e0f4u: goto label_13e0f4;
        case 0x13e0f8u: goto label_13e0f8;
        case 0x13e0fcu: goto label_13e0fc;
        case 0x13e100u: goto label_13e100;
        case 0x13e104u: goto label_13e104;
        case 0x13e108u: goto label_13e108;
        case 0x13e10cu: goto label_13e10c;
        default: break;
    }

    ctx->pc = 0x13e080u;

label_13e080:
    // 0x13e080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13e084:
    // 0x13e084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13e088:
    // 0x13e088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13e08c:
    // 0x13e08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13e090:
    // 0x13e090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13e094:
    // 0x13e094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e098:
    // 0x13e098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13e098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13e09c:
    // 0x13e09c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13e09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e0a0:
    // 0x13e0a0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x13e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_13e0a4:
    // 0x13e0a4: 0x0  nop
    ctx->pc = 0x13e0a4u;
    // NOP
label_13e0a8:
    // 0x13e0a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e0ac:
    // 0x13e0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e0b0:
    // 0x13e0b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_13e0b4:
    // 0x13e0b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13e0b8:
    // 0x13e0b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13e0bc:
    if (ctx->pc == 0x13E0BCu) {
        ctx->pc = 0x13E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0B8u;
        // 0x13e0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0C0u;
        goto label_13e0c0;
    }
    ctx->pc = 0x13E0B8u;
    {
        const bool branch_taken_0x13e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0B8u;
        // 0x13e0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0b8) {
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0C0u;
label_13e0c0:
    // 0x13e0c0: 0xc04f8e6  jal         func_13E398
label_13e0c4:
    if (ctx->pc == 0x13E0C4u) {
        ctx->pc = 0x13E0C8u;
        goto label_13e0c8;
    }
    ctx->pc = 0x13E0C0u;
    SET_GPR_U32(ctx, 31, 0x13E0C8u);
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x13E0C0u, 0x13E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E0C8u;
label_13e0c8:
    // 0x13e0c8: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_13e0cc:
    if (ctx->pc == 0x13E0CCu) {
        ctx->pc = 0x13E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0C8u;
        // 0x13e0cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0D0u;
        goto label_13e0d0;
    }
    ctx->pc = 0x13E0C8u;
    {
        const bool branch_taken_0x13e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x13E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0C8u;
        // 0x13e0cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0c8) {
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0D0u;
label_13e0d0:
    // 0x13e0d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e0d4:
    // 0x13e0d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13e0d8:
    // 0x13e0d8: 0x40f809  jalr        $v0
label_13e0dc:
    if (ctx->pc == 0x13E0DCu) {
        ctx->pc = 0x13E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0D8u;
        // 0x13e0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0E0u;
        goto label_13e0e0;
    }
    ctx->pc = 0x13E0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13E0E0u);
        ctx->pc = 0x13E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0D8u;
        // 0x13e0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E0D8u, 0x13E0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E0E0u;
label_13e0e0:
    // 0x13e0e0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13e0e4:
    // 0x13e0e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13e0e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e0e8:
    // 0x13e0e8: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x13e0e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_13e0ec:
    // 0x13e0ec: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_13e0f0:
    if (ctx->pc == 0x13E0F0u) {
        ctx->pc = 0x13E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E0ECu;
        // 0x13e0f0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E0F4u;
        goto label_13e0f4;
    }
    ctx->pc = 0x13E0ECu;
    {
        const bool branch_taken_0x13e0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e0ec) {
            ctx->pc = 0x13E0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E0ECu;
            // 0x13e0f0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e0a8;
        }
    }
    ctx->pc = 0x13E0F4u;
label_13e0f4:
    // 0x13e0f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e0f8:
    // 0x13e0f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e0fc:
    // 0x13e0fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13e0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e100:
    // 0x13e100: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13e104:
    // 0x13e104: 0x3e00008  jr          $ra
label_13e108:
    if (ctx->pc == 0x13E108u) {
        ctx->pc = 0x13E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E104u;
        // 0x13e108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E10Cu;
        goto label_13e10c;
    }
    ctx->pc = 0x13E104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E104u;
        // 0x13e108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E10Cu;
label_13e10c:
    // 0x13e10c: 0x0  nop
    ctx->pc = 0x13e10cu;
    // NOP
    ctx->pc = 0x13e110u;
}
