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

// Function: sub_001F1F78
// Address: 0x1f1f78 - 0x1f2058
void sub_001F1F78_0x1f1f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1F78_0x1f1f78");
#endif

    switch (ctx->pc) {
        case 0x1f1fa8u: goto label_1f1fa8;
        case 0x1f1fbcu: goto label_1f1fbc;
        case 0x1f1fc4u: goto label_1f1fc4;
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f1ff0u: goto label_1f1ff0;
        case 0x1f2000u: goto label_1f2000;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2018u: goto label_1f2018;
        default: break;
    }

    ctx->pc = 0x1f1f78u;

    // 0x1f1f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1f7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f1f80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f1f84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f1f84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f1f8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f1f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f1f94: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1F1F94u;
    {
        const bool branch_taken_0x1f1f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F94u;
        // 0x1f1f98: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f94) {
            ctx->pc = 0x1F2034u;
            goto label_1f2034;
        }
    }
    ctx->pc = 0x1F1F9Cu;
    // 0x1f1f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fa0: 0xc08fcf0  jal         func_23F3C0
    ctx->pc = 0x1F1FA0u;
    SET_GPR_U32(ctx, 31, 0x1F1FA8u);
    ctx->pc = 0x1F1FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FA0u;
    // 0x1f1fa4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F1FA0u, 0x1F1FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FA8u;
label_1f1fa8:
    // 0x1f1fa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fac: 0x16130018  bne         $s0, $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F1FACu;
    {
        const bool branch_taken_0x1f1fac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f1fac) {
            ctx->pc = 0x1F2010u;
            goto label_1f2010;
        }
    }
    ctx->pc = 0x1F1FB4u;
    // 0x1f1fb4: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F1FB4u;
    SET_GPR_U32(ctx, 31, 0x1F1FBCu);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F1FB4u, 0x1F1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FBCu;
label_1f1fbc:
    // 0x1f1fbc: 0xc081e74  jal         func_2079D0
    ctx->pc = 0x1F1FBCu;
    SET_GPR_U32(ctx, 31, 0x1F1FC4u);
    ctx->pc = 0x1F1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FBCu;
    // 0x1f1fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2079D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2079D0u, 0x1F1FBCu, 0x1F1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FC4u;
label_1f1fc4:
    // 0x1f1fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc8: 0x1613000f  bne         $s0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1FC8u;
    {
        const bool branch_taken_0x1f1fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1F1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FC8u;
        // 0x1f1fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fc8) {
            ctx->pc = 0x1F2008u;
            goto label_1f2008;
        }
    }
    ctx->pc = 0x1F1FD0u;
    // 0x1f1fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd4: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x1f1fd8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F1FD8u;
    SET_GPR_U32(ctx, 31, 0x1F1FE0u);
    ctx->pc = 0x1F1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FD8u;
    // 0x1f1fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1FD8u, 0x1F1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fe4: 0x262502c4  addiu       $a1, $s1, 0x2C4
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
    // 0x1f1fe8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F1FE8u;
    SET_GPR_U32(ctx, 31, 0x1F1FF0u);
    ctx->pc = 0x1F1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FE8u;
    // 0x1f1fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1FE8u, 0x1F1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FF0u;
label_1f1ff0:
    // 0x1f1ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ff4: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
    // 0x1f1ff8: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F1FF8u;
    SET_GPR_U32(ctx, 31, 0x1F2000u);
    ctx->pc = 0x1F1FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1FF8u;
    // 0x1f1ffc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1FF8u, 0x1F2000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2000u;
label_1f2000:
    // 0x1f2000: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F2000u;
    {
        const bool branch_taken_0x1f2000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2000u;
        // 0x1f2004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2000) {
            ctx->pc = 0x1F2038u;
            goto label_1f2038;
        }
    }
    ctx->pc = 0x1F2008u;
label_1f2008:
    // 0x1f2008: 0xc08fcf2  jal         func_23F3C8
    ctx->pc = 0x1F2008u;
    SET_GPR_U32(ctx, 31, 0x1F2010u);
    ctx->pc = 0x1F200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2008u;
    // 0x1f200c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F2008u, 0x1F2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2010u;
label_1f2010:
    // 0x1f2010: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F2010u;
    SET_GPR_U32(ctx, 31, 0x1F2018u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F2010u, 0x1F2018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2018u;
label_1f2018:
    // 0x1f2018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f2018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f201c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2020: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2020u;
    {
        const bool branch_taken_0x1f2020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2020u;
        // 0x1f2024: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2020) {
            ctx->pc = 0x1F2034u;
            goto label_1f2034;
        }
    }
    ctx->pc = 0x1F2028u;
    // 0x1f2028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f202c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F202Cu;
    {
        const bool branch_taken_0x1f202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F202Cu;
        // 0x1f2030: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f202c) {
            ctx->pc = 0x1F2038u;
            goto label_1f2038;
        }
    }
    ctx->pc = 0x1F2034u;
label_1f2034:
    // 0x1f2034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2038:
    // 0x1f2038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f2038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f203c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f203cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f2040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f2040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f2044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f2048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f204c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F204Cu;
        // 0x1f2050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2054u;
    // 0x1f2054: 0x0  nop
    ctx->pc = 0x1f2054u;
    // NOP
    ctx->pc = 0x1f2058u;
}
