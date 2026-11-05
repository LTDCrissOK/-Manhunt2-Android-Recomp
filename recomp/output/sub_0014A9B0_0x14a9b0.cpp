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

// Function: sub_0014A9B0
// Address: 0x14a9b0 - 0x14ab40
void sub_0014A9B0_0x14a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A9B0_0x14a9b0");
#endif

    switch (ctx->pc) {
        case 0x14a9b0u: goto label_14a9b0;
        case 0x14a9b4u: goto label_14a9b4;
        case 0x14a9b8u: goto label_14a9b8;
        case 0x14a9bcu: goto label_14a9bc;
        case 0x14a9c0u: goto label_14a9c0;
        case 0x14a9c4u: goto label_14a9c4;
        case 0x14a9c8u: goto label_14a9c8;
        case 0x14a9ccu: goto label_14a9cc;
        case 0x14a9d0u: goto label_14a9d0;
        case 0x14a9d4u: goto label_14a9d4;
        case 0x14a9d8u: goto label_14a9d8;
        case 0x14a9dcu: goto label_14a9dc;
        case 0x14a9e0u: goto label_14a9e0;
        case 0x14a9e4u: goto label_14a9e4;
        case 0x14a9e8u: goto label_14a9e8;
        case 0x14a9ecu: goto label_14a9ec;
        case 0x14a9f0u: goto label_14a9f0;
        case 0x14a9f4u: goto label_14a9f4;
        case 0x14a9f8u: goto label_14a9f8;
        case 0x14a9fcu: goto label_14a9fc;
        case 0x14aa00u: goto label_14aa00;
        case 0x14aa04u: goto label_14aa04;
        case 0x14aa08u: goto label_14aa08;
        case 0x14aa0cu: goto label_14aa0c;
        case 0x14aa10u: goto label_14aa10;
        case 0x14aa14u: goto label_14aa14;
        case 0x14aa18u: goto label_14aa18;
        case 0x14aa1cu: goto label_14aa1c;
        case 0x14aa20u: goto label_14aa20;
        case 0x14aa24u: goto label_14aa24;
        case 0x14aa28u: goto label_14aa28;
        case 0x14aa2cu: goto label_14aa2c;
        case 0x14aa30u: goto label_14aa30;
        case 0x14aa34u: goto label_14aa34;
        case 0x14aa38u: goto label_14aa38;
        case 0x14aa3cu: goto label_14aa3c;
        case 0x14aa40u: goto label_14aa40;
        case 0x14aa44u: goto label_14aa44;
        case 0x14aa48u: goto label_14aa48;
        case 0x14aa4cu: goto label_14aa4c;
        case 0x14aa50u: goto label_14aa50;
        case 0x14aa54u: goto label_14aa54;
        case 0x14aa58u: goto label_14aa58;
        case 0x14aa5cu: goto label_14aa5c;
        case 0x14aa60u: goto label_14aa60;
        case 0x14aa64u: goto label_14aa64;
        case 0x14aa68u: goto label_14aa68;
        case 0x14aa6cu: goto label_14aa6c;
        case 0x14aa70u: goto label_14aa70;
        case 0x14aa74u: goto label_14aa74;
        case 0x14aa78u: goto label_14aa78;
        case 0x14aa7cu: goto label_14aa7c;
        case 0x14aa80u: goto label_14aa80;
        case 0x14aa84u: goto label_14aa84;
        case 0x14aa88u: goto label_14aa88;
        case 0x14aa8cu: goto label_14aa8c;
        case 0x14aa90u: goto label_14aa90;
        case 0x14aa94u: goto label_14aa94;
        case 0x14aa98u: goto label_14aa98;
        case 0x14aa9cu: goto label_14aa9c;
        case 0x14aaa0u: goto label_14aaa0;
        case 0x14aaa4u: goto label_14aaa4;
        case 0x14aaa8u: goto label_14aaa8;
        case 0x14aaacu: goto label_14aaac;
        case 0x14aab0u: goto label_14aab0;
        case 0x14aab4u: goto label_14aab4;
        case 0x14aab8u: goto label_14aab8;
        case 0x14aabcu: goto label_14aabc;
        case 0x14aac0u: goto label_14aac0;
        case 0x14aac4u: goto label_14aac4;
        case 0x14aac8u: goto label_14aac8;
        case 0x14aaccu: goto label_14aacc;
        case 0x14aad0u: goto label_14aad0;
        case 0x14aad4u: goto label_14aad4;
        case 0x14aad8u: goto label_14aad8;
        case 0x14aadcu: goto label_14aadc;
        case 0x14aae0u: goto label_14aae0;
        case 0x14aae4u: goto label_14aae4;
        case 0x14aae8u: goto label_14aae8;
        case 0x14aaecu: goto label_14aaec;
        case 0x14aaf0u: goto label_14aaf0;
        case 0x14aaf4u: goto label_14aaf4;
        case 0x14aaf8u: goto label_14aaf8;
        case 0x14aafcu: goto label_14aafc;
        case 0x14ab00u: goto label_14ab00;
        case 0x14ab04u: goto label_14ab04;
        case 0x14ab08u: goto label_14ab08;
        case 0x14ab0cu: goto label_14ab0c;
        case 0x14ab10u: goto label_14ab10;
        case 0x14ab14u: goto label_14ab14;
        case 0x14ab18u: goto label_14ab18;
        case 0x14ab1cu: goto label_14ab1c;
        case 0x14ab20u: goto label_14ab20;
        case 0x14ab24u: goto label_14ab24;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab2cu: goto label_14ab2c;
        case 0x14ab30u: goto label_14ab30;
        case 0x14ab34u: goto label_14ab34;
        case 0x14ab38u: goto label_14ab38;
        case 0x14ab3cu: goto label_14ab3c;
        default: break;
    }

    ctx->pc = 0x14a9b0u;

