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

// Function: sub_002EFA88
// Address: 0x2efa88 - 0x2efca8
void sub_002EFA88_0x2efa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFA88_0x2efa88");
#endif

    switch (ctx->pc) {
        case 0x2efab4u: goto label_2efab4;
        case 0x2efafcu: goto label_2efafc;
        case 0x2efb24u: goto label_2efb24;
        case 0x2efb3cu: goto label_2efb3c;
        case 0x2efb64u: goto label_2efb64;
        case 0x2efb7cu: goto label_2efb7c;
        case 0x2efba4u: goto label_2efba4;
        case 0x2efbbcu: goto label_2efbbc;
        case 0x2efc18u: goto label_2efc18;
        case 0x2efc30u: goto label_2efc30;
        case 0x2efc44u: goto label_2efc44;
        case 0x2efc6cu: goto label_2efc6c;
        case 0x2efc84u: goto label_2efc84;
        default: break;
    }

    ctx->pc = 0x2efa88u;

    // 0x2efa88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2efa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2efa8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2efa90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2efa90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efa94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efa98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2efa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2efa9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2efa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efaa0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2efaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2efaa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2efaa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efaa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2efaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2efaac: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2EFAACu;
    SET_GPR_U32(ctx, 31, 0x2EFAB4u);
    ctx->pc = 0x2EFAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAACu;
    // 0x2efab0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2EFAACu, 0x2EFAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAB4u;
label_2efab4:
    // 0x2efab4: 0x2443ff98  addiu       $v1, $v0, -0x68
    ctx->pc = 0x2efab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967192));
    // 0x2efab8: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x2efab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2efabc: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2EFABCu;
    {
        const bool branch_taken_0x2efabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFABCu;
        // 0x2efac0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efabc) {
            ctx->pc = 0x2EFC1Cu;
            goto label_2efc1c;
        }
    }
    ctx->pc = 0x2EFAC4u;
    // 0x2efac4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2efac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2efac8: 0x24421a10  addiu       $v0, $v0, 0x1A10
    ctx->pc = 0x2efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6672));
    // 0x2efacc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2efaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2efad0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2efad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2efad4: 0x800008  jr          $a0
    ctx->pc = 0x2EFAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EFADCu: goto label_2efadc;
            case 0x2EFAECu: goto label_2efaec;
            case 0x2EFB14u: goto label_2efb14;
            case 0x2EFB54u: goto label_2efb54;
            case 0x2EFB94u: goto label_2efb94;
            case 0x2EFBD4u: goto label_2efbd4;
            case 0x2EFBE4u: goto label_2efbe4;
            case 0x2EFBF4u: goto label_2efbf4;
            case 0x2EFC04u: goto label_2efc04;
            case 0x2EFC1Cu: goto label_2efc1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFAD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EFADCu;
