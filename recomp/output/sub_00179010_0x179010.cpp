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

// Function: sub_00179010
// Address: 0x179010 - 0x1790c8
void sub_00179010_0x179010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179010_0x179010");
#endif

    switch (ctx->pc) {
        case 0x179030u: goto label_179030;
        case 0x179048u: goto label_179048;
        case 0x17906cu: goto label_17906c;
        case 0x17909cu: goto label_17909c;
        case 0x1790acu: goto label_1790ac;
        default: break;
    }

    ctx->pc = 0x179010u;

    // 0x179010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17901c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17901cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179024: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x179024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x179028: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x179028u;
    SET_GPR_U32(ctx, 31, 0x179030u);
    ctx->pc = 0x17902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179028u;
    // 0x17902c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x179028u, 0x179030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179030u;
label_179030:
    // 0x179030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179034: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x179034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x179038: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x179038u;
    {
        const bool branch_taken_0x179038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179038u;
        // 0x17903c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179038) {
            ctx->pc = 0x1790ACu;
            goto label_1790ac;
        }
    }
    ctx->pc = 0x179040u;
    // 0x179040: 0xc05eaee  jal         func_17ABB8
    ctx->pc = 0x179040u;
    SET_GPR_U32(ctx, 31, 0x179048u);
    ctx->pc = 0x179044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179040u;
    // 0x179044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABB8u, 0x179040u, 0x179048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179048u;
label_179048:
    // 0x179048: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x179048u;
    {
        const bool branch_taken_0x179048 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179048u;
        // 0x17904c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179048) {
            ctx->pc = 0x179074u;
            goto label_179074;
        }
    }
    ctx->pc = 0x179050u;
    // 0x179050: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x179050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179054: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x179054u;
    {
        const bool branch_taken_0x179054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x179054) {
            ctx->pc = 0x179058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179054u;
            // 0x179058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790B0u;
            goto label_1790b0;
        }
    }
    ctx->pc = 0x17905Cu;
    // 0x17905c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179064: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x179064u;
    SET_GPR_U32(ctx, 31, 0x17906Cu);
    ctx->pc = 0x179068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179064u;
    // 0x179068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABA0u, 0x179064u, 0x17906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17906Cu;
label_17906c:
    // 0x17906c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17906Cu;
    {
        const bool branch_taken_0x17906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17906Cu;
        // 0x179070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17906c) {
            ctx->pc = 0x1790B0u;
            goto label_1790b0;
        }
    }
    ctx->pc = 0x179074u;
label_179074:
    // 0x179074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179078: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x179078u;
    {
        const bool branch_taken_0x179078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x179078) {
            ctx->pc = 0x17907Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179078u;
            // 0x17907c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1790B0u;
            goto label_1790b0;
        }
    }
    ctx->pc = 0x179080u;
    // 0x179080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179080u;
    {
        const bool branch_taken_0x179080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179080u;
        // 0x179084: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179080) {
            ctx->pc = 0x179090u;
            goto label_179090;
        }
    }
    ctx->pc = 0x179088u;
    // 0x179088: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179088u;
    {
        const bool branch_taken_0x179088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179088u;
        // 0x17908c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179088) {
            ctx->pc = 0x1790A0u;
            goto label_1790a0;
        }
    }
    ctx->pc = 0x179090u;
label_179090:
    // 0x179090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179094: 0xc05eb56  jal         func_17AD58
    ctx->pc = 0x179094u;
    SET_GPR_U32(ctx, 31, 0x17909Cu);
    ctx->pc = 0x179098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179094u;
    // 0x179098: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD58u, 0x179094u, 0x17909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17909Cu;
label_17909c:
    // 0x17909c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1790a0:
    // 0x1790a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1790a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1790a4: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x1790A4u;
    SET_GPR_U32(ctx, 31, 0x1790ACu);
    ctx->pc = 0x1790A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1790A4u;
    // 0x1790a8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABA0u, 0x1790A4u, 0x1790ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1790ACu;
label_1790ac:
    // 0x1790ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1790acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1790b0:
    // 0x1790b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1790b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1790b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1790b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1790b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1790b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1790bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1790BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790BCu;
        // 0x1790c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1790C4u;
    // 0x1790c4: 0x0  nop
    ctx->pc = 0x1790c4u;
    // NOP
    ctx->pc = 0x1790c8u;
}