label_14a9b0:
    // 0x14a9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14a9b4:
    // 0x14a9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14a9b8:
    // 0x14a9b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14a9bc:
    // 0x14a9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14a9c0:
    // 0x14a9c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_14a9c4:
    // 0x14a9c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_14a9c8:
    // 0x14a9c8: 0xc04d8dc  jal         func_136370
label_14a9cc:
    if (ctx->pc == 0x14A9CCu) {
        ctx->pc = 0x14A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9C8u;
        // 0x14a9cc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9D0u;
        goto label_14a9d0;
    }
    ctx->pc = 0x14A9C8u;
    SET_GPR_U32(ctx, 31, 0x14A9D0u);
    ctx->pc = 0x14A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9C8u;
    // 0x14a9cc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14A9C8u, 0x14A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9D0u;
label_14a9d0:
    // 0x14a9d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a9d4:
    // 0x14a9d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14a9d8:
    // 0x14a9d8: 0x56220053  bnel        $s1, $v0, . + 4 + (0x53 << 2)
label_14a9dc:
    if (ctx->pc == 0x14A9DCu) {
        ctx->pc = 0x14A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D8u;
        // 0x14a9dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9E0u;
        goto label_14a9e0;
    }
    ctx->pc = 0x14A9D8u;
    {
        const bool branch_taken_0x14a9d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a9d8) {
            ctx->pc = 0x14A9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9D8u;
            // 0x14a9dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AB28u;
            goto label_14ab28;
        }
    }
    ctx->pc = 0x14A9E0u;
label_14a9e0:
    // 0x14a9e0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a9e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a9e4:
    // 0x14a9e4: 0xc052ae4  jal         func_14AB90
label_14a9e8:
    if (ctx->pc == 0x14A9E8u) {
        ctx->pc = 0x14A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9E4u;
        // 0x14a9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9ECu;
        goto label_14a9ec;
    }
    ctx->pc = 0x14A9E4u;
    SET_GPR_U32(ctx, 31, 0x14A9ECu);
    ctx->pc = 0x14A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9E4u;
    // 0x14a9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14A9E4u, 0x14A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9ECu;
label_14a9ec:
    // 0x14a9ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a9ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a9f0:
    // 0x14a9f0: 0x12510014  beq         $s2, $s1, . + 4 + (0x14 << 2)