label_2efadc:
    // 0x2efadc: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efae0: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x2efae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2efae4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2EFAE4u;
    {
        const bool branch_taken_0x2efae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFAE4u;
        // 0x2efae8: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efae4) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFAECu;
label_2efaec:
    // 0x2efaec: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efaf0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2efaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2efaf4: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFAF4u;
    SET_GPR_U32(ctx, 31, 0x2EFAFCu);
    ctx->pc = 0x2EFAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFAF4u;
    // 0x2efaf8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFAF4u, 0x2EFAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFAFCu;
label_2efafc:
    // 0x2efafc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb00: 0x56000049  bnel        $s0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x2EFB00u;
    {
        const bool branch_taken_0x2efb00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efb00) {
            ctx->pc = 0x2EFB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB00u;
            // 0x2efb04: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFB08u;
    // 0x2efb08: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb0c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2EFB0Cu;
    {
        const bool branch_taken_0x2efb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB0Cu;
        // 0x2efb10: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb0c) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFB14u;
label_2efb14:
    // 0x2efb14: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb18: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2efb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2efb1c: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB24u);
    ctx->pc = 0x2EFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB1Cu;
    // 0x2efb20: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFB1Cu, 0x2EFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB24u;
label_2efb24:
    // 0x2efb24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb28: 0x5600003f  bnel        $s0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2EFB28u;
    {
        const bool branch_taken_0x2efb28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efb28) {
            ctx->pc = 0x2EFB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB28u;
            // 0x2efb2c: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFB30u;
    // 0x2efb30: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb34: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFB34u;
    SET_GPR_U32(ctx, 31, 0x2EFB3Cu);
    ctx->pc = 0x2EFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB34u;
    // 0x2efb38: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFB34u, 0x2EFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB3Cu;
label_2efb3c:
    // 0x2efb3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb40: 0x56000039  bnel        $s0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2EFB40u;
    {
        const bool branch_taken_0x2efb40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efb40) {
            ctx->pc = 0x2EFB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB40u;
            // 0x2efb44: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFB48u;
    // 0x2efb48: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb4c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EFB4Cu;
    {
        const bool branch_taken_0x2efb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB4Cu;
        // 0x2efb50: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb4c) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFB54u;
label_2efb54:
    // 0x2efb54: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb58: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x2efb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2efb5c: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFB64u);
    ctx->pc = 0x2EFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB5Cu;
    // 0x2efb60: 0x2412001e  addiu       $s2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFB5Cu, 0x2EFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB64u;
label_2efb64:
    // 0x2efb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb68: 0x5600002f  bnel        $s0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EFB68u;
    {
        const bool branch_taken_0x2efb68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efb68) {
            ctx->pc = 0x2EFB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB68u;
            // 0x2efb6c: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFB70u;
    // 0x2efb70: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb74: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFB74u;
    SET_GPR_U32(ctx, 31, 0x2EFB7Cu);
    ctx->pc = 0x2EFB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB74u;
    // 0x2efb78: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFB74u, 0x2EFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFB7Cu;
label_2efb7c:
    // 0x2efb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efb80: 0x56000029  bnel        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EFB80u;
    {
        const bool branch_taken_0x2efb80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efb80) {
            ctx->pc = 0x2EFB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFB80u;
            // 0x2efb84: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFB88u;
    // 0x2efb88: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb8c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EFB8Cu;
    {
        const bool branch_taken_0x2efb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFB8Cu;
        // 0x2efb90: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efb8c) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFB94u;
label_2efb94:
    // 0x2efb94: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efb98: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2efb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2efb9c: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFB9Cu;
    SET_GPR_U32(ctx, 31, 0x2EFBA4u);
    ctx->pc = 0x2EFBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFB9Cu;
    // 0x2efba0: 0x2412000c  addiu       $s2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFB9Cu, 0x2EFBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBA4u;
label_2efba4:
    // 0x2efba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efba8: 0x5600001f  bnel        $s0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EFBA8u;
    {
        const bool branch_taken_0x2efba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efba8) {
            ctx->pc = 0x2EFBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFBA8u;
            // 0x2efbac: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFBB0u;
    // 0x2efbb0: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efbb4: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFBB4u;
    SET_GPR_U32(ctx, 31, 0x2EFBBCu);
    ctx->pc = 0x2EFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFBB4u;
    // 0x2efbb8: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFBB4u, 0x2EFBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFBBCu;
label_2efbbc:
    // 0x2efbbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efbc0: 0x56000019  bnel        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EFBC0u;
    {
        const bool branch_taken_0x2efbc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efbc0) {
            ctx->pc = 0x2EFBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFBC0u;
            // 0x2efbc4: 0x8e130274  lw          $s3, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC28u;
            goto label_2efc28;
        }
    }
    ctx->pc = 0x2EFBC8u;
    // 0x2efbc8: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efbcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EFBCCu;
    {
        const bool branch_taken_0x2efbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBCCu;
        // 0x2efbd0: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbcc) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFBD4u;
label_2efbd4:
    // 0x2efbd4: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efbd8: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2efbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x2efbdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EFBDCu;
    {
        const bool branch_taken_0x2efbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBDCu;
        // 0x2efbe0: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbdc) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFBE4u;
label_2efbe4:
    // 0x2efbe4: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efbe8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2efbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2efbec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFBECu;
    {
        const bool branch_taken_0x2efbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBECu;
        // 0x2efbf0: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbec) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFBF4u;
label_2efbf4:
    // 0x2efbf4: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efbf8: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x2efbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2efbfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFBFCu;
    {
        const bool branch_taken_0x2efbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBFCu;
        // 0x2efc00: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbfc) {
            ctx->pc = 0x2EFC10u;
            goto label_2efc10;
        }
    }
    ctx->pc = 0x2EFC04u;
label_2efc04:
    // 0x2efc04: 0x8e240224  lw          $a0, 0x224($s1)
    ctx->pc = 0x2efc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2efc08: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x2efc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2efc0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2efc10:
    // 0x2efc10: 0xc0ac9b2  jal         func_2B26C8
    ctx->pc = 0x2EFC10u;
    SET_GPR_U32(ctx, 31, 0x2EFC18u);
    ctx->pc = 0x2B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B26C8u, 0x2EFC10u, 0x2EFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC18u;
label_2efc18:
    // 0x2efc18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2efc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2efc1c:
    // 0x2efc1c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EFC1Cu;
    {
        const bool branch_taken_0x2efc1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC1Cu;
        // 0x2efc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc1c) {
            ctx->pc = 0x2EFC88u;
            goto label_2efc88;
        }
    }
    ctx->pc = 0x2EFC24u;
    // 0x2efc24: 0x8e130274  lw          $s3, 0x274($s0)
    ctx->pc = 0x2efc24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2efc28:
    // 0x2efc28: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2EFC28u;
    SET_GPR_U32(ctx, 31, 0x2EFC30u);
    ctx->pc = 0x2EFC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC28u;
    // 0x2efc2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2EFC28u, 0x2EFC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC30u;
label_2efc30:
    // 0x2efc30: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2efc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2efc34: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EFC34u;
    {
        const bool branch_taken_0x2efc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC34u;
        // 0x2efc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc34) {
            ctx->pc = 0x2EFC88u;
            goto label_2efc88;
        }
    }
    ctx->pc = 0x2EFC3Cu;
    // 0x2efc3c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2EFC3Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC44u);
    ctx->pc = 0x2EFC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC3Cu;
    // 0x2efc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2EFC3Cu, 0x2EFC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC44u;
label_2efc44:
    // 0x2efc44: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2EFC44u;
    {
        const bool branch_taken_0x2efc44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC44u;
        // 0x2efc48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc44) {
            ctx->pc = 0x2EFC7Cu;
            goto label_2efc7c;
        }
    }
    ctx->pc = 0x2EFC4Cu;
    // 0x2efc4c: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2efc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x2efc50: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2efc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2efc54: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x2efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x2efc58: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2efc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2efc5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC5Cu;
    {
        const bool branch_taken_0x2efc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC5Cu;
        // 0x2efc60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc5c) {
            ctx->pc = 0x2EFC70u;
            goto label_2efc70;
        }
    }
    ctx->pc = 0x2EFC64u;
    // 0x2efc64: 0xc0f753e  jal         func_3DD4F8
    ctx->pc = 0x2EFC64u;
    SET_GPR_U32(ctx, 31, 0x2EFC6Cu);
    ctx->pc = 0x3DD4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD4F8u, 0x2EFC64u, 0x2EFC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC6Cu;
label_2efc6c:
    // 0x2efc6c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2efc6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2efc70:
    // 0x2efc70: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFC70u;
    {
        const bool branch_taken_0x2efc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efc70) {
            ctx->pc = 0x2EFC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EFC70u;
            // 0x2efc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFC88u;
            goto label_2efc88;
        }
    }
    ctx->pc = 0x2EFC78u;
    // 0x2efc78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2efc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2efc7c:
    // 0x2efc7c: 0xc0d90e0  jal         func_364380
    ctx->pc = 0x2EFC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC84u);
    ctx->pc = 0x2EFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC7Cu;
    // 0x2efc80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364380u, 0x2EFC7Cu, 0x2EFC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC84u;
label_2efc84:
    // 0x2efc84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2efc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2efc88:
    // 0x2efc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efc8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efc90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2efc90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efc94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2efc94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2efc98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2efc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2efc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC9Cu;
        // 0x2efca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFCA4u;
    // 0x2efca4: 0x0  nop
    ctx->pc = 0x2efca4u;
    // NOP
    ctx->pc = 0x2efca8u;
}
