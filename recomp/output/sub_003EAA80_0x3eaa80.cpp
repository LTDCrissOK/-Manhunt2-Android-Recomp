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

// Function: sub_003EAA80
// Address: 0x3eaa80 - 0x3eabb8
void sub_003EAA80_0x3eaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAA80_0x3eaa80");
#endif

    switch (ctx->pc) {
        case 0x3eaa80u: goto label_3eaa80;
        case 0x3eaa84u: goto label_3eaa84;
        case 0x3eaa88u: goto label_3eaa88;
        case 0x3eaa8cu: goto label_3eaa8c;
        case 0x3eaa90u: goto label_3eaa90;
        case 0x3eaa94u: goto label_3eaa94;
        case 0x3eaa98u: goto label_3eaa98;
        case 0x3eaa9cu: goto label_3eaa9c;
        case 0x3eaaa0u: goto label_3eaaa0;
        case 0x3eaaa4u: goto label_3eaaa4;
        case 0x3eaaa8u: goto label_3eaaa8;
        case 0x3eaaacu: goto label_3eaaac;
        case 0x3eaab0u: goto label_3eaab0;
        case 0x3eaab4u: goto label_3eaab4;
        case 0x3eaab8u: goto label_3eaab8;
        case 0x3eaabcu: goto label_3eaabc;
        case 0x3eaac0u: goto label_3eaac0;
        case 0x3eaac4u: goto label_3eaac4;
        case 0x3eaac8u: goto label_3eaac8;
        case 0x3eaaccu: goto label_3eaacc;
        case 0x3eaad0u: goto label_3eaad0;
        case 0x3eaad4u: goto label_3eaad4;
        case 0x3eaad8u: goto label_3eaad8;
        case 0x3eaadcu: goto label_3eaadc;
        case 0x3eaae0u: goto label_3eaae0;
        case 0x3eaae4u: goto label_3eaae4;
        case 0x3eaae8u: goto label_3eaae8;
        case 0x3eaaecu: goto label_3eaaec;
        case 0x3eaaf0u: goto label_3eaaf0;
        case 0x3eaaf4u: goto label_3eaaf4;
        case 0x3eaaf8u: goto label_3eaaf8;
        case 0x3eaafcu: goto label_3eaafc;
        case 0x3eab00u: goto label_3eab00;
        case 0x3eab04u: goto label_3eab04;
        case 0x3eab08u: goto label_3eab08;
        case 0x3eab0cu: goto label_3eab0c;
        case 0x3eab10u: goto label_3eab10;
        case 0x3eab14u: goto label_3eab14;
        case 0x3eab18u: goto label_3eab18;
        case 0x3eab1cu: goto label_3eab1c;
        case 0x3eab20u: goto label_3eab20;
        case 0x3eab24u: goto label_3eab24;
        case 0x3eab28u: goto label_3eab28;
        case 0x3eab2cu: goto label_3eab2c;
        case 0x3eab30u: goto label_3eab30;
        case 0x3eab34u: goto label_3eab34;
        case 0x3eab38u: goto label_3eab38;
        case 0x3eab3cu: goto label_3eab3c;
        case 0x3eab40u: goto label_3eab40;
        case 0x3eab44u: goto label_3eab44;
        case 0x3eab48u: goto label_3eab48;
        case 0x3eab4cu: goto label_3eab4c;
        case 0x3eab50u: goto label_3eab50;
        case 0x3eab54u: goto label_3eab54;
        case 0x3eab58u: goto label_3eab58;
        case 0x3eab5cu: goto label_3eab5c;
        case 0x3eab60u: goto label_3eab60;
        case 0x3eab64u: goto label_3eab64;
        case 0x3eab68u: goto label_3eab68;
        case 0x3eab6cu: goto label_3eab6c;
        case 0x3eab70u: goto label_3eab70;
        case 0x3eab74u: goto label_3eab74;
        case 0x3eab78u: goto label_3eab78;
        case 0x3eab7cu: goto label_3eab7c;
        case 0x3eab80u: goto label_3eab80;
        case 0x3eab84u: goto label_3eab84;
        case 0x3eab88u: goto label_3eab88;
        case 0x3eab8cu: goto label_3eab8c;
        case 0x3eab90u: goto label_3eab90;
        case 0x3eab94u: goto label_3eab94;
        case 0x3eab98u: goto label_3eab98;
        case 0x3eab9cu: goto label_3eab9c;
        case 0x3eaba0u: goto label_3eaba0;
        case 0x3eaba4u: goto label_3eaba4;
        case 0x3eaba8u: goto label_3eaba8;
        case 0x3eabacu: goto label_3eabac;
        case 0x3eabb0u: goto label_3eabb0;
        case 0x3eabb4u: goto label_3eabb4;
        default: break;
    }

    ctx->pc = 0x3eaa80u;