label_14a9f4:
    if (ctx->pc == 0x14A9F4u) {
        ctx->pc = 0x14A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F0u;
        // 0x14a9f4: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A9F8u;
        goto label_14a9f8;
    }
    ctx->pc = 0x14A9F0u;
    {
        const bool branch_taken_0x14a9f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x14A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F0u;
        // 0x14a9f4: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f0) {
            ctx->pc = 0x14AA44u;
            goto label_14aa44;
        }
    }
    ctx->pc = 0x14A9F8u;
label_14a9f8:
    // 0x14a9f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14a9fc:
    if (ctx->pc == 0x14A9FCu) {
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA00u;
        goto label_14aa00;
    }
    ctx->pc = 0x14A9F8u;
    {
        const bool branch_taken_0x14a9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9F8u;
        // 0x14a9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9f8) {
            ctx->pc = 0x14AA10u;
            goto label_14aa10;
        }
    }
    ctx->pc = 0x14AA00u;
label_14aa00:
    // 0x14aa00: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
label_14aa04:
    if (ctx->pc == 0x14AA04u) {
        ctx->pc = 0x14AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA00u;
        // 0x14aa04: 0x8e020584  lw          $v0, 0x584($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA08u;
        goto label_14aa08;
    }
    ctx->pc = 0x14AA00u;
    {
        const bool branch_taken_0x14aa00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa00) {
            ctx->pc = 0x14AA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA00u;
            // 0x14aa04: 0x8e020584  lw          $v0, 0x584($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA24u;
            goto label_14aa24;
        }
    }
    ctx->pc = 0x14AA08u;
label_14aa08:
    // 0x14aa08: 0x10000030  b           . + 4 + (0x30 << 2)
label_14aa0c:
    if (ctx->pc == 0x14AA0Cu) {
        ctx->pc = 0x14AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA08u;
        // 0x14aa0c: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA10u;
        goto label_14aa10;
    }
    ctx->pc = 0x14AA08u;
    {
        const bool branch_taken_0x14aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA08u;
        // 0x14aa0c: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa08) {
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AA10u;
label_14aa10:
    // 0x14aa10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14aa14:
    // 0x14aa14: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
label_14aa18:
    if (ctx->pc == 0x14AA18u) {
        ctx->pc = 0x14AA1Cu;
        goto label_14aa1c;
    }
    ctx->pc = 0x14AA14u;
    {
        const bool branch_taken_0x14aa14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14aa14) {
            ctx->pc = 0x14AA9Cu;
            goto label_14aa9c;
        }
    }
    ctx->pc = 0x14AA1Cu;
label_14aa1c:
    // 0x14aa1c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_14aa20:
    if (ctx->pc == 0x14AA20u) {
        ctx->pc = 0x14AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA1Cu;
        // 0x14aa20: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA24u;
        goto label_14aa24;
    }
    ctx->pc = 0x14AA1Cu;
    {
        const bool branch_taken_0x14aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA1Cu;
        // 0x14aa20: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa1c) {
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AA24u;
label_14aa24:
    // 0x14aa24: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_14aa28:
    if (ctx->pc == 0x14AA28u) {
        ctx->pc = 0x14AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA24u;
        // 0x14aa28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA2Cu;
        goto label_14aa2c;
    }
    ctx->pc = 0x14AA24u;
    {
        const bool branch_taken_0x14aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA24u;
        // 0x14aa28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa24) {
            ctx->pc = 0x14AAC8u;
            goto label_14aac8;
        }
    }
    ctx->pc = 0x14AA2Cu;
label_14aa2c:
    // 0x14aa2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14aa30:
    // 0x14aa30: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_14aa34:
    // 0x14aa34: 0x40f809  jalr        $v0
label_14aa38:
    if (ctx->pc == 0x14AA38u) {
        ctx->pc = 0x14AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA34u;
        // 0x14aa38: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA3Cu;
        goto label_14aa3c;
    }
    ctx->pc = 0x14AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14AA3Cu);
        ctx->pc = 0x14AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA34u;
        // 0x14aa38: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AA34u, 0x14AA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14AA3Cu;
