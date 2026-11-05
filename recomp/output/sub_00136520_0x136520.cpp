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

// Function: sub_00136520
// Address: 0x136520 - 0x1365b8
void sub_00136520_0x136520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136520_0x136520");
#endif

    switch (ctx->pc) {
        case 0x136560u: goto label_136560;
        case 0x136570u: goto label_136570;
        case 0x13657cu: goto label_13657c;
        default: break;
    }

    ctx->pc = 0x136520u;

    // 0x136520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136524: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x136524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x136528: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13652c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136530: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x136530u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x136534: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136538: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13653c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13653cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136540: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x136540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x136544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136548: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x136548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13654c: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13654cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x136550: 0x2472b530  addiu       $s2, $v1, -0x4AD0
    ctx->pc = 0x136550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948144));
    // 0x136554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x136554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136558: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x136558u;
    SET_GPR_U32(ctx, 31, 0x136560u);
    ctx->pc = 0x13655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136558u;
    // 0x13655c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x136558u, 0x136560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136560u;
label_136560:
    // 0x136560: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136560u;
    {
        const bool branch_taken_0x136560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136560u;
        // 0x136564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136560) {
            ctx->pc = 0x136584u;
            goto label_136584;
        }
    }
    ctx->pc = 0x136568u;
    // 0x136568: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x136568u;
    SET_GPR_U32(ctx, 31, 0x136570u);
    ctx->pc = 0x13656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136568u;
    // 0x13656c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x136568u, 0x136570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136570u;
label_136570:
    // 0x136570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136574: 0xc04d93c  jal         func_1364F0
    ctx->pc = 0x136574u;
    SET_GPR_U32(ctx, 31, 0x13657Cu);
    ctx->pc = 0x136578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136574u;
    // 0x136578: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364F0u, 0x136574u, 0x13657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13657Cu;
label_13657c:
    // 0x13657c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13657Cu;
    {
        const bool branch_taken_0x13657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13657Cu;
        // 0x136580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13657c) {
            ctx->pc = 0x136588u;
            goto label_136588;
        }
    }
    ctx->pc = 0x136584u;
label_136584:
    // 0x136584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136588:
    // 0x136588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13658c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13658cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13659c: 0x3e00008  jr          $ra
    ctx->pc = 0x13659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13659Cu;
        // 0x1365a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1365A4u;
    // 0x1365a4: 0x0  nop
    ctx->pc = 0x1365a4u;
    // NOP
    // 0x1365a8: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x1365a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x1365ac: 0x0  nop
    ctx->pc = 0x1365acu;
    // NOP
    // 0x1365b0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1365b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1365b4: 0x0  nop
    ctx->pc = 0x1365b4u;
    // NOP
    ctx->pc = 0x1365b8u;
}