label_3eaa80:
    // 0x3eaa80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eaa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eaa84:
    // 0x3eaa84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eaa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eaa88:
    // 0x3eaa88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eaa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eaa8c:
    // 0x3eaa8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eaa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eaa90:
    // 0x3eaa90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eaa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eaa94:
    // 0x3eaa94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eaa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eaa98:
    // 0x3eaa98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eaa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaa9c:
    // 0x3eaa9c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eaaa0:
    if (ctx->pc == 0x3EAAA0u) {
        ctx->pc = 0x3EAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA9Cu;
        // 0x3eaaa0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAA4u;
        goto label_3eaaa4;
    }
    ctx->pc = 0x3EAA9Cu;
    {
        const bool branch_taken_0x3eaa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA9Cu;
        // 0x3eaaa0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa9c) {
            ctx->pc = 0x3EAB1Cu;
            goto label_3eab1c;
        }
    }
    ctx->pc = 0x3EAAA4u;
label_3eaaa4:
    // 0x3eaaa4: 0x0  nop
    ctx->pc = 0x3eaaa4u;
    // NOP
label_3eaaa8:
    // 0x3eaaa8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eaaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaaac:
    // 0x3eaaac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaab0:
    // 0x3eaab0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eaab4:
    if (ctx->pc == 0x3EAAB4u) {
        ctx->pc = 0x3EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAB0u;
        // 0x3eaab4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAB8u;
        goto label_3eaab8;
    }
    ctx->pc = 0x3EAAB0u;
    {
        const bool branch_taken_0x3eaab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaab0) {
            ctx->pc = 0x3EAAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAAB0u;
            // 0x3eaab4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAB0Cu;
            goto label_3eab0c;
        }
    }
    ctx->pc = 0x3EAAB8u;
label_3eaab8:
    // 0x3eaab8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eaabc:
    // 0x3eaabc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eaabcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eaac0:
    // 0x3eaac0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eaac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eaac4:
    // 0x3eaac4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eaac8:
    if (ctx->pc == 0x3EAAC8u) {
        ctx->pc = 0x3EAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAC4u;
        // 0x3eaac8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAACCu;
        goto label_3eaacc;
    }
    ctx->pc = 0x3EAAC4u;
    {
        const bool branch_taken_0x3eaac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eaac4) {
            ctx->pc = 0x3EAAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAAC4u;
            // 0x3eaac8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAAF8u;
            goto label_3eaaf8;
        }
    }
    ctx->pc = 0x3EAACCu;
label_3eaacc:
    // 0x3eaacc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eaaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eaad0:
    // 0x3eaad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eaad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eaad4:
    // 0x3eaad4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaad8:
    // 0x3eaad8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eaadc:
    // 0x3eaadc: 0x40f809  jalr        $v0
label_3eaae0:
    if (ctx->pc == 0x3EAAE0u) {
        ctx->pc = 0x3EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAADCu;
        // 0x3eaae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAE4u;
        goto label_3eaae4;
    }
    ctx->pc = 0x3EAADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAAE4u);
        ctx->pc = 0x3EAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAADCu;
        // 0x3eaae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAADCu, 0x3EAAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAAE4u;