label_14aa3c:
    // 0x14aa3c: 0x10000023  b           . + 4 + (0x23 << 2)
label_14aa40:
    if (ctx->pc == 0x14AA40u) {
        ctx->pc = 0x14AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA3Cu;
        // 0x14aa40: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA44u;
        goto label_14aa44;
    }
    ctx->pc = 0x14AA3Cu;
    {
        const bool branch_taken_0x14aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA3Cu;
        // 0x14aa40: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa3c) {
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AA44u;
label_14aa44:
    // 0x14aa44: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14aa44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14aa48:
    // 0x14aa48: 0xc052d22  jal         func_14B488
label_14aa4c:
    if (ctx->pc == 0x14AA4Cu) {
        ctx->pc = 0x14AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA48u;
        // 0x14aa4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA50u;
        goto label_14aa50;
    }
    ctx->pc = 0x14AA48u;
    SET_GPR_U32(ctx, 31, 0x14AA50u);
    ctx->pc = 0x14AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA48u;
    // 0x14aa4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B488u, 0x14AA48u, 0x14AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA50u;
label_14aa50:
    // 0x14aa50: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14aa50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14aa54:
    // 0x14aa54: 0xc052ce6  jal         func_14B398
label_14aa58:
    if (ctx->pc == 0x14AA58u) {
        ctx->pc = 0x14AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA54u;
        // 0x14aa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA5Cu;
        goto label_14aa5c;
    }
    ctx->pc = 0x14AA54u;
    SET_GPR_U32(ctx, 31, 0x14AA5Cu);
    ctx->pc = 0x14AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA54u;
    // 0x14aa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B398u, 0x14AA54u, 0x14AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA5Cu;
label_14aa5c:
    // 0x14aa5c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14aa5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14aa60:
    // 0x14aa60: 0xc052d36  jal         func_14B4D8
label_14aa64:
    if (ctx->pc == 0x14AA64u) {
        ctx->pc = 0x14AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA60u;
        // 0x14aa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA68u;
        goto label_14aa68;
    }
    ctx->pc = 0x14AA60u;
    SET_GPR_U32(ctx, 31, 0x14AA68u);
    ctx->pc = 0x14AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA60u;
    // 0x14aa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4D8u, 0x14AA60u, 0x14AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA68u;
label_14aa68:
    // 0x14aa68: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_14aa6c:
    if (ctx->pc == 0x14AA6Cu) {
        ctx->pc = 0x14AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA68u;
        // 0x14aa6c: 0x8e020590  lw          $v0, 0x590($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA70u;
        goto label_14aa70;
    }
    ctx->pc = 0x14AA68u;
    {
        const bool branch_taken_0x14aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa68) {
            ctx->pc = 0x14AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA68u;
            // 0x14aa6c: 0x8e020590  lw          $v0, 0x590($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA84u;
            goto label_14aa84;
        }
    }
    ctx->pc = 0x14AA70u;
label_14aa70:
    // 0x14aa70: 0xc052bf0  jal         func_14AFC0
label_14aa74:
    if (ctx->pc == 0x14AA74u) {
        ctx->pc = 0x14AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA70u;
        // 0x14aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA78u;
        goto label_14aa78;
    }
    ctx->pc = 0x14AA70u;
    SET_GPR_U32(ctx, 31, 0x14AA78u);
    ctx->pc = 0x14AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA70u;
    // 0x14aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFC0u, 0x14AA70u, 0x14AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA78u;
label_14aa78:
    // 0x14aa78: 0xc052c42  jal         func_14B108
label_14aa7c:
    if (ctx->pc == 0x14AA7Cu) {
        ctx->pc = 0x14AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA78u;
        // 0x14aa7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA80u;
        goto label_14aa80;
    }
    ctx->pc = 0x14AA78u;
    SET_GPR_U32(ctx, 31, 0x14AA80u);
    ctx->pc = 0x14AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA78u;
    // 0x14aa7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B108u, 0x14AA78u, 0x14AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA80u;
label_14aa80:
    // 0x14aa80: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x14aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