label_3eaae4:
    // 0x3eaae4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eaae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaae8:
    // 0x3eaae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eaae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eaaec:
    // 0x3eaaec: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eaaf0:
    if (ctx->pc == 0x3EAAF0u) {
        ctx->pc = 0x3EAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAECu;
        // 0x3eaaf0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAF4u;
        goto label_3eaaf4;
    }
    ctx->pc = 0x3EAAECu;
    {
        const bool branch_taken_0x3eaaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAECu;
        // 0x3eaaf0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaaec) {
            ctx->pc = 0x3EAAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaad0;
        }
    }
    ctx->pc = 0x3EAAF4u;
label_3eaaf4:
    // 0x3eaaf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eaaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eaaf8:
    // 0x3eaaf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eaafc:
    // 0x3eaafc: 0xc0f528a  jal         func_3D4A28
label_3eab00:
    if (ctx->pc == 0x3EAB00u) {
        ctx->pc = 0x3EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAFCu;
        // 0x3eab00: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB04u;
        goto label_3eab04;
    }
    ctx->pc = 0x3EAAFCu;
    SET_GPR_U32(ctx, 31, 0x3EAB04u);
    ctx->pc = 0x3EAB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAAFCu;
    // 0x3eab00: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAAFCu, 0x3EAB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAB04u;
label_3eab04:
    // 0x3eab04: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eab08:
    // 0x3eab08: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eab08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eab0c:
    // 0x3eab0c: 0xc0f5222  jal         func_3D4888
label_3eab10:
    if (ctx->pc == 0x3EAB10u) {
        ctx->pc = 0x3EAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB0Cu;
        // 0x3eab10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB14u;
        goto label_3eab14;
    }
    ctx->pc = 0x3EAB0Cu;
    SET_GPR_U32(ctx, 31, 0x3EAB14u);
    ctx->pc = 0x3EAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAB0Cu;
    // 0x3eab10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAB0Cu, 0x3EAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAB14u;
label_3eab14:
    // 0x3eab14: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eab18:
    if (ctx->pc == 0x3EAB18u) {
        ctx->pc = 0x3EAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB14u;
        // 0x3eab18: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB1Cu;
        goto label_3eab1c;
    }
    ctx->pc = 0x3EAB14u;
    {
        const bool branch_taken_0x3eab14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB14u;
        // 0x3eab18: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab14) {
            ctx->pc = 0x3EAAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eaaa8;
        }
    }
    ctx->pc = 0x3EAB1Cu;
label_3eab1c:
    // 0x3eab1c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eab20:
    // 0x3eab20: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eab24:
    if (ctx->pc == 0x3EAB24u) {
        ctx->pc = 0x3EAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB20u;
        // 0x3eab24: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB28u;
        goto label_3eab28;
    }
    ctx->pc = 0x3EAB20u;
    {
        const bool branch_taken_0x3eab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB20u;
        // 0x3eab24: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab20) {
            ctx->pc = 0x3EAB9Cu;
            goto label_3eab9c;
        }
    }
    ctx->pc = 0x3EAB28u;
label_3eab28:
    // 0x3eab28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eab2c:
    // 0x3eab2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eab30:
    // 0x3eab30: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eab34:
    if (ctx->pc == 0x3EAB34u) {
        ctx->pc = 0x3EAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB30u;
        // 0x3eab34: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB38u;
        goto label_3eab38;
    }
    ctx->pc = 0x3EAB30u;
    {
        const bool branch_taken_0x3eab30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eab30) {
            ctx->pc = 0x3EAB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAB30u;
            // 0x3eab34: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAB8Cu;
            goto label_3eab8c;
        }
    }
    ctx->pc = 0x3EAB38u;
label_3eab38:
    // 0x3eab38: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eab3c:
    // 0x3eab3c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eab3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eab40:
    // 0x3eab40: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eab40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eab44:
    // 0x3eab44: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eab48:
    if (ctx->pc == 0x3EAB48u) {
        ctx->pc = 0x3EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB44u;
        // 0x3eab48: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB4Cu;
        goto label_3eab4c;
    }
    ctx->pc = 0x3EAB44u;
    {
        const bool branch_taken_0x3eab44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eab44) {
            ctx->pc = 0x3EAB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAB44u;
            // 0x3eab48: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAB78u;
            goto label_3eab78;
        }
    }
    ctx->pc = 0x3EAB4Cu;
label_3eab4c:
    // 0x3eab4c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eab50:
    // 0x3eab50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eab54:
    // 0x3eab54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eab58:
    // 0x3eab58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eab5c:
    // 0x3eab5c: 0x40f809  jalr        $v0
label_3eab60:
    if (ctx->pc == 0x3EAB60u) {
        ctx->pc = 0x3EAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB5Cu;
        // 0x3eab60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB64u;
        goto label_3eab64;
    }
    ctx->pc = 0x3EAB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAB64u);
        ctx->pc = 0x3EAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB5Cu;
        // 0x3eab60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB5Cu, 0x3EAB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAB64u;
label_3eab64:
    // 0x3eab64: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eab68:
    // 0x3eab68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eab6c:
    // 0x3eab6c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eab70:
    if (ctx->pc == 0x3EAB70u) {
        ctx->pc = 0x3EAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB6Cu;
        // 0x3eab70: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB74u;
        goto label_3eab74;
    }
    ctx->pc = 0x3EAB6Cu;
    {
        const bool branch_taken_0x3eab6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB6Cu;
        // 0x3eab70: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab6c) {
            ctx->pc = 0x3EAB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eab50;
        }
    }
    ctx->pc = 0x3EAB74u;
label_3eab74:
    // 0x3eab74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eab78:
    // 0x3eab78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eab7c:
    // 0x3eab7c: 0xc0f528a  jal         func_3D4A28
label_3eab80:
    if (ctx->pc == 0x3EAB80u) {
        ctx->pc = 0x3EAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB7Cu;
        // 0x3eab80: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB84u;
        goto label_3eab84;
    }
    ctx->pc = 0x3EAB7Cu;
    SET_GPR_U32(ctx, 31, 0x3EAB84u);
    ctx->pc = 0x3EAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAB7Cu;
    // 0x3eab80: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EAB7Cu, 0x3EAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAB84u;
label_3eab84:
    // 0x3eab84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eab88:
    // 0x3eab88: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eab88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eab8c:
    // 0x3eab8c: 0xc0f5222  jal         func_3D4888
label_3eab90:
    if (ctx->pc == 0x3EAB90u) {
        ctx->pc = 0x3EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB8Cu;
        // 0x3eab90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB94u;
        goto label_3eab94;
    }
    ctx->pc = 0x3EAB8Cu;
    SET_GPR_U32(ctx, 31, 0x3EAB94u);
    ctx->pc = 0x3EAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAB8Cu;
    // 0x3eab90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EAB8Cu, 0x3EAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAB94u;
label_3eab94:
    // 0x3eab94: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eab98:
    if (ctx->pc == 0x3EAB98u) {
        ctx->pc = 0x3EAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB94u;
        // 0x3eab98: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB9Cu;
        goto label_3eab9c;
    }
    ctx->pc = 0x3EAB94u;
    {
        const bool branch_taken_0x3eab94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB94u;
        // 0x3eab98: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab94) {
            ctx->pc = 0x3EAB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eab28;
        }
    }
    ctx->pc = 0x3EAB9Cu;
label_3eab9c:
    // 0x3eab9c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eaba0:
    // 0x3eaba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eaba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaba4:
    // 0x3eaba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eaba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eaba8:
    // 0x3eaba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eaba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eabac:
    // 0x3eabac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eabacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eabb0:
    // 0x3eabb0: 0x3e00008  jr          $ra
label_3eabb4:
    if (ctx->pc == 0x3EABB4u) {
        ctx->pc = 0x3EABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABB0u;
        // 0x3eabb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABB8u;
        goto label_fallthrough_0x3eabb0;
    }
    ctx->pc = 0x3EABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABB0u;
        // 0x3eabb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eabb0:
    ctx->pc = 0x3EABB8u;
}