label_14aa84:
    // 0x14aa84: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_14aa88:
    if (ctx->pc == 0x14AA88u) {
        ctx->pc = 0x14AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA84u;
        // 0x14aa88: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA8Cu;
        goto label_14aa8c;
    }
    ctx->pc = 0x14AA84u;
    {
        const bool branch_taken_0x14aa84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa84) {
            ctx->pc = 0x14AA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AA84u;
            // 0x14aa88: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AA8Cu;
label_14aa8c:
    // 0x14aa8c: 0xc052bf0  jal         func_14AFC0
label_14aa90:
    if (ctx->pc == 0x14AA90u) {
        ctx->pc = 0x14AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA8Cu;
        // 0x14aa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA94u;
        goto label_14aa94;
    }
    ctx->pc = 0x14AA8Cu;
    SET_GPR_U32(ctx, 31, 0x14AA94u);
    ctx->pc = 0x14AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA8Cu;
    // 0x14aa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFC0u, 0x14AA8Cu, 0x14AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA94u;
label_14aa94:
    // 0x14aa94: 0x1000000d  b           . + 4 + (0xD << 2)
label_14aa98:
    if (ctx->pc == 0x14AA98u) {
        ctx->pc = 0x14AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA94u;
        // 0x14aa98: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AA9Cu;
        goto label_14aa9c;
    }
    ctx->pc = 0x14AA94u;
    {
        const bool branch_taken_0x14aa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA94u;
        // 0x14aa98: 0x9203046c  lbu         $v1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aa94) {
            ctx->pc = 0x14AACCu;
            goto label_14aacc;
        }
    }
    ctx->pc = 0x14AA9Cu;
label_14aa9c:
    // 0x14aa9c: 0xc052cfe  jal         func_14B3F8
label_14aaa0:
    if (ctx->pc == 0x14AAA0u) {
        ctx->pc = 0x14AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AA9Cu;
        // 0x14aaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAA4u;
        goto label_14aaa4;
    }
    ctx->pc = 0x14AA9Cu;
    SET_GPR_U32(ctx, 31, 0x14AAA4u);
    ctx->pc = 0x14AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA9Cu;
    // 0x14aaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3F8u, 0x14AA9Cu, 0x14AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAA4u;
label_14aaa4:
    // 0x14aaa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14aaa8:
    if (ctx->pc == 0x14AAA8u) {
        ctx->pc = 0x14AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAA4u;
        // 0x14aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAACu;
        goto label_14aaac;
    }
    ctx->pc = 0x14AAA4u;
    {
        const bool branch_taken_0x14aaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAA4u;
        // 0x14aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaa4) {
            ctx->pc = 0x14AAC8u;
            goto label_14aac8;
        }
    }
    ctx->pc = 0x14AAACu;
label_14aaac:
    // 0x14aaac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14aab0:
    // 0x14aab0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_14aab4:
    // 0x14aab4: 0x40f809  jalr        $v0
label_14aab8:
    if (ctx->pc == 0x14AAB8u) {
        ctx->pc = 0x14AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAB4u;
        // 0x14aab8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AABCu;
        goto label_14aabc;
    }
    ctx->pc = 0x14AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14AABCu);
        ctx->pc = 0x14AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAB4u;
        // 0x14aab8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AAB4u, 0x14AABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14AABCu;
label_14aabc:
    // 0x14aabc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14aabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14aac0:
    // 0x14aac0: 0xc052d62  jal         func_14B588
label_14aac4:
    if (ctx->pc == 0x14AAC4u) {
        ctx->pc = 0x14AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAC0u;
        // 0x14aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAC8u;
        goto label_14aac8;
    }
    ctx->pc = 0x14AAC0u;
    SET_GPR_U32(ctx, 31, 0x14AAC8u);
    ctx->pc = 0x14AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAC0u;
    // 0x14aac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B588u, 0x14AAC0u, 0x14AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAC8u;
label_14aac8:
    // 0x14aac8: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x14aac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14aacc:
    // 0x14aacc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_14aad0:
    // 0x14aad0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x14aad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14aad4:
    // 0x14aad4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_14aad8:
    // 0x14aad8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_14aadc:
    // 0x14aadc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_14aae0:
    // 0x14aae0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14aae4:
    // 0x14aae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14aae8:
    // 0x14aae8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14aaec:
    // 0x14aaec: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x14aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_14aaf0:
    // 0x14aaf0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_14aaf4:
    if (ctx->pc == 0x14AAF4u) {
        ctx->pc = 0x14AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAF0u;
        // 0x14aaf4: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AAF8u;
        goto label_14aaf8;
    }
    ctx->pc = 0x14AAF0u;
    {
        const bool branch_taken_0x14aaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAF0u;
        // 0x14aaf4: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaf0) {
            ctx->pc = 0x14AB24u;
            goto label_14ab24;
        }
    }
    ctx->pc = 0x14AAF8u;
label_14aaf8:
    // 0x14aaf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14aafc:
    if (ctx->pc == 0x14AAFCu) {
        ctx->pc = 0x14AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAF8u;
        // 0x14aafc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AB00u;
        goto label_14ab00;
    }
    ctx->pc = 0x14AAF8u;
    {
        const bool branch_taken_0x14aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAF8u;
        // 0x14aafc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aaf8) {
            ctx->pc = 0x14AB1Cu;
            goto label_14ab1c;
        }
    }
    ctx->pc = 0x14AB00u;
label_14ab00:
    // 0x14ab00: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_14ab04:
    if (ctx->pc == 0x14AB04u) {
        ctx->pc = 0x14AB08u;
        goto label_14ab08;
    }
    ctx->pc = 0x14AB00u;
    {
        const bool branch_taken_0x14ab00 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x14ab00) {
            ctx->pc = 0x14AB1Cu;
            goto label_14ab1c;
        }
    }
    ctx->pc = 0x14AB08u;
label_14ab08:
    // 0x14ab08: 0x8e020580  lw          $v0, 0x580($s0)
    ctx->pc = 0x14ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_14ab0c:
    // 0x14ab0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_14ab10:
    if (ctx->pc == 0x14AB10u) {
        ctx->pc = 0x14AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB0Cu;
        // 0x14ab10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AB14u;
        goto label_14ab14;
    }
    ctx->pc = 0x14AB0Cu;
    {
        const bool branch_taken_0x14ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB0Cu;
        // 0x14ab10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab0c) {
            ctx->pc = 0x14AB1Cu;
            goto label_14ab1c;
        }
    }
    ctx->pc = 0x14AB14u;
label_14ab14:
    // 0x14ab14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ab18:
    // 0x14ab18: 0xac620254  sw          $v0, 0x254($v1)
    ctx->pc = 0x14ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 2));
label_14ab1c:
    // 0x14ab1c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_14ab20:
    if (ctx->pc == 0x14AB20u) {
        ctx->pc = 0x14AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB1Cu;
        // 0x14ab20: 0xac600254  sw          $zero, 0x254($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AB24u;
        goto label_14ab24;
    }
    ctx->pc = 0x14AB1Cu;
    {
        const bool branch_taken_0x14ab1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ab1c) {
            ctx->pc = 0x14AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AB1Cu;
            // 0x14ab20: 0xac600254  sw          $zero, 0x254($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 596), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AB24u;
            goto label_14ab24;
        }
    }
    ctx->pc = 0x14AB24u;
label_14ab24:
    // 0x14ab24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ab24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ab28:
    // 0x14ab28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ab28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14ab2c:
    // 0x14ab2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ab2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14ab30:
    // 0x14ab30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_14ab34:
    // 0x14ab34: 0x3e00008  jr          $ra
label_14ab38:
    if (ctx->pc == 0x14AB38u) {
        ctx->pc = 0x14AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB34u;
        // 0x14ab38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AB3Cu;
        goto label_14ab3c;
    }
    ctx->pc = 0x14AB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB34u;
        // 0x14ab38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AB3Cu;
label_14ab3c:
    // 0x14ab3c: 0x0  nop
    ctx->pc = 0x14ab3cu;
    // NOP
    ctx->pc = 0x14ab40u;
}
